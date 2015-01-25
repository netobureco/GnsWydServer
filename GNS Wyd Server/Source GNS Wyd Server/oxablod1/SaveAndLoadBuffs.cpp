#include "stdafx.h"

void LoadBuffs(int clientid)
{
    MOB *player = (MOB*)GetMobFromIndex(clientid);
    FILE *fs = NULL;
	char line[120],arqui[100];
    int id,index, master, time, value;
    sprintf(arqui,"DataBase\\Buffs\\%s.txt", player->Name);
    fs = fopen(arqui,"r");
    if(fs != NULL)
    {
        while((fscanf(fs, "%[^\n]", line)) != EOF)
        {
            fgetc(fs);
            sscanf(line, "%d,%d,%d,%d,%d",&id ,&index, &master, &time, &value);
            if(id <= 3)
            {
                player->Affects[id].Index = index;
                player->Affects[id].Master = master;
                player->Affects[id].Time = time;
                player->Affects[id].Value = value;
			}
        }
        GetCurrentScore(clientid);
        SendALL(clientid);
		fclose(fs);
        remove(arqui);
    }
    Sleep(1);
    return;
}
 
 
void SaveBuffs(int clientid)
{
    FILE *fs = NULL;
    char name[100];
    MOB *player = (MOB*)GetMobFromIndex(clientid);
    sprintf(name,"DataBase\\Buffs\\%s.txt", player->Name);
    fs = fopen(name, "w+");
 
 
    for(int i = 0; i <= 3; i++)
    {
        fprintf(fs, "%d,%d,%d,%d,%d\n", i, player->Affects[i].Index, player->Affects[i].Master, player->Affects[i].Time, player->Affects[i].Value);
    }
    fclose(fs);
    return;
}






