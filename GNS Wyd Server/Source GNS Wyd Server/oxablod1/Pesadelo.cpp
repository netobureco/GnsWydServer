#include "Stdafx.h"


void MobCreatePesa()
{
	for(int i = 0;i < 20;i++)
	{
	CreateMOB("Manticora",1245,192,"pesadelo");
	}
	Sleep(3000);
	for(int i = 0;i < 20;i++)
	{
	CreateMOB("Zakum",1245,180,"pesadelo");
	}
	Sleep(3000);
	for(int i = 0;i < 20;i++)
	{
	CreateMOB("Manticora",1230,175,"pesadelo");
	}
	Sleep(3000);
	for(int i = 0;i < 20;i++)
	{
	CreateMOB("GrubSwarm_",1225,189,"npc");
	}
	Sleep(3000);
	for(int i = 0;i < 20;i++)
	{
	CreateMOB("Zakum",1186,194,"pesadelo");
	}
	Sleep(3000);
	for(int i = 0;i < 20;i++)
	{
	CreateMOB("Bruxa_Elfica",1173,183,"pesadelo");
	}
	Sleep(3000);
	for(int i = 0;i < 20;i++)
	{
	CreateMOB("Minotaur",1191,175,"pesadelo");
	}
	Sleep(3000);
	for(int i = 0;i < 20;i++)
	{
	CreateMOB("Manticora",1210,164,"pesadelo");
	}
	Sleep(3000);
	for(int i = 0;i < 20;i++)
	{
	CreateMOB("Tauron___",1202,151,"pesadelo");
	}
	Sleep(3000);
	for(int i = 0;i < 20;i++)
	{
	CreateMOB("Zakum",1220,153,"pesadelo");
	}
}
void WINAPI Pesa2()
{
	int i = 1;
	for(i = 1; i < 10; i++)
	{
		MobCreatePesa();
	}
}
void WINAPI Pesa()
{
	int PesaA = PByte(0x0487FD5);
	GreenTimeMap(1280,255,1151,118,30);
	Sleep(30000);
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa2, NULL, 0, 0);
	GreenTimeMap(1280,255,1151,118,810);
	Sleep(810000);
	ClearArea(1280,255,1151,118);
	PByte(0x0487FD5) = 0;
}
void PesadeloA(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cMin = PInt(0x00A5EA414);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	int PesaA = PByte(0x0487FD5);
	if(PInt(addr_bclient + 0x015C6CD0) == -1)
	{
		SendClientMsg(ClientID,"Apenas em grupo.");
		return;
	}
	TempoVerde(ClientID,900);
	////if(PesaA <= 3)
	if(0 == 0)  
	{
		if(cX >= 2434 && cY >= 1636 && cX <= 2558 && cY <= 1749)
		{
			if(PesaA == 0 && Grupo == 0)
			{
				if(cMin == 00)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1223,187);
					DoTeleport(ClientID,1223,187);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1223,187);
					DoTeleport(ClientID,1223,187);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1223,187);
					DoTeleport(ClientID,1223,187);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1223,187);
					DoTeleport(ClientID,1223,187);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(PesaA == 4 && Grupo == 0)
			{
				if(cMin == 00)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1212,201);
					DoTeleport(ClientID,1212,201);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1212,201);
					DoTeleport(ClientID,1212,201);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1212,201);
					DoTeleport(ClientID,1212,201);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1212,201);
					DoTeleport(ClientID,1212,201);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(PesaA == 1 && Grupo == 0)
			{
				if(cMin == 00)
				{
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1239,190);
					DoTeleport(ClientID,1239,190);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1239,190);
					DoTeleport(ClientID,1239,190);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1239,190);
					DoTeleport(ClientID,1239,190);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1239,190);
					DoTeleport(ClientID,1239,190);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(PesaA == 2 && Grupo == 0)
			{
				if(cMin == 00)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1182,183);
					DoTeleport(ClientID,1182,183);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1182,183);
					DoTeleport(ClientID,1182,183);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1182,183);
					DoTeleport(ClientID,1182,183);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)//verificação do tempo
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1182,183);
					DoTeleport(ClientID,1182,183);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(PesaA == 3 && Grupo == 0)
			{
				if(cMin == 00)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1187,196);
					DoTeleport(ClientID,1187,196);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1187,196);
					DoTeleport(ClientID,1187,196);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1187,196);
					DoTeleport(ClientID,1187,196);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1187,196);
					DoTeleport(ClientID,1187,196);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
		}
		else
		{
			SendClientMsg(ClientID,"Use este item no Reino de Azran.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Três grupos já estão participando da quest.");
	}
	return;
}
void PesadeloM(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cMin = PInt(0x00A5EA414);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	int PesaA = PByte(0x0487FD5);
	if(PInt(addr_bclient + 0x015C6CD0) == -1)
	{
		SendClientMsg(ClientID,"Apenas em grupo.");
		return;
	}
	TempoVerde(ClientID,900);
	////if(PesaM <= 3)
	if(0 == 0)  
	{
		if(cX >= 2434 && cY >= 1636 && cX <= 2558 && cY <= 1749)
		{
			if(PesaA == 0 && Grupo == 0)
			{
				if(cMin == 00)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(PesaA == 4 && Grupo == 0)
			{
				if(cMin == 00)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(PesaA == 1 && Grupo == 0)
			{
				if(cMin == 00)
				{
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(PesaA == 2 && Grupo == 0)
			{
				if(cMin == 00)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1182,183);
					DoTeleport(ClientID,1182,183);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)//verificação do tempo
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(PesaA == 3 && Grupo == 0)
			{
				if(cMin == 00)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1093,310);
					DoTeleport(ClientID,1093+2,310+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
		}
		else
		{
			SendClientMsg(ClientID,"Use este item no Reino de Azran.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Três grupos já estão participando da quest.");
	}
	return;
}
void PesadeloN(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cMin = PInt(0x00A5EA414);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	int PesaA = PByte(0x0487FD5);
	if(PInt(addr_bclient + 0x015C6CD0) == -1)
	{
		SendClientMsg(ClientID,"Apenas em grupo.");
		return;
	}
	TempoVerde(ClientID,900);
	////if(PesaN <= 3)
	if(0 == 0)  
	{
		if(cX >= 2434 && cY >= 1636 && cX <= 2558 && cY <= 1749)
		{
			if(PesaA == 0 && Grupo == 0)
			{
				if(cMin == 00)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(PesaA == 4 && Grupo == 0)
			{
				if(cMin == 00)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					DeadArea(1151,118,1280,255);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Pesa, NULL, 0, 0);
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(PesaA == 1 && Grupo == 0)
			{
				if(cMin == 00)
				{
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(PesaA == 2 && Grupo == 0)
			{
				if(cMin == 00)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)//verificação do tempo
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(PesaA == 3 && Grupo == 0)
			{
				if(cMin == 00)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					
					PesaA += 1;
					GreenTimeMap(1280,255,1151,118,810);
					PTeleport(ClientID,1309,312);
					DoTeleport(ClientID,1309+2,312+2);
					PByte(0x0487FD5) = PesaA;
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
		}
		else
		{
			SendClientMsg(ClientID,"Use este item no Reino de Azran.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Três grupos já estão participando da quest.");
	}
	return;
}