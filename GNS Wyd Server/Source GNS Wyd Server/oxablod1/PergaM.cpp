#include "Stdafx.h"


void WINAPI timepergM1()
{
	int ClientID = PByte(0x0487ff6);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1240,3673,1257,3691) == 0)
		{
			DeadArea(1240,3673,1257,3691);
			return;
		}
		if(i == 29)
		{
			DeadArea(1240,3673,1257,3691);
			DoTeleportArea(1965,1770,1257,3691,1240,3673);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 778;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ff6) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1240,3673,1257,3691) == 0)
		{
			DoTeleportArea(1965,1770,1257,3691,1240,3673);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 778;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ff6) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergM2()
{
	int ClientID = PByte(0x0487ff7);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1200,3672,1220,3692) == 0)
		{
			DeadArea(1200,3672,1220,3692);
			return;
		}
		if(i == 29)
		{
			DeadArea(1200,3672,1220,3692);
			DoTeleportArea(1965,1770,1220,3692,1200,3672);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 779;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ff7) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1200,3672,1220,3692) == 0)
		{
			DoTeleportArea(1965,1770,1220,3692,1200,3672);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 779;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ff7) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergM3()
{
	int ClientID = PByte(0x0487ff8);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1166,3673,1187,3691) == 0)
		{
			DeadArea(1166,3673,1187,3691);
			return;
		}
		if(i == 29)
		{
			DeadArea(1166,3673,1187,3691);
			DoTeleportArea(1965,1770,1187,3691,1166,3673);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 780;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ff8) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1166,3673,1187,3691) == 0)
		{
			DoTeleportArea(1965,1770,1187,3691,1166,3673);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 780;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ff8) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergM4()
{
	int ClientID = PByte(0x0487ff9);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1166,3636,1386,3655) == 0)
		{
			DeadArea(1166,3636,1386,3655);
			return;
		}
		if(i == 29)
		{
			DeadArea(1166,3636,1386,3655);
			DoTeleportArea(1965,1770,1386,3655,1166,3636);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 781;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ff9) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1166,3636,1386,3655) == 0)
		{
			DoTeleportArea(1965,1770,1386,3655,1166,3636);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 781;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ff9) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergM5()
{
	int ClientID = PByte(0x0487ffa);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1166,3600,1186,3619) == 0)
		{
			DeadArea(1166,3600,1186,3619);
			return;
		}
		if(i == 29)
		{
			DeadArea(1166,3600,1186,3619);
			DoTeleportArea(1965,1770,1186,3619,1166,3600);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 782;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ffa) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1166,3600,1186,3619) == 0)
		{
			DoTeleportArea(1965,1770,1186,3619,1166,3600);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 782;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ffa) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergM6()
{
	int ClientID = PByte(0x0487ffb);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1203,3600,1222,3619) == 0)
		{
			DeadArea(1203,3600,1222,3619);
			return;
		}
		if(i == 29)
		{
			DeadArea(1203,3600,1222,3619);
			DoTeleportArea(1965,1770,1222,3619,1203,3600);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 783;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ffb) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1203,3600,1222,3619) == 0)
		{
			DoTeleportArea(1965,1770,1222,3619,1203,3600);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 783;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ffb) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergM7()
{
	int ClientID = PByte(0x0487ffc);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1239,3600,1258,3617) == 0)
		{
			DeadArea(1239,3600,1258,3617);
			return;
		}
		if(i == 29)
		{
			DeadArea(1239,3600,1258,3617);
			DoTeleportArea(1965,1770,1258,3617,1239,3600);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 784;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ffc) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1239,3600,1258,3617) == 0)
		{
			DoTeleportArea(1965,1770,1258,3617,1239,3600);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 784;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ffc) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timepergM8()
{
	int ClientID = PByte(0x0487ffd);
	int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1240,3636,1258,3655) == 0)
		{
			DeadArea(1240,3636,1258,3655);
			return;
		}
		if(i == 29)
		{
			DeadArea(1240,3636,1258,3655);
			DoTeleportArea(1965,1770,1258,3655,1240,3636);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 785;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ffd) = 0;//zera ClientID do lider
			return;
		}
		if(MobInArea(1240,3636,1258,3655) == 0)
		{
			DoTeleportArea(1965,1770,1258,3655,1240,3636);//Leva pra frente da agua
			player->Inventory[itenslot2].Index = 785;
			player->Inventory[itenslot2].EF1 = 61;
			player->Inventory[itenslot2].EFV1 = 0;
			player->Inventory[itenslot2].EF2 = 61;
			player->Inventory[itenslot2].EFV2 = 0;
			player->Inventory[itenslot2].EF3 = 61;
			player->Inventory[itenslot2].EFV3 = 0;
			SendALL(ClientID);
			PByte(0x0487ffd) = 0;//zera ClientID do lider
			return;
		}
		Sleep(4000);
	}
}
void WINAPI timenesesM()
{
	srand((int)time(NULL));
	int random = rand() % 4;
	switch(random)
	{
	case 1:
		CreateMOB("Demon_Lord_",1214,3644,"Agua-M");
		CreateMOB("Cav._Mortal",1214,3644,"Agua-M");
		CreateMOB("Cav._Mortal",1214,3644,"Agua-M");
		break;
	case 2:
		CreateMOB("Cav._Mortal_",1214,3644,"Agua-M");
		CreateMOB("Cavaleiro_Negro",1214,3644,"Agua-M");
		CreateMOB("Cavaleiro_Negro",1214,3644,"Agua-M");
		CreateMOB("Cavaleiro_Negro",1214,3644,"Agua-M");
		CreateMOB("Cavaleiro_Negro",1214,3644,"Agua-M");
		break;
	case 3:
		CreateMOB("Gargula_Sabio_",1214,3644,"Agua-M");
		CreateMOB("Gargula",1214,3644,"Agua-M");
		CreateMOB("Gargula",1214,3644,"Agua-M");
		CreateMOB("Gargula",1214,3644,"Agua-M");
		CreateMOB("Gargula",1214,3644,"Agua-M");
		break;
	default:
		CreateMOB("Hidra_Dourada",1214,3644,"Agua-M");
		CreateMOB("Hidra_Dourada",1214,3644,"Agua-M");
		CreateMOB("Hidra_Dourada",1214,3644,"Agua-M");
		CreateMOB("Hidra_Dourada",1214,3644,"Agua-M");
		CreateMOB("Hidra_Dourada",1214,3644,"Agua-M");
		CreateMOB("Hidra_Dourada",1214,3644,"Agua-M");
		CreateMOB("Hidra_Dourada",1214,3644,"Agua-M");
		CreateMOB("Hidra_Dourada",1214,3644,"Agua-M");
		CreateMOB("Hidra_Dourada",1214,3644,"Agua-M");
		break;
	}
	for(int i = 0;i < 30;i++)
	{
		if(PlayerInArea(1201,3633,1227,3658) == 0)
		{
			DeadArea(1201,3633,1227,3658);
			return;
		}
		if(i == 29)
		{
			DeadArea(1201,3633,1227,3658);
			DoTeleportArea(1965,1770,1227,3658,1201,3633);//Leva pra frente da agua
			return;
		}
		if(MobInArea(1201,3633,1227,3658) == 0)
		{
			DoTeleportArea(1965,1770,1227,3658,1201,3633);
			return;
		}
		Sleep(4000);
	}
}

