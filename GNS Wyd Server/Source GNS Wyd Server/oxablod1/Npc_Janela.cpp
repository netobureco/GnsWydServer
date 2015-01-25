#include "Stdafx.h"


void NpcJanela(char *Packet)//Deseja continuar ? (sim/nao)"
{
	p28B *p = (p28B*)Packet;

	MOB *player = (MOB*)GetMobFromIndex(p->Header.ClientID);
	MOB *npc = (MOB*)GetMobFromIndex(p->npcid);

	if(p->ClickOk == 1)
	{
		switch(npc->Merchant)
		{
			case 42:
				Merchant42(p->Header.ClientID,p->npcid);
				ZeroMemory((short*)Packet, *(short*)Packet);
				break;

			case 74:
				ZeroMemory((short*)Packet, *(short*)Packet);
				break;

			case 19:
				//ZeroMemory((short*)Packet, *(short*)Packet);
				break;


			default:
				SendSay(p->npcid,"Ainda não estou disponivel.");
				break;
		}
	}

	return;
}

void Merchant42(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	MOB *npc = (MOB*)GetMobFromIndex(npcid);

	if (npc->Merchant == 42)
    {
		switch (npc->bStatus.Level)
        {
			case 1: //NPC Coveiro
				Quest_Cemiterio(ClientID, npcid);
				break;

			case 2: //NPC Jardim
				Quest_Jardim(ClientID, npcid);
				break;

			case 3: //NPC Kaizen
				Quest_Kaizen(ClientID, npcid);
				break;

			case 4: //NPC Hidra
				Quest_Hidra(ClientID, npcid);
				break;

			case 5: //NPC Elfos
				Quest_Elfo(ClientID, npcid);
				break;

			case 13:
				Kibita(ClientID, npcid);
				break;

			case 15:
				GodGover(ClientID, npcid);
				break;

			case 17:
				JuntaImortalidade(ClientID,npcid);
				break;
			case 28:
				MestreHabilidade(ClientID,npcid);
				break;
			case 29:
				ComporIdeal(ClientID,npcid);
				break;
			case 37:
				Ordem_Vento(ClientID,npcid);
				break;
			case 38:
				Ordem_Terra(ClientID,npcid);
				break;
			case 39:
				Ordem_Agua(ClientID,npcid);
				break;
			case 40:
				Ordem_Sol(ClientID,npcid);
				break;
				case 41:
				MestreGrifo(ClientID,npcid);
				break;
				case 42:
				Compor_Pedra_ReturnofGlory(ClientID,npcid);
				break;
				case 45:
				ReturnofGlory(ClientID,npcid);
				break;
				case 201:
				saldo(ClientID,npcid);
				break;
				case 202:
				QntdeGold(ClientID,npcid);
				break;
			default:
				SendSay(npcid, "Em Construçao !!!!");
				break;
		}
	}
	return;
}

