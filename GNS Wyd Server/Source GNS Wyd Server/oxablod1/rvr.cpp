#include "Stdafx.h"


void criafama(int ClientID)
{
	FILE *arquivo;
	char selado[100];
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	sprintf(selado,"config/fama/fama_de_[%s].txt", vLogin(ClientID));
	if(file_exists(selado))
	{
		return;
	}
	arquivo = fopen(selado, "w");
	if(arquivo != NULL)
	{
		char text[] = "0";
		fputs(text, arquivo);
		fclose(arquivo); 
		return;
	}
}

int verfama(int ClientID)
{
	FILE *arquivo;
	char fama[100];
	char line[2048];
	int famaplayer = 0, famee = 0;
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	sprintf(fama,"config/fama/fama_de_[%s].txt",vLogin(ClientID));
	if(file_exists(fama))
	{
		arquivo = fopen(fama, "r");
		while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
		{
			int var = 0;
			fgetc(arquivo);
			sscanf(line, "%d",&famaplayer);
			{
				famee = famaplayer;
				fclose(arquivo);
				return famee;
			}
		}	
	}
	criafama(ClientID);
	return 0;
}
void menosfama(int ClientID, int valorcash)
{
	FILE *arquivo;
	char selado[100];
	char selado3[100];
	char line[100];
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	sprintf(selado,"config/fama/fama_de_[%s].txt",vLogin(ClientID));
	if(file_exists(selado))
	{
		arquivo = fopen(selado, "r");
		while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
		{
		int var = 0;
		fgetc(arquivo);
		int sel;
		sscanf(line, "%d",&sel);
		{
			sel -= valorcash;
			var += sel;
			fclose(arquivo);
			arquivo = fopen(selado, "w");
			sprintf(selado3,"%d",var);
			fputs(selado3, arquivo);
			fclose(arquivo);
		}
		}
		return;
	}
	criafama(ClientID);
}
void maisfama(int ClientID, int valorcash)
{
	criafama(ClientID);
	FILE *arquivo;
	char selado[100];
	char selado3[100];
	char line[100];
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	sprintf(selado,"config/fama/fama_de_[%s].txt",vLogin(ClientID));
	if(file_exists(selado))
	{
		arquivo = fopen(selado, "r");
		while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
		{
		int var = 0;
		fgetc(arquivo);
		int sel;
		sscanf(line, "%d",&sel);
		{
			sel += valorcash;
			var += sel;
			fclose(arquivo);
			arquivo = fopen(selado, "w");
			sprintf(selado3,"%d",var);
			fputs(selado3, arquivo);
			fclose(arquivo);
		}
		}
		return;
	}
}
void NasceRvR1(int ClientID)
{
	MOB *play = (MOB*)GetMobFromIndex(ClientID);
	int contadorRED = PByte(0x488030);
	int contadorBLU = PByte(0x488031);
	int itenslot = GetFirstSlotSADD(ClientID,0,64);
	SendClientMsg(ClientID,"Clique no Restats para receber seus pontos.");
	play->MasterPoint = 1020;
	play->SkillPoint = 9999;
	GetCurrentScore(ClientID);
	SendStats(ClientID);
	SendScore(ClientID);
	SendEquip(ClientID);
	if(contadorRED >= contadorBLU)
	{
		play->Equip[15].Index = 3197;//capa blue
		SendItens(ClientID,15);
		DoTeleport(ClientID,1064,2136);
		PByte(0x488031) += 1;
		play->Equip[12].Index = 508;
		play->Equip[12].EF1 = 56;
		play->Equip[12].EFV1 = 10;
		play->Equip[12].EF2 = 57;
		play->Equip[12].EFV2 = 10;
		SendItens(ClientID,12);
		return;
	}
	play->Equip[15].Index = 3198;//capa red
	SendItens(ClientID,15);
	DoTeleport(ClientID,1234,1960);
	PByte(0x488030) += 1;
	play->Equip[12].Index = 508;
	play->Equip[12].EF1 = 56;
	play->Equip[12].EFV1 = 11;
	play->Equip[12].EF2 = 57;
	play->Equip[12].EFV2 = 11;
	SendItens(ClientID,12);
}