#include "Stdafx.h"



//Composição Pista de Runas
static int cPistaRunas[7] = {413,413,413,413,413,413,413};
void PistaRunas(int ClientID, BYTE slot[7]){

	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int Result = CompositionValidt(ClientID,7,slot,cPistaRunas);
	if(Result != 0){
		for(int a = 0; a < 7; a++)
			memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));

		player->Inventory[slot[0]].Index = 5134;

		SendALL(ClientID);
		SendClientMsg(ClientID,"Criaçao de Pista runas .");
	}else{

		SendClientMsg(ClientID,"Composição incorreta.");	
	}
	SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
	return;
}

//Composição Secreta Sol
static int cSecretaSol[7] = {5110,5124,5117,5129,5114,5125,5128};
void SecretaSol(int ClientID, BYTE slot[7]){

	srand(time_t(NULL));
    int tempo = abs(rand()) % 100;

	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int Result = CompositionValidt(ClientID,7,slot,cSecretaSol);
	
	if(player->Gold < 1999999){
		SendClientMsg(ClientID,"Gold insuficiente.");
	}
	else if(Result == 1){
		if(tempo < 95){
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
			
			player->Inventory[slot[0]].Index = 5336;
			player->Gold -= 2000000;

			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Sol concluída.");
		}
		else{
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
		
			player->Gold -= 2000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Falhou.");
		}
	}
	else if(Result == 2){
		if(tempo < 5){
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
			
			player->Inventory[slot[0]].Index = 5336;
			player->Gold -= 2000000;

			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Sol concluída.");
		}
		else{
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
		
			player->Gold -= 2000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Falhou.");
		}
	}
	else{
		SendClientMsg(ClientID,"Composição incorreta.");
	}
	SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
	return;
}

//Composição Secreta Terra
static int cSecretaTerra[7] = {5131,5113,5115,5116,5125,5112,5114};
void SecretaTerra(int ClientID, BYTE slot[7]){

	srand(time_t(NULL));
    int tempo = abs(rand()) % 100;

	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int Result = CompositionValidt(ClientID,7,slot,cSecretaTerra);
	
	if(player->Gold < 1999999){
		SendClientMsg(ClientID,"Gold insuficiente.");
	}
	else if(Result == 1){
		if(tempo < 95){
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
			
			player->Inventory[slot[0]].Index = 5335;
			player->Gold -= 2000000;

			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Terra concluída.");
		}
		else{
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
		
			player->Gold -= 2000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Falhou.");
		}
	}
	else if(Result == 2){
		if(tempo < 5){
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
			
			player->Inventory[slot[0]].Index = 5335;
			player->Gold -= 2000000;

			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Terra concluída.");
		}
		else{
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
		
			player->Gold -= 2000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Falhou.");
		}
	}
	else{
		SendClientMsg(ClientID,"Composição incorreta.");
	}
	SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
	return;
}

//Composição Secreta Agua
static int cSecretaAgua[7] = {5126,5122,5121,5114,5125,5111,5118};
void SecretaAgua(int ClientID, BYTE slot[7]){

	srand(time_t(NULL));
    int tempo = abs(rand()) % 100;

	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int Result = CompositionValidt(ClientID,7,slot,cSecretaAgua);
	
	if(player->Gold < 1999999){
		SendClientMsg(ClientID,"Gold insuficiente.");
	}
	else if(Result == 1){
		if(tempo < 95){
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
			
			player->Inventory[slot[0]].Index = 5334;
			player->Gold -= 2000000;

			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Agua concluída.");
		}
		else{
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
		
			player->Gold -= 2000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Falhou.");
		}
	}
	else if(Result == 2){
		if(tempo < 5){
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
			
			player->Inventory[slot[0]].Index = 5334;
			player->Gold -= 2000000;

			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Agua concluída.");
		}
		else{
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
		
			player->Gold -= 2000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Falhou.");
		}
	}
	else{
		SendClientMsg(ClientID,"Composição incorreta.");
	}
	SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
	return;
}

