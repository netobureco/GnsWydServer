#include "Stdafx.h"

st_Guild Guild[2000];
C_Guild	cguild;
char msg[255];

bool ler_guild()
{
	FILE *fp;
	fopen_s(&fp, "guilds.txt", "rt");
	st_Guild guild;
	int x=0;
	cguild.total=0;
	cguild.uID=0;
	char line[1024];

	if(fp == NULL)
	{
		printf("[Error] Inpossivel ler guild.txt");
        return false;
	}

	while(fgets(line, sizeof(line), fp))
    {
		char *p = line;

		if(*line == '\n' || *line == '#')
            continue;

        while(*p != '\0')
        {
            if(*p == ',')
                *p = ' ';
            p++;
        }
		sscanf(line, "%d %d %d %s %s %s %s", &guild.GuildCode, &guild.GuildCode2, &guild.Guild, &guild.Name, &guild.Sub[0], &guild.Sub[1], &guild.Sub[2]);
		memcpy(&Guild[guild.Guild], &guild, sizeof(st_Guild));
		x++;
	}
	cguild.total=x;
	cguild.uID=guild.Guild;

	printf("Guild total carregada: [%d] \n",cguild.total);
    fclose(fp);
	return true;
}
bool GuildExist(char *Name)
{
	int i=0, idg=0;
	for(i=0; i<cguild.total; idg++)
	{
		if(Guild[idg].Guild != 0)
		{
			if(strcmp(Guild[idg].Name, Name) == 0)
			{
				return true;
			}
			i++;
		}
	}
	return false;
}
bool SalveNewGuild()
{
	FILE *fp;
	fopen_s(&fp,"guilds.txt", "w");
	int i=0, idg=0;

	if(fp != NULL)
	{
		for(i=0; i<= cguild.total; idg++)
		{
			if(Guild[idg].Guild != 0)
			{
				if(strcmp(Guild[idg].Name, "")!=0)
				{
					fprintf(fp, "%d %d %d %s", Guild[idg].GuildCode, Guild[idg].GuildCode2, Guild[idg].Guild, Guild[idg].Name);
					fprintf(fp, "\n");
					i++;	
					if(Guild[idg].Guild == cguild.uID)
					{
						fclose(fp);
					}
				}
			}
		}
		return true;
	}
	return false;
}

void CriarGuilda(char *Name, int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	cguild.total++;
	cguild.uID++;
	char msg[255];
	int ID=cguild.uID;
	//
	int calc = (int)(cguild.uID/127);
	if(calc > 0)
	{
		ID =(cguild.uID-(calc*127));
	}	
	//
	
	if(player->Equip[12].Index != 0)
	{
		cguild.total--;
		cguild.uID--;
		SendClientMsg(ClientID,"Você já pertence a uma guild.");
		return;
	}

	if(!GuildExist(Name))
	{
		if(player->Gold >= 1000000000000)
		{
			player->Equip[12].Index = 509;
			player->Equip[12].EF1 = 56;
			player->Equip[12].EFV1 = calc;
			player->Equip[12].EF2 = 57;
			player->Equip[12].EFV2 = ID;
			player->Equip[12].EF3 = 85;
			player->Equip[12].EFV3 = 0;

			player->Inventory[1].Index = 526;
			player->Inventory[1].EF1 = 56;
			player->Inventory[1].EFV1 = calc;
			player->Inventory[1].EF2 = 57;
			player->Inventory[1].EFV2 = ID;
			player->Inventory[1].EF3 = 85;
			player->Inventory[1].EFV3 = 0;

			player->Inventory[2].Index = 527;
			player->Inventory[2].EF1 = 56;
			player->Inventory[2].EFV1 = calc;
			player->Inventory[2].EF2 = 57;
			player->Inventory[2].EFV2 = ID;
			player->Inventory[2].EF3 = 85;
			player->Inventory[2].EFV3 = 0;

			player->Inventory[3].Index = 528;
			player->Inventory[3].EF1 = 56;
			player->Inventory[3].EFV1 = calc;
			player->Inventory[3].EF2 = 57;
			player->Inventory[3].EFV2 = ID;
			player->Inventory[3].EF3 = 85;
			player->Inventory[3].EFV3 = 0;

			player->Gold-=100000000000000;
			player->GuildIndex = cguild.uID;
			
			{
				Guild[cguild.uID].GuildCode = 0;
				Guild[cguild.uID].GuildCode2 = 0;
				Guild[cguild.uID].Guild = cguild.uID;					
				strcpy_s(Guild[cguild.uID].Name, Name);
			}

			if(!SalveNewGuild())
			{
				SendClientMsg(ClientID,"Erro ao criar guild. Tente novamente mais tarde");
				printf("\n Erro ao criar guild. \n\n");
				return;
			}

			SendItens(ClientID, 12);
			SendALL(ClientID);

			sprintf_s(msg,"Guild %s criada com sucesso.", Name);
			SendClientMsg(ClientID, msg);

			printf("Guild %s criada com sucesso. \n", Name);
		}
		else
		{
			cguild.total--;
			cguild.uID--;
			SendClientMsg(ClientID,"Gold insuficiente.");
		}
	}
	else
	{
		cguild.total--;
		cguild.uID--;
		sprintf_s(msg,"%s ja esta sendo usado.",Name);
		SendClientMsg(ClientID, msg);
	}
	return;
}

