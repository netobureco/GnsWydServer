#include "stdafx.h"

void QntdeGold(int clientid,int cmd_addr) 
{ 
	FILE *arq; int cash; char local[100], line[120], msg[100]; 
	sprintf(local,"DataBase/Loja_Nova/Gold/[%s].txt",vLogin(clientid));
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
			sprintf(msg,"Você possui [%d] de Gold Loja.",cash); 
			SendClientMsg(clientid,msg);
			return; 
		} 
		sprintf(msg,"Você possui [%d] de Gold Loja.",cash);
		SendClientMsg(clientid,msg); 
		return; 
	}
	else sprintf(msg,"Você possui [%d] de Gold Loja.",cash);
	SendClientMsg(clientid,msg);
	return;
}