//Composição Secreta vento
static int cSecretaVento[7] = {5122,5119,5132,5120,5130,5133,5123};
void SecretaVento(int ClientID, BYTE slot[7]){

	srand(time_t(NULL));
    int tempo = abs(rand()) % 100;

	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int Result = CompositionValidt(ClientID,7,slot,cSecretaVento);
	
	if(player->Gold < 1999999){
		SendClientMsg(ClientID,"Gold insuficiente.");
	}
	else if(Result == 1){
		if(tempo < 95){
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
			
			player->Inventory[slot[0]].Index = 5337;
			player->Gold -= 2000000;

			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Vento concluída.");
		}
		else{
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
		
			player->Gold -= 2000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Falhou.");
		}
	}
	else if(Result == 2){
		if(tempo < 5){
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
			
			player->Inventory[slot[0]].Index = 5337;
			player->Gold -= 2000000;

			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Vento concluída.");
		}
		else{
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
		
			player->Gold -= 2000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição Falhou.");
		}
	}
	else{
		SendClientMsg(ClientID,"Composição incorreta.");
	}
	SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
	return;
}

//Refina a capa celestial/ sub cele / hc
static int cRefCapa[7] = {4127,4127,5135,413,413,413,413};
void RefiCapa(int ClientID, BYTE slot[7])
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int Result = CompositionValidt(ClientID,7,slot,cRefCapa);
	
	if(Result == 1){
		if(player->Equip[15].Index == 3197 || player->Equip[15].Index == 3198 || player->Equip[15].Index == 3199){
			if(player->Equip[15].EFV1 <= 8){
				for(int a = 0; a < 7; a++)
					memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));

				
				player->Equip[15].EF1 = 43;
				player->Equip[15].EFV1 += 1;
				player->Equip[15].EF2 =  0;
				player->Equip[15].EFV2 = 0;
				player->Equip[15].EF3 =  0;
				player->Equip[15].EFV3 = 0;
				SendALL(ClientID);
				SendEquip(ClientID);
				SendItens(ClientID, 15);
				SendClientMsg(ClientID, "Foi Adicionado + Uma Refinação na sua Capa .");
			}
			else{
				SendClientMsg(ClientID, "Sua capa tem de estar com refinação inferior a +9.");
			}
		}
		else{
			SendClientMsg(ClientID, "Sua capa não é uma capa valida.");
		}
	}
	else{
		SendClientMsg(ClientID, "Composição incorreta.");
	}
	SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
	return;
}

//Desbloquear LVL 40 Cele / Sub Cele
static int cDesbloq40[7] = {4127,4127,5135,5113,5129,5112,5110};
void DesbloqLvL40(int ClientID, BYTE slot[7])
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int Result = CompositionValidt(ClientID,7,slot,cDesbloq40);
	
	if(Result != 0){
		player->Equip[0].EFV2 = 3;
		player->bStatus.Level = 39;
		if(player->Equip[0].EFV2 == 3 || player->Equip[0].EFV2 == 4){
			if(player->bStatus.Level == 39){
				if(CCont[ClientID].Acont[CCont[ClientID].CharSlot].QuestInfo[0] == 0){
					for(int a = 0; a < 7; a++)
						memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));
					CCont[ClientID].Acont[CCont[ClientID].CharSlot].QuestInfo[0] = 1;
					SendALL(ClientID);
					SendClientMsg(ClientID,"Celestial Foi Desbloqueado.");
				}
				else{
					SendClientMsg(ClientID,"Você já desbloqueou o level 40.");
				}
			}
			else{
				SendClientMsg(ClientID,"Desbloqueio apenas para lvl 40");
			}
		}
		else{
			SendClientMsg(ClientID,"Desbloqueio apenas para Celestiais / Sub Celestiais.");
		}
	}
	else{
		SendClientMsg(ClientID, "Composição incorreta.");
	}
	SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
	return;
}

