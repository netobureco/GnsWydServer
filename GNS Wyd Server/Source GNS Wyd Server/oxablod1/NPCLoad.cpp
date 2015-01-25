#include "Stdafx.h"

#include "BaseExp.h"



void eventos(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	MOB *npc = (MOB*)GetMobFromIndex(npcid);

	int rate = rand() % 100;

	int slot = GetFirstSlotSADD(ClientID,0,64);
	int sorte = GetFirstSlotSADD(ClientID,4055,64);//Medalha Verde
	int bau5 = GetFirstSlotSADD(ClientID,4054,64);//Medalha Azul
	int bau6 = GetFirstSlotSADD(ClientID,4053,64);//Medalha vermelha
	int bau7 = GetFirstSlotSADD(ClientID,4052,64);//Medalha Roxa

	if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	if(npc->bStatus.STR == 101)//Primeira troca, primeiro npc
	{
		if(sorte != -1)
		{
			if(rate < 55)
			{
				player->Inventory[slot].Index = 3173;//Pergaminho Agua (N)
				player->Inventory[slot].EF1 = 61;
				player->Inventory[slot].EFV1 = 5;
			}
			else if(rate < 65)
			{
				player->Inventory[slot].Index = 3182;
				player->Inventory[slot].EF1 = 61;
				player->Inventory[slot].EFV1 = 2;
			}
			else if(rate < 97)
			{
				player->Inventory[slot].Index = 4054;//Medalha Azul
				
			}
			else if(rate < 75)
			{
				player->Inventory[slot].Index = 578;//Adamantita
			
			}
			memset(&player->Inventory[sorte],0x00,sizeof(st_Item));
			SendALL(ClientID);
		}
		else
		{
			SendSay(npcid,"Preciso de 01 Medalha Verde ");
		}
	}
	else if(npc->bStatus.STR == 102)
	{
		if(bau5 != -1)//segunda troca
		{
			if(rate < 55)
			{
				player->Inventory[slot].Index = 4028;//Moeda de Prata 10MI
				
			}
			else if(rate < 65)
			{
				player->Inventory[slot].Index = 777;//Pergaminho Agua M
				player->Inventory[slot].EF1 = 61;
				player->Inventory[slot].EFV1 = 5;
				
			}
			else if(rate < 75)
			{
				player->Inventory[slot].Index = 3172;//Carta de Duelo N
				
			}
			else if(rate < 97)
			{
				player->Inventory[slot].Index = 4053;//Medalha Vermelha
				
			}
			memset(&player->Inventory[bau5],0x00,sizeof(st_Item));
			SendALL(ClientID);
		}
		else
		{
			SendSay(npcid,"Preciso de 01 Medalha_Azul.");
		}
	}
	else if(npc->bStatus.STR == 103)
	{
		if(bau6 != -1 )//terceira troca
		{
			if(rate < 55)//
			{
				player->Inventory[slot].Index = 413;//Poeira de lac
				player->Inventory[slot].EF1 = 61;
				player->Inventory[slot].EFV1 = 5;
			}
			else if(rate < 65)//
			{
				
				player->Inventory[slot].Index = 412;//Peoira de ORI
				player->Inventory[slot].EF1 = 61;
				player->Inventory[slot].EFV1 = 10;
			}
			else if(rate < 75)
			{
				player->Inventory[slot].Index = 3326;//PEsadelo A
				
			}
			else if (rate < 97)//
			{
				player->Inventory[slot].Index = 4052;//Medalha Roxa
		
			}
			memset(&player->Inventory[bau6],0x00,sizeof(st_Item));
			SendALL(ClientID);
		}
		else
		{
			SendSay(npcid,"Preciso de 01 Medalha_Vermelha.");
		}
	}
	else if(npc->bStatus.STR == 104)
	{
		if(bau7 != -1 )
		{
			if(rate < 15)
			{
				player->Inventory[slot].Index = 4140;//Bau de Exp
				
			}
			else if (rate < 40)
			{
				player->Inventory[slot].Index = 3314;//Frango
				
			}
			else if(rate < 42)
			{
				player->Inventory[slot].Index = 2379;//tigre de fogo
				player->Inventory[slot].EF1 = 100;
				player->Inventory[slot].EFV1 = 100;
				player->Inventory[slot].EF2 = 0;//level
				player->Inventory[slot].EFV2 = 20;//vita
				player->Inventory[slot].EF3 = 100;//raçao
				player->Inventory[slot].EFV3 = 0;
				
			}
			else if(rate < 53)
			{
				player->Inventory[slot].Index = 4051;//MEdalha Dourada
		
			}
			memset(&player->Inventory[bau7],0x00,sizeof(st_Item));
			SendALL(ClientID);
		}
		else
		{
			SendSay(npcid,"Preciso de 01 Roxa.");
		}
	}
	
	else
	{
		SendSay(npcid,"Um erro está ocorrendo.");
	}
}
//Funções dos NPCs
void NPCFunc(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	MOB *npc = (MOB*)GetMobFromIndex(npcid);


	if (npc->Merchant == 30)
    {
		switch (npc->bStatus.Level)
        {
        
		case 6:
			Juli(ClientID,npcid);
			break;
		case 7:
			Juli2(ClientID,npcid);
			break;
		case 8:
			Capaverde(ClientID,npcid);
			break;
		case 9:
			KingdomBroker(ClientID,npcid);
			break;
		case 10:
			Quest_CapaVerde(ClientID,npcid);
			break;
		case 11:
			LiderAprend(ClientID,npcid);
			break;
		case 55:
			TrocaArmas(ClientID,npcid);
			break;
		case 15:
			LevaKaiz(ClientID,npcid);
			break;
		case 16:
			LevaHid(ClientID,npcid);
			break;
		case 17:
			ResetStatus(ClientID,npcid);
			break;
		case 18:
			//eventos(ClientID,npcid);
			SendSay(npcid, "Sem Eventos Disponível ");
			break;
		case 19:
			Uxmal(ClientID,npcid);
			break;
		case 20:
			NPCI(ClientID,npcid);
			break;
		case 455:
			ArchRei(ClientID,npcid);
			break;
		case 21:
			NPCII(ClientID,npcid);
			break;
		case 22:
			NPCIII(ClientID,npcid);
			break;
		case 23:
			NPCIV(ClientID,npcid);
			break;
		case 30:
			NPCV(ClientID,npcid);
			break;
		case 31:
			NPCVI(ClientID,npcid);
			break;
		case 32:
			TrocaMedalhas(ClientID,npcid);
			break;
		case 185:
			PerzenN(ClientID,npcid);
			break;
        case 186:
			PerzenM(ClientID,npcid);
			break;
        case 187:
			PerzenA(ClientID,npcid);
			break;
		case 37:
			EventoSemanal(ClientID,npcid);
		    break;
		case 38:
			EventoSemanal1(ClientID,npcid);
			break;
		case 39:
			EventoSemanal2(ClientID,npcid);
			break;
		case 43:
			EventoSemanal3(ClientID,npcid);
			break;
		case 44:
			EventoSemanal4(ClientID,npcid);
			break;
		case 24:
			Arch(ClientID,npcid);
			//Capas(ClientID,npcid);
			break;
		case 25: // capa azul
			Blue_Cape(ClientID, npcid);
			break;
		case 26: // capa vermelha
			Red_Cape(ClientID,npcid);
			break; 
		case 29:
			ComporIdeal(ClientID,npcid);
			break;
		case 42:
			Compor_Pedra_ReturnofGlory(ClientID,npcid);
			break;
		case 45:
				ReturnofGlory(ClientID,npcid);
				break;
		case 100:
			Premium_UP(ClientID,npcid);
			break;
		case 200:
			Free_UP(ClientID,npcid);
			break;
		case 201:
			saldo(ClientID,npcid);
			break;
		case 202:
			QntdeGold(ClientID,npcid);
			break;

        default:
            SendSay(npcid, "Estou sem função ainda!");
        }
    }
}
void Third(int ClientID, int npcid)
{
	MOB *play = (MOB*)GetMobFromIndex(ClientID);
	int chave = GetFirstSlotSADD(ClientID,453,64);
	int slot = GetFirstSlotSADD(ClientID,0,64);
	if(play->bStatus.Level <= 33 && play->Equip[0].EFV2 == 1)
	{
		if(chave != -1)
		{
			play->Inventory[slot].Index = 503;
			SendSay(npcid,"Chegou item [Rubi do Carbuncle].");
			SendALL(ClientID);
		}
		else
		{
			SendSay(npcid,"Necessito da chave.");
		}
	}
}

