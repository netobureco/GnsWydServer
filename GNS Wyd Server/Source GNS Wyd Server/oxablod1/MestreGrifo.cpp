#include "stdafx.h"

void MestreGrifo(int ClientID, int npcid)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	{
	if(player->bStatus.Level < 39)
	{
		SendClientMsg(ClientID,"!Chegou no destino [Campo do Treino].");
		DoTeleport(ClientID,2115,2043);
		return;
	}
	else if(player->bStatus.Level >= 39 && player->bStatus.Level <= 114)
	{
		SendClientMsg(ClientID,"!Chegou no destino [Defensor da Alma].");
		DoTeleport(ClientID,2372,2103);
		return;
	}
	else if(player->bStatus.Level >= 115 && player->bStatus.Level <= 189)
	{
		SendClientMsg(ClientID,"!Chegou no destino [Jardim dos Deuses].");
		DoTeleport(ClientID,2220,1714);
		return;
	}
	else if(player->bStatus.Level >= 190 && player->bStatus.Level <= 264)
	{
		SendClientMsg(ClientID,"!Chegou no destino [Ressu. Cav. Negro].");
		DoTeleport(ClientID,450,3912);
		return;
	}
	else if(player->bStatus.Level >= 265 && player->bStatus.Level <= 319)
	{
		SendClientMsg(ClientID,"!Chegou no destino [Hidra Imortal].");
		DoTeleport(ClientID,669,3771);
		return;
	}
	else if(player->bStatus.Level >= 320 && player->bStatus.Level <= 349)
	{
		SendClientMsg(ClientID,"!Chegou no destino [Inicio da Infelicidade].");
		DoTeleport(ClientID,1301,4038);
		return;
	}
		else if(player->bStatus.Level >= 350)
	{
		SendClientMsg(ClientID,"!Aguarde Mais Funções.");
		return;
	}
	}
}