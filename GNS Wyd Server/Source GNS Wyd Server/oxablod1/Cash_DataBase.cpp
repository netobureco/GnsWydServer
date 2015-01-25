#include "Stdafx.h"

/*
int vercash(int clientid)
{
	FILE *arquivo;
	char fama[100];
	char line[100];
	int famaplayer = 0, famee = 0;
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	sprintf(fama,"config/cash/cash_de_[%s].txt", vLogin(clientid));
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
	return 0;
}
void menoscash(int clientid, int valorcash)
{
	FILE *arquivo;
	char selado[100];
	char selado3[100];
	char line[100];
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	sprintf(selado,"config/cash/cash_de_[%s].txt",vLogin(clientid));
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
}
void maiscash(int clientid, int valorcash)
{
	FILE *arquivo;
	char selado[100];
	char selado3[100];
	char line[100];
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	sprintf(selado,"config/cash/cash_de_[%s].txt",vLogin(clientid));
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
}
void LogForAllCash(int clientid, char *frase)
{
	int cMes = PInt(0x00A5EA420);
	int cDia = PInt(0x00A5EA41c);
	int cHor = PInt(0x00A5EA418);
	int cMin = PInt(0x00A5EA414);
	int cSeg = PInt(0x00A5EA410);
	MOB *thisc = (MOB*)GetMobFromIndex(clientid);
		FILE *fp;
		int i = 0;

		fp = fopen("LogCash.txt", "at");

		if(fp != NULL)
		{
			fprintf(fp, "%d/%d %d:%d:%d clientid: %d login: %s personagem: %s --> %s", cDia,cMes+1,cHor,cMin,cSeg,clientid,vLogin(clientid),thisc->Name,frase);
			fprintf(fp, "%\n");
			fclose(fp);
		}
	printf("%d:%d:%d char:%s --> %s\n",cHor,cMin,cSeg,thisc->Name,frase);
}
*/