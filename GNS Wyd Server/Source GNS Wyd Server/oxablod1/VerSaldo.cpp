#include "stdafx.h"

void saldo(int clientid,int npcid) 
{
FILE *arquivo;
MOB *player = (MOB*)GetMobFromIndex(clientid);
char search[100];
char cash[100];
int cashh = PByte(0x04BFBA5); 
char local[100], line[120], msg[100]; 
int var;
 
	FILE *arq; 
	sprintf(search,"DataBase\\Cash\\%s.txt",vLogin(clientid));
	arq=fopen(local,"r"); 
	if(arq != NULL) 
	{ 
		while((fscanf(arq, "%[^\n]", line)) != EOF)
		{
			fgetc(arq); sscanf(line,"%d",&cash);
		} 
		fclose(arq);
		if(cash != 0)
		{ 
			sprintf(msg,"Você possui [%d] de Donate.",cash); 
			SendClientMsg(clientid,msg);
			return; 
		} 
		sprintf(msg,"Você possui [%d] de Donate.",cash);
		SendClientMsg(clientid,msg); 
		return; 
	}
	else sprintf(msg,"Você possui [%d] de Donate.",cash);
	SendClientMsg(clientid,msg);
	return;
}


