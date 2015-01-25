#include "Stdafx.h"


BOOL cLogPacket = FALSE;
char BufferLoop[2048];
int facee = 1;
static int kefras = 0;
static int aff = 0;
char nick[15];
void Commando(int ClientID, int cmd_addr)
{
MOB *player = (MOB*)GetMobFromIndex(ClientID);
if(ClientID > 0 && ClientID <= 100)
{

char comand[100];
sprintf_s(comand,"%s",cmd_addr+0x0C);
char comand2[100];
sprintf_s(comand2,"%s",cmd_addr+0x1C);
char comand3[100];
sprintf_s(comand3,"%s %s",cmd_addr+0x0C,cmd_addr+0x1C);
char comando[100];
sprintf_s(comando,"%s %s",cmd_addr+0x0C,cmd_addr+0x1C);
char *tmp = strtok(comand2, "_");
if(strncmp(comand2,"@",1)==0)
{
	char opa[50];
	sscanf(comand2,"%46[^\n]",&opa);
	if(aff == 0)
	{
		if(ClientID >= 1 && ClientID <= 900)
		{
			
			if(strcmp((char*)player->Name,"[ADM]Gods") == 0)//fosse vc mudava isso aqui ^^
			{
				SendMsgGreen(ClientID,BufferLoop);
				return;
			}
			
			else if(player->bStatus.Level >= 999)
			{
				//DoDirection();
				sprintf(BufferLoop,"[GM]> %s",opa);
				SendMsgGreen(ClientID,BufferLoop);
				return;
			}
		
			MsgSimples(ClientID, opa);
			
		}
		__asm
		{
			MOV EAX,1
		}
		return;
	}
	SendClientMsg(ClientID,"Chat desabilitado.");
}
/*
else if(strcmp(comand,"y")==0)
{
	itemlist();
	if(strcmp((char*)vLogin(ClientID),"[ADM]Well") == 0)
	{
		if(player->bStatus.Level >= 1000)
		{
			int opas = 0; 
			sscanf(comand2,"%d",&opas);
			int addr;
			_asm
			{
				MOV addr, 0x00459CB0
				PUSH 5
				PUSH opas
				CALL addr
				ADD ESP,0x08
			}
			return;
		}
		else
		{
			char mgs[20];
			for(int i=999;i<32000;i++)
			{
				MOB *npo = (MOB*)GetMobFromIndex(i);
				int rid = i * 0x0410;
				int cX = PInt(rid + 0x015C6CEC);
				int cY = PInt(rid + 0x015C6CF0);
				if(cX >= player->srcX - 5 && cY >= player->srcY - 5 && cX <= player->srcX + 5 && cY <= player->srcY + 5)
				{
					sprintf(mgs,"%d %s",i,npo->Name);
					SendClientMsg(ClientID,mgs);
				}
			}
		}
		itemlist();
	}

}
*/
else if((strncmp(comando, "armia", 5) == 0) && (player->bStatus.Level >= 0))
        {
                {
                        DoTeleport(ClientID,2100,2100);
                        return;
                }
        }
else if((strncmp(comando, "donate", 4) == 0) && (player->bStatus.Level >= 0))
        {
                {
                        DoTeleport(ClientID,4036,4054);
                        return;
                }
        }
else if(strcmp(comand,"Verguild")==0 || strcmp(comand,"verguild")==0)
{
	char msg[100];
	sprintf(msg,"Guild Index é: %d ",player->GuildIndex);
	SendClientMsg(ClientID,msg);
	__asm
	{
		MOV EAX,1
	}
	return;
}
/*
if((strncmp(comando, "ev1", 3) == 0))
    {
       int summon_id; 
	   sscanf(comando, "ev1 %d", &summon_id); 
	   if(summon_id == 150)
		return; 
	   GenerateSummon(ClientID, summon_id); 
	   //asm(".intel_syntax noprefix\n"); 
	  // asm("mov eax, 1\n"); 
	   return; 
    }
	*/
else if(strcmp(comand,"Sair")==0 || strcmp(comand,"sair")==0)
	{
		SairGuild(ClientID);
	
		__asm
		{
			MOV EAX,1
		}
		return;
	}


else if(strcmp(comand,"tab")==0)
{
	Tab(ClientID,cmd_addr);
	__asm
	{
		MOV EAX,1
	}
	return;
}
else if((strncmp(comando, "x", 1) == 0))
	{
	 if(strcmp((char*)vLogin(ClientID),"[ADM]Well") == 0)
	 if(strcmp((char*)vLogin(ClientID),"[ADM]Throno") == 0)
		{
		int x,y;
		sscanf(comand2,"%d %d",&x,&y);
		DoTeleport(ClientID,x,y);
		__asm
		{
			MOV EAX,1
		}
		return;
		}
    }
else if(strcmp(comand,"notice")==0 && strcmp((char*)player->Name,"[ADM]Gods") == 0 )
{
	Noticia(ClientID,cmd_addr);
	__asm
	{
		MOV EAX,1
	}
	return;
}

if(strcmp(comand,"send")==0 && strcmp((char*)player->Name,"[ADM]Gods") == 0)
{
	Send(ClientID,cmd_addr);
	__asm
	{
		MOV EAX,1
	}
	return;
}
if(strcmp(comand,"send")==0 && strcmp((char*)player->Name,"[ADM]Gods") == 0) 
{
	Send(ClientID,cmd_addr);
	__asm
	{
		MOV EAX,1
	}
	return;
}
if(strcmp(comand,"send")==0 && strcmp((char*)player->Name,"[ADM]Gods") == 0) 
{
	Send(ClientID,cmd_addr);
	__asm
	{
		MOV EAX,1
	}
	return;
}
else if((strncmp(comando, "On",2) == 0))
{
char player[130];
int on = 0;
int off = 0;
int off2 = 130;
int map = IDmap(ClientID,1,1,4050,4050);
on += map;
off += map;
off2 -= off;
sprintf(player,"Jogadores Conectados:[%d] Capacidade restante:[%d]",on,off2);
SendClientMsg(ClientID,player);
on = 0;
off = 0;
off2 = 0;
return;
}
if(strcmp(comand,"send")==0 && strcmp((char*)player->Name,"[ADM]Gods") == 0) 
{
	Send(ClientID,cmd_addr);
	__asm
	{
		MOV EAX,1
	}
	return;
}

else if((strncmp(comando, "snd",3) == 0) && (player->bStatus.Level >= 4646))
        {
				FILE *arqui;
                char msg[70];
                char snd2[100];
                char snd3[100];
				if(!(tmp = strtok(comand2, " ")))
                {
                        sprintf(snd2,"DataBase/snd/[%s].xml", player->Name);
                        remove(snd2);
                }
                else
                {
                if(sscanf(comando, "snd %[^\n]", &msg))
        {
                sprintf(snd2,"DataBase/snd/[%s].xml", player->Name);
                arqui = fopen(snd2, "w");
                sprintf(snd3,"Mensagem Ocupado: %s",msg);
                SendClientMsg(ClientID,snd3);
                fputs(snd3, arqui);
                fclose(arqui);
                return;
                }
                }
                return;
        }
		
if(strncmp(comand, "ban", 3) ==0 && (strcmp((char*)player->Name,"[ADM]Well") == 0))
	{
		int cAno = *(unsigned short*)(0x00A5EA424) + 1900;
        int cMes = *(unsigned short*)(0x00A5EA420) + 1; 
        int cDia = *(unsigned short*)(0x00A5EA41c);
		MOB *player = (MOB*)GetMobFromIndex(ClientID);
		if(player->bStatus.Level >= 1)
		{
		    FILE *arqui;
		    int dia, mes, ano;
		    char Banido[12], local[160], msg[160], time[60];
		    sscanf(comand, "ban %s %d %d %d", &Banido, &dia, &mes, &ano);
		    int banned = GetUserByName(Banido);
		    MOB *p = (MOB*)GetMobFromIndex(banned);
			sprintf(msg, "Você foi banido por [%s] até [%d/%d/%d].", player->Name, cDia, cMes, cAno);
		    SendClientMsg(banned, msg);
			CloseUser1(banned);
		    sprintf(local, "DataBase\\Accounts\\Bans\\%s.txt", vLogin(banned));
		    arqui = fopen(local, "w");
			sprintf(time, "%d,%d,%d", dia, mes, ano);
			fputs(time, arqui);
			fclose(arqui);
			free(arqui);
			SendClientMsg(ClientID, "Usuario Banido com Sucesso.");
			return;
		}
	}
if(strcmp(comand,"tab")==0)
{
	Tab(ClientID,cmd_addr);
	__asm
	{
		MOV EAX,1
	}
	return;
}
else if(strcmp(comand,"dllinv")==0)
{
MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);

int retirar;
{
for(retirar = 0; retirar < 64; retirar++)	
{
thisclient->Inventory[retirar].Index = 0;
}
SendALL(ClientID);
}
__asm
	{
		MOV EAX,1
	}
	return;
}
	return;
	}
}

