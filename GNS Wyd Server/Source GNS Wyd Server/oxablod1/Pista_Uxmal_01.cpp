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
static int tempo = clock();
static int lich1 = 0;
static int lich2 = 0;
static int tempolich1 = clock();
static int tempolich2 = clock();
static int spotlich1 = 0;
static int spotlich2 = 0;

//Criação de mobs após derrota do lich correto.
void Pista0_1(int clientid, char *MobName)
{
	if(!pista0)
	{
		SendClientMsg(clientid,"Um erro ocorreu na pista #0");
		return;
	}
	if(strncmp(MobName,"PLugefer1",9) == 0)
	{
		if(Spot1 >= 1)
		{
			for(int i = 0;i < Spot1;i++)
			{
				CreateMOB("PLugefer1",3364,1628,"pista");
			}
			Spot1 = 0;
		}
		else
		{
			Spot1++;
		}
	}
	else if(strncmp(MobName,"PLugefer2",9) == 0)
	{
		if(Spot2 >= 1)
		{
			for(int i = 0;i < Spot2;i++)
			{
				CreateMOB("PLugefer2",3372,1638,"pista");
			}
			Spot2 = 0;
		}
		else
		{
			Spot2++;
		}
	}
	else if(strncmp(MobName,"PLugefer3",9) == 0)
	{
		if(Spot3 >= 1)
		{
			for(int i = 0;i < Spot3;i++)
			{
				CreateMOB("PLugefer3",3353,1633,"pista");
			}
			Spot3 = 0;
		}
		else
		{
			Spot3++;
		}
	}
	else if(strncmp(MobName,"PLugefer4",9) == 0)
	{
		if(Spot4 >= 1)
		{
			for(int i = 0;i < Spot4 ;i++)
			{
				CreateMOB("PLugefer4",3352,1620,"pista");
			}
			Spot4 = 0;
		}
		else
		{
			Spot4++;
		}
	}
	else if(strncmp(MobName,"PLugefer5",9) == 0)
	{
		if(Spot5 >= 1)
		{
			for(int i = 0;i < Spot5 ;i++)
			{
				CreateMOB("PLugefer5",3373,1620,"pista");
			}
			Spot5 = 0;
		}
		else
		{
			Spot5++;
		}
	}
	else if(strncmp(MobName,"PLugefer6",9) == 0)
	{
		if(Spot6 >= 1)
		{
			for(int i = 0;i < Spot6 ;i++)
			{
				CreateMOB("PLugefer6",3416,1628,"pista");
			}
			Spot6 = 0;
		}
		else
		{
			Spot6++;
		}
	}
	else if(strncmp(MobName,"PLugefer7",9) == 0)
	{
		if(Spot7 >= 1)
		{
			for(int i = 0;i < Spot7 ;i++)
			{
				CreateMOB("PLugefer7",3404,1638,"pista");
			}
			Spot7 = 0;
		}
		else
		{
			Spot7++;
		}
	}
	else if(strncmp(MobName,"PLugefer8",9) == 0)
	{
		if(Spot8 >= 1)
		{
			for(int i = 0;i < Spot8 ;i++)
			{
				CreateMOB("PLugefer2",3425,1638,"pista");
			}
			Spot8 = 0;
		}
		else
		{
			Spot8++;
		}
	}
	else if(strncmp(MobName,"PLugefer9",9) == 0)
	{
		if(Spot9 >= 1)
		{
			for(int i = 0;i < Spot9 ;i++)
			{
				CreateMOB("PLugefer9",3426,1620,"pista");
			}
			Spot9 = 0;
		} 
		else
		{
			Spot9++;
		}
	}
	else if(strncmp(MobName,"PLugefer10",10) == 0)
	{
		if(Spot10 >= 3)
		{
			for(int i = 0;i < Spot10 ;i++)
			{
				CreateMOB("PLugefer10",3407,1617,"pista");
			}
			Spot10 = 0;
		}
		else
		{
			Spot10++;
		}
	}
}

