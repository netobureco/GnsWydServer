#include "stdafx.h"

void Compor_Pedra_ReturnofGlory(int ClientID,int npcid)
{
	
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	//MOB *thisclient = (MOB*)GetMobFromIndex(Client);
	int addr_bclient = ClientID * 0x0410;
	int stone0 = GetFirstSlotSADD(ClientID,5516,64); // Gold_Loja(1000)
	int stone1 = GetFirstSlotSADD(ClientID,1760,64); // Gold_Loja(1000)
	int stone2 = GetFirstSlotSADD(ClientID,1761,64); // Gold_Loja(1000)
	int stone3 = GetFirstSlotSADD(ClientID,1762,64); // Gold_Loja(1000)
	int stone4 = GetFirstSlotSADD(ClientID,1763,64); // Gold_Loja(1000)
	int stone5 = GetFirstSlotSADD(ClientID,1742,64);  // Imortalidade
	if(player->Gold < 700000000 )
	{
		SendClientMsg(ClientID,"É necessário 700kk.");
		return;
	}
	
	if (stone0 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando a Barra de 1000 (Gold Loja) Vende em Erion.");
		return;
	}
	if (stone1 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando o Sephirot de TK.");
		return;
	}
	if (stone2 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando o Sephirot de FM.");
		return;
	}
	if (stone3 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando o Sephirot de BM.");
		return;
	}
	if (stone4 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando o Sephirot de HT.");
		return;
	}
	if (stone5 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando a Pedra da Imortalidade.");
		return;
	}
	if(player->Inventory[stone0].Index == 5516 && player->Inventory[stone1].Index == 1760 && player->Inventory[stone2].Index == 1761 && player->Inventory[stone3].Index == 1762 && player->Inventory[stone4].Index == 1763 && player->Inventory[stone5].Index == 1742)
	{
		
		   
			player->Inventory[stone0].Index = 0;
			player->Inventory[stone1].Index = 0;
			player->Inventory[stone2].Index = 0;
			player->Inventory[stone3].Index = 0;
			player->Inventory[stone4].Index = 0;
			player->Inventory[stone5].Index = 5523;  // Pedra_do_ROG
			player->Gold -=  700000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição sucedida.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		
	}
}
