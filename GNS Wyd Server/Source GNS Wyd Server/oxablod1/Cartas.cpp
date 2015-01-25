#include "Stdafx.h"



void WINAPI LeftCarta4()
{
    int count = 0;
    for(count =0;count<18;count++)
	{
		LeftMob(LiderCarta,MobInArea(775,3593,834,3648));
		Sleep(5000);
	}
}
void WINAPI cartaN()
{
	//Sala 1
	for(int i = 0;i < 33;i++)
	{
		CreateMOB("Meio_Orc__",808,3667,"npc");
		CreateMOB("Meio_Orc__",802,3683,"npc");
		CreateMOB("Meio_Orc__",813,3684,"npc");
	}
	for(int i = 0;i < 45;i++)
	{
		if(PlayerInArea(777,3654,827,3695) >= 1)
		{
			if(MobInArea(777,3654,827,3695) == 0)
			{
				break;
			}
			LeftMob(LiderCarta,MobInArea(777,3654,827,3695));
			Sleep(4000);
		}
		else
		{
			LiderCarta = 0;
			return;
		}
	}
	DoTeleportArea(844,3686,827,3695,777,3654);
	GreenTimeMap(888,3698,835,3652,180);//GreenPra2OK

	//Sala 2
	for(int i = 0;i < 33;i++)
	{
		CreateMOB("Caveira_",866,3667,"npc");
		CreateMOB("Caveira_",866,3667,"npc");
		CreateMOB("Caveira_",859,3683,"npc");
	}
	for(int i = 0;i < 45;i++)
	{
		if(PlayerInArea(835,3655,885,3695) >= 1)
		{
			if(MobInArea(835,3655,885,3695) == 0)
			{
				break;
			}
			LeftMob(LiderCarta,MobInArea(835,3655,885,3695));
			Sleep(4000);
		}
		else
		{
			LiderCarta = 0;
			return;
		}
	}
	DoTeleportArea(843,3632,885,3695,835,3655);
	GreenTimeMap(889,3643,836,3596,180);//GreenPra3OK

	//Sala 3
	for(int i = 0;i < 33;i++)
	{
		CreateMOB("Caveira_Lanc_",859,3619,"npc");
		CreateMOB("Caveira_Lanc_",873,3620,"npc");
		CreateMOB("Caveira_Lanc_",866,3624,"npc");
	}
	for(int i = 0;i < 45;i++)
	{
		if(PlayerInArea(836,3598,885,3639) >= 1)
		{
			if(MobInArea(836,3598,885,3639) == 0)
			{
				break;
			}
			LeftMob(LiderCarta,MobInArea(836,3598,885,3639));
			Sleep(4000);
		}
		else
		{
			LiderCarta = 0;
			return;
		}
	}
	DoTeleportArea(785,3640,885,3639,836,3598);
	GreenTimeMap(834,3648,775,3593,90);//GreenPra4OK

	//Sala 4
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)LeftCarta4, NULL, 0, 0);
	for(int i = 0;i < 20;i++)
	{
		CreateMOB("Minotauro_",802,3635,"npc");
		CreateMOB("Minotauro_",814,3635,"npc");
		CreateMOB("Minotauro_",801,3606,"npc");
		CreateMOB("Minotauro_",813,3606,"npc");
	}
	Sleep(90000);
	if(PlayerInArea(775,3593,834,3648) == 0)
	{
		LiderCarta = 0;
		return;
	}
	SendNoticeArea(834,3648,775,3593,"O boss nasceu.");
	GreenTimeMap(834,3648,775,3593,30);//GreenPra4OK
	CreateMOB("Troll_Caos___",806,3621,"npc");//Boss Sala 4
	Sleep(30000);
	if(PlayerInArea(775,3593,834,3648) == 0)
	{
		LiderCarta = 0;
		return;
	}
	DoTeleportArea(1069,1717,834,3648,775,3593);
	LiderCarta = 0;
}
void WINAPI cartaM()//4177
{
	//Sala 1
	for(int i = 0;i < 33;i++)
	{
		CreateMOB("Elfo_Negro__",808,3667,"npc");
		CreateMOB("Elfo_Negro__",802,3683,"npc");
		CreateMOB("Elfo_Negro__",813,3684,"npc");
	}
	for(int i = 0;i < 45;i++)
	{
		if(PlayerInArea(777,3654,827,3695) >= 1)
		{
			if(MobInArea(777,3654,827,3695) == 0)
			{
				break;
			}
			LeftMob(LiderCarta,MobInArea(777,3654,827,3695));
			Sleep(4000);
		}
		else
		{
			LiderCarta = 0;
			return;
		}
	}
	DoTeleportArea(844,3686,827,3695,777,3654);
	GreenTimeMap(888,3698,835,3652,180);//GreenPra2OK

	//Sala 2
	for(int i = 0;i < 33;i++)
	{
		CreateMOB("Rei_Taurus__",866,3667,"npc");
		CreateMOB("Rei_Taurus__",866,3667,"npc");
		CreateMOB("Rei_Taurus__",859,3683,"npc");
	}
	for(int i = 0;i < 45;i++)
	{
		if(PlayerInArea(835,3655,885,3695) >= 1)
		{
			if(MobInArea(835,3655,885,3695) == 0)
			{
				break;
			}
			LeftMob(LiderCarta,MobInArea(835,3655,885,3695));
			Sleep(4000);
		}
		else
		{
			LiderCarta = 0;
			return;
		}
	}
	DoTeleportArea(843,3632,885,3695,835,3655);
	GreenTimeMap(889,3643,836,3596,180);//GreenPra3OK

	//Sala 3
	for(int i = 0;i < 33;i++)
	{
		CreateMOB("Hidra_",859,3619,"npc");
		CreateMOB("Hidra_",873,3620,"npc");
		CreateMOB("Hidra_",866,3624,"npc");
	}
	for(int i = 0;i < 45;i++)
	{
		if(PlayerInArea(836,3598,885,3639) >= 1)
		{
			if(MobInArea(836,3598,885,3639) == 0)
			{
				break;
			}
			LeftMob(LiderCarta,MobInArea(836,3598,885,3639));
			Sleep(4000);
		}
		else
		{
			LiderCarta = 0;
			return;
		}
	}
	DoTeleportArea(785,3640,885,3639,836,3598);
	GreenTimeMap(834,3648,775,3593,90);//GreenPra4OK

	//Sala 4
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)LeftCarta4, NULL, 0, 0);
	for(int i = 0;i < 20;i++)
	{
		CreateMOB("Ciclope_Cruel__",802,3635,"npc");
		CreateMOB("Ciclope_Cruel__",814,3635,"npc");
		CreateMOB("Ciclope_Cruel__",801,3606,"npc");
		CreateMOB("Ciclope_Cruel__",813,3606,"npc");
	}
	Sleep(90000);
	if(PlayerInArea(772,3593,891,3707) == 0)
	{
		LiderCarta = 0;
		return;
	}
	SendNoticeArea(834,3648,775,3593,"O boss nasceu.");
	GreenTimeMap(834,3648,775,3593,30);//GreenPra4OK
	CreateMOB("Zakum__",806,3621,"npc");//Boss Sala 4
	Sleep(30000);
	if(PlayerInArea(772,3593,891,3707) == 0)
	{
		LiderCarta = 0;
		return;
	}
	DoTeleportArea(1069,1717,834,3648,775,3593);
	LiderCarta = 0;
}
void WINAPI cartaA()//4191
{
	//Sala 1
	for(int i = 0;i < 33;i++)
	{
		CreateMOB("Elfo_Negro_Abj_",808,3667,"npc");
		CreateMOB("Elfo_Negro_Abj_",802,3683,"npc");
		CreateMOB("Elfo_Negro_Abj_",813,3684,"npc");
	}
	for(int i = 0;i < 45;i++)
	{
		if(PlayerInArea(772,3593,891,3707) >= 1)
		{
			if(MobInArea(772,3593,891,3707) == 0)
			{
				break;
			}
			LeftMob(LiderCarta,MobInArea(777,3654,827,3695));
			Sleep(4000);
		}
		else
		{
			LiderCarta = 0;
			return;
		}
	}
	DoTeleportArea(844,3686,827,3695,777,3654);
	GreenTimeMap(888,3698,835,3652,180);//GreenPra2OK

	//Sala 2
	for(int i = 0;i < 33;i++)
	{
		CreateMOB("Tauron_____",866,3667,"npc");
		CreateMOB("Tauron_____",866,3667,"npc");
		CreateMOB("Tauron_____",859,3683,"npc");
	}
	for(int i = 0;i < 45;i++)
	{
		if(PlayerInArea(772,3593,891,3707) >= 1)
		{
			if(MobInArea(772,3593,891,3707) == 0)
			{
				break;
			}
			LeftMob(LiderCarta,MobInArea(835,3655,885,3695));
			Sleep(4000);
		}
		else
		{
			LiderCarta = 0;
			return;
		}
	}
	DoTeleportArea(843,3632,885,3695,835,3655);
	GreenTimeMap(889,3643,836,3596,180);//GreenPra3OK

	//Sala 3
	for(int i = 0;i < 33;i++)
	{
		CreateMOB("Morlock_",859,3619,"npc");
		CreateMOB("Morlock_",873,3620,"npc");
		CreateMOB("Morlock_",866,3624,"npc");
	}
	for(int i = 0;i < 45;i++)
	{
		if(PlayerInArea(772,3593,891,3707) >= 1)
		{
			if(MobInArea(772,3593,891,3707) == 0)
			{
				break;
			}
			LeftMob(LiderCarta,MobInArea(836,3598,885,3639));
			Sleep(4000);
		}
		else
		{
			LiderCarta = 0;
			return;
		}
	}
	DoTeleportArea(785,3640,885,3639,836,3598);
	GreenTimeMap(834,3648,775,3593,90);//GreenPra4OK

	//Sala 4
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)LeftCarta4, NULL, 0, 0);
	for(int i = 0;i < 20;i++)
	{
		CreateMOB("Aranha_Inferno_",802,3635,"npc");
		CreateMOB("Aranha_Inferno_",814,3635,"npc");
		CreateMOB("Aranha_Inferno_",801,3606,"npc");
		CreateMOB("Aranha_Inferno_",813,3606,"npc");
	}
	Sleep(90000);
	if(PlayerInArea(772,3593,891,3707) == 0)
	{
		LiderCarta = 0;
		return;
	}
	SendNoticeArea(834,3648,775,3593,"O boss nasceu.");
	GreenTimeMap(834,3648,775,3593,30);//GreenPra4OK
	CreateMOB("Lugefer__",806,3621,"npc");//Boss Sala 4
	Sleep(30000);
	if(PlayerInArea(772,3593,891,3707) == 0)
	{
		LiderCarta = 0;
		return;
	}
	DoTeleportArea(1069,1717,834,3648,775,3593);
	LiderCarta = 0;
}
void CartaN(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	if(cX >= 1045 && cY >= 1689 && cX <= 1047 && cY <= 1691)
	{
		if(PlayerInArea(772,3593,891,3707) == 0)
		{
			DeadArea(772,3593,891,3707);
			PTeleport(ClientID,786,3687);
			DoTeleport(ClientID,786,3687);
			GreenTimeMap(829,3697,776,3652,180);
			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)cartaN, NULL, 0, 0);
			Amount(ClientID,ItemSend);
			LiderCarta = ClientID;//salva lider
			return;
		}
		else
		{
			SendClientMsg(ClientID,"Outros jogadores já estão realizando esta quest.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"É necessário estar no Altar de Thor.");
	}
}
void CartaM(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	if(cX >= 1045 && cY >= 1689 && cX <= 1047 && cY <= 1691)
	{
		if(PlayerInArea(772,3593,891,3707) == 0)
		{
			DeadArea(772,3593,891,3707);
			PTeleport(ClientID,786,3687);
			DoTeleport(ClientID,786,3687);
			GreenTimeMap(829,3697,776,3652,180);
			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)cartaM, NULL, 0, 0);
			Amount(ClientID,ItemSend);
			LiderCarta = ClientID;//salva lider
			return;
		}
		else
		{
			SendClientMsg(ClientID,"Outros jogadores já estão realizando esta quest.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"É necessário estar no Altar de Thor.");
	}
}
void CartaA(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	if(cX >= 1045 && cY >= 1689 && cX <= 1047 && cY <= 1691)
	{
		if(PlayerInArea(772,3593,891,3707) == 0)
		{
			DeadArea(772,3593,891,3707);
			PTeleport(ClientID,786,3687);
			DoTeleport(ClientID,786,3687);
			GreenTimeMap(829,3697,776,3652,180);
			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)cartaA, NULL, 0, 0);
			Amount(ClientID,ItemSend);
			LiderCarta = ClientID;//salva lider
			return;
		}
		else
		{
			SendClientMsg(ClientID,"Outros jogadores já estão realizando esta quest.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"É necessário estar no Altar de Thor.");
	}
}
