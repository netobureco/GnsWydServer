#include "Stdafx.h"
#include <stdio.h>

void FixSend39E_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer)
{
	*(DWORD*)&m_PacketBuffer[48] = *(DWORD*)&packetBuffer[44];
	*(DWORD*)&m_PacketBuffer[44] = *(DWORD*)&packetBuffer[40];
	*(DWORD*)&m_PacketBuffer[40]=0x0;
}
void FixSend39E_CLIENT(BYTE *m_PacketBuffer, BYTE *packetBuffer)
{
	*(DWORD*)&m_PacketBuffer[40] = *(DWORD*)&packetBuffer[44];
	*(DWORD*)&m_PacketBuffer[44] = *(DWORD*)&packetBuffer[48];
	*(DWORD*)&m_PacketBuffer[48]= 0x0;

}
void FixSendAffect_CLIENT(BYTE *m_PacketBuffer, BYTE *packetBuffer) // 6.13
{
	*(DWORD*)&m_PacketBuffer[40] = *(DWORD*)&m_PacketBuffer[44];
	*(DWORD*)&m_PacketBuffer[44] = 0x0;
	
	p613_SendAffect *p613 = (p613_SendAffect*)m_PacketBuffer;
	p754_GetAffect pack_3B9 = *(p754_GetAffect*)malloc(sizeof(p754_GetAffect));
	p_Affect *aff = (p_Affect*)m_PacketBuffer;
	st_Mob *sender = (st_Mob*)GetMobFromIndex(p613->ClientID);
	st_Mob *affected = (st_Mob*)GetMobFromIndex(p613->AffectedMobId);
	SendAffects(p613->Header.ClientID);
	}
	
		
	
void FixSendAffect_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer)
{
*(DWORD*)&m_PacketBuffer[44] = *(DWORD*)&packetBuffer[40];
	*(DWORD*)&m_PacketBuffer[40] = 0x0;
}
void FixSendMyAffect(BYTE *m_PacketBuffer,BYTE *packetBuffer,int ClientId)
{

	st_Mob *thisMob = (st_Mob*)GetMobFromIndex(ClientId);

	for(int kp = 0; kp <= 16; kp++)
	{
		st_Item *item = &thisMob->Equip[kp];
		*(short*)&m_PacketBuffer[12 + (kp*2)] = (short)GetItemIDAndEffect(item, kp);
		*(char*)&m_PacketBuffer[44 + kp] = (char)GetAnctCode(item);
	}
}
void SendAffects(int clientId) // 7.54
{
	if(clientId > PLAYER)
		return;

	p754_GetAffect pack_3B9 = *(p754_GetAffect*)malloc(sizeof(p754_GetAffect)); 

	pack_3B9.Header.PacketId = 0x3B9;
	pack_3B9.Header.Size = 140;
	pack_3B9.Header.ClientID = clientId;
	int addr_base = clientId * 0x0410;

	st_Mob_754 *_mob = (st_Mob_754*)GetMobFromIndex(clientId);

	for(short i = 0; i < 16 && _mob != NULL; i++)
	{
		if(mobaffectbuffer[clientId].Affects[i].Time != 0)
		{
			pack_3B9.Affect[i + 1].Index = (BYTE)mobaffectbuffer[clientId].Affects[i].Index;
			pack_3B9.Affect[i + 1].Master = (BYTE)mobaffectbuffer[clientId].Affects[i].Master;
			pack_3B9.Affect[i + 1].Value = mobaffectbuffer[clientId].Affects[i].Value;
			pack_3B9.Affect[i + 1].Time = mobaffectbuffer[clientId].Affects[i].Time;
		}
		
	}
	

	//AddMessage((BYTE*)&pack_3B9, clientId);
	AddMessage(clientId, (char*)&pack_3B9, 128);

	return;
}
