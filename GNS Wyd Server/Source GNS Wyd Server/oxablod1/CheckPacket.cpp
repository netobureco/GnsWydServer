#include "Stdafx.h"

int GetDistance(int x, int y, int x2, int y2)
{
	int distace_addr = 0x004013AC;
	int rtndst;
	_asm
	{
		PUSH y
		PUSH x
		PUSH y2
		PUSH x2
		CALL distace_addr
		ADD ESP,0x010
		MOV rtndst,EAX
	}
	return rtndst;
}


int file_existso(const char *filename)
{
  FILE *arquivo;

  if(arquivo = fopen(filename, "r"))
  {
    fclose(arquivo);
    return 1;
  }
  return 0;
}
void DoBan(char *Packet)
{
	Log *Login = (Log*)Packet;
	//Atualizar *a; Outros *o;
	//printf("Login:[%s]  Senha:[%s]  Versão:[%d]  ClientID:[%d]   \n",Login->Name,Login->Pwd,Login->Version,Login->Header.ClientID);
	char login[255];
	sprintf(login,"config/ban/%s.txt",Login->Name);
	if(file_existso(login) == 1)
	{
		sprintf(login,"%s",Login->Name);
		strcpy(Login->Pwd,"@#####kkkkkk");
	}
	/*else if(Cliver() != Login->Version)
	{
		sprintf(login,"#%s",Login->Name);
		strcpy(Login->Pwd,"######kkkkkk");
	}*/
	else if(!Login->Name || !Login->Pwd || !Login->Keys || !Login->Address)
	{
		ZeroMemory(Packet, *(short*)Packet);
		//CloseSocket line
	}
}


int archequip(char *Packet)
{
	MoveItem *c = (MoveItem*)Packet;
	MOB *thisclient = (MOB*)GetMobFromIndex(c->Header.ClientID);
	int item = thisclient->Inventory[c->srcSlot].Index;
	int slot = GetFirstSlotSADD(c->Header.ClientID,0,64);
	if(thisclient->Equip[15].EF3 != 5 && slot >= 0 && thisclient->Equip[0].EFV2 >= 2)
	{
		thisclient->Equip[15].EF3 = 5;
		thisclient->Inventory[slot] = thisclient->Equip[7];
		thisclient->Equip[7].Index = 0;
		thisclient->Equip[7].EF1 = 0;
		thisclient->Equip[7].EF2 = 0;
		thisclient->Equip[7].EF3 = 0;
		thisclient->Equip[7].EFV1 = 0;
		thisclient->Equip[7].EFV2 = 0;
		thisclient->Equip[7].EFV3 = 0;
		slot = GetFirstSlotSADD(c->Header.ClientID,0,64);
		thisclient->Inventory[slot] = thisclient->Equip[6];
		thisclient->Equip[6].Index = 0;
		thisclient->Equip[6].EF1 = 0;
		thisclient->Equip[6].EF2 = 0;
		thisclient->Equip[6].EF3 = 0;
		thisclient->Equip[6].EFV1 = 0;
		thisclient->Equip[6].EFV2 = 0;
		thisclient->Equip[6].EFV3 = 0;
		SendItens(c->Header.ClientID,7);
		SendItens(c->Header.ClientID,6);
		SendALL(c->Header.ClientID);
	}
	if(c->srcType == 0 && c->destType == 1)
	{
		if(thisclient->Equip[c->srcSlot].Index == 3506)
		{
			return TRUE;
		}
	}
	if(c->srcType == 1 && c->destType == 0)
	{
		if(thisclient->Equip[0].EFV2 == 5)
		{
			if(c->destSlot == 1)
			{
				return TRUE;
			}
		}
	}
	if(c->srcType == 1 && c->destType == 0 && thisclient->Equip[0].EFV2 >= 2 && thisclient->Equip[0].EFV2 >= 2)
	{
		if(thisclient->Equip[c->destSlot].Index == 0 && c->destSlot < 6 && thisclient->Equip[0].EFV2 >= 2)
		{
			thisclient->Equip[c->destSlot] = thisclient->Inventory[c->srcSlot];
			thisclient->Inventory[c->srcSlot].Index = 0;
			thisclient->Inventory[c->srcSlot].EF1 = 0;
			thisclient->Inventory[c->srcSlot].EFV1 = 0;
			thisclient->Inventory[c->srcSlot].EF2 = 0;
			thisclient->Inventory[c->srcSlot].EFV2 = 0;
			thisclient->Inventory[c->srcSlot].EF3 = 0;
			thisclient->Inventory[c->srcSlot].EFV3 = 0;
			SendItens(c->Header.ClientID,c->destSlot);
			SendALL(c->Header.ClientID);
			return TRUE;
		}
	}
	return FALSE;
}

