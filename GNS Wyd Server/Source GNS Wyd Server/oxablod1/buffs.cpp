#include "Stdafx.h"

#include "BaseExp.h"
#include <windows.h>
#include <iostream>

const int n_threads = 2;

using namespace std;

class thParams {        /* Classe para enviar parâmetros à função da thread */
public:
        const char *str;
        int nr;
        thParams(const char *_str, const int _nr): str(_str), nr(_nr) {}
};
void DoTeleporte(LPVOID ClientID, int x, int y)
{
	int telecmd_addr = 0x004010C8;
	_asm
	{
		PUSH y
		PUSH x
		PUSH ClientID
		CALL telecmd_addr
		ADD ESP,0x0C
	}
}

static int macro1 = 0;
static int macro2 = 0;
static int macro3 = 0;
static int macro4 = 0;
static int macro5 = 0;
static int ClientID1;
static int ClientID2;
static int ClientID3;
static int ClientID4;
static int ClientID5;

/*DWORD WINAPI threadFunc2(LPVOID ClientID) 
{
	thParams *parms = (thParams*)ClientID;
	MOB *thisclient = (MOB*)GetMobFromIndexE(ClientID);
	while(1)
	{   
		Sleep(5000);
		for(int i = 0; i < 64; i++)
		{
			if(thisclient->Inventory[i].Index == 3182)
			{
				PergaA1(ClientID,
			}
		}
	}
}*/

void WINAPI timepergA1m()
{
	int itenslot2 = GetFirstSlotSADD(LiderPergaA1,0,64);
	MOB *player = (MOB*)GetMobFromIndex(LiderPergaA1);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1372,3549,1383,3560) == 0)
		{
			DeadArea(1372,3549,1383,3560);
			return;
		}
		if(i == 29)
		{
			DeadArea(1372,3549,1383,3560);
			DoTeleportArea(1965,1770,1383,3560,1372,3549);//Leva pra frente da agua
			LiderPergaA1 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1372,3549,1383,3560) == 0)
		{
			Sleep(5000);
			DoTeleportArea(1965,1770,1383,3560,1372,3549);//Leva pra frente da agua
			LiderPergaA1 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA2m()
{
	int itenslot2 = GetFirstSlotSADD(LiderPergaA2,0,64);
	MOB *player = (MOB*)GetMobFromIndex(LiderPergaA2);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1336,3543,1347,3559) == 0)
		{
			DeadArea(1336,3543,1347,3559);
			return;
		}
		if(i == 29)
		{
			DeadArea(1336,3543,1347,3559);
			DoTeleportArea(1965,1770,1347,3559,1336,3543);//Leva pra frente da agua
			LiderPergaA2 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1336,3543,1347,3559) == 0)
		{
			DoTeleportArea(1965,1770,1347,3559,1336,3543);//Leva pra frente da agua
			LiderPergaA2 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA3m()
{
	int itenslot2 = GetFirstSlotSADD(LiderPergaA3,0,64);
	MOB *player = (MOB*)GetMobFromIndex(LiderPergaA3);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1299,3550,1312,3559) == 0)
		{
			DeadArea(1299,3550,1312,3559);
			return;
		}
		if(i == 29)
		{
			DeadArea(1299,3550,1312,3559);
			DoTeleportArea(1965,1770,1312,3559,1299,3550);//Leva pra frente da agua
			LiderPergaA3 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1299,3550,1312,3559) == 0)
		{
			DoTeleportArea(1965,1770,1312,3559,1299,3550);//Leva pra frente da agua
			LiderPergaA3 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA4m()
{
	int itenslot2 = GetFirstSlotSADD(LiderPergaA4,0,64);
	MOB *player = (MOB*)GetMobFromIndex(LiderPergaA4);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1298,3510,1313,3525) == 0)
		{
			DeadArea(1298,3510,1313,3525);
			return;
		}
		if(i == 29)
		{
			DeadArea(1298,3510,1313,3525);
			DoTeleportArea(1965,1770,1313,3525,1298,3510);//Leva pra frente da agua
			LiderPergaA4 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1298,3510,1313,3525) == 0)
		{
			DoTeleportArea(1965,1770,1313,3525,1298,3510);//Leva pra frente da agua
			LiderPergaA4 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA5m()
{
	int itenslot2 = GetFirstSlotSADD(LiderPergaA5,0,64);
	MOB *player = (MOB*)GetMobFromIndex(LiderPergaA5);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1300,3477,1312,3484) == 0)
		{
			DeadArea(1300,3477,1312,3484);
			return;
		}
		if(i == 29)
		{
			DeadArea(1300,3477,1312,3484);
			DoTeleportArea(1965,1770,1312,3484,1300,3477);//Leva pra frente da agua
			LiderPergaA5 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1300,3477,1312,3484) == 0)
		{
			DoTeleportArea(1965,1770,1312,3484,1300,3477);//Leva pra frente da agua
			LiderPergaA5 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA6m()
{
	int itenslot2 = GetFirstSlotSADD(LiderPergaA6,0,64);
	MOB *player = (MOB*)GetMobFromIndex(LiderPergaA6);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1335,3475,1348,3487) == 0)
		{
			DeadArea(1335,3475,1348,3487);
			return;
		}
		if(i == 29)
		{
			DeadArea(1335,3475,1348,3487);
			DoTeleportArea(1965,1770,1348,3487,1335,3475);//Leva pra frente da agua
			LiderPergaA6 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1335,3475,1348,3487) == 0)
		{
			DoTeleportArea(1965,1770,1348,3487,1335,3475);//Leva pra frente da agua
			LiderPergaA6 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA7m()
{
	int itenslot2 = GetFirstSlotSADD(LiderPergaA7,0,64);
	MOB *player = (MOB*)GetMobFromIndex(LiderPergaA7);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1371,3475,1385,3488) == 0)
		{
			DeadArea(1371,3475,1385,3488);
			return;
		}
		if(i == 29)
		{
			DeadArea(1371,3475,1385,3488);
			DoTeleportArea(1965,1770,1385,3488,1371,3475);//Leva pra frente da agua
			LiderPergaA7 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1371,3475,1385,3488) == 0)
		{
			DoTeleportArea(1965,1770,1385,3488,1371,3475);//Leva pra frente da agua
			LiderPergaA7 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA8m()
{
	int itenslot2 = GetFirstSlotSADD(LiderPergaA8,0,64);
	MOB *player = (MOB*)GetMobFromIndex(LiderPergaA8);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1370,3512,1384,3524) == 0)
		{
			DeadArea(1370,3512,1384,3524);
			return;
		}
		if(i == 29)
		{
			DeadArea(1370,3512,1384,3524);
			DoTeleportArea(1965,1770,1384,3524,1370,3512);//Leva pra frente da agua
			LiderPergaA8 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1370,3512,1384,3524) == 0)
		{
			DoTeleportArea(1965,1770,1384,3524,1370,3512);//Leva pra frente da agua
			LiderPergaA8 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}

