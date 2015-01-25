#include "stdafx.h"


void MobCreatehc()
{
	Sleep(5000);
	for(int i = 0;i < 10;i++)  
	{
	CreateMOB("UP",3521,1421,"Quest-HC");
	//SendNotice("O Boss Airo acabou de Nacer");
	}
	Sleep(5000);
	for(int i = 0;i < 10;i++)  
	{
	CreateMOB("UP",3564,1422,"Quest-HC");
	//SendNotice("O Boss Athos acabou de Nacer");
	}
	Sleep(5000);
	for(int i = 0;i < 10;i++)  
	{
	CreateMOB("UP",3566,1469,"Quest-HC");
	//SendNotice("O Boss Backer acabou de Nacer");
	}
	Sleep(5000);
	for(int i = 0;i < 10;i++)  
	{
	CreateMOB("UP",3564,1471,"Quest-HC");
	//SendNotice("O Boss Anubes acabou de Nacer");
	}
	Sleep(5000);
	for(int i = 0;i < 10;i++)  
	{
	CreateMOB("UP",3517,1515,"Quest-HC");
	//SendNotice("O Boss Apolo acabou de Nacer");
	}
	Sleep(5000);
	for(int i = 0;i < 10;i++)  
	{
	CreateMOB("UP",3522,1468,"Quest-HC");
	//SendNotice("O Grande Boss Aquila acabou de Nascer [QUEST HARD CORE]");
	}
	Sleep(5000);
	for(int i = 0;i < 10;i++)  
	{
	CreateMOB("UP",3472,1516,"Quest-HC");
	//SendNotice("O Boss Austin acabou de Nacer");
	}
    Sleep(5000);
	for(int i = 0;i < 10;i++)  
	{
	CreateMOB("UP",3472,1468,"Quest-HC");
	//SendNotice("O Boss Aiki acabou de Nacer");
	}
	Sleep(5000);
	for(int i = 0;i < 10;i++)  
	{
	CreateMOB("UP",3522,1449,"Quest-HC");
	//SendNotice("O Boss Baco acabou de Nacer");
	}
	Sleep(5000);
	for(int i = 0;i < 10;i++)  
	{

	CreateMOB("UP",3521,1487,"Quest-HC");
	//SendNotice("O Boss Conan acabou de Nacer");
	}
}
void WINAPI QUESTHCs()
{
	int i = 1;
	for(i = 1; i < 15; i++)
	{
		MobCreatehc();
	}
}
void WINAPI HCs()
{
	int hcs = PByte(0x0487FD5);
	GreenTimeMap(3464,1415,3573,1416,810);
	Sleep(30000);
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)QUESTHCs, NULL, 0, 0);
	GreenTimeMap(3464,1415,3573,1416,810);
	Sleep(810000);
	ClearArea(3464,1415,3573,1416);
	PByte(0x0487FD5) = 0;
}


