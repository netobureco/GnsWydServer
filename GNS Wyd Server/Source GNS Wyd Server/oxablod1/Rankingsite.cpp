#include "stdafx.h"

/*
void SavePlayerLevel(int clientid)
{
        FILE *fs = NULL;
        char name[100];
        MOB *player = (MOB*)GetMobFromIndex(clientid);
        sprintf(name,"Rank\\%d.xml", ((player->bStatus.Level + 1) * (player->Equip[0].EFV2)));
        fs = fopen(name, "w+");
		
        for(int i = 0; i >= 20; i--)
        {
                fprintf(fs, "<Tudo><Nome>%s</Nome>\n", player->Name);
                fprintf(fs, "<Level>%d</Level>\n", ((player->bStatus.Level + 1) * (player->Equip[0].EFV2)));
                fprintf(fs, "<Gold>%d</Gold>\n", player->Gold);
				fprintf(fs, "<Classe>%d</Classe></Tudo>\n", player->ClassInfo);
                //fprintf(fs, "%d\n", player->bStatus.STR);
                //fprintf(fs, "%d\n", player->bStatus.INT);
               // fprintf(fs, "%d\n", player->bStatus.DEX);
               // fprintf(fs, "%d\n", player->bStatus.CON);

        }
        fclose(fs);
        return;
}
void DeletarPlayer1(int clientid)
{
    MOB *player = (MOB*)GetMobFromIndex(clientid);
    FILE *fs = NULL;
        char line[120],arqui[100];
    int id,index, master, time, value;
    sprintf(arqui,"Rank\\%d.xml", ((player->bStatus.Level + 1) * (player->Equip[0].EFV2)));
    fs = fopen(arqui,"r");
    if(fs != NULL)
    {
                fclose(fs);
        remove(arqui);
		 DeletarPlayer1(clientid);
    }
    Sleep(1);
    return;
}
void DeletarPlayer2(int clientid)
{
    MOB *player = (MOB*)GetMobFromIndex(clientid);
    FILE *fs = NULL;
        char line[120],arqui[100];
    int id,index, master, time, value;
    sprintf(arqui,"Rank\\%d.xml",((player->bStatus.Level + 1) * (player->Equip[0].EFV2)));
    fs = fopen(arqui,"r");
    if(fs != NULL)
    {
                fclose(fs);
        remove(arqui);
		 DeletarPlayer2(clientid);
    }
    Sleep(1);
    return;
}
void DeletarPlayer3(int clientid)
{
    MOB *player = (MOB*)GetMobFromIndex(clientid);
    FILE *fs = NULL;
        char line[120],arqui[100];
    int id,index, master, time, value;
    sprintf(arqui,"Rank\\%d.xml", ((player->bStatus.Level + 1) * (player->Equip[0].EFV2)));
    fs = fopen(arqui,"r");
    if(fs != NULL)
    {
                fclose(fs);
        remove(arqui);
		 DeletarPlayer3(clientid);
    }
    Sleep(1);
    return;
}
//MAIS IMPORTANTE!
void Ranking(int clientid)
{
        DeletarPlayer1(clientid);
        DeletarPlayer2(clientid);
        DeletarPlayer3(clientid);
        SavePlayerLevel(clientid);
        return;
}
*/