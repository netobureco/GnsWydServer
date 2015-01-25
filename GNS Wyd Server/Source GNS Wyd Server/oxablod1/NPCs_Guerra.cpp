#include "stdafx.h"

void NPCGuerras(BYTE *m_PacketBuffer)
{
	
	MOB *player = (MOB*)GetMobFromIndex(m_PacketBuffer[6]);
	MOB *npc = (MOB*)GetMobFromIndex(m_PacketBuffer[12]);

	if(strcmp((char*)npc->Name, "Kara") == 0)
	{
		FILE *fs = NULL;
		char line[120];
		char *dono, *msg;
		int guild,apostado1,apostado2;
		fs = fopen("DataBase\\Guerras\\Azran.txt", "rt+");			
		if(fs != NULL)
		{	
		    while((fscanf(fs, "%[^\n]", line)) != EOF)
		    {
		        fgetc(fs);
		        sscanf(line, "%s,%d,%d,%d",&dono[0], &guild, &apostado1, &apostado2);		        
				sprintf(msg, "A guilda [%s] foi a vencedora.", dono);
				SendSay(m_PacketBuffer[12],msg);
		    }
	        fclose(fs);
	    }
	}

	if(strcmp((char*)npc->Name, "Empis") == 0)
	{
		FILE *fs = NULL;
		char line[120];
		char *dono, *msg;
		int guild,apostado1,apostado2;
		fs = fopen("DataBase\\Guerras\\Erion.txt", "rt+");		
		if(fs != NULL)
		{	
		    while((fscanf(fs, "%[^\n]", line)) != EOF)
		    {
		        fgetc(fs);
		        sscanf(line, "%s,%d,%d,%d",&dono[0], &guild, &apostado1, &apostado2);		        
				sprintf(msg, "A guilda [%s] foi a vencedora.", dono);
				SendSay(m_PacketBuffer[12],msg);
		    }	
	        fclose(fs);
	    }
	}

	if(strcmp((char*)npc->Name, "Balmus") == 0)
	{
		FILE *fs = NULL;
		char line[120];
		char *dono, *msg;
		int guild,apostado1,apostado2;
		fs = fopen("DataBase\\Guerras\\Armia.txt", "rt+");			
		if(fs != NULL)
		{	
		    while((fscanf(fs, "%[^\n]", line)) != EOF)
		    {
		        fgetc(fs);
		        sscanf(line, "%s,%d,%d,%d",&dono[0], &guild, &apostado1, &apostado2);	        
				sprintf(msg, "A guilda [%s] foi a vencedora.", dono);
				SendSay(m_PacketBuffer[12],msg);
		    }
	        fclose(fs);
	    }
	}
}
