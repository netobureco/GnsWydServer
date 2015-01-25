#include "Stdafx.h"


void WINAPI timepergN1()
{
	int ClientID = PByte(0x0487FDF);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1112,3544,1128,3562) == 0)
		{
			DeadArea(1112,3544,1128,3562);
			return;
		}
		if(i == 29)
		{
			GreenTimeMap(1112,3544,1128,3562,120);
			Sleep(120000);
			DeadArea(1112,3544,1128,3562);
			DoTeleportArea(1965,1770,1128,3562,1112,3544);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3174;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FDF) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1112,3544,1128,3562) == 0)
		{
			DoTeleportArea(1965,1770,1128,3562,1112,3544);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3174;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FDF) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergN2()
{
	int ClientID = PByte(0x0487FDE);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1077,3545,1092,3563) == 0)
		{
			DeadArea(1077,3545,1092,3563);
			return;
		}
		if(i == 29)
		{
			GreenTimeMap(1077,3545,1092,3563,120);
			Sleep(120000);
			DeadArea(1077,3545,1092,3563);
			DoTeleportArea(1965,1770,1092,3563,1077,3545);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3175;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FDE) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1077,3545,1092,3563) == 0)
		{
			DoTeleportArea(1965,1770,1092,3563,1077,3545);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3175;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FDE) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergN3()
{
	int ClientID = PByte(0x0487FDD);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1041,3546,1057,3562) == 0)
		{
			DeadArea(1041,3546,1057,3562);
			return;
		}
		if(i == 29)
		{
			GreenTimeMap(1041,3546,1057,3562,120);
			Sleep(120000);
			DeadArea(1041,3546,1057,3562);
			DoTeleportArea(1965,1770,1057,3562,1041,3546);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3176;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FDD) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1041,3546,1057,3562) == 0)
		{
			DoTeleportArea(1965,1770,1057,3562,1041,3546);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3176;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FDD) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergN4()
{
	int ClientID = PByte(0x0487FDC);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1040,3509,1057,3526) == 0)
		{
			DeadArea(1040,3509,1057,3526);
			return;
		}
		if(i == 29)
		{
			GreenTimeMap(1040,3509,1057,3526,120);
			Sleep(120000);
			DeadArea(1040,3509,1057,3526);
			DoTeleportArea(1965,1770,1057,3526,1040,3509);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3177;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FDC) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1040,3509,1057,3526) == 0)
		{
			DoTeleportArea(1965,1770,1057,3526,1040,3509);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3177;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FDC) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergN5()
{
	int ClientID = PByte(0x0487FDB);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1041,3475,1056,3490) == 0)
		{
			DeadArea(1041,3475,1056,3490);
			return;
		}
		if(i == 29)
		{
			GreenTimeMap(1041,3475,1056,3490,120);
			Sleep(120000);
			DeadArea(1041,3475,1056,3490);
			DoTeleportArea(1965,1770,1056,3490,1041,3475);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3178;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FDB) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1041,3475,1056,3490) == 0)
		{
			DoTeleportArea(1965,1770,1056,3490,1041,3475);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3178;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FDB) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergN6()
{
	int ClientID = PByte(0x0487FDA);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1078,3475,1092,3489) == 0)
		{
			DeadArea(1078,3475,1092,3489);
			return;
		}
		if(i == 29)
		{
			GreenTimeMap(1078,3475,1092,3489,120);
			Sleep(120000);
			DeadArea(1078,3475,1092,3489);
			DoTeleportArea(1965,1770,1092,3489,1078,3475);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3179;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FDA) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1078,3475,1092,3489) == 0)
		{
			DoTeleportArea(1965,1770,1092,3489,1078,3475);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3179;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FDA) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergN7()
{
	int ClientID = PByte(0x0487FD9);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1114,3474,1128,3488) == 0)
		{
			DeadArea(1114,3474,1128,3488);
			return;
		}
		if(i == 29)
		{
			GreenTimeMap(1114,3474,1128,3488,120);
			Sleep(120000);
			DeadArea(1114,3474,1128,3488);
			DoTeleportArea(1965,1770,1128,3488,1114,3474);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3180;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FD9) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1114,3474,1128,3488) == 0)
		{
			DoTeleportArea(1965,1770,1128,3488,1114,3474);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3180;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FD9) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergN8()
{
	int ClientID = PByte(0x0487FD8);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1114,3511,1128,3525) == 0)
		{
			DeadArea(1114,3511,1128,3525);
			return;
		}
		if(i == 29)
		{
			GreenTimeMap(1114,3511,1128,3525,120);
			Sleep(120000);
			DeadArea(1114,3511,1128,3525);
			DoTeleportArea(1965,1770,1128,3525,1114,3511);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3181;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FD8) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1114,3511,1128,3525) == 0)
		{
			DoTeleportArea(1965,1770,1128,3525,1114,3511);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 3181;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487FD8) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timenesesN()
{
	srand((int)time(NULL));
	int random = rand() % 4;
	switch(random)
	{
	case 1:
		CreateMOB("Demon_Lord_",1087,3517,"Agua-N");
		CreateMOB("Cav._Mortal",1087,3517,"Agua-N");
		CreateMOB("Cav._Mortal",1087,3517,"Agua-N");
		break;
	case 2:
		CreateMOB("Cav._Mortal_",1087,3517,"Agua-N");
		CreateMOB("Cavaleiro_Negro",1087,3517,"Agua-N");
		CreateMOB("Cavaleiro_Negro",1087,3517,"Agua-N");
		CreateMOB("Cavaleiro_Negro",1087,3517,"Agua-N");
		CreateMOB("Cavaleiro_Negro",1087,3517,"Agua-N");
		break;
	case 3:
		CreateMOB("Gargula_Sabio_",1087,3517,"Agua-N");
		CreateMOB("Gargula",1087,3517,"Agua-N");
		CreateMOB("Gargula",1087,3517,"Agua-N");
		CreateMOB("Gargula",1087,3517,"Agua-N");
		CreateMOB("Gargula",1087,3517,"Agua-N");
		break;
	default:
		CreateMOB("Hidra_Dourada",1087,3517,"Agua-N");
		CreateMOB("Hidra_Dourada",1087,3517,"Agua-N");
		CreateMOB("Hidra_Dourada",1087,3517,"Agua-N");
		CreateMOB("Hidra_Dourada",1087,3517,"Agua-N");
		CreateMOB("Hidra_Dourada",1087,3517,"Agua-N");
		CreateMOB("Hidra_Dourada",1087,3517,"Agua-N");
		CreateMOB("Hidra_Dourada",1087,3517,"Agua-N");
		CreateMOB("Hidra_Dourada",1087,3517,"Agua-N");
		CreateMOB("Hidra_Dourada",1087,3517,"Agua-N");
		break;
	}
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1076,3507,1096,3529) == 0)
		{
			DeadArea(1076,3507,1096,3529);
			return;
		}
		if(i == 29)
		{
			DeadArea(1076,3507,1096,3529);
			DoTeleportArea(1965,1770,1096,3529,1076,3507);//Leva pra frente da agua
			return;
		}
		if(MobInArea(1076,3507,1096,3529) == 0)
		{
			DoTeleportArea(1965,1770,1096,3529,1076,3507);
			return;
		}
		Sleep(4000);
	}
}

