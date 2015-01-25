#include "Stdafx.h"

st_ItemList itemlistBuffer[6500];
st_Mob_754 mobaffectbuffer[0x7530];

st_ItemList *GetItemlistBuffer()
{
	return &itemlistBuffer[0];
}

st_Mob_754 *GetAffectMobBuffer(int ClientID)
{
	return &mobaffectbuffer[ClientID];
}


void ClearBuffer()
{
	memset(&mobaffectbuffer[0], 0x00, (sizeof(st_Mob_754) * 0x7530));
}

void CopiaBuffer(BYTE *Buffer, int Size, DWORD *Address)	
{
		DWORD pPrevious = 0;
		VirtualProtect(Address, Size, PAGE_EXECUTE_READWRITE, &pPrevious);
		memcpy(Address, Buffer, Size);
		VirtualProtect(Address, Size, pPrevious, &pPrevious);
}


void HKD_MobKilled_DropGold(int index, int gold)
{
	st_Mob *mob = (st_Mob*)GetMobFromIndex(index);

	unsigned int xgold = mob->Gold + gold;
	if(xgold > 2000000000)
	{
		int zgold = 2000000000 - mob->Gold;
		if(zgold > 0)
		{
			if(gold > zgold)
				gold = zgold;
		}
		else
		{
			// Atingiu o limite máximo de gold
			return ;
		}
	}

	mob->Gold += gold;
	if(mob->Gold == 2000000000)
		SendClientMessage(index, "Não tem mais espaço para guardar gold.");

	SendClientSignalParm(index, index, 0x3AF, mob->Gold);
}

DWORD RetnAffect(int ClientID)
{
	return (DWORD)&mobaffectbuffer[ClientID].Affects;
}

void Hook(DWORD Function, DWORD Hook, int Size)
{
		Hook = Hook - Function - 5;
		BYTE bHook[4];
		memcpy(bHook,(void*)&Hook,4);
		BYTE Buffer[10];
		memset(Buffer,0x90,10);
			Buffer[0] = 0xE9;
			Buffer[1] = bHook[0];
			Buffer[2] = bHook[1];
			Buffer[3] = bHook[2];
			Buffer[4] = bHook[3];
		CopiaBuffer(Buffer, Size, (DWORD*)Function);

		return free(Buffer);
}