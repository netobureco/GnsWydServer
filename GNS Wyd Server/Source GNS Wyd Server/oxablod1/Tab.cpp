#include "stdafx.h"

void Tab(int clientid,int cmd_addr)
{
	    int cont=0;
		MOB *player = (MOB*)GetMobFromIndex(clientid);
		FILE *fp;
		char local [80]; 
		char taab[26];
		char comand2[100];
		sprintf_s(comand2,"%s",cmd_addr+0x1C);
		char comando[100];
		sprintf_s(comando,"%s %s",cmd_addr+0x0C,cmd_addr+0x1C);
		sprintf(local,"DataBase\\Tabs\\%s",player->Name); // Define o tab que será carregado
		fp = fopen (local,"w"); // Abre o tab
		sscanf(comando,"tab %26[^\n]",&taab);
		char *tmp = strtok(comand2, " ");
			
			if(!(tmp = strtok(comand2, "_")))
				{
					fclose(fp);
					remove(local);
					SendCreateMob(clientid,clientid,1);
					return;
				}
			    else
				{
                   if(player->bStatus.Level < 69)
					{
						SendClientMsg(clientid,"Somente nivel superior a 70 pode usar.");
						remove(local);
						return;
					}
					for(cont=0;cont<26;cont++)
					{
						if(taab[cont] == ' ')
							taab[cont] = '_';
					}
					fputs(taab, fp);
					fclose(fp);
					SendCreateMob(clientid,clientid,1);
					return;
				}

		return;
}