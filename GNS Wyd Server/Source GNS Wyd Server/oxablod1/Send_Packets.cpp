#include "Stdafx.h"
#include <stdarg.h> // arglist

char BufferSend[2048];

void ContadorLeft(int ClientID, int left)
{
	
	p3B0 *p = (p3B0*)BufferSend;//contador de mob do cao aff 
	p->Header.ClientID = ClientID;
	p->Header.PacketId = 0x3B0;
	p->Header.Size = sizeof(p3B0);
	p->Left = left;
	SendPacket(&BufferSend[0],sizeof(p3B0));
}

void SendMsgGreen(int ClientID, char *Text)
{
	ZeroMemory(BufferSend,110);
	*(short*)&BufferSend[0] = 108;
	*(short*)&BufferSend[2] = 0;
	*(short*)&BufferSend[4] = 0xD1D;
	*(short*)&BufferSend[6] = ClientID;
	strcpy((char*)&BufferSend[12], (const char*)Text);
	for(int i = 0; i < 100; i++)
		SendPacket(BufferSend, i);
}

void Qizzz()
{
	ZeroMemory(BufferSend,236);
	*(short*)&BufferSend[0] = 236;
	*(short*)&BufferSend[4] = 0x1c6;
	*(short*)&BufferSend[6] = 0x7530;
	//*(short*)&BufferSend[6] = ClientID;
	*(short*)&BufferSend[107] = 0x20;
	*(short*)&BufferSend[139] = 0x20;
	*(short*)&BufferSend[171] = 0x20;
	*(short*)&BufferSend[203] = 0x20;

	for(int i = 0; i < 5; i++)
	{
		strcpy((char*)&BufferSend[12],"O numero do SAC de uma lata de fanta uva é:");
		strcpy((char*)&BufferSend[108],"08000212121");
		strcpy((char*)&BufferSend[140],"08000121212");
		strcpy((char*)&BufferSend[172],"08000414141");
		strcpy((char*)&BufferSend[204],"08000141414");
		SendPacket(BufferSend, i);
	}
	for(int i = 4; i < 10; i++)
	{
		strcpy((char*)&BufferSend[12],"O código de barras da lata de fanta uva, que incorre em erro");
		strcpy((char*)&BufferSend[108],"7894900050011");
		strcpy((char*)&BufferSend[140],"7894900050012");
		strcpy((char*)&BufferSend[172],"7894900050013");
		strcpy((char*)&BufferSend[204],"7894900050014");
		SendPacket(BufferSend, i);
	}
	for(int i = 9; i < 15; i++)
	{
		strcpy((char*)&BufferSend[12],"Porção de 350ml de fanta uva tem valor energ. exceto de:");
		strcpy((char*)&BufferSend[108],"10 porcento.");
		strcpy((char*)&BufferSend[140],"9 porcento.");
		strcpy((char*)&BufferSend[172],"8 porcento.");
		strcpy((char*)&BufferSend[204],"7 porcento.");
		SendPacket(BufferSend, i);
	}
	for(int i = 14; i < 20; i++)
	{
		strcpy((char*)&BufferSend[12],"Envelope de deposito em $ no sicredi tem duração de? ");
		strcpy((char*)&BufferSend[108],"30 dias");
		strcpy((char*)&BufferSend[140],"20 dias");
		strcpy((char*)&BufferSend[172],"10 dias");
		strcpy((char*)&BufferSend[204],"15 dias");
		SendPacket(BufferSend, i);
	}
	for(int i = 19; i < 30; i++)
	{
		strcpy((char*)&BufferSend[12],"O código de barras da lata de fanta uva, que incorre em erro");
		strcpy((char*)&BufferSend[108],"7894900050011");
		strcpy((char*)&BufferSend[140],"7894900050012");
		strcpy((char*)&BufferSend[172],"7894900050013");
		strcpy((char*)&BufferSend[204],"7894900050014");
		SendPacket(BufferSend, i);
	}
	for(int i = 29; i < 40; i++)
	{
		strcpy((char*)&BufferSend[12],"Envelope de deposito em $ no sicredi tem duração de? ");
		strcpy((char*)&BufferSend[108],"30 dias");
		strcpy((char*)&BufferSend[140],"20 dias");
		strcpy((char*)&BufferSend[172],"10 dias");
		strcpy((char*)&BufferSend[204],"15 dias");
		SendPacket(BufferSend, i);
	}
	for(int i = 39; i < 50; i++)
	{
		strcpy((char*)&BufferSend[12],"Porção de 350ml de fanta uva tem valor energ. exceto de:");
		strcpy((char*)&BufferSend[108],"10 porcento.");
		strcpy((char*)&BufferSend[140],"9 porcento.");
		strcpy((char*)&BufferSend[172],"8 porcento.");
		strcpy((char*)&BufferSend[204],"7 porcento.");
		SendPacket(BufferSend, i);
	}
	for(int i = 49; i < 60; i++)
	{
		strcpy((char*)&BufferSend[12],"Envelope de deposito em $ no sicredi tem duração de? ");
		strcpy((char*)&BufferSend[108],"30 dias");
		strcpy((char*)&BufferSend[140],"20 dias");
		strcpy((char*)&BufferSend[172],"10 dias");
		strcpy((char*)&BufferSend[204],"15 dias");
		SendPacket(BufferSend, i);
	}
	for(int i = 59; i < 100; i++)
	{
		strcpy((char*)&BufferSend[12],"O código de barras da lata de fanta uva, que incorre em erro");
		strcpy((char*)&BufferSend[108],"7894900050011");
		strcpy((char*)&BufferSend[140],"7894900050012");
		strcpy((char*)&BufferSend[172],"7894900050013");
		strcpy((char*)&BufferSend[204],"7894900050014");
		SendPacket(BufferSend, i);
	}
}