//Criação dos Lich's
void Pista0_2(int clientid, char *MobName)
{
	if(!pista0)
	{
		SendClientMsg(clientid,"Um erro ocorreu na pista #1");
		return;
	}
	if(strcmp(MobName,"PLich") == 0)//Lich correto.
	{
		lich1 = 2;
		SendNoticeArea(3384,1646,3343,1611,"O Lich foi derrotado.");
		for(int i=1000;i<32000;i++)
		{
			int rid = i * 0x0410;
			int cX = PInt(rid + 0x015C6CEC);
			int cY = PInt(rid + 0x015C6CF0);
			if(cX >= 3343 && cY >= 1611 && cX <= 3384 && cY <= 1646)
			{
				DeleteMob(i,5);
			}
		}
		for(int i = 0;i < 10;i++)
		{
			CreateMOB("PLugefer1",3364,1628,"pista");
			CreateMOB("PLugefer2",3372,1638,"pista");
			CreateMOB("PLugefer3",3353,1633,"pista");
			CreateMOB("PLugefer4",3352,1618,"pista");
			CreateMOB("PLugefer5",3373,1620,"pista");
		}
		Spot1 = 0;
		Spot2 = 0;
		Spot3 = 0;
		Spot4 = 0;
		Spot5 = 0;
	}
	else if(strcmp(MobName,"PLich1") == 0)//Lich correto.
	{
		lich2 = 2;
		SendNoticeArea(3438,1646,3397,1611,"O Lich foi derrotado.");
		for(int i=1000;i<32000;i++)
		{
			int rid = i * 0x0410;
			int cX = PInt(rid + 0x015C6CEC);
			int cY = PInt(rid + 0x015C6CF0);
			if(cX >= 3397 && cY >= 1611 && cX <= 3438 && cY <= 1646)
			{
				DeleteMob(i,5);
			}
		}
		for(int i = 0;i < 10;i++)
		{
			CreateMOB("PLugefer6",3416,1628,"pista");
			CreateMOB("PLugefer7",3404,1638,"pista");
			CreateMOB("PLugefer8",3425,1638,"pista");
			CreateMOB("PLugefer9",3426,1620,"pista");
			CreateMOB("PLugefer10",3407,1617,"pista");
		}
		Spot6 = 0;
		Spot7 = 0;
		Spot8 = 0;
		Spot9 = 0;
		Spot10 = 0;
	}
	else if(strcmp(MobName,"PLich_") == 0)//Lich Errado
	{
		lich1 = 1;
		GreenTimeMap(3384,1646,3343,1611,90);
		tempolich1 = clock() + 90 * CLOCKS_PER_SEC;
		SendNoticeArea(3384,1646,3343,1611,"O Lich ERRADO foi derrotado.");
		spotlich1 ++;
		if(spotlich1 >= 2) CreateMOB("PLich_",3364,1628,"pista"), spotlich1 = 0;
	}
	else if(strcmp(MobName,"PLich__") == 0)//Lich Errado
	{
		lich1 = 1;
		GreenTimeMap(3438,1646,3397,1611,90);
		tempolich2 = clock() + 90 * CLOCKS_PER_SEC;
		SendNoticeArea(3438,1646,3397,1611,"O Lich ERRADO foi derrotado.");
		spotlich2 ++;
		if(spotlich2 >= 2) CreateMOB("_PLich",3416,1628,"pista"), spotlich2 = 0;
	}
	else
	{
		SendClientMsg(clientid,"Um erro ocorreu na pista #2");
	}
}

//Requisição para entrar na pista
bool Pista0_0(int clientid)
{	
	int cMin = PInt(0x00A5EA414);
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	int itemslot = GetFirstSlot(clientid,5134,0,0,0,0,0,0,64);
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
	if(PartyCount > 1)
	{
		SendClientMsg(clientid,"Dois grupos já estão participando desta quest.");
		return FALSE;
	}
	if(0 == 0)//verificação do tempo
	{	
		if(PartyCount == 0)
		{
			lich1 = 0;
			GreenTimeMap(3384,1646,3343,1611,90);
			tempolich1 = clock() + 430 * CLOCKS_PER_SEC;
			for(int i = 0;i < 6;i++)
			{
				CreateMOB("PLich",3364,1628,"pista");
			}
			CreateMOB("PLich_",3364,1628,"pista");
			pista0 = TRUE;
			PTeleport(clientid,3348,1623);
			DoTeleport(clientid,3348,1623);
			Lider1 = clientid;
		}
		else if(PartyCount == 1)
		{
			lich2 = 0;
			GreenTimeMap(3438,1646,3397,1611,90);
			tempolich2 = clock() + 430 * CLOCKS_PER_SEC;
			for(int i = 0;i < 4;i++)
			{
				CreateMOB("_PLich",3416,1628,"pista");
			}
			CreateMOB("PLich1",3416,1628,"pista");
			PTeleport(clientid,3402,1623);
			DoTeleport(clientid,3402,1623);
			Lider2 = clientid;
		}
		else
		{
			PTeleport(clientid,3379,1635);
			DoTeleport(clientid,3379,1635);
		}
		player->Inventory[itemslot].Index = 0;
		SendInv(clientid,itemslot);
		PartyCount++;
		return TRUE;
	}
	else
	{
		SendClientMsg(clientid,"Apenas nos minutos 00,15,30 e 45.");
	}
	return FALSE;
}

