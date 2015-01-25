#include "stdafx.h"

void Noticia(int ClientID,int cmd_addr)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	char comand[100];
	sprintf_s(comand,"%s",cmd_addr+0x1C);
	char *tmp = strtok(comand, "_");
	char msg[100];
	sprintf_s(msg,"[%s]> %s",thisclient->Name,tmp);
	SendNotice(msg);
	return;
}