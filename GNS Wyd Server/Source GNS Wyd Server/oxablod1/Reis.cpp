#include "stdafx.h"

void ArchRei(int clientid,int npcid)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	{
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	MOB *npc = (MOB*)GetMobFromIndex(npcid);
	int itenslot1 = GetFirstSlotSADD(clientid,4131,64);
	int itenslot2 = GetFirstSlotSADD(clientid,5335,64);
	int itenslot3 = GetFirstSlotSADD(clientid,5336,64);
	int itenslot4 = GetFirstSlotSADD(clientid,5337,64);
	int itenslot5 = GetFirstSlotSADD(clientid,5334,64);
	char tmp[1024];
	if(npc->Equip[15].Index == 734)
	{
		SendSay(npcid,"Reino de Hekalotia");
		SendSay(npcid,"Nosso Reino tem travado uma batalha com o Reino de Akelonia");
		SendSay(npcid,"Que ja dura Sêculos,Nos precisamos de Bravos guerreiros");
		sprintf(tmp,"E voce %s de que lado está ?",thisclient->Name,thisclient);
	    SendSay(npcid,tmp);
		if(player->Equip[0].EFV2 == 1 && player->bStatus.Level >= 399)
		{
			Arch(clientid,npcid);
		}
		else if(player->Equip[0].EFV2 == 1 && player->Equip[13].Index == 4081 && player->bStatus.Level >= 220 && player->bStatus.Level <= 255 && player->Equip[15].Index != 545)
		{
				player->Equip[13].Index = 0;
				player->Equip[15].Index = 545;
				SendItens(clientid,13);
				SendItens(clientid,15);
				SendClientMsg(clientid,"Seja bem vindo ao Reino de Hekalotia.");
				return;
		}
		else if (player->bStatus.Level >= 220 && player->Equip[15].Index != 545 && player->Equip[15].Index != 543 && player->Equip[0].EFV2 >= 1 && player->Equip[0].EFV2 <= 2)
		{
			if(itenslot1 != -1)
			{
				player->Equip[15].Index = 545;
				GetCurrentScore(clientid);
				SendStats(clientid);
				SendScore(clientid);
				SendItens(clientid,15);
				player->Inventory[itenslot1].Index = 0;
				SendALL(clientid);
				SendClientMsg(clientid,"Seja bem vindo ao Reino de Hekalotia.");
				return;
			}
			else
			{
				SendClientMsg(clientid,"É necessário um Pacote de Safiras(10).");
				return;
			}
		}
		else if (player->bStatus.Level >= 255 && player->Equip[15].Index == 545 && player->Equip[0].EFV2 >= 1 && player->Equip[0].EFV2 <= 2)
		{
			if(itenslot1 != -1)
			{
				player->Equip[15].Index = 543;
				GetCurrentScore(clientid);
				SendStats(clientid);
				SendScore(clientid);
			    SendItens(clientid,15);
				player->Inventory[itenslot1].Index = 0;
				SendALL(clientid);
				SendClientMsg(clientid,"Que a luz de sephira esteja com você !.");
				return;
			}
			else
			{
				SendClientMsg(clientid,"É necessário um Pacote de Safiras(10).");
				return;
			}
		}
	}
	else if(npc->Equip[15].Index == 735)
	{
		SendSay(npcid,"Reino de Akelonia");
		SendSay(npcid,"Nosso Reino tem travado uma batalha com o Reino de Hekalotia");
		SendSay(npcid,"Que ja dura Sêculos,Nos precisamos de Bravos guerreiros");
		sprintf(tmp,"E voce %s de que lado está ?",thisclient->Name,thisclient);
		if(player->Equip[0].EFV2 == 1 && player->bStatus.Level >= 399)
		{
			Arch(clientid,npcid);
		}
		else if(player->Equip[0].EFV2 == 1 && player->Equip[13].Index == 4081 && player->bStatus.Level >= 220 && player->bStatus.Level <= 255 && player->Equip[15].Index != 546)
		{
				player->Equip[13].Index = 0;
				player->Equip[15].Index = 546;
				SendItens(clientid,13);
				SendItens(clientid,15);
				SendClientMsg(clientid,"Seja bem vindo ao Reino de Akelonia.");
				return;
		}
		else if (player->bStatus.Level >= 220 && player->Equip[15].Index != 546 && player->Equip[15].Index != 544 && player->Equip[0].EFV2 >= 1 && player->Equip[0].EFV2 <= 2)
		{
			if(itenslot1 != -1)
			{
				player->Equip[15].Index = 546;
				GetCurrentScore(clientid);
				SendStats(clientid);
				SendScore(clientid);
				SendItens(clientid,15);
				player->Inventory[itenslot1].Index = 0;
				SendALL(clientid);
				SendClientMsg(clientid,"Seja bem vindo ao Reino de Akelonia.");
				return;
			}
			else
			{
				SendClientMsg(clientid,"É necessário um Pacote de Safiras(10).");
				return;
			}
		}
		else if (player->bStatus.Level >= 255 && player->Equip[15].Index == 546 && player->Equip[15].Index != 544 && player->Equip[0].EFV2 >= 1 && player->Equip[0].EFV2 <= 2)
		{
			if(itenslot1 != -1)
			{
				player->Equip[15].Index = 544;
				GetCurrentScore(clientid);
				SendStats(clientid);
				SendScore(clientid);
			    SendItens(clientid,15);
				player->Inventory[itenslot1].Index = 0;
				SendALL(clientid);
				SendClientMsg(clientid,"Que a luz de sephira esteja com você !.");
				return;
			}
			else
			{
				SendClientMsg(clientid,"É necessário um Pacote de Safiras(10).");
				return;
			}}}}}