//Clock para tirar caso erre lich1 e demore pra matar
void Pista0_clock1()
{
	if(pista0 == FALSE)
	{
		return;
	}
	if(lich1 == 2)//lich1 certo já foi morto
	{
		return;
	}
	if(lich1 == 1)//lich1 errado já foi morto
	{
		return;
	}
	if(clock() >= tempolich1)
	{
		if(lich1 == 0)//nenhum lich foi morto
		{
			for(int i=1;i<999;i++)
			{
				int rid = i * 0x0410;
				int cX = PInt(rid + 0x015C6CEC);
				int cY = PInt(rid + 0x015C6CF0);
				if(cX >= 3343 && cY >= 1611 && cX <= 3384 && cY <= 1646)
				{
					DoTeleport(i,3284,1686);
				}
			}	
		}
	}
}

//Clock para tirar caso erre lich2 e demore pra matar
void Pista0_clock2()
{
	if(pista0 == FALSE)
	{
		return;
	}
	if(lich2 == 2)//lich1 certo já foi morto
	{
		return;
	}
	if(lich2 == 1)//lich1 errado já foi morto
	{
		return;
	}
	if(clock() >= tempolich2)
	{
		if(lich2 == 0)//nenhum lich foi morto
		{
			for(int i=1;i<999;i++)
			{
				int rid = i * 0x0410;
				int cX = PInt(rid + 0x015C6CEC);
				int cY = PInt(rid + 0x015C6CF0);
				if(cX >= 3397 && cY >= 1611 && cX <= 3438 && cY <= 1646)
				{
					DoTeleport(i,3284,1686);
				}
			}	
		}
	}
}

//Clock para retirar jogadores da sala
void Pista0_clock()
{
	if(clock() >= tempo)
	{
		if(pista0 == FALSE)
		{
			return;
		}
		tempo = clock() + 900 * CLOCKS_PER_SEC;
		for(int i=1;i<99;i++)
		{
			int rid = i * 0x0410;
			int cX = PInt(rid + 0x015C6CEC);
			int cY = PInt(rid + 0x015C6CF0);
			if(cX >= 3321 && cY >= 1599 && cX <= 3461 && cY <= 1664)
			{
				DoTeleport(i,3284,1686);
			}
		}

		int itemslot1 = GetFirstSlotSADD(Lider1,0,64);
		int itemslot2 = GetFirstSlotSADD(Lider2,0,64);
		MOB *lider1 = (MOB*)GetMobFromIndex(Lider1);
		MOB *lider2 = (MOB*)GetMobFromIndex(Lider2);
	
		lider1->Inventory[itemslot1].Index = 5134;	
		lider1->Inventory[itemslot1].EF1 = 43;
		lider1->Inventory[itemslot1].EFV1 = 1;
		lider2->Inventory[itemslot2].Index = 5134;
		lider2->Inventory[itemslot2].EF1 = 43;
		lider2->Inventory[itemslot2].EFV1 = 1;

		for(int i=1000;i<32000;i++)
		{
			int rid = i * 0x0410;
			int cX = PInt(rid + 0x015C6CEC);
			int cY = PInt(rid + 0x015C6CF0);
			if(cX >= 3321 && cY >= 1599 && cX <= 3461 && cY <= 1664)
			{
				DeleteMob(i,5);
			}
		}
		PartyCount = 0;
		pista0 = FALSE;
		Lider1 = 0;
		Lider2 = 0;
		Spot1 = 0;
		Spot2 = 0;
		Spot3 = 0;
		Spot4 = 0;
		Spot5 = 0;
		Spot6 = 0;
		Spot7 = 0;
		Spot8 = 0;
		Spot9 = 0;
		Spot10 = 0;
	}
}