//Cria o Item Pedra da Furia [3020], para desbloquear lvl 90
static int cDesbloq90[7] = {5125,5115,5111,5112,5120,5128,5119};
void DesbloqLvL90(int ClientID, BYTE slot[7])
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int Result = CompositionValidt(ClientID,7,slot,cDesbloq90);

	srand(time_t(NULL));
    int tempo = abs(rand()) % 100;

	if(Result == 1){
		if(tempo < 95){
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));

			player->Inventory[slot[0]].Index = 3020;

			SendALL(ClientID);
			SendClientMsg(ClientID, "Composição Concluída.");
		}
		else{
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));

			SendALL(ClientID);
			SendClientMsg(ClientID, "Composição falhou.");
		}
	}
	else if(Result == 2){
		if(tempo < 5){
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));

			player->Inventory[slot[0]].Index = 3020;

			SendALL(ClientID);
			SendClientMsg(ClientID, "Composição Concluída.");
		}
		else{
			for(int a = 0; a < 7; a++)
				memset(&player->Inventory[slot[a]],0x00,sizeof(st_Item));

			SendALL(ClientID);
			SendClientMsg(ClientID, "Composição falhou.");
		}
	}
	else{
		SendClientMsg(ClientID, "Composição incorreta.");
	}
	SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
	return;
}

