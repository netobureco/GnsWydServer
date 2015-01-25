#include "stdafx.h"

void SalveMOB(int clientid, char *pasta)
{
	FILE *fs = NULL;
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	char local[100];
	sprintf(local,"%s\\%s",pasta,thisclient->Name);
	fs = fopen(local,"w");

	fwrite(&thisclient, sizeof(MOB), 1, fs);

	fclose(fs);
	return;
}
void LoadMOB(int clientid,char *pasta)
{
	FILE *fs = NULL;
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	char local[100];
	sprintf(local,"%s\\%s",pasta,thisclient->Name);
	MOB *mob;

	fread(&mob, sizeof(MOB), 1, fs);
	
	memcpy(&thisclient, mob, sizeof(MOB));

	fclose(fs);
	return;
}