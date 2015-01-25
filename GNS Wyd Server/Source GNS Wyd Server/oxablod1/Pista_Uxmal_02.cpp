#include "Stdafx.h"





static int Spot1 = 0;
static int Spot2 = 0;
static int Spot3 = 0;
static int Spot4 = 0;
static int Spot5 = 0;
static int Spot6 = 0;
static int Spot7 = 0;
static int Spot8 = 0;
static int Spot9 = 0;
static int Spot10 = 0;
static int PartyCount = 0;
static int Lider1 = 0;
static int Lider2 = 0;
static int Lider3 = 0;
static int Tower = 0;
static int tempo = clock();
int cMin = PInt(0x00A5EA414);

//Requisição para entrar na pista
bool Pista1_0(int clientid)
{
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	int itemslot = GetFirstSlot(clientid,5134,43,1,0,0,0,0,64);
	int cParty = PInt(clientid * 0x0410 + 0x015C6CD0);

	if(cParty == -1)
	{
		SendClientMsg(clientid,"Acesso apenas em grupo.");
		return FALSE;
	}
	if(itemslot == -1)
	{
		SendClientMsg(clientid,"Você não possui a Pista de Runas.");
		return FALSE;
	}
	if(PartyCount > 2)
	{
		SendClientMsg(clientid,"Três grupos já estão participando desta quest.");
		return FALSE;
	}
	if(0 == 0)//verificação do tempo
	{	
		if(PartyCount == 0)
		{
			GenerateSpawn(3954);
			pista1 = TRUE;
			PTeleport(clientid,3390,1567);
			DoTeleport(clientid,3390,1567);
			Lider1 = clientid;
		}
		else if(PartyCount == 1)
		{
			GenerateSpawn(3955);
			PTeleport(clientid,3395,1567);
			DoTeleport(clientid,3395,1567);
			Lider2 = clientid;
		}
		else if(PartyCount == 2)
		{
			GenerateSpawn(3956);
			PTeleport(clientid,3385,1567);
			DoTeleport(clientid,3385,1567);
			Lider3 = clientid;
		}
		else
		{
			PTeleport(clientid,3390,1567);
			DoTeleport(clientid,3390,1567);
		}
		//player->Inventory[itemslot].Index = 0;
		//SendInv(clientid,itemslot);
		PartyCount++;
		return TRUE;
	}
	else
	{
		SendClientMsg(clientid,"Apenas nos minutos 00,15,30 e 45.");
	}
	return FALSE;
}

//Morte das torres
void Pista1_1(int clientid, char *MobName)
{
	char msg[50];
	if(!pista1)
	{
		SendClientMsg(clientid,"Um erro ocorreu na pista #2");
		return;
	}
	if(strcmp(MobName,"Tower of Thor") == 0)
	{
		Tower++;
		if(Tower == 1 && pista1 == TRUE && PartyCount == 0)//uma torre destruida / 1 grupo lá dentro
		{
			goto END;
			return;
		}
		else if(Tower == 2 && pista1 == TRUE && PartyCount == 1)//duas torres destruidas / 2 grupos lá dentro
		{
			goto END;
			return;
		}
		else if(Tower == 3 && pista1 == TRUE && PartyCount == 2)//tres torres destruidas / 3 grupos lá dentro
		{
			goto END;
			return;
		}
		sprintf(msg,"Já foi destruido %d torre(s).",Tower);
		SendNoticeArea(3448,1595,3325,1540,msg);
	}
	else
	{
		SendClientMsg(clientid,"Um erro ocorreu na pista #3");
		return;
	}


END:
	SendNoticeArea(3448,1595,3325,1540,"As três torres já foram destruidas.");
	DoTeleportArea(3282,1702,3325,1540,3448,1595);
	pista1 = FALSE;
	Lider1 = 0;
	Lider2 = 0;
	Lider3 = 0;
	PartyCount = 0;
	Tower = 0;
	for(int i=1000;i<32000;i++)
	{
		int rid = i * 0x0410;
		int cX = PInt(rid + 0x015C6CEC);
		int cY = PInt(rid + 0x015C6CF0);
		if(cX >= 3325 && cY >= 1540 && cX <= 3448 && cY <= 1595)
		{
			DeleteMob(i,5);
		}
	}
}

//Clock para retirar jogadores da sala
void Pista1_clock()
{
	/*if(clock() >= tempo)
	{
		if(pista1 == FALSE)
		{
			return;
		}
		tempo = clock() + 900 * CLOCKS_PER_SEC;*/
		for(int i=1;i<999;i++)
		{
			int rid = i * 0x0410;
			int cX = PInt(rid + 0x015C6CEC);
			int cY = PInt(rid + 0x015C6CF0);
			if(cX >= 3325 && cY >= 1540 && cX <= 3448 && cY <= 1595)
			{
				DoTeleport(i,3282,1702);
			}
		}

		int itemslot1 = GetFirstSlotSADD(Lider1,0,64);
		int itemslot2 = GetFirstSlotSADD(Lider2,0,64);
		int itemslot3 = GetFirstSlotSADD(Lider3,0,64);
		MOB *lider1 = (MOB*)GetMobFromIndex(Lider1);
		MOB *lider2 = (MOB*)GetMobFromIndex(Lider2);
		MOB *lider3 = (MOB*)GetMobFromIndex(Lider3);
	
		lider1->Inventory[itemslot1].Index = 5134;	
		lider1->Inventory[itemslot1].EF1 = 43;
		lider1->Inventory[itemslot1].EFV1 = 1;
		lider2->Inventory[itemslot2].Index = 5134;
		lider2->Inventory[itemslot2].EF1 = 43;
		lider2->Inventory[itemslot2].EFV1 = 1;
		lider2->Inventory[itemslot3].Index = 5134;
		lider2->Inventory[itemslot3].EF1 = 43;
		lider2->Inventory[itemslot3].EFV1 = 1;
		SendALL(Lider1);
		SendALL(Lider2);
		SendALL(Lider3);

		for(int i=1000;i<32000;i++)
		{
			int rid = i * 0x0410;
			int cX = PInt(rid + 0x015C6CEC);
			int cY = PInt(rid + 0x015C6CF0);
			if(cX >= 3325 && cY >= 1540 && cX <= 3448 && cY <= 1595)
			{
				DeleteMob(i,5);
			}
		}
		PartyCount = 0;
		pista0 = FALSE;
		Lider1 = 0;
		Lider2 = 0;
		Lider3 = 0;
	//}
}