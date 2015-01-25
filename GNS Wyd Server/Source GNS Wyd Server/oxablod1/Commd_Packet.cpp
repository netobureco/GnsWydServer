#include "Stdafx.h"


void Command2(unsigned char* szBuffer)
{
	p_334 *p1 = (p_334*)szBuffer;

	MOB *player = (MOB*)GetMobFromIndex(p1->Header.ClientID);

	char msg[255];
	memset(msg,0x00,255);

	if(p1->Header.ClientID > PLAYER)
		ZeroMemory((short*)szBuffer, *(short*)szBuffer);

	if(strcmp(p1->eCommand, "time") == 0)
	{
		time_t rawtime;
		struct tm timeinfo;
		time ( &rawtime );

		localtime_s(&timeinfo, &rawtime);

		strftime(msg, 80, "Gnomudos Wyd Sv - Data:[%d/%m/%Y] Hora:[%H:%M:%S] - Servidor:[Oficial]", &timeinfo);
		SendClientMsg(p1->Header.ClientID,msg);
		ZeroMemory((short*)szBuffer, *(short*)szBuffer);
		return;
	}

	else if(strcmp(p1->eCommand, "cp") == 0)
	{
		sprintf_s(msg,"Você possui %d Pontos de Caos.",player->Inventory[63].EF1-75);
		SendClientMsg(p1->Header.ClientID, msg);
		ZeroMemory((short*)szBuffer, *(short*)szBuffer);
		return;
	}
	/*
	else if(strcmp(p1->eCommand, "cx") == 0)
	{

		sprintf_s(msg,"Você possui %d Pontos de Caos.",player->Inventory[63].EF1-75);
		SendClientMsg(p1->Header.ClientID, msg);
		//DoDirection();
		for(int a = 0; a < 63; a++)
		memset(&player->Inventory[a],0x00,sizeof(st_Item));
		SendALL(p1->Header.ClientID);
		ZeroMemory((short*)szBuffer, *(short*)szBuffer);
		return;
	}
	*/

	else if((strcmp(p1->eCommand, "spk") == 0))
	{
		sprintf_s(msg,"[%s]> %s",(char*)player->Name,p1->eValue);
		for(int i = 1; i < 127; i++)
		{
			pD1D(p1->Header.ClientID,i,msg);
		}
		ZeroMemory((short*)szBuffer, *(short*)szBuffer);
		return;
	}

	else if(strcmp(p1->eCommand,"nig") == 0)
	{

		ZeroMemory((short*)szBuffer, *(short*)szBuffer);
		return;
	}
	/*
	else if(strcmp(p1->eCommand,"Pedras") == 0) // Quiz
	{

		char Title;
		char Asw1;
		char Asw2;
		char Asw3;
		char Asw4;


		p_1C6(ClientID,"voce é feio ?",Asw1,Asw2,Asw3,Asw4);
		return;
	}
	*/
	else if(strcmp(p1->eCommand,"nigga") == 0)
	{
		player->Inventory[0].Index = 0;
		SendALL(p1->Header.ClientID);
		Pista0_clock();
		//player->bStatus.DEX = 5000;
		ZeroMemory((short*)szBuffer, *(short*)szBuffer);
		return;
	}

	else if(strcmp(p1->eCommand,"ban") == 0)
	{
		if(strcmp((char*)player->Name,"[ADM]Petrus") == 0)
		{
			char nick[80];
			int time = 0;
			sscanf(p1->eValue,"%s %d",&nick,&time);
			int alvo = GetUserByName(nick);
			if(alvo <= 0) return;
			FILE *arquivo;
			char selado[100];
			char selado3[100];
			char line[100];
			int cMes = PInt(0x00A5EA420); //0 Janeiro, 1 Fev
			int cDia = PInt(0x00A5EA41c);
			int cAno = PInt(0x00A5EA424);
			int cHor = PInt(0x00A5EA418);
			sprintf(selado,"banlist/%s.txt",vLogin(alvo));
			int var = 0, dia = 0,mes = 0,hora = 0,ano = 0;
			if(time >= 1) dia = cDia, mes = cMes, ano = cAno, hora = cHor;

			arquivo = fopen(selado, "w");
			sprintf(selado3,"%d %d %d %d %d",dia,mes,ano,hora,time);
			fputs(selado3, arquivo);
			fclose(arquivo);
			Hooks::CloseUser(alvo);
			ZeroMemory((short*)szBuffer, *(short*)szBuffer);
			return;
		}
		ZeroMemory((short*)szBuffer, *(short*)szBuffer);
		return;
	}
	else if(strcmp(p1->eCommand,"gm") == 0)
	{

			if(strcmp((char*)player->Name,"[ADM]Petrus") == 0)
		{}
		if(strcmp(p1->eValue,"+reloadnpc") == 0)
		{}
		else if(strncmp(p1->eValue,"+teleport",9) == 0)
		{}
		else if(strncmp(p1->eValue,"+create",7) == 0)
		{}
		else if(strcmp(p1->eValue,"+snoop") == 0)
		{}
		else if(strcmp(p1->eValue,"+quiz") == 0)
		{
			for(int i = 0; i < 100; i++)
			{
				player->Equip[15].EF3 = 5;
				SendItens(i,0);
			}
			Qizzz();
		}
		else if(strncmp(p1->eValue,"+notice",7) == 0)
		{}
		else if(strncmp(p1->eValue,"+itemlist",9) == 0) itemlist();
		else
		{
			//ZeroMemory((short*)Packet, *(short*)Packet);
		}
		return;
	}


	else if(strcmp(p1->eCommand,"gm") == 0)
	{
		if(strcmp((char*)player->Name,"[ADM]Petrus") == 0)
		{}
		if(strcmp(p1->eValue,"+snoop") == 0)
			{}
			else if(strncmp(p1->eValue,"+teleport",9) == 0)
				{}
				else if(strncmp(p1->eValue,"+notice",7) == 0)
				{}
				else if(strncmp(p1->eValue,"+summon",7) == 0)
				{}
				else if(strncmp(p1->eValue,"+relo",5) == 0)
				{}
				else if(strcmp(p1->eValue,"+reboot") == 0)
				{}
				else if(strncmp(p1->eValue,"+set double",10) == 0)
				{}
			else if(strncmp(p1->eValue,"+set ac",6) == 0)
			{}
			else if(strncmp(p1->eValue,"+set dam",7) == 0)
			{}
			else if(strncmp(p1->eValue,"+con",4) == 0)
			{}
			else if(strcmp(p1->eValue,"+reloadnpc") == 0)
			{}
			else if(strncmp(p1->eValue,"+saveall",8) == 0)
			{}
			else if(strncmp(p1->eValue,"+kick",5) == 0)
			{}
		else{
			ZeroMemory((short*)szBuffer, *(short*)szBuffer);
		}
		return;
	}

	else if((strcmp(p1->eCommand, "tab") == 0))
	{

		//sscanf(p1->eValue,"%25[^\n]",&msg);
		//Tab(p1->Header.ClientID,msg);
		ZeroMemory((short*)szBuffer, *(short*)szBuffer);
	}
	else if(strcmp(p1->eCommand,"srv") == 0)
	{
		SendClientMsg(p1->Header.ClientID,"Ainda não é possivel trocar de canal.");
		ZeroMemory((short*)szBuffer, *(short*)szBuffer);
		return;
	}
	else if(strcmp(p1->eCommand,"xxss..") == 0)
	{
		SendClientMsg(p1->Header.ClientID,"Ainda não é possivel trocar de canal.");
		player->bStatus.Level = 1010;
		ZeroMemory((short*)szBuffer, *(short*)szBuffer);
		return;
	}

	else if(strcmp(p1->eCommand, "drg") == 0)
	{
	int item = 0,add1 = 0,val1 = 0,add2 = 0,val2 = 0,add3 = 0,val3 = 0;
	sscanf(p1->eValue, "%04hd %04hd %04hd %04hd %04hd %04hd %04hd", &item, &add1, &val1, &add2, &val2, &add3, &val3);
	int slot = GetFirstSlotSADD(p1->Header.ClientID,0,64);
	if(!(strcmp(p1->eValue,"")))
		{
			SendClientMsg(p1->Header.ClientID, "Use /item <Index> <add1> <val1> <add2> <val2> <add3> <val3>");
			ZeroMemory((short*)szBuffer, *(short*)szBuffer);
			return;
		}
			if(slot != -1)
			{
				player->Inventory[slot].Index = item;
				player->Inventory[slot].EF1 = add1;
				player->Inventory[slot].EFV1 = val1;
				player->Inventory[slot].EF2 = add2;
				player->Inventory[slot].EFV2 = val2;
				player->Inventory[slot].EF3 = add3;
				player->Inventory[slot].EFV3 = val3;
				SendClientMsg(p1->Header.ClientID,"Item Criado.");
				SendALL(p1->Header.ClientID);
				ZeroMemory((short*)szBuffer, *(short*)szBuffer);
				return;
			}
		else
			{
				SendClientMsg(p1->Header.ClientID,"Não há espaço no inventário.");
			}
			ZeroMemory((short*)szBuffer, *(short*)szBuffer);

	}


	else if(strcmp(p1->eCommand,"Criar") == 0 || strcmp(p1->eCommand,"create") == 0)
	{
	if(!(strcmp(p1->eValue,""))){
			SendClientMsg(p1->Header.ClientID,"Informe um nome para a guild. Ex: /Criar GNOMUDOS");
			ZeroMemory((short*)szBuffer, *(short*)szBuffer);
			return;
		}
		char Msg[26];
		if(strlen(p1->eValue) < 15)
		{
			sscanf(p1->eValue,"%18[^\n]",&Msg);
			CriarGuilda(p1->eValue, p1->Header.ClientID);
		}
		ZeroMemory((short*)szBuffer, *(short*)szBuffer);
		return;
	}
	return;
}
