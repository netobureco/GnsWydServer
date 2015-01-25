#include "Stdafx.h"


void WINAPI timepergA1()
{
	int itenslot2 = GetFirstSlotSADD(LiderPergaA1,0,64);
	MOB *player = (MOB*)GetMobFromIndex(LiderPergaA1);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1370,3547,1385,3562) == 0)
		{
			DeadArea(1372,3549,1383,3560);
			return;
		}
		if(i == 29)
		{
			DeadArea(1372,3549,1383,3560);
			DoTeleportArea(1965,1770,1383,3560,1372,3549);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3183;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA1);
			LiderPergaA1 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1372,3549,1383,3560) == 0)
		{
			Sleep(5000);
			DoTeleportArea(1965,1770,1383,3560,1372,3549);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3183;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA1);
			LiderPergaA1 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA2()
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
			PByte(0x0487FCE) = 0;//Perga A 2 libera entrada
			player->Inventory[itenslot2].Index = 3184;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA2);
			LiderPergaA2 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1336,3543,1347,3559) == 0)
		{
			DoTeleportArea(1965,1770,1347,3559,1336,3543);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3184;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA2);
			LiderPergaA2 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA3()
{
	int itenslot2 = GetFirstSlotSADD(LiderPergaA3,0,64);
	MOB *player = (MOB*)GetMobFromIndex(LiderPergaA3);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1297,3548,1314,3561) == 0)
		{
			DeadArea(1297,3548,1314,3561);
			return;
		}
		if(i == 29)
		{
			DeadArea(1297,3548,1314,3561);
			DoTeleportArea(1965,1770,1314,3561,1297,3548);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3185;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA3);
			LiderPergaA3 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1297,3548,1314,3561) == 0)
		{
			DoTeleportArea(1965,1770,1314,3561,1297,3548);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3185;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA3);
			LiderPergaA3 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA4()
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
			player->Inventory[itenslot2].Index = 3186;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA4);
			LiderPergaA4 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1298,3510,1313,3525) == 0)
		{
			DoTeleportArea(1965,1770,1313,3525,1298,3510);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3186;
			SendALL(LiderPergaA4);
			LiderPergaA4 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA5()
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
			player->Inventory[itenslot2].Index = 3187;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA5);
			LiderPergaA5 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1300,3477,1312,3484) == 0)
		{
			DoTeleportArea(1965,1770,1312,3484,1300,3477);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3187;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA5);
			LiderPergaA5 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA6()
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
			player->Inventory[itenslot2].Index = 3188;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA6);
			LiderPergaA6 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1335,3475,1348,3487) == 0)
		{
			DoTeleportArea(1965,1770,1348,3487,1335,3475);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3188;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA6);
			LiderPergaA6 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA7()
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
			player->Inventory[itenslot2].Index = 3189;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA7);
			LiderPergaA7 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1371,3475,1385,3488) == 0)
		{
			DoTeleportArea(1965,1770,1385,3488,1371,3475);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3189;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA7);
			LiderPergaA7 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergA8()
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
			player->Inventory[itenslot2].Index = 3190;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA8);
			LiderPergaA8 = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1370,3512,1384,3524) == 0)
		{
			DoTeleportArea(1965,1770,1384,3524,1370,3512);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3190;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(LiderPergaA8);
			LiderPergaA8 = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timenesesA()
{
	srand((int)time(NULL));
	int random = rand() % 4;
	switch(random)
	{
	case 1:
		CreateMOB("Demon_Lord_",1342,3517,"Agua-A");
		CreateMOB("Cav._Mortal",1342,3517,"Agua-A");
		CreateMOB("Cav._Mortal",1342,3517,"Agua-A");
		break;
	case 2:
		CreateMOB("Cav._Mortal_",1342,3517,"Agua-A");
		CreateMOB("Cavaleiro_Negro",1342,3517,"Agua-A");
		CreateMOB("Cavaleiro_Negro",1342,3517,"Agua-A");
		CreateMOB("Cavaleiro_Negro",1342,3517,"Agua-A");
		CreateMOB("Cavaleiro_Negro",1342,3517,"Agua-A");
		break;
	case 3:
		CreateMOB("Gargula_Sabio_",1342,3517,"Agua-A");
		CreateMOB("Gargula",1342,3517,"Agua-A");
		CreateMOB("Gargula",1342,3517,"Agua-A");
		CreateMOB("Gargula",1342,3517,"Agua-A");
		CreateMOB("Gargula",1342,3517,"Agua-A");
		break;
	default:
		CreateMOB("Hidra_Dourada",1342,3517,"Agua-A");
		CreateMOB("Hidra_Dourada",1342,3517,"Agua-A");
		CreateMOB("Hidra_Dourada",1342,3517,"Agua-A");
		CreateMOB("Hidra_Dourada",1342,3517,"Agua-A");
		CreateMOB("Hidra_Dourada",1342,3517,"Agua-A");
		CreateMOB("Hidra_Dourada",1342,3517,"Agua-A");
		CreateMOB("Hidra_Dourada",1342,3517,"Agua-A");
		CreateMOB("Hidra_Dourada",1342,3517,"Agua-A");
		CreateMOB("Hidra_Dourada",1342,3517,"Agua-A");
		break;
	}
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1335,3509,1350,3526) == 0)
		{
			DeadArea(1335,3509,1350,3526);
			return;
		}
		if(i == 29)
		{
			DeadArea(1335,3509,1350,3526);
			DoTeleportArea(1965,1770,1350,3526,1335,3509);//Leva pra frente da agua
			return;
		}
		if(MobInArea(1335,3509,1350,3526) == 0)
		{
			DoTeleportArea(1965,1770,1350,3526,1335,3509);
			return;
		}
		Sleep(4000);
	}
}

