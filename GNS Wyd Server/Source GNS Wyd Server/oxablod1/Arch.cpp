#include "Stdafx.h"

void Arch(int clientid, int npcid)
{
 st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);

 if(player->Equip[0].Index >= 22 && player->Equip[0].Index == 25 || player->Equip[0].Index == 32)
 {
	 SendClientMsg(clientid, "Espere a transformação acabar");
	 return;
 }
 if(player->Equip[0].EFV2 == 1)
 {
 if(player->bStatus.Level == 399)
	 {
		 if(player->Equip[10].Index == 1742)
		 {
			 if(player->Equip[11].Index >= 1760 && player->Equip[11].Index <= 1763)
			 {
				 if(player->Equip[1].Index == 0 && player->Equip[2].Index == 0 &&
					 player->Equip[3].Index == 0 && player->Equip[4].Index == 0 &&
					 player->Equip[5].Index == 0 && player->Equip[6].Index == 0 &&
					 player->Equip[7].Index == 0)
				 {
					 if(player->Equip[11].Index == 1760){
						 player->ClassInfo = 0;
						 player->Equip[0].Index += 5;}
					 if(player->Equip[11].Index == 1761){
						 player->ClassInfo = 1;
						 player->Equip[0].Index += 6;}
					 if(player->Equip[11].Index == 1762){
						 player->ClassInfo = 2;
						 player->Equip[0].Index += 7;}
					 if(player->Equip[11].Index == 1763){
						 player->ClassInfo = 3;
						 player->Equip[0].Index += 8;}
					 player->Equip[0].EFV2 = 2;
					 player->Equip[0].EFV3 = player->Equip[0].Index;
					 player->bStatus.STR = 0;
					 player->bStatus.DEX = 0;
					 player->bStatus.INT = 0;
					 player->bStatus.CON = 0;
					 player->bStatus.fMaster = 0;
					 player->bStatus.wMaster = 0;
					 player->Status.tMaster = 0;
					 player->Status.sMaster = 0;
					 player->bStatus.Defense = 1000;
					 player->bStatus.Attack = 0;
					 player->StatusPoint = 600;
					 player->SkillPoint = 100;
					 player->MasterPoint = 300;
					 player->bStatus.Level = 0;
					 player->Exp = 0;
					 player->Learn = 0;
					 player->Inventory[10].Index = 0;
					 player->Inventory[11].Index = 0;
					 SendClientMsg(clientid, "Parabens Você Virou Arch");
					 SendCharList(clientid);
					 return;
				 }
				 else{
					 SendClientMsg(clientid, "Desequipe todos seus equipamentos e armamentos.");
					 return;
				 }
			 }else{
				 SendClientMsg(clientid, "Equipe o sephirot da classe desejada");
				 return;
			 }
		 }else{
			 SendClientMsg(clientid, "Equipe a imortalidade");
			 return;
		 }
	 }else{
		 SendClientMsg(clientid, "Level inadequado");
		 return;
	 }
 }else{
	 SendClientMsg(clientid, "Você não é mais um mortal");
	 return;}
}