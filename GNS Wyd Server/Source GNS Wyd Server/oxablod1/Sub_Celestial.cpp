#include "Stdafx.h"



void SubCeletial(int clientid)
{
	MOB *player = (MOB*)GetMobFromIndex(clientid);

	int addr_bclient = clientid * 0x0410;
	int Ideal = GetFirstSlotSADD(clientid,5338,64);

	if(player->Equip[0].EFV2 == 3)
	{

		if(player->bStatus.Level > 399 && player->bStatus.Level < 399)
		{

			Delete(clientid,Ideal);
			player->Equip[1].Index = 3500; // Cythera prateada
			player->Equip[1].EF1 = 0;
			player->Equip[1].EFV1 = 0;
			player->Equip[1].EF2 = 0;
			player->Equip[1].EFV2 = 0;
			player->Equip[1].EF3 = 0;
			player->Equip[1].EFV3 = 0;
			player->bStatus.Level = 0;
			player->Exp = 0; 
			player->Equip[0].EFV2 = 3;
			player->bStatus.fMaster = 200;
			player->bStatus.wMaster = 200;
			player->bStatus.tMaster = 200;
			player->bStatus.sMaster = 200;
			player->MasterPoint = 55;
			player->SkillPoint = 1200;
			player->StatusPoint = 100;
			player->bStatus.Defense += 1500;
			player->bStatus.Attack += 0;
			player->bStatus.STR = 0;
			player->bStatus.INT = 300;
			player->bStatus.DEX = 0;
			player->bStatus.CON = 0;
			PByte(addr_bclient + 0x15c6c97) += 64;
			player->Equip[15].Index = 3199;
			player->Inventory[Ideal].Index = 0;
			LogForAll(clientid,"Criação de Sub Celestial sucedida");
			
			SendCharList(clientid);

		}
		else if(player->bStatus.Level > 399 && player->bStatus.Level < 399){
			
			Delete(clientid,Ideal);
			player->Equip[1].Index = 3500; // Cythera prateada
			player->Equip[1].EF1 = 0;
			player->Equip[1].EFV1 = 0;
			player->Equip[1].EF2 = 0;
			player->Equip[1].EFV2 = 0;
			player->Equip[1].EF3 = 0;
			player->Equip[1].EFV3 = 0;
			player->bStatus.Level = 0;
			player->Exp = 0;
			player->Equip[0].EFV2 = 3;
			player->bStatus.fMaster = 200;
			player->bStatus.wMaster = 200;
			player->bStatus.tMaster = 200;
			player->bStatus.sMaster = 200;
			player->MasterPoint = 55;
			player->SkillPoint = 1200;
			player->StatusPoint = 600;
			player->bStatus.Defense += 1500;
			player->bStatus.Attack += 0;
			player->bStatus.STR = 0;
			player->bStatus.INT = 0;
			player->bStatus.DEX = 0;
			player->bStatus.CON = 0;
			PByte(addr_bclient + 0x15c6c97) += 64;
			player->Equip[15].Index = 3199;
			player->Inventory[Ideal].Index = 0;
			LogForAll(clientid,"Criação de Sub Celestial sucedida");
			SendCharList(clientid);
			
		
		}
		else if(player->bStatus.Level > 399 && player->bStatus.Level < 399){

			Delete(clientid,Ideal);
			player->Equip[1].Index = 3501; // Cythera Dourada
			player->Equip[1].EF1 = 0;
			player->Equip[1].EFV1 = 0;
			player->Equip[1].EF2 = 0;
			player->Equip[1].EFV2 = 0;
			player->Equip[1].EF3 = 0;
			player->Equip[1].EFV3 = 0;
			player->bStatus.Level = 0;
			player->Exp = 0; 
			player->Equip[0].EFV2 = 3;
			player->bStatus.fMaster = 200;
			player->bStatus.wMaster = 200;
			player->bStatus.tMaster = 200;
			player->bStatus.sMaster = 200;
			player->MasterPoint = 55;
			player->SkillPoint = 100;
			player->StatusPoint = 700;
			player->bStatus.Defense += 1500;
			player->bStatus.Attack += 0;
			player->bStatus.STR = 0;
			player->bStatus.INT = 0;
			player->bStatus.DEX = 0;
			player->bStatus.CON = 0;
			PByte(addr_bclient + 0x15c6c97) += 64;
			player->Equip[15].Index = 3199;
			player->Inventory[Ideal].Index = 0;
			LogForAll(clientid,"Criação de Sub Celestial sucedida");
			SendCharList(clientid);

		}
		else if(player->bStatus.Level == 399)
		{
			Delete(clientid,Ideal);
			player->Equip[1].Index = 3501; //Cythera Dourada
			player->Equip[1].EF1 = 0;
			player->Equip[1].EFV1 = 0;
			player->Equip[1].EF2 = 0;
			player->Equip[1].EFV2 = 0;
			player->Equip[1].EF3 = 0;
			player->Equip[1].EFV3 = 0;
			player->bStatus.Level = 0;
			player->Exp = 0; 
			player->Equip[0].EFV2 = 3;
			player->bStatus.fMaster = 200;
			player->bStatus.wMaster = 200;
			player->bStatus.tMaster = 200;
			player->bStatus.sMaster = 200;
			player->MasterPoint = 55;
			player->SkillPoint = 1500;
			player->StatusPoint = 1000;
			player->bStatus.Defense += 1500;
			player->bStatus.Attack += 0;
			player->bStatus.STR = 0;
			player->bStatus.INT = 0;
			player->bStatus.DEX = 0;
			player->bStatus.CON = 0;
			PByte(addr_bclient + 0x15c6c97) += 64;
			player->Equip[15].Index = 3199;
			player->Inventory[Ideal].Index = 0;
			LogForAll(clientid,"Criação de Sub Celestial sucedida");
			SendCharList(clientid);

		}
		else if(player->bStatus.Level == 399)
		{
			Delete(clientid,Ideal);
			player->Equip[1].Index = 3502; // Cythera Mystica
			player->Equip[1].EF1 = 0;
			player->Equip[1].EFV1 = 0;
			player->Equip[1].EF2 = 0;
			player->Equip[1].EFV2 = 0;
			player->Equip[1].EF3 = 0;
			player->Equip[1].EFV3 = 0;
			player->bStatus.Level = 0;
			player->Exp = 0;
			player->Equip[0].EFV2 = 3;
			player->bStatus.fMaster = 200;
			player->bStatus.wMaster = 200;
			player->bStatus.tMaster = 200;
			player->bStatus.sMaster = 200;
			player->MasterPoint = 55;
			player->SkillPoint = 1200;
			player->StatusPoint = 1200;
			player->bStatus.Defense += 1500;
			player->bStatus.Attack += 0;
			player->bStatus.STR = 0;
			player->bStatus.INT = 0;
			player->bStatus.DEX = 0;
			player->bStatus.CON = 0;
			PByte(addr_bclient + 0x15c6c97) += 64;
			player->Equip[15].Index = 3199;
			player->Inventory[Ideal].Index = 0;
			LogForAll(clientid,"Parabens Você Virou Sub Celestial ");
			SendCharList(clientid);

		}
		else{SendClientMsg(clientid,"Level inadequado.");
		}	
	}
else
{
		SendClientMsg(clientid,"Somente um personagen Arch pode concluir.");
	}
}