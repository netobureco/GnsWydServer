#include "Stdafx.h"

void RespawCreatMob(int clientid)
{
	for(int i = 0;i <= PLAYER; i++)
	{
		int cX = PInt(i * 0x0410 + 0x015C6CEC);
        int cY = PInt(i * 0x0410 + 0x015C6CF0);
		
		int pX = PInt(clientid * 0x0410 + 0x015C6CEC);
        int pY = PInt(clientid * 0x0410 + 0x015C6CF0);

		if(cX-15 >= pX && cY-15 >= pY && cX+15 <= pX && cY+15 <= pY)
		{
			SendCreateMob(i,clientid,1);
		}
	}
	return;
}