void SairGuild(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[12].Index == 0)
	{
		SendClientMsg(ClientID, "Você não pertence a uma guild.");
	}
	if(player->Equip[12].Index == 509 || (player->Equip[12].Index > 526 && player->Equip[12].Index < 528))
	{
		SendClientMsg(ClientID, "Comando apenas para membros da guild.");
	}

	else if(player->Equip[12].Index == 508)
	{
		sprintf(msg, "Você saiu da guilda %s",Guild[player->Equip[12].EFV2].Name);
		SendClientMsg(ClientID,msg);

		player->Equip[12].Index = 0;
		player->Equip[12].EF1 = 0;
		player->Equip[12].EFV1 = 0;
		player->Equip[12].EF2 = 0;
		player->Equip[12].EFV2 = 0;
		player->Equip[12].EF3 = 0;
		player->Equip[12].EFV3 = 0;

		player->GuildIndex = 0;

		SendItens(ClientID, 12);
		SendCreateMob(ClientID,ClientID,1);
	}
	__asm
	{
		MOV EAX,1
	}
	return;
}


void GuildTeste(char *Name, int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(GetUserByName(Name));	
	if(player->Equip[12].Index != 0)
	{
		sprintf(msg, "Você está na guild %s - %d.",Guild[player->Equip[12].EFV2].Name,player->Equip[12].EFV2);
		SendClientMsg(ClientID, msg);
	}
	else
		SendClientMsg(ClientID, "Você está sem guilda.");
}

void Guild_Recrutar_Membro(char *Packet)
 {
	 int ClientID = *(short*)&Packet[6];
	 int memberid = *(short*)&Packet[12];
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 MOB *member = (MOB*)GetMobFromIndex(memberid);
	 SendALL(ClientID);
	 SendALL(memberid);

	 if(member->Equip[12].Index == 0)
	 {
		 if((player->Equip[12].Index == 509) || (player->Equip[12].Index >= 526 && player->Equip[12].Index <= 528))
		 {
			 if(player->Gold >= 4000000)
			 {
				 member->Equip[12].Index = 508;
				 member->Equip[12].EF1 = 56;
				 member->Equip[12].EFV1 = 0;
				 member->Equip[12].EF2 = 57;
				 member->Equip[12].EFV2 = player->Equip[12].EFV2;
				 member->Equip[12].EF3 = 85;
				 member->Equip[12].EFV3 = 0;
				 member->GuildIndex = player->Equip[12].EFV2;

				 player->Gold -= 4000000;
				 member->GuildIndex = player->GuildIndex; 

				 SendALL(ClientID);
				 SendALL(memberid);
				 SendItens(memberid,12);
				 sprintf(msg, "Recrutando pela guild [%s]",Guild[player->Equip[12].EFV2].Name);
				 SendClientMsg(memberid,msg);
			 }
			 else
			 {
				SendClientMsg(ClientID,"Necessário 4 Milhões de Gold");
				return;

			 }
		 }
		 else
		 {
			 SendClientMsg(ClientID,"Você Não Tem Permição");
			return;
		 }
	 }
	 else
	 {
		 SendClientMsg(ClientID,"Jogador Já Participa de Uma Guild");
		 return;
	 }
 }