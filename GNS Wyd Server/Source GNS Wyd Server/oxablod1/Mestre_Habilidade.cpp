#include "stdafx.h"

void MestreHabilidade(int clientid,int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	if(player->Equip[1].Index == 0 && player->Equip[2].Index == 0 && player->Equip[3].Index == 0 && player->Equip[4].Index == 0 && player->Equip[5].Index == 0 && player->Equip[6].Index == 0 && player->Equip[7].Index == 0)
	{
		if(player->Gold >= 2500000)
		{
		player->StatusPoint += player->bStatus.STR + player->bStatus.INT + player->bStatus.DEX + player->bStatus.CON;
		player->bStatus.STR = 0;
		player->bStatus.INT = 0;
		player->bStatus.DEX = 0;
		player->bStatus.CON = 0;
		player->Gold -= 2500000;
		SendClientMsg(clientid,"Pontos Resetados!");
		SendCharList(clientid);
		return;
		}
		else
		{
		SendSay(npcid,"Para resetar, são necessários 25KK");
		return;
		}
	}
	else
	{
		SendSay(npcid,"Desequipe seus itens");
		return;
	}
	return;
}