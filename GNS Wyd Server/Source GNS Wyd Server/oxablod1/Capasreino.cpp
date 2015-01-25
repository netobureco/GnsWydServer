
#include "stdafx.h"
/*
void Capas(int ClientID,int npcid)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	MOB *npc = (MOB*)GetMobFromIndex(npcid);
	int safiras = GetFirstSlotSADD(ClientID,4131,64);
	int itenslot2 = GetFirstSlotSADD(ClientID,5335,64);
	int itenslot3 = GetFirstSlotSADD(ClientID,5336,64);
	int itenslot4 = GetFirstSlotSADD(ClientID,5337,64);
	int itenslot5 = GetFirstSlotSADD(ClientID,5334,64);
	char tmp[1024];
	if(npc->Equip[15].Index == 734) // REI BLUE
	{
		if(player->Equip[0].EFV2 == 1) // mortais
		{

		if(player->Equip[10].Index == 1742 && player->Equip[11].Index >= 1760 && player->Equip[11].Index <= 1763)
		{
			Arch(ClientID,npcid);
			return;
		}

		if(player->bStatus.Level >= 220 && player->bStatus.Level <= 254) // capa normal
		{
			if(player->Equip[13].Index == 4081)
			{
				player->Equip[13].Index = 0;
				player->Equip[15].Index = 545;
				SendItens(ClientID,13);
				SendItens(ClientID,15);
				SendClientMsg(ClientID,"Bem vindo ao Reino de Hekalotia.");
				return;
			}
			else
			SendSay(npcid,"Traga-me o Emblema_do_Reino");
			return;
		}

		else if(player->bStatus.Level >= 255) // capa com bordas
		{
			if(safiras != -1)
			{
				DeleteItemCompleto(ClientID,safiras);
				player->Equip[15].Index = 543;
				Atualizar(ClientID, _equip, 15);
				SendItens(ClientID,15);
				SendClientMsg(ClientID,"Que a luz de sephira esteja com você !.");
				return;
			}
			else
			SendSay(npcid,"É necessário um Pacote de Safiras(10).");
			return;
		}

		else
		SendSay(npcid,"Level inadequado.");
		return;

		}

		else if(player->Equip[0].EFV2 == 2) // archs
		{

			if(player->bStatus.Level >= 220 && player->bStatus.Level <= 254) // capa normal
			{
			if(safiras != -1)
			{
				DeleteItemCompleto(ClientID,safiras);
				player->Equip[15].Index = 545;
				Atualizar(ClientID, _equip, 15);
				SendItens(ClientID,15);
				SendClientMsg(ClientID,"Bem vindo ao Reino de Hekalotia.");
				return;
			}
			else
			SendSay(npcid,"É necessário um Pacote de Safiras(10).");
			return;
			}

			else if(player->bStatus.Level >= 255) // capa com bordas
			{
			if(safiras != -1)
			{
				DeleteItemCompleto(ClientID,safiras);
				player->Equip[15].Index = 543;
				Atualizar(ClientID, _equip, 15);
				SendItens(ClientID,15);
				SendClientMsg(ClientID,"Que a luz de sephira esteja com você !.");
				return;
			}
			else
			SendSay(npcid,"É necessário um Pacote de Safiras(10).");
			return;
			}

			else
			SendSay(npcid,"Level inadequado.");
			return;

		}
		else
		{
		SendSay(npcid,"Você é um grande guerreiro, siga seu caminho.");
		return;
		}
	}
	else if(npc->Equip[15].Index == 735) // REI RED
	{
		if(player->Equip[0].EFV2 == 1) // mortais
		{

		if(player->Equip[10].Index == 1742 && player->Equip[11].Index >= 1760 && player->Equip[11].Index <= 1763)
		{
			Arch(ClientID,npcid);
			return;
		}

		if(player->bStatus.Level >= 220 && player->bStatus.Level <= 254) // capa normal
		{
			if(player->Equip[13].Index == 4081)
			{
				player->Equip[13].Index = 0;
				player->Equip[15].Index = 546;
				SendItens(ClientID,13);
				SendItens(ClientID,15);
				SendClientMsg(ClientID,"Bem vindo ao Reino de Hekalotia.");
				return;
			}
			else
			SendSay(npcid,"Traga-me o Emblema_do_Reino");
			return;
		}

		else if(player->bStatus.Level >= 255) // capa com bordas
		{
			if(safiras != -1)
			{
				DeleteItemCompleto(ClientID,safiras);
				player->Equip[15].Index = 544;
				Atualizar(ClientID, _equip, 15);
				SendItens(ClientID,15);
				SendClientMsg(ClientID,"Que a luz de sephira esteja com você !.");
				return;
			}
			else
			SendSay(npcid,"É necessário um Pacote de Safiras(10).");
			return;
		}

		else
		SendSay(npcid,"Level inadequado.");
		return;

		}

		else if(player->Equip[0].EFV2 == 2) // archs
		{

			if(player->bStatus.Level >= 220 && player->bStatus.Level <= 254) // capa normal
			{
			if(safiras != -1)
			{
				DeleteItemCompleto(ClientID,safiras);
				player->Equip[15].Index = 546;
				Atualizar(ClientID, _equip, 15);
			    SendItens(ClientID,15);
				SendClientMsg(ClientID,"Bem vindo ao Reino de Hekalotia.");
				return;
			}
			else
			SendSay(npcid,"É necessário um Pacote de Safiras(10).");
			return;
			}

			else if(player->bStatus.Level >= 255) // capa com bordas
			{
			if(safiras != -1)
			{
				DeleteItemCompleto(ClientID,safiras);
				player->Equip[15].Index = 544;
				Atualizar(ClientID, _equip, 15);
				SendItens(ClientID,15);
				SendClientMsg(ClientID,"Que a luz de sephira esteja com você !.");
				return;
			}
			else
			SendSay(npcid,"É necessário um Pacote de Safiras(10).");
			return;
			}

			else
			SendSay(npcid,"Level inadequado.");
			return;

		}
		else
		{
		SendSay(npcid,"Você é um grande guerreiro, siga seu caminho.");
		return;
		}
	}
}
*/