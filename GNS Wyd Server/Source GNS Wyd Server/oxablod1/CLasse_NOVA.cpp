#include "Stdafx.h"

void Sub_Casse_CLasse(int clientid)
{
	MOB *player = (MOB*)GetMobFromIndex(clientid);

	int addr_bclient = clientid * 0x0410;
	int stone0 = GetFirstSlotSADD(clientid,5334,64);
	int stone1 = GetFirstSlotSADD(clientid,5335,64);
	int stone2 = GetFirstSlotSADD(clientid,5336,64);
	int stone3 = GetFirstSlotSADD(clientid,5337,64);
	int stone4 = GetFirstSlotSADD(clientid,4011,64);
	int stone5 = GetFirstSlotSADD(clientid,4011,64);
	int stone6 = GetFirstSlotSADD(clientid,4011,64);
	int ideal  = GetFirstSlotSADD(clientid,5338,64);
	if(stone0 == -1 || stone1 == -1 || stone2 == -1 || stone3 == -1 || stone4 == -1 || stone5 == -1 || stone6 == -1)
	{
		SendClientMsg(clientid,"É necessário as quatro pedras elementares(Terra,Agua,Vento e Sol e 3Bi).");
		return;
	}

	if(player->Equip[0].EFV2 == 6)
	{
		if(player->bStatus.Level == 399)
		{
			if(player->Equip[0].Index < 22 || player->Equip[0].Index > 25)
			{
                    if(player->Equip[11].Index >= 1760 && player->Equip[11].Index <= 1763)
					{
						if(player->Equip[11].Index == 1760)
						{//TK
							if(player->Equip[0].Index == 6 || player->Equip[0].Index == 7
							|| player->Equip[0].Index == 8 || player->Equip[0].Index == 9)
							{


								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							
							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 6;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 0;
						player->Equip[0].EFV3 = 0;

						player->ClassInfo = 0;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"SubHardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}else if(player->Equip[0].Index == 16 || player->Equip[0].Index == 17
						|| player->Equip[0].Index == 18 || player->Equip[0].Index == 19){
						
							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							
							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 16;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 0;
						player->Equip[0].EFV3 = 0;

						player->ClassInfo = 0;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}else if(player->Equip[0].Index == 26 || player->Equip[0].Index == 27
						|| player->Equip[0].Index == 28 || player->Equip[0].Index == 29){
						
							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							
							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 26;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 0;
						player->Equip[0].EFV3 = 0;

						player->ClassInfo = 0;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}else if(player->Equip[0].Index == 36 || player->Equip[0].Index == 37
						|| player->Equip[0].Index == 38 || player->Equip[0].Index == 39){

						
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							

							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 36;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 0;
						player->Equip[0].EFV3 = 0;

						player->ClassInfo = 0;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);
						
					}
				}else if(player->Equip[11].Index == 1761){//FM
					if(player->Equip[0].Index == 6 || player->Equip[0].Index == 7
						|| player->Equip[0].Index == 8 || player->Equip[0].Index == 9){
						
							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							
							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 7;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 0;
						player->Equip[0].EFV3 = 0;

						player->ClassInfo = 1;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}else if(player->Equip[0].Index == 16 || player->Equip[0].Index == 17
						|| player->Equip[0].Index == 18 || player->Equip[0].Index == 19){
						
							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							
							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 17;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 0;
						player->Equip[0].EFV3 = 0;

						player->ClassInfo = 1;

						player->bStatus.Level = 0;
						player->Exp = 2000;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}else if(player->Equip[0].Index == 26 || player->Equip[0].Index == 27
						|| player->Equip[0].Index == 28 || player->Equip[0].Index == 29){
						
							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							
							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 27;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 0;
						player->Equip[0].EFV3 = 0;

						player->ClassInfo = 1;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}else if(player->Equip[0].Index == 36 || player->Equip[0].Index == 37
						|| player->Equip[0].Index == 38 || player->Equip[0].Index == 39){

							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							
							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 37;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 0;
						player->Equip[0].EFV3 = 0;

						player->ClassInfo = 1;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

						
					}
				}if(player->Equip[11].Index == 1762){//BM
					if(player->Equip[0].Index == 6 || player->Equip[0].Index == 7
						|| player->Equip[0].Index == 8 || player->Equip[0].Index == 9){
						
							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							
							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 8;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 99;
						player->Equip[0].EFV3 = 8;

						player->ClassInfo = 2;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}else if(player->Equip[0].Index == 16 || player->Equip[0].Index == 17
						|| player->Equip[0].Index == 18 || player->Equip[0].Index == 19){
						
						
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							
							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 18;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 99;
						player->Equip[0].EFV3 = 18;

						player->ClassInfo = 2;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2490;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}else if(player->Equip[0].Index == 26 || player->Equip[0].Index == 27
						|| player->Equip[0].Index == 28 || player->Equip[0].Index == 29){
						
							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
						

							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 28;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 99;
						player->Equip[0].EFV3 = 28;

						player->ClassInfo = 2;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}else if(player->Equip[0].Index == 36 || player->Equip[0].Index == 37
						|| player->Equip[0].Index == 38 || player->Equip[0].Index == 39){

							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							
							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;


						player->Equip[0].Index = 38;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 99;
						player->Equip[0].EFV3 = 38;

						player->ClassInfo = 2;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}
				}if(player->Equip[11].Index == 1763){//HT
					if(player->Equip[0].Index == 6 || player->Equip[0].Index == 7
						|| player->Equip[0].Index == 8 || player->Equip[0].Index == 9){
						
							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							
							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 9;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 0;
						player->Equip[0].EFV3 = 0;

						player->ClassInfo = 3;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}else if(player->Equip[0].Index == 16 || player->Equip[0].Index == 17
						|| player->Equip[0].Index == 18 || player->Equip[0].Index == 19){
						
							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
						
							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 19;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 0;
						player->Equip[0].EFV3 = 0;

						player->ClassInfo = 3;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}else if(player->Equip[0].Index == 26 || player->Equip[0].Index == 27
						|| player->Equip[0].Index == 28 || player->Equip[0].Index == 29){
						
							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;
							

							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 29;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 0;
						player->Equip[0].EFV3 = 0;

						player->ClassInfo = 3;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
		
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);

						//SendClientSignalParm(clientid,clientid,0x3B4,conta->CharSlot);

					}else if(player->Equip[0].Index == 36 || player->Equip[0].Index == 37
						|| player->Equip[0].Index == 38 || player->Equip[0].Index == 39){

							
								player->Equip[1].Index = 3506;
								player->Equip[1].EF1 = 43;
								player->Equip[1].EFV1 = 0;
								player->Equip[1].EF2 = 3;
								player->Equip[1].EFV2 = 80;
								player->Equip[1].EF3 = 4;
								player->Equip[1].EFV3 = 90;

							player->Inventory[stone0].Index = 0;
							player->Inventory[stone1].Index = 0;
							player->Inventory[stone2].Index = 0;
							player->Inventory[stone3].Index = 0;
                            player->Inventory[stone4].Index = 0;
							player->Inventory[stone5].Index = 0;
							player->Inventory[stone6].Index = 0;
							player->Inventory[ideal].Index = 0;
							player->Equip[11].Index = 0;

						player->Equip[0].Index = 39;
						player->Equip[0].EF1 = 43;
						player->Equip[0].EFV1 = 0;
						player->Equip[0].EF2 = 98;
						player->Equip[0].EFV2 = 5;
						player->Equip[0].EF3 = 0;
						player->Equip[0].EFV3 = 0;

						player->ClassInfo = 3;

						player->bStatus.Level = 0;
						player->Exp = 500;

						player->bStatus.fMaster = 255;
						player->bStatus.wMaster = 255;
						player->bStatus.tMaster = 255;
						player->bStatus.sMaster = 255;

						player->MasterPoint = 55;
						
						player->SkillPoint = 3500;
						player->Learn = 0;
						
						player->StatusPoint = 2000;
						
						player->bStatus.STR = 5;
						player->bStatus.INT = 5;
						player->bStatus.DEX = 5;
						player->bStatus.CON = 5;
						
						player->Equip[15].EF1 = 5522;
						player->Equip[15].EFV1 = 0;
						player->Equip[15].EF2 = 0;
						player->Equip[15].EFV2 = 0;
						player->Equip[15].EF3 = 0;
						player->Equip[15].EFV3 = 0;

						PByte(addr_bclient + 0x15c6c97) += 64;
						SendClientMsg(clientid,"HardCore Criado Com Sucesso");
						SendCharList(clientid);}
						}
				}else{
					SendClientMsg(clientid,"Você precisa de um Sephirot equipado.");
				}
			}else{
				SendClientMsg(clientid,"Desculpe [Não use Transformações].");
			}
		}else{
			SendClientMsg(clientid,"Somente Level 300.");
		}
	}else{
		SendClientMsg(clientid,"Desculpe [Somente Celestial].");
	}

	return;
}