void PergaM1(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1240,3673,1257,3691) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1250,3682);
					PTeleport(ClientID,1250,3682);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Elfo_Negro_",1250,3680,"Agua-M");
					}
					GreenTimeMap(1257,3691,1240,3673,120);
					PByte(0x0487ff6) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergM1, NULL, 0, 0);
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
void PergaM2(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1200,3672,1220,3692) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1214,3681);
					PTeleport(ClientID,1214,3681);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Troll_Ghoul_",1214,3680,"Agua-M");
					}
					GreenTimeMap(1220,3692,1200,3672,120);
					PByte(0x0487ff7) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergM2, NULL, 0, 0);
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
void PergaM3(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1166,3673,1187,3691) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1177,3680);
					PTeleport(ClientID,1177,3680);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Anf_Ninja_",1178,3680,"Agua-M");
					}
					GreenTimeMap(1187,3691,1166,3673,120);
					PByte(0x0487ff8) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergM3, NULL, 0, 0);
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
void PergaM4(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1166,3636,1386,3655) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1177,3645);
					PTeleport(ClientID,1177,3645);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Elfo_Negro_",1178,3644,"Agua-M");
					}
					GreenTimeMap(1386,3655,1166,3636,120);
					PByte(0x0487ff9) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergM4, NULL, 0, 0);
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
void PergaM5(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1166,3600,1186,3619) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1177,3609);
					PTeleport(ClientID,1177,3609);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Grim_Lock_",1178,3608,"Agua-M");
					}
					GreenTimeMap(1186,3619,1166,3600,120);
					PByte(0x0487ffa) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergM5, NULL, 0, 0);
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
void PergaM6(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1203,3600,1222,3619) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1213,3609);
					PTeleport(ClientID,1213,3609);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Bruxa_Elfica_",1214,3608,"Agua-M");
					}
					GreenTimeMap(1222,3619,1203,3600,120);
					PByte(0x0487ffb) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergM6, NULL, 0, 0);
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
void PergaM7(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1239,3600,1258,3617) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1250,3609);
					PTeleport(ClientID,1250,3609);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Gargula_",1250,3608,"Agua-M");
					}
					GreenTimeMap(1258,3617,1239,3600,120);
					PByte(0x0487ffc) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergM7, NULL, 0, 0);
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
void PergaM8(int ClientID,st_Item *ItemSend)
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
			if(PlayerInArea(1240,3636,1258,3655) == 0)
			{
				if(Grupo == 0)
				{
					DoTeleport(ClientID,1249,3645);
					PTeleport(ClientID,1249,3645);
					for(int i = 0;i < 30;i++)
					{
						CreateMOB("Aqua_Golem_",1250,3644,"Agua-M");
					}
					GreenTimeMap(1258,3655,1240,3636,120);
					PByte(0x0487ffd) = ClientID;//Salva lider do grupo
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timepergM8, NULL, 0, 0);
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
void NesesM(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	if(cX <= 1969 && cY <= 1775 && cX >= 1964 && cY >= 1770)
	{
		if(PlayerInArea(1201,3633,1227,3658) == 0)
		{
			if(Grupo == 0)
			{
				DoTeleport(ClientID,1214,3642);
				PTeleport(ClientID,1214,3642);
				GreenTimeMap(1227,3658,1201,3633,120);
				CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)timenesesM, NULL, 0, 0);
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
