#include "stdafx.h"

/*
void Server(BYTE *m_PacketBuffer)
{
	MOB *player = (MOB*)GetMobFromIndex(GetOffset(6));
	short clientid = GetOffset(6);
	int cMes = PInt(0x00A5EA420); //0 Janeiro, 1 Fev
	int cDia = PInt(0x00A5EA41c);
    int cDia1,cMes1;
    FILE *fs = NULL;
    char name[100], line[120];
	int value;
    sprintf(name,"C:\\xampp\\htdocs\\wyd\\serv00.htm");

	fs = fopen(name, "w+");
    fprintf(fs, "%d",((clientid) * (750 / 99)));
    fclose(fs);
    return;
}

void Server2(BYTE *m_PacketBuffer)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(GetOffset(6));
	short clientid = GetOffset(6);
    FILE *fs = NULL;
    char name[100], line[120];
	int value;
    sprintf(name,"C:\\xampp\\htdocs\\wyd\\serv00.htm");
    fs = fopen(name,"r");
    
    while((fscanf(fs, "%[^\n]", line)) != EOF)
    {
        fgetc(fs);
        sscanf(line, "%d,", &value);
	}

	fs = fopen(name, "w+");
    fprintf(fs, "%d",(value - (750 / 99)));
    fclose(fs);
    return;
}
*/