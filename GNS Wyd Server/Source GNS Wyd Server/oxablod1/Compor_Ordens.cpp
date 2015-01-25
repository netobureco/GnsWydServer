#include "stdafx.h"

void Ordem_Vento(int ClientID,int npcid)
{
	
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	//MOB *thisclient = (MOB*)GetMobFromIndex(Client);
	int addr_bclient = ClientID * 0x0410;
	int stone0 = GetFirstSlotSADD(ClientID,1760,64); // Sephirot TK
	int stone1 = GetFirstSlotSADD(ClientID,1761,64); // Sephirot FM
	int stone2 = GetFirstSlotSADD(ClientID,1762,64); // Sephirot BM
	int stone3 = GetFirstSlotSADD(ClientID,1763,64); // Sephirot HT
	int stone4 = GetFirstSlotSADD(ClientID,5338,64); // Ideal
	int stone5 = GetFirstSlotSADD(ClientID,593,64);  // Brinco Velo
	if(player->Gold < 300000000 )
	{
		SendClientMsg(ClientID,"É necessário 300kk.");
		return;
	}
	if (stone4 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando a Pedra Ideal.");
		return;
	}
	if (stone5 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando o Brinco de Zeus.");
		return;
	}
	if(player->Inventory[stone0].Index == 1760 && player->Inventory[stone1].Index == 1761 && player->Inventory[stone2].Index == 1762 && player->Inventory[stone3].Index == 1763 && player->Inventory[stone4].Index == 5338 && player->Inventory[stone5].Index == 593)
	{
		
		    player->Inventory[stone0].Index = 6448;  // Ordem do Vento
			//DeleteItem(ClientID,stone0);
			DeleteItem(ClientID,stone1);
			DeleteItem(ClientID,stone2);
			DeleteItem(ClientID,stone3);
			DeleteItem(ClientID,stone4);
			DeleteItem(ClientID,stone5);
			player->Gold -=  300000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição sucedida.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		
	}
if(stone0 == -1 || stone1 == -1 || stone2 == -1 || stone3 == -1)
	{
		SendClientMsg(ClientID,"É necessário os quatro Sephirot (TK,FM,BM,HT).");
		return;
	}
}

