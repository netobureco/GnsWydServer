#include "Stdafx.h"

void BigCubo(int clientid)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	Atualizar ;
	int slot = GetFirstSlotSADD(clientid,1737,64);
	if(thisclient->Equip[0].EFV2 >= 2)
	{
		DoTeleport(clientid,1341,1465);
		thisclient->Inventory[slot].Index = 0;
		SendALL(clientid);
		return;
	}
	else
SendClientMsg(clientid,"Somente Para Arch +.");
return;
}
