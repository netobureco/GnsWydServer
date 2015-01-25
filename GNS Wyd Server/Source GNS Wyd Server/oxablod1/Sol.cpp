#include "Stdafx.h"



void Sol(int clientid)
{
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	char tmp[1024];
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	int addr_bclient = clientid * 0x0410;
	int Ideal = GetFirstSlotSADD(clientid,5338,64);
	int stone0 = GetFirstSlotSADD(clientid,5336,64);
	if(stone0 == -1 )
	{
		SendClientMsg(clientid,"É necessário a Pedra Sol  Atribuir Status do Fogo.");
		return;
	}
		if(player->Equip[11].Index == -1 )
	{
		SendClientMsg(clientid,"É necessário a Ordem do Fogo Equipado.");
		return;
	}
	if(player->Inventory[1].Index = 5334 && player->Equip[0].EFV2 == 5 && player->Equip[11].Index == 6449)
	{

		if(player->bStatus.Level > 50 && player->bStatus.Level < 60)
		{
			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5445;
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
			player->Equip[15].Index = 794;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 2;
			player->Equip[15].EFV2 = 35; // 35 Dano
			player->Equip[15].EF3= 2;
			player->Equip[15].EFV3 = 35; // 35 Dano
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status do Fogo");
			sprintf(tmp,"[%s] Atribuiu Status do Fogo. ",thisclient->Name);
			SendCharList(clientid);
			
		}
		else if(player->bStatus.Level > 61 && player->bStatus.Level < 91)
		{
			
			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5445;
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
			player->Equip[15].Index = 794;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 2;
			player->Equip[15].EFV2 = 40; // 40 dano
			player->Equip[15].EF3= 2;
			player->Equip[15].EFV3 = 40; // 40 dano
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status do Fogo");
			sprintf(tmp,"[%s] Atribuiu Status do Fogo. ",thisclient->Name);
			SendCharList(clientid);
			
		
		}
		else if(player->bStatus.Level > 92 && player->bStatus.Level < 121)
		{

			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5445;
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
			player->Equip[15].Index = 794;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 2;
			player->Equip[15].EFV2 = 50; // 50 dano
			player->Equip[15].EF3= 2;
			player->Equip[15].EFV3 = 50; // 50 danov
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status do Fogo");
			sprintf(tmp,"[%s] Atribuiu Status do Fogo. ",thisclient->Name);
			SendCharList(clientid);

		}
		else if(player->bStatus.Level == 149)
		{
			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5445;
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
			player->Equip[15].Index = 794;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;
			player->Equip[15].EF2= 2;
			player->Equip[15].EFV2 = 90; // 90 dano
			player->Equip[15].EF3=2;
			player->Equip[15].EFV3 = 90; // 90 dano
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status do Fogo");
			sprintf(tmp,"[%s] Atribuiu Status do Fogo. ",thisclient->Name);
			SendCharList(clientid);

		}
		else if(player->bStatus.Level == 199)
		{
			player->Inventory[stone0].Index = 0;
			Delete(clientid,Ideal);
			player->Equip[1].Index = 5445;
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
			player->Equip[15].Index = 794;
			player->Equip[15].EF1= 43;
			player->Equip[15].EFV1 = 0;;
			player->Equip[15].EF2= 2;
			player->Equip[15].EFV2 = 127; // 127 dano
			player->Equip[15].EF3= 2;
			player->Equip[15].EFV3 = 127; // 127 dano
			player->Inventory[Ideal].Index = 0;
			player->Equip[11].Index = 0;
			LogForAll(clientid,"Personagem Atribuiu Status do Fogo");
			sprintf(tmp,"[%s] Atribuiu Status do Fogo. ",thisclient->Name);
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