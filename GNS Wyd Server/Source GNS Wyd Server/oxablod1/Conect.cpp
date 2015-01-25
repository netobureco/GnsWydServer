#include "Stdafx.h"
Ip vIp[PLAYER];

BOOL ProcessClientMessage(int clientId, unsigned char *Msg)
{
	PacketHeader *Packet = (PacketHeader*)Msg;
	MOB *player = (MOB*)GetMobFromIndex(clientId);
	int addr_bclient = clientId * 0x0410;
	BOOL return_ = TRUE;

	short num1 = rand() % 100;
	Packt_Atack *a = (Packt_Atack*)Msg;

	CLogin _Login;
	switch(Packet->PacketId)
	{
	case 0x39D: case 0x39E:
			
		if(SkillHack(clientId,*(short*)&Msg[24]) == FALSE) ZeroMemory((short*)Msg,*(short*)Msg);
		if(a->SkillIndex == -1 || a->SkillIndex >= 151 && a->SkillIndex <= 153)
		{
			if(num1 <= 20) a->AttackCount = 256;	
			else a->AttackCount = 0;						
		}
		//HangerHack(clientId,Msg);

		break;

	
	case 0x20F:
	{
		REQCREATECHAR *rm = (REQCREATECHAR*)Msg;
		if(rm->ClassIndex > 4)
			Msg[32] = 0;
		break;
	}		
	}
	return return_;
}

void __stdcall Hooks::CloseUser(INT32 ClientID)
{
	Ip *v = &vIp[ClientID];
	memset(v,0x00,sizeof(Ip));
	CConta *player = &CCont[ClientID];
	memset(player,0x00,sizeof(CConta));
	printf("Cliente %d desconectado\n",ClientID);
}

INT32 __stdcall Hooks::AcceptUser(INT32 FixClientID, char* szIPAddress)
{
	Ip* v = &vIp[FixClientID];

	Functions* f = new Functions();
	
	if(!CheckIp(szIPAddress))
	{
		f->CloseUser(FixClientID);
		return true;
	}

	strcpy_s(v->Ip,szIPAddress);
	v->Delay = 5;
	
	printf("Cliente %d conectado\n",FixClientID);

	delete f;
	
	return false;
}

static int Count = 0;

int CheckIp(char *IP)
{
	int i;
	int retorna = true;

	for(i = 0; i < PLAYER;i++)
	{
		Ip* v = &vIp[i];
		if(strcmp(v->Ip,IP) == 0)
		{
			Count++;
			if(Count > 4)
			{
				retorna = false;
				break;
			}
		}
	}

	memset(&Count,0x00,sizeof(Count));
	return retorna;
}


void CloseAllSockets()
{
	/*
	for(int i = 0; i < PLAYER;i++)
	{
		Ip* v = &vIp[i];
		memset(v,0x00,sizeof(Ip));
		Disconect(i);
	}
	*/
}


void CloseSocketsIp(char *IP)
{
	/*
	for(int i = 0; i < PLAYER;i++)
	{
		Ip* v = &vIp[i];

		if(strcmp(IP,v->Ip) == 0)
		{
			memset(v,0x00,sizeof(Ip));
			Disconect(i);
		}
	}
	*/
}


struct p101 
{ 
	PacketHeader Header; 
	char strMessage[96];
}; 
struct p37A 
{ 
	PacketHeader Header; 
	short mobID;
	short invType;
	int invSlot;
};
struct p291 
{ 
	PacketHeader Header;
	int cityID; 
}; 
 


struct p27B 
{ 
	PacketHeader Header; 
	short npcID;
	short Unknown;
}; 
struct p39A 
{ 
	PacketHeader Header; 
	int Index; 
}; 
struct p398
{
	PacketHeader Header; 
	int Slot; 
	int Index;
	int Gold;
	int Unknown;
	st_Item Item; 
}; 
struct p397 
{ 
	PacketHeader Header; 
	struct sTrade Trade; 
};

char *GetCityName(int city); 
char *GetPointPlace(int place,int place2,int classe); 
#define DATA 11 