void PergaN1(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1112,3544,1128,3562) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1122,3552);
					PTeleport(ClientID,1122,3552);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Troll_N_1",1121,3554,"Agua-N");
					}
					GreenTimeMap(1128,3562,1112,3544,120);
					PByte(0x0487FDF) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergN1, NULL, 0, 0);
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
void PergaN2(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1077,3545,1092,3563) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1085,3552);
					PTeleport(ClientID,1085,3552);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Troll_N_1",1086,3554,"Agua-N");
					}
					GreenTimeMap(1092,3563,1077,3545,120);
					PByte(0x0487FDE) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergN2, NULL, 0, 0);
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
void PergaN3(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1041,3546,1057,3562) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1049,3551);
					PTeleport(ClientID,1049,3551);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Troll_N_1",1049,3554,"Agua-N");
					}
					GreenTimeMap(1057,3562,1041,3546,120);
					PByte(0x0487FDD) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergN3, NULL, 0, 0);
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
void PergaN4(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1040,3509,1057,3526) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1049,3516);
					PTeleport(ClientID,1049,3516);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Troll_N_1",1049,3518,"Agua-N");
					}
					GreenTimeMap(1057,3526,1040,3509,120);
					PByte(0x0487FDC) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergN4, NULL, 0, 0);
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
void PergaN5(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1041,3475,1056,3490) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1050,3480);
					PTeleport(ClientID,1050,3480);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Troll_N_1",1049,3482,"Agua-N");
					}
					GreenTimeMap(1056,3490,1041,3475,120);
					PByte(0x0487FDB) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergN5, NULL, 0, 0);
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
void PergaN6(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1078,3475,1092,3489) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1086,3480);
					PTeleport(ClientID,1086,3480);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Troll_N_1",1085,3482,"Agua-N");
					}
					GreenTimeMap(1092,3489,1078,3475,120);
					PByte(0x0487FDA) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergN6, NULL, 0, 0);
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
void PergaN7(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1114,3474,1128,3488) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1121,3480);
					PTeleport(ClientID,1121,3480);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Troll_N_1",1122,3482,"Agua-N");
					}
					GreenTimeMap(1128,3488,1114,3474,120);
					PByte(0x0487FD9) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergN7, NULL, 0, 0);
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
void PergaN8(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1114,3511,1128,3525) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1122,3515);
					PTeleport(ClientID,1122,3515);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Troll_N_1",1122,3518,"Agua-N");
					}
					GreenTimeMap(1128,3525,1114,3511,120);
					PByte(0x0487FD8) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergN8, NULL, 0, 0);
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
void NesesN(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1964 && cY >= 1770)
	{
		if(PlayerInArea(1076,3507,1096,3529) == 0)
		{
			if(Grupo == 0)
			{
				DoTeleport(ClientID,1086,3512);
				PTeleport(ClientID,1086,3512);
				GreenTimeMap(1096,3529,1076,3507,120);
				CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timenesesN, NULL, 0, 0);
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