#include "stdafx.h"

void Item(int ClientID,int cmd_addr)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	FILE *arq;
	FILE * pFile;
	time_t rawtime; 
	struct tm * timeinfo;
	char comando[100];
	char tmp[1024];
	sprintf_s(comando,"%s %s",cmd_addr+0xC,cmd_addr+0x1C);
	int item = 0,add1 = 0,val1 = 0,add2 = 0,val2 = 0,add3 = 0,val3 = 0;
	sscanf_s(comando,"item %d %d %d %d %d %d %d",&item,&add1,&val1,&add2,&val2,&add3,&val3);
	int itenslot = GetFirstSlotSADD(ClientID, 0, 64);
	if(itenslot != -1)
	{
		thisclient->Inventory[itenslot].Index = item;
		thisclient->Inventory[itenslot].EF1 = add1;
		thisclient->Inventory[itenslot].EFV1 = val1;
		thisclient->Inventory[itenslot].EF2 = add2;
		thisclient->Inventory[itenslot].EFV2 = val2;
		thisclient->Inventory[itenslot].EF3 = add3;
		thisclient->Inventory[itenslot].EFV3 = val3;
		Attinv(ClientID);
		// Começo Logs
	    time ( &rawtime );
		char tmp[1024];
        sprintf(tmp, "DataBase\\Logs\\ItensCriados.txt");
        timeinfo = localtime ( &rawtime );
        pFile = fopen(tmp, "a");
        MOB *player = (MOB*)GetMobFromIndex(ClientID);
        int cHor = PInt(0x00A5EA418);
        int cMin = PInt(0x00A5EA414);
        int cSeg = PInt(0x00A5EA410);
		int cDia = PInt(0x00A5EA41c);
		int cMes = PInt(0x00A5EA420) + 1;
		int cAno = PInt(0x00A5EA424) - 100;
        if(pFile != NULL)
        {
                fprintf(pFile, "Jogador [%s] criou o [item] ID : %d %d %d %d %d %d %d  Horario %d:%d:%d  Data : %d/%d/%d \n",player->Name,item,add1,val1,add2,val2,add3,val3,cHor,cMin,cSeg,cDia,cMes,cAno);
                fclose(pFile);
		return;
	}
		// End Logs
	else
	SendClientMsg(ClientID,"Não possui espaço no inventário.");
	return;
}
}
