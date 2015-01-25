#include "Stdafx.h"


int PontosADC(char *Data)
{
	if(*(short*)&Data[0] != 0x14)
	{
		return FALSE;
	}
	if(*(short*)&Data[11] != 0x10 && *(short*)&Data[12] != 0x0 && *(short*)&Data[13] != 0x0)
	{
		return FALSE;
	}
	if(*(short*)&Data[15] != 0x0 && *(short*)&Data[16] != 0x0 && *(short*)&Data[17] != 0x0)
	{
		return FALSE;
	}
	p277 *p = (p277*)Data; WORD clientid; 
	memcpy(&clientid, &Data[6], 2); 
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	WORD Info; 
	memcpy(&Info,&Data[14],2);
	switch(p->Mode)
	{
	case 0:
		switch(Info)
		{
		case 00: // STR
			if(player->StatusPoint >= 201)
			{
				player->StatusPoint -= 99;
				player->bStatus.STR += 99;
				GetHPMP(clientid);
				GetCurrentScore(clientid);
				SendStats(clientid);
				SendScore(clientid);
				return TRUE;
			}
			break;
		case 01: // INT
			if(player->StatusPoint >= 201)
			 {
				 player->StatusPoint -= 99;
				 player->bStatus.INT += 99;
				 GetHPMP(clientid);
				 GetCurrentScore(clientid);
				 SendStats(clientid);
				 SendScore(clientid);
				 return TRUE;
			 }
			break;
		case 02://DEX
			if(player->StatusPoint >= 201)
			 {
				 player->StatusPoint -= 99;
				 player->bStatus.DEX += 99;
				 player->bStatus.Attack += 100 / 4;
				 GetHPMP(clientid);
				 GetCurrentScore(clientid);
				 SendStats(clientid);
				 SendScore(clientid);
				 return TRUE;
			 }
			if(player->bStatus.DEX % 4 == 0) player->bStatus.Attack += 1; 
			break;
		case 03://CON
			if(player->StatusPoint >= 201)
			 {
				 player->StatusPoint -= 99;
				 player->bStatus.CON += 99;
				 GetHPMP(clientid);
				 GetCurrentScore(clientid);
				 SendStats(clientid);
				 SendScore(clientid);
				 return TRUE;
			 }
			break;
		}
	}
	return FALSE;
}