void SendMsgPT(int ClientID,char *Text)
{
	int cPartys = PInt(ClientID*0x0410 + 0x015C6CD0);
	
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	ZeroMemory(BufferSend,130);
	*(short*)&BufferSend[0] = 128;
	*(short*)&BufferSend[2] = 0;
	*(short*)&BufferSend[4] = 0x334;
	*(short*)&BufferSend[6] = ClientID;
	strcpy((char*)&BufferSend[12], (const char*)player->Name);
	strcpy((char*)&BufferSend[28], (const char*)Text);
	
	if(cPartys == 0) //Se for zero é pq quem ta chamando é o proprio lider
	{
		for(int i = 0; i < 12; i++)
		{
			int masterIndex = ClientID * 0x410;
			int memberId = *(WORD*)(masterIndex + 0x15C6D86 + (i * 2));
 
			if(memberId != ClientID)
			{
				if(*(DWORD*)(memberId * 0xC4C + 0x7B318E0) == 0x16)
				{
					SendPacket(BufferSend,memberId);          
				}
			}
		}
	}
	else
	{
		SendPacket(BufferSend,cPartys);
		for(int i = 0; i < 12; i++)
		{
			int masterIndex = cPartys * 0x410;
			int memberId = *(WORD*)(masterIndex + 0x15C6D86 + (i * 2));
 
			if(memberId != ClientID)
			{
				if(*(DWORD*)(memberId * 0xC4C + 0x7B318E0) == 0x16)
				{
					SendPacket(BufferSend,memberId);     
				}
			}
		}
	}
}
void MsgSimples(int ClientID, char *Text)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	ZeroMemory(BufferSend,130);
	*(short*)&BufferSend[0] = 128;
	*(short*)&BufferSend[2] = 0;
	*(short*)&BufferSend[4] = 0x334;
	*(short*)&BufferSend[6] = ClientID;
	strcpy((char*)&BufferSend[12], (const char*)player->Name);
	strcpy((char*)&BufferSend[28], (const char*)Text);
	for(int i=1;i<100;i++)
	{
		if(i != ClientID)
			SendPacket(BufferSend,i);
	}        
}

void TempoVerde(int ClientID, int tempo)
{
	
	p3A1 *p = (p3A1*)BufferSend;
	p->Header.Size = sizeof p3A1;
	p->Header.ClientID = ClientID;
	p->Header.PacketId = 0x3A1;
	p->Tempo = tempo;
	SendPacket(&BufferSend[0],sizeof(p3A1));
}

void Quiz(int ClientID,char *title, char *msg)
{
	p_7b1 *p = (p_7b1*)BufferSend;
	p->header.Size = 400;
	p->header.PacketId = 0x7b1;
	p->header.ClientID = ClientID;
	strcpy(p->title, (const char*)title);
	strcpy(p->msg, (const char*)msg);
	SendPacket(&BufferSend[0],sizeof(p_7b1));
}
void p1C6(int ClientID, char* Msg, char* Asw1, char* Asw2, char* Asw3, char* Asw4) // Quiz
{ 
	p_1C6 p;
	memset(&p, 0, sizeof p);
	p.Header.ClientID = ClientID;
	p.Header.Size = sizeof p_1C6;
	p.Header.PacketId = 0x1C6; 
	strcpy(p.Title, Msg); 
	strcpy(p.Asw1, Asw1); 
	strcpy(p.Asw2, Asw2); 
	strcpy(p.Asw3, Asw3); 
	strcpy(p.Asw4, Asw4);
	SendPacket(&BufferSend[0], ClientID, sizeof p_1C6);
	
}

void pD1D(int clientid, int id, char *msg)
{
	p_D1D *p = (p_D1D*)BufferSend;

	p->Header.PacketId = 0xD1D;
	p->Header.Size = sizeof(p_D1D);
	p->Header.ClientID = 0x7530;
	strcpy_s(p->msg,msg);
	//memset(&BufferSend[2], 0xD1D, 2); // Para não dar Unknow Packet na TMSRV
	SendPacket(&BufferSend[0],id,sizeof(p_D1D));
	
	
}