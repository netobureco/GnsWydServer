#include "Stdafx.h"

void Selo_do_guerreiro(int clientid)
{
	Atualizar ;
	FILE *arquivo;
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	char quest[100];
	char Fama[100];
	char fama[100];
	char fama2[100];
	char line[100];
	int itenslot = GetFirstSlotSADD(clientid,3274,64);
	int fame = PByte(0x04BFBA5); 
	int var;
	sprintf(quest,"DataBase/Fama/Fama_de_[%s].xml", player->Name);
	if(file_exists(quest))
	{
	    arquivo = fopen(quest, "r");
        while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
        fgetc(arquivo);
        int Fama3;
        sscanf(line, "%d",&Fama3);
		Fama3 += 10;
		arquivo = fopen(quest, "w");
		sprintf(fama,"%d", Fama3);
		fputs(fama, arquivo);
			sprintf(fama2,"Gerado 10 de Fama.", fame);
			SendClientMsg(clientid,fama2);
			fclose(arquivo);
			(clientid,"usou o item [Selo do Guerreiro].");
			player->Inventory[itenslot].Index = 0;
			SendALL(clientid);
			return;
	}
	else
	{
		arquivo = fopen(quest, "w");
		var = 10;
		sprintf(fama,"%d", var);
		fputs(fama, arquivo);
		fputs(fama, arquivo);
			sprintf(fama2,"Gerado 10 de Fama.", fame);
			SendClientMsg(clientid,fama2);
			fclose(arquivo);
			(clientid,"usou o item [Selo do Guerreiro].");
			player->Inventory[itenslot].Index = 0;
			SendALL(clientid);
			return;
		return;
	}
}