void PergaA1(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1964 && cY >= 1770)
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
						CreateMOB("Gargula_",1377,3554,"Agua-A");
					}
					GreenTimeMap(1383,3560,1372,3549,120);
					LiderPergaA1 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA1, NULL, 0, 0);
					Amount(ClientID,ItemSend);
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
void PergaA2(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1964 && cY >= 1770)
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
						CreateMOB("Golem_de_F_",1341,3554,"Agua-A");
					}
					GreenTimeMap(1347,3559,1336,3543,120);
					LiderPergaA2 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA2, NULL, 0, 0);
					Amount(ClientID,ItemSend);
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
void PergaA3(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1964 && cY >= 1770)
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
						CreateMOB("Cav._Negro__",1305,3554,"Agua-A");
					}
					GreenTimeMap(1312,3559,1299,3550,120);
					LiderPergaA3 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA3, NULL, 0, 0);
					Amount(ClientID,ItemSend);
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
void PergaA4(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1964 && cY >= 1770)
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
						CreateMOB("Dragao_Lich_",1305,3518,"Agua-A");
					}
					GreenTimeMap(1313,3525,1298,3510,120);
					LiderPergaA4 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA4, NULL, 0, 0);
					Amount(ClientID,ItemSend);
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
void PergaA5(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1964 && cY >= 1770)
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
						CreateMOB("Tauron_",1305,3482,"Agua-A");
					}
					GreenTimeMap(1312,3484,1300,3477,120);
					LiderPergaA5 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA5, NULL, 0, 0);
					Amount(ClientID,ItemSend);
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
void PergaA6(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1964 && cY >= 1770)
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
						CreateMOB("Morlock____",1341,3482,"Agua-A");
					}
					GreenTimeMap(1348,3487,1335,3475,120);
					LiderPergaA6 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA6, NULL, 0, 0);
					Amount(ClientID,ItemSend);
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
void PergaA7(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1964 && cY >= 1770)
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
						CreateMOB("Aeon_Tauron_",1377,3483,"Agua-A");
					}
					GreenTimeMap(1385,3488,1371,3475,120);
					LiderPergaA7 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA7, NULL, 0, 0);
					Amount(ClientID,ItemSend);
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
void PergaA8(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1964 && cY >= 1770)
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
						CreateMOB("Verme_da_Areia",1377,3518,"Agua-A");
					}
					GreenTimeMap(1384,3524,1370,3512,120);
					LiderPergaA8 = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergA8, NULL, 0, 0);
					Amount(ClientID,ItemSend);
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
void NesesA(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1964 && cY >= 1770)
	{
		if(PlayerInArea(1335,3509,1350,3526) == 0)
		{
			if(Grupo == 0)
			{
				DoTeleport(ClientID,1342,3521);
				PTeleport(ClientID,1342,3521);
				GreenTimeMap(1350,3526,1335,3509,120);
				CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timenesesA, NULL, 0, 0);
				Amount(ClientID,ItemSend);
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
		SendClientMsg(ClientID,"Não pode usar aqui.");
	}
}
