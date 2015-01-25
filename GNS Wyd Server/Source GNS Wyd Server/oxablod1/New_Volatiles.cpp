#include "Stdafx.h"



void Frango(int ClientID,st_Item *ItemSend)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	
	for(int i=1;i<16;i++)
	{
		if(mobaffectbuffer[ClientID].Affects[i].Master == 30)
		{
			if(mobaffectbuffer[ClientID].Affects[i].Time <= 5394)
			{
				mobaffectbuffer[ClientID].Affects[i].Time += 902;
				SendScore(ClientID);
				Amount(ClientID,ItemSend);
				return;	
			}
			else
			{
				SendClientMsg(ClientID,"Tempo máximo atingido.");
				return;
			}
		}
	}
	for(int i=1;i<16;i++)
	{
		if(mobaffectbuffer[ClientID].Affects[i].Index == 0)
		{
			mobaffectbuffer[ClientID].Affects[i].Index = 30;
			mobaffectbuffer[ClientID].Affects[i].Master = 30;
			mobaffectbuffer[ClientID].Affects[i].Time = 902;
			mobaffectbuffer[ClientID].Affects[i].Value = 30;
			Amount(ClientID,ItemSend);
			SendScore(ClientID);
			break;
		}
	}
	return;
}
void Frango_P(int ClientID,st_Item *ItemSend)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	
	for(int i=1;i<16;i++)
	{
		if(mobaffectbuffer[ClientID].Affects[i].Master == 30)
		{
			if(mobaffectbuffer[ClientID].Affects[i].Time <= 5394)
			{
				mobaffectbuffer[ClientID].Affects[i].Time += 902;
				SendScore(ClientID);
				Amount(ClientID,ItemSend);
				return;	
			}
			else
			{
				SendClientMsg(ClientID,"Tempo máximo atingido.");
				return;
			}
		}
	}
	for(int i=1;i<16;i++)
	{
		if(mobaffectbuffer[ClientID].Affects[i].Index == 0)
		{
			mobaffectbuffer[ClientID].Affects[i].Index = 30;
			mobaffectbuffer[ClientID].Affects[i].Master = 30;
			mobaffectbuffer[ClientID].Affects[i].Time = 902;
			mobaffectbuffer[ClientID].Affects[i].Value = 30;
			Amount(ClientID,ItemSend);
			SendScore(ClientID);
			break;
		}
	}
	return;
}

void sephira(int conn, int itemSlot)//DANO/MAGO
{
	
	st_Mob_754 *charData = &mobaffectbuffer[conn];
	int bSlot = GetEmptyAffect(conn, 34);

	if(mobaffectbuffer[conn].Affects[bSlot].Index == 34 || bSlot > 15)
	{
		SendClientMessage(conn, "Não pode comer mais.");
		return;
	}
	charData->Affects[bSlot].Index = 34;
	charData->Affects[bSlot].Master = 34;
	charData->Affects[bSlot].Time = 75600;
	charData->Affects[bSlot].Value = 0;
	Delete(conn,itemSlot);
	GetCurrentScore(conn);
	SendScore(conn);
	return;
}

void saude(int conn, int itemSlot)//HP/MP
{
	
	st_Mob_754 *charData = &mobaffectbuffer[conn];
	int bSlot = GetEmptyAffect(conn, 35);

	if(mobaffectbuffer[conn].Affects[bSlot].Index == 35 || bSlot > 15)
	{
		SendClientMessage(conn, "Não pode comer mais.");
		return;
	}
	charData->Affects[bSlot].Index = 35;
	charData->Affects[bSlot].Master = 35;
	charData->Affects[bSlot].Time = 75600;
	charData->Affects[bSlot].Value = 0;
	Delete(conn,itemSlot);
	GetCurrentScore(conn);
	SendScore(conn);
	return;
}

void Kappa(int clientid)
{
	
	return;
}

void Pão(int clientid)
{
	
	return;
}

void Marmita(int clientid)
{
	
	return;
}

void P_Vigor(int clientid)
{
	
	return;
}


void BauExp_1h(int clientid)
{
	
	return;
}

void BauExp_2h(int clientid)
{
	
	return;
}


