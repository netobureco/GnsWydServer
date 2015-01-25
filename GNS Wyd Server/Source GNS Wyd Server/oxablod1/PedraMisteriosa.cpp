#include "stdafx.h"

void Pedra_Misteriosa(int clientid)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	for(int i=1;i<14;i++)
	{
	if(thisclient->Equip[i].Index != 0)
	{
		SendClientMsg(clientid,"Retire todos os itens.");
		return;
	}
	}
	if(thisclient->Equip[0].EF1 == 3) 
	{
	if(thisclient->Equip[0].EFV2 == 3)// Cele
	{
		SalveMOB(clientid,"Celestial");
		LoadMOB(clientid,"SubCelestial");
		GetCurrentScore(clientid);
		GetCurrentScore2(clientid);
		GetHPMP(clientid);
		SendALL(clientid);
		SendEquip(clientid);
		for(int i=0;i<16;i++)
		SendItens(clientid,i);
		SendScore(clientid);
		SendStats(clientid);
		return;
	}
	if(thisclient->Equip[0].EFV2 == 4)//SubCele
	{
		SalveMOB(clientid,"SubCelestial");
		LoadMOB(clientid,"Celestial");
		GetCurrentScore(clientid);
		GetCurrentScore2(clientid);
		GetHPMP(clientid);
		SendALL(clientid);
		SendEquip(clientid);
		for(int i=0;i<16;i++)
		SendItens(clientid,i);
		SendScore(clientid);
		SendStats(clientid);
		return;
	}
	else
	SendClientMsg(clientid,"Você não pode usar este item.");
	SendALL(clientid);
	return;
	}
	SendClientMsg(clientid,"Você não pode usar este item.");
	SendALL(clientid);
	return;
}