void Ordem_Terra(int ClientID,int npcid)
{
	
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	//MOB *thisclient = (MOB*)GetMobFromIndex(Client);
	int addr_bclient = ClientID * 0x0410;
	int stone0 = GetFirstSlotSADD(ClientID,1760,64); // Sephirot TK
	int stone1 = GetFirstSlotSADD(ClientID,1761,64); // Sephirot FM
	int stone2 = GetFirstSlotSADD(ClientID,1762,64); // Sephirot BM
	int stone3 = GetFirstSlotSADD(ClientID,1763,64); // Sephirot HT
	int stone4 = GetFirstSlotSADD(ClientID,5338,64); // Ideal
	int stone5 = GetFirstSlotSADD(ClientID,592,64);  // Brinco HP
	if(player->Gold < 300000000 )
	{
		SendClientMsg(ClientID,"É necessário 300kk.");
		return;
	}
	if (stone4 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando a Pedra Ideal.");
		return;
	}
	if (stone5 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando o Brinco de Titã.");
		return;
	}
	if(player->Inventory[stone0].Index == 1760 && player->Inventory[stone1].Index == 1761 && player->Inventory[stone2].Index == 1762 && player->Inventory[stone3].Index == 1763 && player->Inventory[stone4].Index == 5338 && player->Inventory[stone5].Index == 592)
	{
		
		    player->Inventory[stone0].Index = 6457;  // Ordem da Terra
			//DeleteItem(ClientID,stone0);
			DeleteItem(ClientID,stone1);
			DeleteItem(ClientID,stone2);
			DeleteItem(ClientID,stone3);
			DeleteItem(ClientID,stone4);
			DeleteItem(ClientID,stone5);
			player->Gold -=  300000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição sucedida.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		
	}
if(stone0 == -1 || stone1 == -1 || stone2 == -1 || stone3 == -1)
	{
		SendClientMsg(ClientID,"É necessário os quatro Sephirot (TK,FM,BM,HT).");
		return;
	}
}
void Ordem_Agua(int ClientID,int npcid)
{
	
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	//MOB *thisclient = (MOB*)GetMobFromIndex(Client);
	int addr_bclient = ClientID * 0x0410;
	int stone0 = GetFirstSlotSADD(ClientID,1760,64); // Sephirot TK
	int stone1 = GetFirstSlotSADD(ClientID,1761,64); // Sephirot FM
	int stone2 = GetFirstSlotSADD(ClientID,1762,64); // Sephirot BM
	int stone3 = GetFirstSlotSADD(ClientID,1763,64); // Sephirot HT
	int stone4 = GetFirstSlotSADD(ClientID,5338,64); // Ideal
	int stone5 = GetFirstSlotSADD(ClientID,594,64);  // Brinco Magia
	if(player->Gold < 300000000 )
	{
		SendClientMsg(ClientID,"É necessário 300kk.");
		return;
	}
	if (stone4 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando a Pedra Ideal.");
		return;
	}
	if (stone5 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando o Brinco de Hecate.");
		return;
	}
	if(player->Inventory[stone0].Index == 1760 && player->Inventory[stone1].Index == 1761 && player->Inventory[stone2].Index == 1762 && player->Inventory[stone3].Index == 1763 && player->Inventory[stone4].Index == 5338 && player->Inventory[stone5].Index == 594)
	{
		
		    player->Inventory[stone0].Index = 6456;  // Ordem da Agua
			//DeleteItem(ClientID,stone0);
			DeleteItem(ClientID,stone1);
			DeleteItem(ClientID,stone2);
			DeleteItem(ClientID,stone3);
			DeleteItem(ClientID,stone4);
			DeleteItem(ClientID,stone5);
			player->Gold -=  300000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição sucedida.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		
	}
if(stone0 == -1 || stone1 == -1 || stone2 == -1 || stone3 == -1)
	{
		SendClientMsg(ClientID,"É necessário os quatro Sephirot (TK,FM,BM,HT).");
		return;
	}
}
void Ordem_Sol(int ClientID,int npcid)
{
	
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	//MOB *thisclient = (MOB*)GetMobFromIndex(Client);
	int addr_bclient = ClientID * 0x0410;
	int stone0 = GetFirstSlotSADD(ClientID,1760,64); // Sephirot TK
	int stone1 = GetFirstSlotSADD(ClientID,1761,64); // Sephirot FM
	int stone2 = GetFirstSlotSADD(ClientID,1762,64); // Sephirot BM
	int stone3 = GetFirstSlotSADD(ClientID,1763,64); // Sephirot HT
	int stone4 = GetFirstSlotSADD(ClientID,5338,64); // Ideal
	int stone5 = GetFirstSlotSADD(ClientID,595,64);  // Brinco Dano
	if(player->Gold < 300000000 )
	{
		SendClientMsg(ClientID,"É necessário 300kk.");
		return;
	}
	if (stone4 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando a Pedra Ideal.");
		return;
	}
	if (stone5 == -1)
	{
		SendClientMsg(ClientID,"Esta faltando o Brinco de Hercules.");
		return;
	}
	if(player->Inventory[stone0].Index == 1760 && player->Inventory[stone1].Index == 1761 && player->Inventory[stone2].Index == 1762 && player->Inventory[stone3].Index == 1763 && player->Inventory[stone4].Index == 5338 && player->Inventory[stone5].Index == 595)
	{
		
		    player->Inventory[stone0].Index = 6449;  // Ordem do Fogo
			//DeleteItem(ClientID,stone0);
			DeleteItem(ClientID,stone1);
			DeleteItem(ClientID,stone2);
			DeleteItem(ClientID,stone3);
			DeleteItem(ClientID,stone4);
			DeleteItem(ClientID,stone5);
			player->Gold -=  300000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição sucedida.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		
	}
if(stone0 == -1 || stone1 == -1 || stone2 == -1 || stone3 == -1)
	{
		SendClientMsg(ClientID,"É necessário os quatro Sephirot (TK,FM,BM,HT).");
		return;
	}
}