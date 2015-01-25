#include "Stdafx.h"

void Blue_Cape(int ClientID, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID); int cape;
	 int addr_bclient = ClientID * 0x0410;
	int hekalotia_capes[] = {543, 3197, 1766, 3404, 3407,5524};
	for(int i = 0; i < sizeof(hekalotia_capes) / sizeof (int); i++) 
	{
		if(player->Equip[15].Index == hekalotia_capes[i]) 
		{
			SendSay(npcid, "Você já percence ao reino de Hekalotia.");
			return;
		}
		if(player->Exp <= 1) 
		{
			SendSay(npcid, "Você Não Possui level Necessário, Level Minimo 221.");
			return;
		}
		
	}
	{

		}
	switch(player->Equip[0].EFV2)
	{
		case 0: // Mortal
			cape = 543;
			break;
		case 1: // Mortal
			cape = 543;
			break;
		case 2: // Mortal
			cape = 543;
			break;
		case 3: // Mortal
			cape = 543;
			break;
		
		
		default:
			cape = 0;
			break;
	}
	if(cape != 0) {
		player->Equip[15].Index = cape;
		Atualizar(ClientID, _equip, 15);
		SendSay(npcid, "Bem-vindo ao reino de Hekalotia, esta capa ficou muito bem em você!");
		return;
	}
	else {
		SendClientMsg(ClientID, "Ocorreu um erro na troca de capa, contate a administração.");
		return;
	}
}

void Red_Cape(int ClientID, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID); int cape;
	 int addr_bclient = ClientID * 0x0410;
	int akelonia_capes[] = {544, 3198, 1767, 3403, 3406};
	for(int i = 0; i < sizeof(akelonia_capes) / sizeof (int); i++) {
		if(player->Equip[15].Index == akelonia_capes[i]) {
			SendSay(npcid, "Você já percence ao reino de Akelonia.");
			return;
		}
		if(player->Exp <= 1) 
		{
			SendSay(npcid, "Você Não Possui level Necessário, Level Minimo 221.");
			return;
		}
	}
	{

		}
	switch(player->Equip[0].EFV2)
	{
		case 0: // Mortal
			cape = 544;
			break;
		case 1: // Mortal
			cape = 544;
			break;
		case 2: // Mortal
			cape = 544;
			break;
		case 3: // Mortal
			cape = 544;
			break;
		default:
			cape = 0;
			break;
	}
	if(cape != 0) {
		player->Equip[15].Index = cape;
		Atualizar(ClientID, _equip, 15);
		SendSay(npcid, "Bem-vindo ao reino de Akelonia, esta capa ficou muito bem em você!");
		return;
	}
	else {
		SendClientMsg(ClientID, "Ocorreu um erro na troca de capa, contate a administração.");
		return;
	}
}