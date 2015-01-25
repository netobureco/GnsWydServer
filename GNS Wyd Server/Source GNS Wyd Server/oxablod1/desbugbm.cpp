#include "stdafx.h"

void DesbugaFaceBM(int clientid,int cmd_addr)
{

	  int faceBM = 28;
	  MOB *player = (MOB*)GetMobFromIndex(clientid);

	  if(player->Equip[0].EFV2 = 2 && player->Equip[0].Index == 22 || player->Equip[0].Index == 23 || player->Equip[0].Index ==24 || player->Equip[0].Index == 25 || player->Equip[0].Index == 32)
	  {
			MOB *playe = (MOB*)GetMobFromIndex(clientid);
			playe->Equip[0].Index = faceBM;
			Atualizar(clientid, _equip, 0);
			SendItens(clientid,0);
			GetCurrentScore(clientid);
			SendStats(clientid);
			SendScore(clientid);
			SendEquip(clientid);
			SendALL(clientid);
			SendClientMsg(clientid,"Sua face foi alterada.");
			return;
		}
	  }