void QuestHC(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cMin = PInt(0x00A5EA414);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int Grupo = PInt(addr_bclient + 0x015C6CD0);
	int QUESTHC = PByte(0x0487FD5);
	if(PInt(addr_bclient + 0x015C6CD0) == -1)
	{
		SendClientMsg(ClientID,"Apenas em grupo.");
		return;
	}
	if(player->Equip[0].EFV2 < 5)
			{
		SendClientMsg(ClientID,"Apenas Personagens Hard Cores.");
		return;
			}
	////if(QUESTHC <= 3)
	if(0 == 0)  
	{
		if(cX >= 2434 && cY >= 1636 && cX <= 14168 && cY <= 1749)
		{
			if(QUESTHC == 0 && Grupo == 0)
			{
				if(cMin == 00)
				{
					DeadArea(3464,1415,3573,1416);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)HCs, NULL, 0, 0);
					QUESTHC += 1;
					GreenTimeMap(3464,1415,3573,1416,810);
					PTeleport(ClientID,3494,1471);
					DoTeleport(ClientID,3494,1471);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					DeadArea(3464,1415,3573,1416);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)HCs, NULL, 0, 0);
					QUESTHC += 1;
					PTeleport(ClientID,3494,1471);
					DoTeleport(ClientID,3494,1471);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					DeadArea(3464,1415,3573,1416);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)HCs, NULL, 0, 0);
					QUESTHC += 1;
					PTeleport(ClientID,3494,1471);
					DoTeleport(ClientID,3494,1471);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					DeadArea(3464,1415,3573,1416);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)HCs, NULL, 0, 0);
					QUESTHC += 1;
					PTeleport(ClientID,3494,1471);
					DoTeleport(ClientID,3494,1471);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(QUESTHC == 4 && Grupo == 0)
			{
				if(cMin == 00)
				{
					DeadArea(3464,1415,3573,1416);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)HCs, NULL, 0, 0);
					QUESTHC += 1;
					PTeleport(ClientID,1212,201);
					DoTeleport(ClientID,1212,201);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					DeadArea(3464,1415,3573,1416);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)HCs, NULL, 0, 0);
					QUESTHC += 1;
					PTeleport(ClientID,1212,201);
					DoTeleport(ClientID,1212,201);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					DeadArea(3464,1415,3573,1416);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)HCs, NULL, 0, 0);
					QUESTHC += 1;
					PTeleport(ClientID,1212,201);
					DoTeleport(ClientID,1212,201);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					DeadArea(3464,1415,3573,1416);
					CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)HCs, NULL, 0, 0);
					QUESTHC += 1;
					PTeleport(ClientID,1212,201);
					DoTeleport(ClientID,1212,201);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(QUESTHC == 1 && Grupo == 0)
			{
				if(cMin == 00)
				{
					QUESTHC += 1;
					PTeleport(ClientID,1239,190);
					DoTeleport(ClientID,1239,190);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					QUESTHC += 1;
					PTeleport(ClientID,1239,190);
					DoTeleport(ClientID,1239,190);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					QUESTHC += 1;
					PTeleport(ClientID,1239,190);
					DoTeleport(ClientID,1239,190);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					
					QUESTHC += 1;
					PTeleport(ClientID,1239,190);
					DoTeleport(ClientID,1239,190);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(QUESTHC == 2 && Grupo == 0)
			{
				if(cMin == 00)
				{
					
					QUESTHC += 1;
					PTeleport(ClientID,14152,183);
					DoTeleport(ClientID,14152,183);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					
					QUESTHC += 1;
					PTeleport(ClientID,14152,183);
					DoTeleport(ClientID,14152,183);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					
					QUESTHC += 1;
					PTeleport(ClientID,14152,183);
					DoTeleport(ClientID,14152,183);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					
					QUESTHC += 1;
					PTeleport(ClientID,14152,183);
					DoTeleport(ClientID,14152,183);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else
				{
					SendClientMsg(ClientID,"Acesso permitido apenas nos minutos 00,15,30,45.");
					return;
				}
			}
			else if(QUESTHC == 3 && Grupo == 0)
			{
				if(cMin == 00)
				{
					
					QUESTHC += 1;
					PTeleport(ClientID,34647,196);
					DoTeleport(ClientID,34647,196);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 15)
				{
					
					QUESTHC += 1;
					PTeleport(ClientID,34647,196);
					DoTeleport(ClientID,34647,196);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 30)
				{
					
					QUESTHC += 1;
					PTeleport(ClientID,34647,196);
					DoTeleport(ClientID,34647,196);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
					Amount(ClientID,ItemSend);
					return;
				}
				else if(cMin == 45)
				{
					
					QUESTHC += 1;
					PTeleport(ClientID,34647,196);
					DoTeleport(ClientID,34647,196);
					PByte(0x0487FD5) = QUESTHC;
					SendNotice("Quest Hard Core foi Iniciada..");
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
		SendClientMsg(ClientID,"Três grupos já estão participando da quest Hard Core.");
	}
	return;
}