void Odin(char *Packet)
{
	sOdin *p = (sOdin*)Packet;
	MOB *player = (MOB*)GetMobFromIndex(p->Header.ClientID);
	MOB *thisclient = (MOB*)GetMobFromIndex(Packet[6]);
	short ClientID = Packet[6];
	short emb1 = Packet[76], emb2 = Packet[77], item = Packet[78], ref1 = Packet[79], ref2 = Packet[80], ref3 = Packet[81], ref4 = Packet[82];
	char tmp[1024], tmp2[1024], msg[100];
	int RefDoItem = GetItemSanc(ClientID,1,item);
	int RefDaRef1 = GetItemSanc(ClientID,1,ref1);
	int RefDaRef2 = GetItemSanc(ClientID,1,ref2);
	int RefDaRef3 = GetItemSanc(ClientID,1,ref3);
	int RefDaRef4 = GetItemSanc(ClientID,1,ref4);
	int chance = rand() % 100; 
	int refatual = PegaRef(ClientID, item);
	srand(time(NULL));
	srand(time(NULL) / 5 * (rand() % 500) * 5);
	// Refinação +12 ~ +15 Tentativa com 2 Emblema da proteçao
	if(thisclient->Inventory[emb1].Index == 4043 || thisclient->Inventory[emb1].Index == 3448 || thisclient->Inventory[emb2].Index == 4043 || thisclient->Inventory[emb2].Index == 3448)
	{
		if(PegaRef(ClientID, item) == 15)
		{
			SendClientMsg(ClientID, "Refinação Máxima!");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		} 
		else
		{
			int chance = rand() % 100;
			int chance_total;
			chance_total = ReturnChance(ClientID, ref1, refatual) + ReturnChance(ClientID, ref2, refatual) +
				ReturnChance(ClientID, ref3, refatual) + ReturnChance(ClientID, ref4, refatual) - (PegaRef(ClientID, item) - 10);
			if((thisclient->Inventory[emb1].Index == 4043) && (thisclient->Inventory[emb2].Index == 4043)) // Item protegido
			{
				if(chance<=chance_total && chance <= 95) // Sucesso na refinação
				{
					thisclient->Inventory[emb1].Index = 0;
					thisclient->Inventory[emb2].Index = 0;
					thisclient->Inventory[ref1].Index = 0;
					thisclient->Inventory[ref2].Index = 0;
					thisclient->Inventory[ref3].Index = 0;
					thisclient->Inventory[ref4].Index = 0;
					thisclient->Inventory[item].EFV1 += 4;
					sprintf(tmp, "Sucesso na composição [%d/%d]", chance, chance_total);
					SendClientMsg(ClientID, tmp);
					SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
				    SendALL(ClientID);
				}
				else if(chance >= 95 && chance <= 100)// Aconteceu uma tragédia. Extração, amigo!
				{
					thisclient->Inventory[emb1].Index = 0;
					thisclient->Inventory[emb2].Index = 0;
					thisclient->Inventory[ref1].Index = 0;
					thisclient->Inventory[ref2].Index = 0;
					thisclient->Inventory[ref3].Index = 0;
					thisclient->Inventory[ref4].Index = 0;
					thisclient->Inventory[item+1].Index = GetItemType(ClientID, thisclient->Inventory[item].Index);
					thisclient->Inventory[item+1].EF1 = thisclient->Inventory[item].EF1;
					thisclient->Inventory[item+1].EF2 = thisclient->Inventory[item].EF2;
					thisclient->Inventory[item+1].EF3 = thisclient->Inventory[item].EF3;
					thisclient->Inventory[item+1].EFV1 = thisclient->Inventory[item].EFV1;
					thisclient->Inventory[item+1].EFV2 = thisclient->Inventory[item].EFV2;
					thisclient->Inventory[item+1].EFV3 = thisclient->Inventory[item].EFV3;
					thisclient->Inventory[item].Index = 0;
					sprintf(tmp, "Houve uma falha durante a composição (%d/%d) - Item destruído", chance, chance_total);
					SendClientMsg(ClientID, tmp);
					SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
				    SendALL(ClientID);
				}
				else 
				{
					thisclient->Inventory[emb1].Index = 0;
					thisclient->Inventory[emb2].Index = 0;
					thisclient->Inventory[ref1].Index = 0;
					thisclient->Inventory[ref2].Index = 0;
					thisclient->Inventory[ref3].Index = 0;
					thisclient->Inventory[ref4].Index = 0;
					thisclient->Inventory[item].EFV1 -= 4;
					sprintf(tmp, "Houve uma falha durante a composição (%d/%d)", chance, chance_total);
					SendClientMsg(ClientID, tmp);
					SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
				    SendALL(ClientID);
				}
			} 
			else 
			{
					
				// Não são emblemas - Chance de quebrar
				//5110, 5124, 5117, 5129, 5114, 5125,5128.
			}
		} // Não é refinação máxima
	}
	else if(CompositionValidt(p->Header.ClientID,7,p->slot,cRefCapa))
	{
		RefiCapa(p->Header.ClientID,p->slot);
		return;
	}	
	else if(CompositionValidt(p->Header.ClientID,7,p->slot,cPistaRunas))
	{
		PistaRunas(p->Header.ClientID,p->slot);
		return;
	}	
	else if(CompositionValidt(p->Header.ClientID,7,p->slot,cSecretaSol))
	{
		SecretaSol(p->Header.ClientID,p->slot);
		return;
	}	
	else if(CompositionValidt(p->Header.ClientID,7,p->slot,cSecretaTerra))
	{
		SecretaTerra(p->Header.ClientID,p->slot);
		return;
	}	
	else if(CompositionValidt(p->Header.ClientID,7,p->slot,cSecretaAgua))
	{
		SecretaAgua(p->Header.ClientID,p->slot);
		return;
	}	
	else if(CompositionValidt(p->Header.ClientID,7,p->slot,cSecretaVento))
	{
		SecretaVento(p->Header.ClientID,p->slot);
		return;
	}
	
	else if(CompositionValidt(p->Header.ClientID,7,p->slot,cDesbloq40))
	{
		DesbloqLvL40(p->Header.ClientID,p->slot);
		return;
	}	
	else if(CompositionValidt(p->Header.ClientID,7,p->slot,cDesbloq90))
	{
		DesbloqLvL90(p->Header.ClientID,p->slot);
		return;
	}
	else
	{
		SendClientMsg(p->Header.ClientID, "Composição Invalida");
		SendClientSignalParm(p->Header.ClientID,0x7530, 0x3A7, 2);
		return;
	}
}