void Second(int ClientID, int npcid)
{
	MOB *play = (MOB*)GetMobFromIndex(ClientID);
	int chave = GetFirstSlotSADD(ClientID,452,64);
	if(play->bStatus.Level <= 33 && play->Equip[0].EFV2 == 1)
	{
		if(chave != -1)
		{
			play->Equip[6].EFV1 = 6;
			play->Equip[7].EFV1 = 6;
			SendItens(ClientID,6);
			SendItens(ClientID,7);
			SendSay(npcid,"Armas refinadas para +6.");
			SendALL(ClientID);
			SendEffect(1,0xe ,ClientID);
		}
		else
		{
			SendSay(npcid,"Necessito da chave.");
		}
	}
}
void Chief(int ClientID, int npcid)
{
	MOB *play = (MOB*)GetMobFromIndex(ClientID);
	int chave = GetFirstSlotSADD(ClientID,451,64);
	if(play->bStatus.Level <= 33 && play->Equip[0].EFV2 == 1)
	{
		if(chave != -1 && play->Exp < exp_Mortal_Arch[34])
		{
			play->Exp = exp_Mortal_Arch[34];
			SendSay(npcid,"Você atingiu experiência suficiente para o level 35.");
			SendALL(ClientID);
			GetCurrentScore(ClientID);
			SendStats(ClientID);
			SendScore(ClientID);
			SendEquip(ClientID);
			SendEffect(1,0xe ,ClientID);
		}
		else
		{
			SendSay(npcid,"Necessito da chave.");
		}
	}
}
int NPCFunc2(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	MOB *npc = (MOB*)GetMobFromIndex(npcid);


	if (npc->Merchant == 10)
    {
		switch (npc->bStatus.Level)
        {
		case 0:
			return 0;
			break;
       
		case 6:
			Juli(ClientID,npcid);
			return 1;
			break;
		case 7:
			Juli2(ClientID,npcid);
			return 1;
			break;
		case 8:
			Capaverde(ClientID,npcid);
			return 1;
			break;
		case 9:
			KingdomBroker(ClientID,npcid);
			return 1;
			break;
		case 10:
			Quest_CapaVerde(ClientID,npcid);
			return 1;
			break;
		case 11:
			LiderAprend(ClientID,npcid);
			return 1;
			break;
		case 12:
			TrocaArmas(ClientID,npcid);
			return 1;
			break;
	
		case 15:
			LevaKaiz(ClientID,npcid);
			return 1;
			break;

		case 16:
			LevaHid(ClientID,npcid);
			return 1;
			break;
		
		case 18:
			Third(ClientID,npcid);
			return 1;

		case 19:
			Second(ClientID,npcid);
			return 1;

		case 20:
			Chief(ClientID,npcid);
			return 1;
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
			case 42:
			Compor_Pedra_ReturnofGlory(ClientID,npcid);
			break;
			case 45:
				ReturnofGlory(ClientID,npcid);
				break;
        default:
            SendSay(npcid, "Estou sem função ainda!");
			return 1;
        }
    }
	return 0;
}


