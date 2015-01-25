#include "stdafx.h"

void level(int ClientID,int cmd_addr)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	char comand2[100];
	sprintf_s(comand2,"%s",cmd_addr+0x1C);
	char comando[100];
	sprintf_s(comando,"%s %s",cmd_addr+0x0C,cmd_addr+0x1C);
	char *tmp = strtok(comand2, "_");
	int inte = 0,str = 0,con = 0,dex = 0,master1 = 0,master2 = 0,master3 = 0,master4 = 0;
	int lv;
	if(!(tmp = strtok(comand2, " ")))
		{
			SendClientMsg(ClientID, "Use /level <level>");
			return;
		}
		else
		{
			sscanf(comando, "level %d",&lv);
			if(lv >= 1 && lv <= 1011)
			{
				player->bStatus.Level = lv -1;
				sprintf(tmp,"Level alterado para %d",lv);
				SendClientMsg(ClientID,tmp);
				GetCurrentScore(ClientID);
				SendStats(ClientID);
				SendScore(ClientID);
				SendEquip(ClientID);
				return;
			}
			else
			{
				SendClientMsg(ClientID,"Você não pode fazer isto.");
				return;
			}
		}
		return;
}