#include "Stdafx.h"


void criticalHack(int ClientID, BYTE *packetBuffer)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	Packt_Atack *a = (Packt_Atack*)packetBuffer;
	int num1 = rand() % 100;
	
	if(a->SkillIndex == -1 || a->SkillIndex >= 151 && a->SkillIndex <= 153)
	{
		if(SkillHack(ClientID,*(short*)&packetBuffer[24]) == FALSE)
		{
			//printf(" %d \n \n \n",p->SkillIndex);
			ZeroMemory((short*)packetBuffer,*(short*)packetBuffer);
		}
		if(num1 <= 20)
		{
		a->AttackCount = 256;
		}else{
		a->AttackCount = 0;
		}
		
	}

}

void HangerHack(int ClientID, char *Data)
{
	SendAffect *p = (SendAffect*)Data;

	MOB *sender = (MOB*)GetMobFromIndex(p->ClientId);
	MOB *affected = (MOB*)GetMobFromIndex(p->AffectedMobId);
	int range;
	range = GetDistance(affected->dstX, affected->dstY, sender->dstX, sender->dstY);
	printf("\n\nRange: %d\n\n", range);

	if(range < 7 || range > 2000)
	{
		return;
	}
	else
	{
		ZeroMemory((short*)Data,*(short*)Data);
	}

	return;


}

void MoveHack(unsigned char* szBuffer)
{
	MOB *player = (MOB*)GetMobFromIndex(*(short*)&szBuffer[6]);
	int result1 = player->dstX - *(short*)&szBuffer[24];
	int result2 = player->dstY - *(short*)&szBuffer[26];
	if(result1 >= 33)
	{
		player->srcX = *(short*)&szBuffer[24];
		player->srcY = *(short*)&szBuffer[26];
		return;
	}
	if(result2 >= 29)
	{
		player->srcX = *(short*)&szBuffer[24];
		player->srcY = *(short*)&szBuffer[26];
		return;
	}
}
