#include "Stdafx.h"


void Gate(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x410;
	int CxA = PInt(addr_bclient + 0x015C6CEC);
	int CyA = PInt(addr_bclient + 0x015C6CF0);
    if(CxA >= 1052 && CyA >= 1708 && CxA <= 1055 && CyA <= 1711)
	{
		DoTeleport(ClientID,3649,3109);
	}
	else if(CxA >= 1108 && CyA >= 1980 && CxA <= 1111 && CyA <= 1983)
	{
		DoTeleport(ClientID,3650,3109);
	}
	else if(CxA >= 3648 && CyA >= 3108 && CxA <= 3651 && CyA <= 3111)
	{
		DoTeleport(ClientID,1054,1710);
	}
	else if(CxA >= 1312 && CyA >= 1900 && CxA <= 1315 && CyA <= 1903)
	{
		DoTeleport(ClientID,2366,4072);
	}
	else if(CxA >= 2364 && CyA >= 4072 && CxA <= 2367 && CyA <= 4075)
	{
		DoTeleport(ClientID,1314,1901);
	}
	else if(CxA >= 2362 && CyA >= 3892 && CxA <= 2370 && CyA <= 3895)
	{
		DoTeleport(ClientID,2366,3910);
	}
	else if(CxA >= 2452 && CyA >= 1716 && CxA <= 2455 && CyA <= 1719)
	{
		DoTeleport(ClientID,1965,1770);
	}
	else if(CxA >= 2364 && CyA >= 3924 && CxA <= 2367 && CyA <= 3927)//Hall do Kefra to City Kefra
	{
		DoTeleport(ClientID,3250,1703);
	}
	else if(CxA >= 744 && CyA >= 3804 && CxA <= 747 && CyA <= 3807)
	{
		DoTeleport(ClientID,912,3811);
	}
	else if(CxA >= 744 && CyA >= 3816 && CxA <= 747 && CyA <= 3819)
	{
		DoTeleport(ClientID,1006,3993);
	}
	else if(CxA >= 912 && CyA >= 3808 && CxA <= 915 && CyA <= 3811)
	{
		DoTeleport(ClientID,747,3806);
	}
	else if(CxA >= 1516 && CyA >= 3996 && CxA <= 1519 && CyA <= 3999)
	{
		SendClientMsg(ClientID,"Estamos em Construçao Sistema de drop  !.");
	}
	else if(CxA >= 1056 && CyA >= 1724 && CxA <= 1059 && CyA <= 1727)
	{
		int cHor = PInt(0x00A5EA418);

	if(player->Gold >= 500000)
	  {
		if(cHor >= 18 && cHor <= 19)
		{
			if(player->Gold >= 500000)
			{
				player->Gold -= 500000;
				DoTeleport(ClientID,1160,1726);
				GetCurrentScore(ClientID);
				SendStats(ClientID);
				SendScore(ClientID);
				SendEquip(ClientID);
			}
			else
			{
				SendClientMsg(ClientID,"Custo do teleporte é de 500.000 gold.");
			}

		}
		else
		{
			player->Gold -= 500000;
			DoTeleport(ClientID,3237,1691);
			GetCurrentScore(ClientID);
			SendStats(ClientID);
			SendScore(ClientID);
			SendEquip(ClientID);

		}
	}
	
	}
    return;
}