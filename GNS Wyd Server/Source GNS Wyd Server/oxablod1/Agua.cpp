#include "Stdafx.h"



void Agua(int clientid)
{
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	char tmp[1024];
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	int addr_bclient = clientid * 0x0410;
	int Ideal = GetFirstSlotSADD(clientid,5338,64);
	int stone0 = GetFirstSlotSADD(clientid,5334,64);
	if(stone0 == -1 )
	{
		SendClientMsg(clientid,"É necessário a Pedra Agua para Atribuir Status da Agua.");
		return;
	}
	if(player->Equip[11].Index == -1 )
	{
		SendClientMsg(clientid,"É necessário a Ordem da Agua Equipada.");
		return;
	}
	if(player->Inventory[1].Index = 5334 && player->Equip[0].EFV2 == 5 && player->Equip[11].Index == 6456)
	{

		if(player->bStatus.Level > 50 && player->bStatus.Level < 60)
		{
			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5447;
			player->bStatus.Level = 0;
			player->Exp = 0; 
			player->bStatus.fMaster = 255;
			player->bStatus.wMaster = 255;
			player->bStatus.tMaster = 255;
			player->bStatus.sMaster = 255;
			player->MasterPoint = 55;
			player->SkillPoint = 1500;
			player->StatusPoint = 1000;
			player->bStatus.STR = 0;
			player->bStatus.INT = 0;
			player->bStatus.DEX = 0;
			player->bStatus.CON = 0;
			PByte(addr_bclient + 0x15c6c97) += 64;
			player->Equip[15].Index = 797;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 60;
			player->Equip[15].EFV2 = 5; // 5 magia
			player->Equip[15].EF3= 60;
			player->Equip[15].EFV3 = 5; // 5 magia
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status da Agua");
			sprintf(tmp,"[%s] Atribuiu Status da Agua. ",thisclient->Name);
			SendCharList(clientid);
			
		}
		else if(player->bStatus.Level > 61 && player->bStatus.Level < 91)
		{
			
			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5447;
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
			player->Equip[15].Index = 797;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 60;
			player->Equip[15].EFV2 = 8; // 8 magia
			player->Equip[15].EF3= 60;
			player->Equip[15].EFV3 = 8; // 8 magia
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status da Agua");
			sprintf(tmp,"[%s] Atribuiu Status da Agua. ",thisclient->Name);
			SendCharList(clientid);
			
		
		}
		else if(player->bStatus.Level > 92 && player->bStatus.Level < 121)
		{

			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5447;
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
			player->Equip[15].Index = 797;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 60;
			player->Equip[15].EFV2 = 10; // 10 magia
			player->Equip[15].EF3= 60;
			player->Equip[15].EFV3 = 10; // 10 magia
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status da Agua");
			sprintf(tmp,"[%s] Atribuiu Status da Agua. ",thisclient->Name);
			SendCharList(clientid);

		}
		else if(player->bStatus.Level == 149)
		{
			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5447;
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
			player->Equip[15].Index = 797;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 60;
			player->Equip[15].EFV2 = 15; // 15 magia
			player->Equip[15].EF3= 60;
			player->Equip[15].EFV3 = 15; // 15 magia
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status da Agua");
			sprintf(tmp,"[%s] Atribuiu Status da Agua. ",thisclient->Name);
			SendCharList(clientid);

		}
		else if(player->bStatus.Level == 199)
		{
			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5447;
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
			player->Equip[15].Index = 797;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 60;
			player->Equip[15].EFV2 = 20; // 20 magia
			player->Equip[15].EF3= 60;
			player->Equip[15].EFV3 = 24; // 24 magia
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status da Agua");
			sprintf(tmp,"[%s] Atribuiu Status da Agua. ",thisclient->Name);
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