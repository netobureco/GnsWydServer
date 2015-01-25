#include "Stdafx.h"



void Vento(int clientid)
{
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	char tmp[1024];
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	int addr_bclient = clientid * 0x0410;
	int Ideal = GetFirstSlotSADD(clientid,5338,64);
	int stone0 = GetFirstSlotSADD(clientid,5337,64);
	if(stone0 == -1 )
	{
		SendClientMsg(clientid,"É necessário a Pedra Vento Atribuir Status do Vento.");
		return;
	}
	if(player->Equip[11].Index == -1 )
	{
		SendClientMsg(clientid,"É necessário a Ordem do Vento Equipada.");
		return;
	}
	if(player->Inventory[1].Index = 5337  && player->Equip[0].EFV2 == 5 && player->Equip[11].Index == 6448)
	{

		if(player->bStatus.Level > 50 && player->bStatus.Level < 60)
		{
			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5446;
			player->bStatus.Level = 0;
			player->Exp = 0;  
			player->bStatus.fMaster = 255;
			player->bStatus.wMaster = 255;
			player->bStatus.tMaster = 255;
			player->bStatus.sMaster = 255;
			player->MasterPoint = 55;
			player->SkillPoint = 1500;
			player->StatusPoint = 1000;
			player->bStatus.STR = 5;
			player->bStatus.INT = 10;
			player->bStatus.DEX = 7;
			player->bStatus.CON = 9;
			PByte(addr_bclient + 0x15c6c97) += 64;
			player->Equip[15].Index = 795;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 26;
			player->Equip[15].EFV2 = 10; // 10 de Velocidade
			player->Equip[15].EF3= 26;
			player->Equip[15].EFV3 = 10; // 10 de Velocidade
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status do Vento");
			SendCharList(clientid);
			
		}
		else if(player->bStatus.Level > 61 && player->bStatus.Level < 91)
		{
			
			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5446;
			player->Equip[1].EF2= 3;
			player->Equip[1].EFV2 = 30;
			player->bStatus.Level = 0;
			player->Exp = 0; 
			player->bStatus.fMaster = 255;
			player->bStatus.wMaster = 255;
			player->bStatus.tMaster = 255;
			player->bStatus.sMaster = 255;
			player->MasterPoint = 55;
			player->SkillPoint = 1600;
			player->StatusPoint = 1200;
			player->bStatus.STR = 5;
			player->bStatus.INT = 10;
			player->bStatus.DEX = 7;
			player->bStatus.CON = 9;
			PByte(addr_bclient + 0x15c6c97) += 64;
			player->Equip[15].Index = 795;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 26;
			player->Equip[15].EFV2 = 20; // 20 de Velocidade
			player->Equip[15].EF3= 26;
			player->Equip[15].EFV3 = 20; // 20 de Velocidade
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status do Vento");
			SendCharList(clientid);
			
		
		}
		else if(player->bStatus.Level > 92 && player->bStatus.Level < 121)
		{

			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5446;
			player->Equip[1].EF2= 3;
			player->Equip[1].EFV2 = 50;
			player->bStatus.Level = 0;
			player->Exp = 0; 
			player->bStatus.fMaster = 255;
			player->bStatus.wMaster = 255;
			player->bStatus.tMaster = 255;
			player->bStatus.sMaster = 255;
			player->MasterPoint = 55;
			player->SkillPoint = 1800;
			player->StatusPoint = 1900;
			player->bStatus.STR = 5;
			player->bStatus.INT = 10;
			player->bStatus.DEX = 7;
			player->bStatus.CON = 9;
			PByte(addr_bclient + 0x15c6c97) += 64;
			player->Equip[15].Index = 795;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 26;
			player->Equip[15].EFV2 = 25; // 25 de Velocidade
			player->Equip[15].EF3= 26;
			player->Equip[15].EFV3 = 25; // 25 de Velocidade
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status do Vento");
			SendCharList(clientid);

		}
		else if(player->bStatus.Level == 149)
		{
			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5446;
			player->Equip[1].EF2= 3;
			player->Equip[1].EFV2 = 90;
			player->Equip[1].EF2= 3;
			player->Equip[1].EFV2 = 50;
			player->bStatus.Level = 0;
			player->Exp = 0; 
			player->bStatus.fMaster = 255;
			player->bStatus.wMaster = 255;
			player->bStatus.tMaster = 255;
			player->bStatus.sMaster = 255;
			player->MasterPoint = 55;
			player->SkillPoint = 1900;
			player->StatusPoint = 2100;
			player->bStatus.STR = 5;
			player->bStatus.INT = 10;
			player->bStatus.DEX = 7;
			player->bStatus.CON = 9;
			PByte(addr_bclient + 0x15c6c97) += 64;
			player->Equip[15].Index = 795;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 26;
			player->Equip[15].EFV2 = 25; // 25 de Velocidade
			player->Equip[15].EF3= 26;
			player->Equip[15].EFV3 = 30; // 30 de Velocidade
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status do Vento");
			SendCharList(clientid);

		}
		else if(player->bStatus.Level == 199)
		{
			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5446;
			player->Equip[1].EF2= 3;
			player->Equip[1].EFV2 = 127;
			player->Equip[1].EF2= 3;
			player->Equip[1].EFV2 = 127;
			player->bStatus.Level = 0;
			player->Exp = 0; 
			player->bStatus.fMaster = 255;
			player->bStatus.wMaster = 255;
			player->bStatus.tMaster = 255;
			player->bStatus.sMaster = 255;
			player->MasterPoint = 55;
			player->SkillPoint = 2100;
			player->StatusPoint = 2500;
			player->bStatus.STR = 5;
			player->bStatus.INT = 10;
			player->bStatus.DEX = 7;
			player->bStatus.CON = 9;
			PByte(addr_bclient + 0x15c6c97) += 64;
			player->Equip[15].Index = 795;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 26;
			player->Equip[15].EFV2 = 35; // 35 de Velocidade
			player->Equip[15].EF3= 26;
			player->Equip[15].EFV3 = 35; // 35 de Velocidade
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status do Vento");
			SendCharList(clientid);

		}
		else{SendClientMsg(clientid,"Level inadequado.");
		}	
	}
else
{
		SendClientMsg(clientid,"Somente um personagen Hard Core pode concluir.");
	}
}