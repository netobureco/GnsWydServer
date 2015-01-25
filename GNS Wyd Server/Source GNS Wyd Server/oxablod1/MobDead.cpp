#include "Stdafx.h"


void WINAPI KefDead()
{
	Sleep(3000);
    SendNoticeArea(2391,3953,2340,3899,"O Hall do Kefra será reinicializado em 5 segundos");
	Sleep(1000);
	SendNoticeArea(2391,3953,2340,3899,"O Hall do Kefra será reinicializado em 4 segundos");
	Sleep(1000);
	SendNoticeArea(2391,3953,2340,3899,"O Hall do Kefra será reinicializado em 3 segundos");
	Sleep(1000);
	SendNoticeArea(2391,3953,2340,3899,"O Hall do Kefra será reinicializado em 2 segundos");
	Sleep(1000);
	SendNoticeArea(2391,3953,2340,3899,"O Hall do Kefra será reinicializado em 1 segundo");
	ClearArea(2391,3953,2340,3899);
}
void ModEvent(char *Packet) // Pista Runas
{
	p338 *p = (p338*)Packet;
	MOB *player = (MOB*)GetMobFromIndex(p->killer);
	MOB *mob = (MOB*)GetMobFromIndex(p->killed);
	WORD clientid = p->killer; 
	WORD mobid = p->killed;

	int killer = p->killer;

	if(strcmp((char*)mob->Name,"Verid_") == 0)
	{
		Pista0_2(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLich_") == 0)
	{
		Pista0_2(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLich") == 0)
	{
		Pista0_2(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLich1") == 0)
	{
		Pista0_2(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer1") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer2") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer3") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer4") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer5") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer6") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer7") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer8") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer9") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer10") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"Tower of Thor") == 0)
	{
		if(mob->srcX == 3418 && mob->srcY == 1582)
		{
			Pista1_1(killer,(char*)mob->Name);
		}
		else if(mob->srcX == 3386 && mob->srcY == 1548)
		{
			Pista1_1(killer,(char*)mob->Name);
		}
		else if(mob->srcX == 3358 && mob->srcY == 1582)
		{
			Pista1_1(killer,(char*)mob->Name);
		}
		else
		{
			//Guerra de Noatun
		}
	}
}
/*
void MobEventDead(char *Packet) //Kefra
{
	p338 *p = (p338*)Packet;
	MOB *player = (MOB*)GetMobFromIndex(p->killer);
	MOB *mob = (MOB*)GetMobFromIndex(p->killed);

	//Somente monstros
	if(p->killed >= 1000)
	{
		//ModEvent(Packet);
		if(strncmp((char*)mob->Name,"Kefra",5) == 0)
		{
			SendClientMsg(p->killer,"!Você derrotou o Kefra.");
			SendNotice("Kefra foi derrotado.");
			kefr = 0;
			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)KefDead, NULL, 0, 0);
		}
		else
		{
			//Evento(p->killer);
		}

	}

}
*/
void ModEvent2(int morto)
{
	MOB *mob = (MOB*)GetMobFromIndex(morto);
	int killer = 0;

	if(strcmp((char*)mob->Name,"PLich_") == 0)
	{
		Pista0_2(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLich1") == 0)
	{
		Pista0_2(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLich") == 0)
	{
		Pista0_2(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"_PLich") == 0)
	{
		Pista0_2(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer1") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer2") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer3") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer4") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer5") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer6") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer7") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer8") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer9") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"PLugefer10") == 0)
	{
		Pista0_1(killer,(char*)mob->Name);
	}
	if(strcmp((char*)mob->Name,"Tower of Thor") == 0)
	{
		if(mob->srcX == 3418 && mob->srcY == 1582)
		{
			Pista1_1(killer,(char*)mob->Name);
		}
		else if(mob->srcX == 3386 && mob->srcY == 1548)
		{
			Pista1_1(killer,(char*)mob->Name);
		}
		else if(mob->srcX == 3358 && mob->srcY == 1582)
		{
			Pista1_1(killer,(char*)mob->Name);
		}
		else
		{
			//Guerra de Noatun
		}
	}
}

void MobEventDead2(BYTE *packetBuffer)
{
	p165 *p = (p165*)packetBuffer;

	if(p->type == 1 && p->Header.ClientID >= 1000)
	{
		ModEvent2(p->Header.ClientID);
	}
}
void Evento(int ClientID)
{
	char msg[255];
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int slot = GetFirstSlotSADD(ClientID,0,64);
	int OnOff = PByte(0x04BFF98), EventPP = PByte(0x04BFF99);
	{
		if(eventonovo >= 0) // Limite de itens
		{
			if(slot != -1)
			{
				player->Inventory[slot].Index =	0; // Item a ser dropado
				eventonovo = 0;
				sprintf(msg,"Player %s dropou o Primeiro Pedaço do Mapa do Jovem Rei.",player->Name);
				SendNotice(msg);
				SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
				SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
				return;
			}
			else
			{
				SendClientMsg(ClientID,"Não a espaço no inventorio.");
				eventonovo = 0;
				return;
			}
		}
		else
		{
			eventonovo += 1;
			return;
		}
	}
}