void pausar(int ClientID)
{
	if(ClientID1 == ClientID)
	{
		macro1 = 1;
	}
	if(ClientID2 == ClientID)
	{
		macro2 = 1;
	}
	if(ClientID3 == ClientID)
	{
		macro3 = 1;
	}
	if(ClientID4 == ClientID)
	{
		macro4 = 1;
	}
	if(ClientID5 == ClientID)
	{
		macro5 = 1;
	}
}

void PergaA1mac(int ClientID,int slot)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1962 && cY >= 1765)
	{
		if(1 == 1)
		{
			if(PlayerInArea(1372,3549,1383,3560) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1377,3554);
					PTeleport(ClientID,1377,3554);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Gargula_",1377,3554,"npc");
					}
					GreenTimeMap(1383,3560,1372,3549,120);
					LiderPergaA1 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA1m, NULL, 0, 0);
					player->Inventory[slot].Index = 3183;
					//SendALL(ClientID);
					SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
					SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Apenas o líder do grupo pode usar o pergaminho.");
				}
			}
			else
			{
				SendClientMsg(ClientID,"Outros jogadores já estão participando deste nível da quest.");
			}
		}
		else
		{
			SendClientMsg(ClientID,"Seu inventório está cheio.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Não pode usar aqui.");
	}
}
void PergaA2mac(int ClientID,int slot)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1962 && cY >= 1765)
	{
		if(1 == 1)
		{
			if(PlayerInArea(1336,3543,1347,3559) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1341,3554);
					PTeleport(ClientID,1341,3554);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Golem_de_F_",1341,3554,"npc");
					}
					GreenTimeMap(1347,3559,1336,3543,120);
					LiderPergaA2 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA2m, NULL, 0, 0);
					player->Inventory[slot].Index = 3184;
					//SendALL(ClientID);
					SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
					SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Apenas o líder do grupo pode usar o pergaminho.");
				}
			}
			else
			{
				SendClientMsg(ClientID,"Outros jogadores já estão participando deste nível da quest.");
			}
		}
		else
		{
			SendClientMsg(ClientID,"Seu inventório está cheio.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Não pode usar aqui.");
	}
	return;
}
void PergaA3mac(int ClientID,int slot)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1962 && cY >= 1765)
	{
		if(1 == 1)
		{
			if(PlayerInArea(1299,3550,1312,3559) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1305,3554);
					PTeleport(ClientID,1305,3554);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Cav._Negro__",1305,3554,"npc");
					}
					GreenTimeMap(1312,3559,1299,3550,120);
					LiderPergaA3 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA3m, NULL, 0, 0);
					player->Inventory[slot].Index = 3185;
					//SendALL(ClientID);
					SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
					SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Apenas o líder do grupo pode usar o pergaminho.");
				}
			}
			else
			{
				SendClientMsg(ClientID,"Outros jogadores já estão participando deste nível da quest.");
			}
		}
		else
		{
			SendClientMsg(ClientID,"Seu inventório está cheio.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Não pode usar aqui.");
	}
}
void PergaA4mac(int ClientID,int slot)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1962 && cY >= 1765)
	{
		if(1 == 1)
		{
			if(PlayerInArea(1298,3510,1313,3525) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1305,3518);
					PTeleport(ClientID,1305,3518);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Dragao_Lich_",1305,3518,"npc");
					}
					GreenTimeMap(1313,3525,1298,3510,120);
					LiderPergaA4 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA4m, NULL, 0, 0);
					player->Inventory[slot].Index = 3186;
					//SendALL(ClientID);
					SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
					SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Apenas o líder do grupo pode usar o pergaminho.");
				}
			}
			else
			{
				SendClientMsg(ClientID,"Outros jogadores já estão participando deste nível da quest.");
			}
		}
		else
		{
			SendClientMsg(ClientID,"Seu inventório está cheio.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Não pode usar aqui.");
	}
}
void PergaA5mac(int ClientID,int slot)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1962 && cY >= 1765)
	{
		if(1 == 1)
		{
			if(PlayerInArea(1300,3477,1312,3484) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1305,3482);
					PTeleport(ClientID,1305,3482);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Tauron_",1305,3482,"npc");
					}
					GreenTimeMap(1312,3484,1300,3477,120);
					LiderPergaA5 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA5m, NULL, 0, 0);
					player->Inventory[slot].Index = 3187;
					//SendALL(ClientID);
					SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
					SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Apenas o líder do grupo pode usar o pergaminho.");
				}
			}
			else
			{
				SendClientMsg(ClientID,"Outros jogadores já estão participando deste nível da quest.");
			}
		}
		else
		{
			SendClientMsg(ClientID,"Seu inventório está cheio.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Não pode usar aqui.");
	}
}
void PergaA6mac(int ClientID,int slot)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1962 && cY >= 1765)
	{
		if(1 == 1)
		{
			if(PlayerInArea(1335,3475,1348,3487) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1341,3482);
					PTeleport(ClientID,1341,3482);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Morlock____",1341,3482,"npc");
					}
					GreenTimeMap(1348,3487,1335,3475,120);
					LiderPergaA6 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA6m, NULL, 0, 0);
					player->Inventory[slot].Index = 3188;
					//SendALL(ClientID);
					SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
					SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Apenas o líder do grupo pode usar o pergaminho.");
				}
			}
			else
			{
				SendClientMsg(ClientID,"Outros jogadores já estão participando deste nível da quest.");
			}
		}
		else
		{
			SendClientMsg(ClientID,"Seu inventório está cheio.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Não pode usar aqui.");
	}
}
void PergaA7mac(int ClientID,int slot)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1962 && cY >= 1765)
	{
		if(1 == 1)
		{
			if(PlayerInArea(1371,3475,1385,3488) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1377,3483);
					PTeleport(ClientID,1377,3483);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Aeon_Tauron_",1377,3483,"npc");
					}
					GreenTimeMap(1385,3488,1371,3475,120);
					LiderPergaA7 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA7m, NULL, 0, 0);
					player->Inventory[slot].Index = 3189;
					//SendALL(ClientID);
					SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
					SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Apenas o líder do grupo pode usar o pergaminho.");
				}
			}
			else
			{
				SendClientMsg(ClientID,"Outros jogadores já estão participando deste nível da quest.");
			}
		}
		else
		{
			SendClientMsg(ClientID,"Seu inventório está cheio.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Não pode usar aqui.");
	}
}
void PergaA8mac(int ClientID,int slot)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1962 && cY >= 1765)
	{
		if(1 == 1)
		{
			if(PlayerInArea(1370,3512,1384,3524) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1377,3518);
					PTeleport(ClientID,1377,3518);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Verme_da_Areia",1377,3518,"npc");
					}
					GreenTimeMap(1384,3524,1370,3512,120);
					LiderPergaA8 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA8m, NULL, 0, 0);
					player->Inventory[slot].Index = 3190;
					//SendALL(ClientID);
					SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
					SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Apenas o líder do grupo pode usar o pergaminho.");
				}
			}
			else
			{
				SendClientMsg(ClientID,"Outros jogadores já estão participando deste nível da quest.");
			}
		}
		else
		{
			SendClientMsg(ClientID,"Seu inventório está cheio.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Não pode usar aqui.");
	}
}

