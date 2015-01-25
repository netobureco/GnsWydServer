#include "stdafx.h"

void vereficaSkillBM(WORD clientid,int cmd_addr)
{
        
        MOB *player = (MOB*)GetMobFromIndex(clientid);
        for(int i = 0;i < 16;i++)
        {
                if(player->Affects[i].Index == 28)
                {
                return;
                }
                        else
                {
		    char local[100];
			int face = player->Equip[0].Index;
			int face1 = player->Equip[0].EF1;
			int face2 = player->Equip[0].EFV1;
			int face3 = player->Equip[0].EF2;
			int face4 = player->Equip[0].EFV2;
			int face5 = player->Equip[0].EF3;
			int face6 = player->Equip[0].EFV3;
			FILE *arq;
			sprintf(local,"DataBase\\Chars\\Eden\\%s.eden",player->Name);
			arq=fopen(local,"r");
			fprintf(arq,"%d,%d,%d,%d,%d,%d,%d",face,face1,face2,face3,face4,face5,face6);
			 if (arq!=NULL) // Se o arquivo existir e for carregado executa a ação
                        {
			
             fclose(arq);
             remove(local);
                        return;
                        }
                        else
                        {
                                return;
                        }
                }
        }
}