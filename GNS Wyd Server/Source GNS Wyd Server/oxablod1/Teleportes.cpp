#include "Stdafx.h"


void Premium_UP(int ClientID, int npcid)
{
	if(isvip(ClientID)) {
		DoTeleport(ClientID, 1771, 3647);
		return;
	}
	else {
		SendSay(npcid, "Somente VIPS podem passar por aqui.");
		return;
	}
}

void Free_UP(int ClientID, int npcid)
{
	DoTeleport(ClientID, 3264, 1747);
	return;
}