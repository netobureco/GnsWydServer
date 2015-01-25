#include "stdafx.h"

void Alquimia(BYTE *m_PacketBuffer)
{	
	

	MOB *thisclient = (MOB*)GetMobFromIndex(GetOffset(6));
	short clientid = GetOffset(6);
	short slot1 = GetOffset(76);
	short slot2 = GetOffset(77);
	short slot3 = GetOffset(78);
	if(slot1 != 255 && slot2 != 255 && slot3 != 255)
	{
		if(thisclient->Inventory[slot1].Index == 413 && thisclient->Inventory[slot2].Index == 2441 && thisclient->Inventory[slot3].Index == 2442)
		{
		thisclient->Inventory[slot1].Index = 3200;
		thisclient->Inventory[slot1].EF1 = 61;
		thisclient->Inventory[slot1].EFV1 = 10;
		thisclient->Inventory[slot2].Index = 0;
		thisclient->Inventory[slot3].Index = 0;
		SendClientMsg(clientid,"Composição concluída.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		SendALL(clientid);
		}
		else if(thisclient->Inventory[slot1].Index == 413 && thisclient->Inventory[slot2].Index == 2443 && thisclient->Inventory[slot3].Index == 2442)
		{
		thisclient->Inventory[slot1].Index = 3201;
		thisclient->Inventory[slot1].EF1 = 61;
		thisclient->Inventory[slot1].EFV1 = 10;
		thisclient->Inventory[slot2].Index = 0;
		thisclient->Inventory[slot3].Index = 0;
		SendClientMsg(clientid,"Composição concluída.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		SendALL(clientid);
		}
		else if(thisclient->Inventory[slot1].Index == 4127 && thisclient->Inventory[slot2].Index == 4127 && thisclient->Inventory[slot3].Index == 4127)
		{
		thisclient->Inventory[slot1].Index = 3202;
		thisclient->Inventory[slot1].EF1 = 61;
		thisclient->Inventory[slot1].EFV1 = 10;
		thisclient->Inventory[slot2].Index = 0;
		thisclient->Inventory[slot3].Index = 0;
		SendClientMsg(clientid,"Composição concluída.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		SendALL(clientid);
		}
		else if(thisclient->Inventory[slot1].Index == 4127 && thisclient->Inventory[slot2].Index == 4127 && thisclient->Inventory[slot3].Index == 697)
		{
		thisclient->Inventory[slot1].Index = 3203;
		thisclient->Inventory[slot1].EF1 = 61;
		thisclient->Inventory[slot1].EFV1 = 10;
		thisclient->Inventory[slot2].Index = 0;
		thisclient->Inventory[slot3].Index = 0;
		SendClientMsg(clientid,"Composição concluída.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		SendALL(clientid);
		}
		else if(thisclient->Inventory[slot1].Index == 412 && thisclient->Inventory[slot2].Index == 2441 && thisclient->Inventory[slot3].Index == 2444)
		{
		thisclient->Inventory[slot1].Index = 3204;
		thisclient->Inventory[slot1].EF1 = 61;
		thisclient->Inventory[slot1].EFV1 = 10;
		thisclient->Inventory[slot2].Index = 0;
		thisclient->Inventory[slot3].Index = 0;
		SendClientMsg(clientid,"Composição concluída.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		SendALL(clientid);
		}
		else if(thisclient->Inventory[slot1].Index == 412 && thisclient->Inventory[slot2].Index == 2444 && thisclient->Inventory[slot3].Index == 2443)
		{
		thisclient->Inventory[slot1].Index = 3205;
		thisclient->Inventory[slot1].EF1 = 61;
		thisclient->Inventory[slot1].EFV1 = 10;
		thisclient->Inventory[slot2].Index = 0;
		thisclient->Inventory[slot3].Index = 0;
		SendClientMsg(clientid,"Composição concluída.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		SendALL(clientid);
		}
		else
		{
		SendClientMsg(clientid,"Composição incorreta.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		SendALL(clientid);
		}
	}
	else
	{
	SendClientMsg(clientid,"Você não selecionou todos itens necessarios.");
	SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
	return;
	}
}