DWORD WINAPI threadFunc1() 
{
	MOB *cli1 = (MOB*)GetMobFromIndex(ClientID1);
	while(1)
	{   
		if(ClientID1 != 0)
		{
			if(macro1 == 1)
			{
				macro1 = 0;
				ClientID1 = 0;
				SendClientMsg(ClientID1,"Macro desativado.");
				return 0;
			}
			Sleep(5000);
			for(int i = 0; i < 64; i++)
			{
				if(cli1->Inventory[i].Index == 3182)
				{
					PergaA1mac(ClientID1,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3183)
				{
					PergaA2mac(ClientID1,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3184)
				{
					PergaA3mac(ClientID1,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3185)
				{
					PergaA4mac(ClientID1,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3186)
				{
					PergaA5mac(ClientID1,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3187)
				{
					PergaA6mac(ClientID1,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3188)
				{
					PergaA7mac(ClientID1,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3189)
				{
					PergaA8mac(ClientID1,i);
					break;
				}
				if(i == 63)
				{
					SendClientMsg(ClientID1,"Seus pergaminhos acabaram.");
					ClientID1 = 0;
					return 0;
				}
			}
		}
	}
}
DWORD WINAPI threadFunc2() 
{
	MOB *cli1 = (MOB*)GetMobFromIndex(ClientID2);
	while(1)
	{   
		if(ClientID2 != 0)
		{
			if(macro2 == 1)
			{
				macro2 = 0;
				ClientID2 = 0;
				SendClientMsg(ClientID2,"Macro desativado.");
				return 0;
			}
			Sleep(5000);
			for(int i = 0; i < 64; i++)
			{
				if(cli1->Inventory[i].Index == 3182)
				{
					PergaA1mac(ClientID2,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3183)
				{
					PergaA2mac(ClientID2,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3184)
				{
					PergaA3mac(ClientID2,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3185)
				{
					PergaA4mac(ClientID2,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3186)
				{
					PergaA5mac(ClientID2,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3187)
				{
					PergaA6mac(ClientID2,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3188)
				{
					PergaA7mac(ClientID2,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3188)
				{
					PergaA8mac(ClientID2,i);
					break;
				}
				if(i == 63)
				{
					SendClientMsg(ClientID2,"Seus pergaminhos acabaram.");
					ClientID2 = 0;
					return 0;
				}
			}
		}
	}
}
DWORD WINAPI threadFunc3() 
{
	MOB *cli1 = (MOB*)GetMobFromIndex(ClientID3);
	while(1)
	{   
		if(ClientID3 != 0)
		{
			if(macro3 == 1)
			{
				macro3 = 0;
				ClientID3 = 0;
				SendClientMsg(ClientID3,"Macro desativado.");
				return 0;
			}
			Sleep(5000);
			for(int i = 0; i < 64; i++)
			{
				if(cli1->Inventory[i].Index == 3182)
				{
					PergaA1mac(ClientID3,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3183)
				{
					PergaA2mac(ClientID3,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3184)
				{
					PergaA3mac(ClientID3,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3185)
				{
					PergaA4mac(ClientID3,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3186)
				{
					PergaA5mac(ClientID3,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3187)
				{
					PergaA6mac(ClientID3,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3188)
				{
					PergaA7mac(ClientID3,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3188)
				{
					PergaA8mac(ClientID3,i);
					break;
				}
				if(i == 63)
				{
					SendClientMsg(ClientID3,"Seus pergaminhos acabaram.");
					ClientID3 = 0;
					return 0;
				}
			}
		}
	}
}
DWORD WINAPI threadFunc4() 
{
	MOB *cli1 = (MOB*)GetMobFromIndex(ClientID4);
	while(1)
	{   
		if(ClientID4 != 0)
		{
			if(macro4 == 1)
			{
				macro4 = 0;
				ClientID4 = 0;
				SendClientMsg(ClientID4,"Macro desativado.");
				return 0;
			}
			Sleep(5000);
			for(int i = 0; i < 64; i++)
			{
				if(cli1->Inventory[i].Index == 3182)
				{
					PergaA1mac(ClientID4,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3183)
				{
					PergaA2mac(ClientID4,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3184)
				{
					PergaA3mac(ClientID4,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3185)
				{
					PergaA4mac(ClientID4,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3186)
				{
					PergaA5mac(ClientID4,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3187)
				{
					PergaA6mac(ClientID4,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3188)
				{
					PergaA7mac(ClientID4,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3188)
				{
					PergaA8mac(ClientID4,i);
					break;
				}
				if(i == 63)
				{
					SendClientMsg(ClientID4,"Seus pergaminhos acabaram.");
					ClientID4 = 0;
					return 0;
				}
			}
		}
	}
}
DWORD WINAPI threadFunc5() 
{
	MOB *cli1 = (MOB*)GetMobFromIndex(ClientID5);
	while(1)
	{   
		if(ClientID5 != 0)
		{
			if(macro5 == 1)
			{
				macro5 = 0;
				ClientID5 = 0;
				SendClientMsg(ClientID5,"Macro desativado.");
				return 0;
			}
			Sleep(5000);
			for(int i = 0; i < 64; i++)
			{
				if(cli1->Inventory[i].Index == 3182)
				{
					PergaA1mac(ClientID5,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3183)
				{
					PergaA2mac(ClientID5,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3184)
				{
					PergaA3mac(ClientID5,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3185)
				{
					PergaA4mac(ClientID5,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3186)
				{
					PergaA5mac(ClientID5,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3187)
				{
					PergaA6mac(ClientID5,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3188)
				{
					PergaA7mac(ClientID5,i);
					break;
				}
				if(cli1->Inventory[i].Index == 3188)
				{
					PergaA8mac(ClientID5,i);
					break;
				}
				if(i == 63)
				{
					SendClientMsg(ClientID5,"Seus pergaminhos acabaram.");
					ClientID5 = 0;
					return 0;
				}
			}
		}
	}
}

void TimeTeleport(int ClientID)
{
	if(ClientID == ClientID1)
	{
		return;
	}
	if(ClientID == ClientID2)
	{
		return;
	}
	if(ClientID == ClientID3)
	{
		return;
	}
	if(ClientID == ClientID4)
	{
		return;
	}
	if(ClientID == ClientID5)
	{
		return;
	}
	if(ClientID1 == 0)
	{
		ClientID1 = ClientID;
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)threadFunc1, NULL, 0, 0);
		return;
	}
	if(ClientID2 == 0)
	{
		ClientID2 = ClientID;
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)threadFunc2, NULL, 0, 0);
		return;
	}
	if(ClientID3 == 0)
	{
		ClientID3 = ClientID;
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)threadFunc3, NULL, 0, 0);
		return;
	}
	if(ClientID4 == 0)
	{
		ClientID4 = ClientID;
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)threadFunc4, NULL, 0, 0);
		return;
	}
	if(ClientID5 == 0)
	{
		ClientID5 = ClientID;
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)threadFunc5, NULL, 0, 0);
		return;
	}
	SendClientMsg(ClientID,"VAGAS PARA O MACRO ESGOTADAS.");
	//CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)threadFunc2, (LPVOID)ClientID, 0, NULL);
}