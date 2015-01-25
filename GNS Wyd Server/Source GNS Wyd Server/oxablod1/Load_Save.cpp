#include "Stdafx.h"

void SalveBuffsInFile(int ClientID)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	FILE *arquivo;
	char local[80];
	for(int i=0;i<=16;i++)
	{
		if(mobaffectbuffer[ClientID].Affects[i].Index == 39)
		{
			sprintf(local,"config/buffs/bau_exp_%s.txt",thisclient->Name);
			remove(local);
			remove(local);

			arquivo = fopen(local, "w");
			fprintf_s(arquivo,"%d %d %d %d \n",mobaffectbuffer[ClientID].Affects[i].Index,mobaffectbuffer[ClientID].Affects[i].Master,mobaffectbuffer[ClientID].Affects[i].Time,mobaffectbuffer[ClientID].Affects[i].Value);
			fclose(arquivo);
		}
		if(mobaffectbuffer[ClientID].Affects[i].Index == 30)
		{
			sprintf(local,"config/buffs/frango_%s.txt",thisclient->Name);
			remove(local);
			remove(local);

			arquivo = fopen(local, "w");
			fprintf_s(arquivo,"%d %d %d %d \n",mobaffectbuffer[ClientID].Affects[i].Index,mobaffectbuffer[ClientID].Affects[i].Master,mobaffectbuffer[ClientID].Affects[i].Time,mobaffectbuffer[ClientID].Affects[i].Value);
			fclose(arquivo);
		}
		if(mobaffectbuffer[ClientID].Affects[i].Index == 34)
		{
			sprintf(local,"config/buffs/sephira_%s.txt",thisclient->Name);
			remove(local);
			remove(local);

			arquivo = fopen(local, "w");
			fprintf_s(arquivo,"%d %d %d %d \n",mobaffectbuffer[ClientID].Affects[i].Index,mobaffectbuffer[ClientID].Affects[i].Master,mobaffectbuffer[ClientID].Affects[i].Time,mobaffectbuffer[ClientID].Affects[i].Value);
			fclose(arquivo);
		}
		if(mobaffectbuffer[ClientID].Affects[i].Index == 35)
		{
			sprintf(local,"config/buffs/saude_%s.txt",thisclient->Name);
			remove(local);
			remove(local);

			arquivo = fopen(local, "w");
			fprintf_s(arquivo,"%d %d %d %d \n",mobaffectbuffer[ClientID].Affects[i].Index,mobaffectbuffer[ClientID].Affects[i].Master,mobaffectbuffer[ClientID].Affects[i].Time,mobaffectbuffer[ClientID].Affects[i].Value);
			fclose(arquivo);
		}
	}
	return;
}

void LoadBau(int ClientID)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	FILE *fs=NULL;
	char local[80];
	sprintf(local,"config/buffs/bau_exp_%s.txt",thisclient->Name);
	FILE *arquivo;
	char line[100];
	if(file_exists(local))
	{
		if(mobaffectbuffer[ClientID].Affects[0].Index == 0)
		{
			arquivo = fopen(local, "r");
			while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
			{
			fgetc(arquivo);
			int val1, val2, val3, val4;
			sscanf(line, "%d %d %d %d \n",&val1, &val2, &val3, &val4);
			{
				mobaffectbuffer[ClientID].Affects[0].Index = val1;
				mobaffectbuffer[ClientID].Affects[0].Master = val2;
				mobaffectbuffer[ClientID].Affects[0].Time = val3;
				mobaffectbuffer[ClientID].Affects[0].Value = val4;
				SendScore(ClientID);
				fclose(arquivo);
				remove(local);
				remove(local);
				remove(local);
				return;	
			}
			}	
		}
	}
	
	
}

void LoadFrango(int ClientID)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	FILE *fs=NULL;
	char local[80];
	sprintf(local,"config/buffs/frango_%s.txt",thisclient->Name);
	FILE *arquivo;
	char line[100];
	if(file_exists(local))
	{
		if(mobaffectbuffer[ClientID].Affects[1].Index == 0)
		{
			arquivo = fopen(local, "r");
			while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
			{
			fgetc(arquivo);
			int val1, val2, val3, val4;
			sscanf(line, "%d %d %d %d \n",&val1, &val2, &val3, &val4);
			{
				mobaffectbuffer[ClientID].Affects[1].Index = val1;
				mobaffectbuffer[ClientID].Affects[1].Master = val2;
				mobaffectbuffer[ClientID].Affects[1].Time = val3;
				mobaffectbuffer[ClientID].Affects[1].Value = val4;
				SendScore(ClientID);
				fclose(arquivo);
				remove(local);
				remove(local);
				remove(local);
				return;	
			}
			}	
		}
	}
	
	
}

void LoadSephira(int ClientID)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	FILE *fs=NULL;
	char local[80];
	sprintf(local,"config/buffs/sephira_%s.txt",thisclient->Name);
	FILE *arquivo;
	char line[100];
	if(file_exists(local))
	{
		if(mobaffectbuffer[ClientID].Affects[2].Index == 0)
		{
			arquivo = fopen(local, "r");
			while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
			{
			fgetc(arquivo);
			int val1, val2, val3, val4;
			sscanf(line, "%d %d %d %d \n",&val1, &val2, &val3, &val4);
			{
				mobaffectbuffer[ClientID].Affects[2].Index = val1;
				mobaffectbuffer[ClientID].Affects[2].Master = val2;
				mobaffectbuffer[ClientID].Affects[2].Time = val3;
				mobaffectbuffer[ClientID].Affects[2].Value = val4;
				SendScore(ClientID);
				fclose(arquivo);
				remove(local);
				remove(local);
				remove(local);
				return;	
			}
			}	
		}
	}
	
	
}

void LoadSaude(int ClientID)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	FILE *fs=NULL;
	char local[80];
	sprintf(local,"config/buffs/saude_%s.txt",thisclient->Name);
	FILE *arquivo;
	char line[100];
	if(file_exists(local))
	{
		if(mobaffectbuffer[ClientID].Affects[3].Index == 0)
		{
			arquivo = fopen(local, "r");
			while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
			{
			fgetc(arquivo);
			int val1, val2, val3, val4;
			sscanf(line, "%d %d %d %d \n",&val1, &val2, &val3, &val4);
			{
				mobaffectbuffer[ClientID].Affects[3].Index = val1;
				mobaffectbuffer[ClientID].Affects[3].Master = val2;
				mobaffectbuffer[ClientID].Affects[3].Time = val3;
				mobaffectbuffer[ClientID].Affects[3].Value = val4;
				SendScore(ClientID);
				fclose(arquivo);
				remove(local);
				remove(local);
				remove(local);
				return;	
			}
			}	
		}
	}
	
	
}

