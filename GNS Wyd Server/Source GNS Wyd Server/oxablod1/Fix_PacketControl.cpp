#include "Stdafx.h"

////////////////
static char *type[ ] = {"Recv","Send"};

char Numeric[2][101];
char szClientIP[128][16];

char* __stdcall GetIPFromClient(INT32 ClientID){
	if(szClientIP[ClientID][1] == 0)
		return NULL;
	else
		return szClientIP[ClientID];
}



Functions::Functions(){
	CloseUser = (void (__cdecl*)(INT32))0x00459440;
	SendClientMSG = (void (__cdecl*)(INT32, const char*))0x004010FF;
}

Functions::~Functions(){}



void __stdcall Functions::SendPacket(INT32 ClientID, unsigned char* szBuffer, INT32 SizeOfPacket){
	static const DWORD dwSendPacket = 0x004198C0;
	const DWORD dwSocket = (ClientID * 0xC4C) + 0x07B318E8;
	__asm{
		PUSH SizeOfPacket
		PUSH szBuffer
		MOV ECX, dwSocket
		CALL dwSendPacket
	}
}
struct pCL_20Dh
{
    PacketHeader Header;
    char Login[16];
    char Password[12];

    int ClientVersion;
    int unk1;

    char Keys[16];
    char Address[16];
};

void __stdcall Hooks::PacketControlFix(unsigned char* szBuffer, INT32 FixClientID)
{
	PacketHeader* Header = (PacketHeader*)szBuffer;
	Functions* Function = new Functions();
	p_366h *p = (p_366h*)szBuffer;
	pCL_20Dh *Rm = (pCL_20Dh*)szBuffer;
	
	//printf("%s: %X		Size: %d		ClientID: %d \n\n",type[FixClientID],Header->PacketId,Header->Size,Header->ClientID);
	switch(Header->PacketId)
	{
			

			case 0xFDE:
				Header->ClientID = FixClientID;
				Function->Numeric754(szBuffer);
				break;

			case 0x334:
				Header->ClientID = FixClientID;
				Command2(szBuffer);
				break;
		
			case 0x28B:
				Header->ClientID = FixClientID;
				NPC_Sephirot((char*)szBuffer);
				NpcJanela((char*)szBuffer);
				break;

			case 0x3B5:
				Header->ClientID = FixClientID;
				Refinacao10((char*)szBuffer);
				break;
			
			case 0x3D5:
				Header->ClientID = FixClientID;
				Guild_Recrutar_Membro((char*)szBuffer);
				break;
				

			case 0x2C3: // Lindy
				Header->ClientID = FixClientID;
				DestravaArch((char*)szBuffer);
				break;

			case 0x376://bugado nao atualzia intens ao ekipar 
				
				if(archequip((char*)szBuffer) == TRUE)
				{
					ZeroMemory((char*)szBuffer, *(short*)szBuffer);
					MoveItem1(szBuffer);
				}
				MountSRACAO(Header->ClientID);
				break;

			case 0x277:
				Header->ClientID = FixClientID;
				if(PontosADC((char*)szBuffer) == TRUE)
				{
				ZeroMemory(szBuffer, *(short*)szBuffer);
				}
				OitavaHT1((char*)szBuffer);
				break;

			case 0x398:
				Header->ClientID = FixClientID;
				if(Loja(Header->ClientID,*(short*)&szBuffer[16],*(short*)&szBuffer[28],*(int*)&szBuffer[20]) == 0)
				{
					*(short*)&szBuffer[16] = 0;
					Header->ClientID = 0;
					*(short*)&szBuffer[28] = 0;
				}
				break;

			case 0x3BA:
				Header->ClientID = FixClientID;
				Agatha(szBuffer);
				break;

			case 0x2D2:
				Header->ClientID = FixClientID;
				Odin((char*)szBuffer);
				break;
				case 0x272:
	ZeroMemory(szBuffer, *(short*)szBuffer);
	break;

			case 0x3C0:
				Header->ClientID = FixClientID;
				Tinye(szBuffer);
				break;
			case 0x2D3:// NPC Ehre
				Ehre(szBuffer);
				RefinacaoAbencoada(szBuffer);
				npcmais11(szBuffer);
			//	Sugyro(szBuffer);
				break;
			case 0x366:
				MoveHack(szBuffer);
				MountSRACAO(Header->ClientID);
				MountExpira(Header->ClientID);
				break;

			
	}
	delete Function;
}

