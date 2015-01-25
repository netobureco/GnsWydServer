#include "stdafx.h"

void PerzenN(int clientid,int npcid)
{
	int cMes = PInt(0x00A5EA420); //0 Janeiro, 1 Fev
	int cDia = PInt(0x00A5EA41c);
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	int item = GetFirstSlotSADD(clientid,4128,64);
	if(item != -1)
	{
	thisclient->Inventory[item].Index = 3986;
	if(cMes == 11)
	{
		SendSay(npcid,"Recebeu a Montaria Shire(30 Dias).");
		SendALL(clientid);
		return;
	}
	else
	SendSay(npcid,"Recebeu a Montaria Shire(30 Dias).");
	SendALL(clientid);
	return;
	}
	else
	SendSay(npcid,"Traga-me a Esfera da Sorte(N).");
	return;
}
void PerzenM(int clientid,int npcid)
{
	int cMes = PInt(0x00A5EA420); //0 Janeiro, 1 Fev
	int cDia = PInt(0x00A5EA41c);
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	int item = GetFirstSlotSADD(clientid,4129,64);
	if(item != -1)
	{
	thisclient->Inventory[item].Index = 3987;
	thisclient->Inventory[item].EF1 = cDia;
	if(cMes == 11)
	{
		SendSay(npcid,"Recebeu a Montaria Thoroughbred(30 Dias).");
		SendALL(clientid);
		return;
	}
	else
	SendSay(npcid,"Recebeu a Montaria Thoroughbred(30 Dias).");
	SendALL(clientid);
	return;
	}
	else
	SendSay(npcid,"Traga-me a Esfera da Sorte(M).");
	return;
}
void PerzenA(int clientid,int npcid)
{
	int cMes = PInt(0x00A5EA420); //0 Janeiro, 1 Fev
	int cDia = PInt(0x00A5EA41c);
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	int item = GetFirstSlotSADD(clientid,4130,64);
	if(item != -1)
	{
	thisclient->Inventory[item].Index = 3988;
	if(cMes == 11)
	{
		SendSay(npcid,"Recebeu a Montaria Klazedale(30 Dias).");
		SendALL(clientid);
		return;
	}
	else
	SendSay(npcid,"Recebeu a Montaria Klazedale(30 Dias).");
	SendALL(clientid);
	return;
	}
	else
	SendSay(npcid,"Traga-me a Esfera da Sorte(A).");
	return;
}