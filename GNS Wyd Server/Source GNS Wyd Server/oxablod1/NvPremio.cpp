#include "Stdafx.h"


//Revisada
void PremioLv(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int slot = GetFirstSlotSADD(ClientID,0,64);
	
	if(player->Equip[0].EFV2 == 1)
	{
		if(slot != -1)
		{
			switch(player->Equip[15].EFV3)
			{
				case 0:
					 Iten_0(ClientID);
					 break;

				case 1:
					 Iten_1(ClientID);
					 break;

				case 2:
					 Iten_2(ClientID);
					 break;

				case 3:
					 Iten_3(ClientID);
					 break;

				case 4:
					Iten_4(ClientID);
					 break;

				case 5:
					 Iten_5(ClientID);
					 break;

				case 6:
					 Iten_6(ClientID);
					 break;

				case 7:
					 Iten_7(ClientID);
					 break;

				case 8:
					 Iten_8(ClientID);
					 break;

				case 9:
					 Iten_9(ClientID);
					 break;

				case 10:
					 Iten_10(ClientID);
					 break;

				case 11:
					 Iten_11(ClientID);
					 break;

				case 12:
					 Iten_12(ClientID);
					 break;

				case 13:
					 Iten_13(ClientID);
					 break;

				case 14:
					 Iten_14(ClientID);
					 break;

				case 15:
					 Iten_15(ClientID);
					 break;

				case 16:
					 Iten_16(ClientID);
					 break;

				case 17:
					 Iten_17(ClientID);
					 break;

				case 18:
					 Iten_18(ClientID);
					 break;
			}
		}
	}
}

//Revisar
void Iten_0(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 29)
	 {
	   if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1148;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!!Chegou o item [Manoplas_de_Malha]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1298;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!!Chegou o item [Luvas_Sombrias]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1457;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Luvas_de_Águia]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1607;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Braçadeira_de_Metal]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_1(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 34)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1160;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
		   SendClientMsg(ClientID,"!Chegou o item [Botas_de_Malha]");
		   player->Equip[15].EFV3 += 1;
		   SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		   return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1310;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
		   SendClientMsg(ClientID,"!Chegou o item [Botas_Sombrias]");
		   player->Equip[15].EFV3 += 1;
		   SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		   return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1460;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
		   SendClientMsg(ClientID,"!Chegou o item [Botas_de_Águia]");
		   player->Equip[15].EFV3 += 1;
		   SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		   return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1610;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
		   SendClientMsg(ClientID,"!Chegou o item [Botas_de_Metal]");
		   player->Equip[15].EFV3 += 1;
		   SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		   return;
		}
	}
}
void Iten_2(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 39)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1112;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Elmo_de_Malha]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1262;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Chapéu_Sombrio]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1448;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Elmo_de_Águia]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1598;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Chapéu_de_Metal]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_3(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 44)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1136;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Calça_de_Malha]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1286;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Calça_Sombria]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1454;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Calça_de_Águia]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1604;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Calça_de_Metal]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_4(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 49)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1124;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Armadura_de_Malha]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1274;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Robe_Sombrio]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1451;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Armadura_de_Águia]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1601;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Peitoral_de_Metal]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_5(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 59)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1187;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Manoplas_Douradas]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1337;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Luvas_Conjuradoras]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1487;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Manoplas_Aeon]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1637;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Luvas_da_Natureza]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_6(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 64)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1190;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Botas_Douradas]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1340;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Botas_Conjuradoras]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1490;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Botas_Aeon]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1640;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Botas_da_Natureza]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_7(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 69)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1178;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Elmo_Dourado]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1328;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Chapéu_Conjurador]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1478;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Elmo_Aeon]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1628;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Chapéu_da_Natureza]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_8(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 74)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1184;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Calça_Dourada]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1334;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Calça_Conjuradora]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1484;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Calça_Aeon]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1634;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Calça_da_Natureza]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_9(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 79)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1181;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Armadura_Dourada]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1331;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Túnica_Conjuradora]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1481;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Armadura_Aeon]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1631;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Peitoral_da_Natureza]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_10(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 149)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 2369;
			player->Inventory[slot].EF1 = 25;
			player->Inventory[slot].EF2 = 25;
			player->Inventory[slot].EF3 = 25;
			player->Inventory[slot].EFV1 = 10;
			player->Inventory[slot].EFV2 = 5;//vita
			player->Inventory[slot].EFV3 = 10;//level
			SendClientMsg(ClientID,"!Chegou o item [Cavalo_Equip_N]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 2369;
			player->Inventory[slot].EF1 = 25;
			player->Inventory[slot].EF2 = 25;
			player->Inventory[slot].EF3 = 25;
			player->Inventory[slot].EFV1 = 10;
			player->Inventory[slot].EFV2 = 5;
			player->Inventory[slot].EFV3 = 10;
			SendClientMsg(ClientID,"!Chegou o item [Cavalo_Equip_N]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 2369;
			player->Inventory[slot].EF1 = 25;
			player->Inventory[slot].EF2 = 25;
			player->Inventory[slot].EF3 = 25;
			player->Inventory[slot].EFV1 = 10;
			player->Inventory[slot].EFV2 = 5;
			player->Inventory[slot].EFV3 = 10;
			SendClientMsg(ClientID,"!Chegou o item [Cavalo_Equip_N]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 2369;
			player->Inventory[slot].EF1 = 25;
			player->Inventory[slot].EF2 = 25;
			player->Inventory[slot].EF3 = 25;
			player->Inventory[slot].EFV1 = 10;
			player->Inventory[slot].EFV2 = 5;
			player->Inventory[slot].EFV3 = 10;
			SendClientMsg(ClientID,"!Chegou o item [Cavalo_Equip_N]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_11(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 155)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 885;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Cruz_Sagrada]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			//SendToCargo(ClientID,2127,0,0,0,0,0,0);
			player->Inventory[slot].Index = 2127;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Olho_do_Carbunkle]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			//SendToCargo(ClientID,2138,0,0,0,0,0,0);
			player->Inventory[slot].Index = 855;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Lança_do_Triunfo]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			//SendToCargo(ClientID,2122,0,0,0,0,0,0);
			player->Inventory[slot].Index = 2122;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Arco_Élfico]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_12(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 159)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1217;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Manoplas_Embutidas]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1352;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
		   SendClientMsg(ClientID,"!Chegou o item [Luvas_de_Mytril]");
		   player->Equip[15].EFV3 += 1;
		   SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		   return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1502;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
		   SendClientMsg(ClientID,"!Chegou o item [Manoplas_Elementais]");
		   player->Equip[15].EFV3 += 1;
		  SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		   return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1652;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
		   SendClientMsg(ClientID,"!Chegou o item [Braçadeira_de_Teia]");
		   player->Equip[15].EFV3 += 1;
		   SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		   return;
		}
	}
}
void Iten_13(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 169)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1220;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Botas_Embutidas]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1355;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Botas_de_Mytril]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1505;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Botas_Elementais]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1655;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Botas_de_Teia]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_14(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 179)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1208;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Elmo_Embutido]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1343;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Chapéu_de_Mytril]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1493;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Elmo_Elemental]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1643;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Chapéu_de_Teia]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_15(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 189)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1214;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Calça_Embutida]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1349;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Calça_de_Mytril]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1499;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Calça_Elemental]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1649;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Calça_de_Teia]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_16(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 199)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 1211;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Armadura_Embutida]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 1346;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Túnica_de_Mytril]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 1496;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Armadura_Elemental]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 1646;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Peitoral_de_Teia]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_17(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 255)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 3576;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Karika]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 3582;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Cajado_Caótico]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 3566;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Foice_Platinada]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 3556;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 0;
			player->Inventory[slot].EFV2 = 0;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendClientMsg(ClientID,"!Chegou o item [Arco_Guardião]");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void Iten_18(int ClientID)
{
	 MOB *player = (MOB*)GetMobFromIndex(ClientID);
	 
	 int slot = GetFirstSlotSADD(ClientID,0,64);
	 if(slot == -1)
	 {
		 SendClientMsg(ClientID, "Inventario Full");
		 return;
	 }
	 if(player->bStatus.Level >= 150)
	 {
		if(player->ClassInfo == 0) //tk
		{
			player->Inventory[slot].Index = 4122;
			SendClientMsg(ClientID,"!Chegou item [Molar do Gárgula].");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 1) // fm 
		{
			player->Inventory[slot].Index = 4122;
			SendClientMsg(ClientID,"!Chegou item [Molar do Gárgula].");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 2) // bm
		{
			player->Inventory[slot].Index = 4122;
			SendClientMsg(ClientID,"!Chegou item [Molar do Gárgula].");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
        else if(player->ClassInfo == 3) // ht
		{
			player->Inventory[slot].Index = 4122;
			SendClientMsg(ClientID,"!Chegou item [Molar do Gárgula].");
			player->Equip[15].EFV3 += 1;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}

/*
void Premio145(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int slot = GetFirstSlotSADD(ClientID,0,64);
	int addr_bclient = ClientID * 0x0410;
	int cAP0 = PByte(addr_bclient + 0x015C69F4);
	int cAP1 = PByte(addr_bclient + 0x015C69F5);
	int cAP2 = PByte(addr_bclient + 0x015C69F6);
	int cAP3 = PByte(addr_bclient + 0x015C69F7);
	if(player->ClassInfo == 0)
	{
		if((cAP1 >= cAP2) || (cAP3 >= cAP2))
		{
			player->Inventory[slot].Index = 853;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 60;
			player->Inventory[slot].EFV2 = 20;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			SendClientMsg(ClientID,"!!Chegou item [ Armamento nível D ]");
			return;
		}
		player->Inventory[slot].Index = 809;
		player->Inventory[slot].EF1 = 43;
		player->Inventory[slot].EFV1 = 5;
		player->Inventory[slot].EF2 = 2;
		player->Inventory[slot].EFV2 = 45;
		player->Inventory[slot].EF3 = 0;
		player->Inventory[slot].EFV3 = 0;
		int slot2 = GetFirstSlotSADD(ClientID,0,64);
		player->Inventory[slot2].Index = 809;
		player->Inventory[slot2].EF1 = 43;
		player->Inventory[slot2].EFV1 = 5;
		player->Inventory[slot2].EF2 = 2;
		player->Inventory[slot2].EFV2 = 45;
		player->Inventory[slot2].EF3 = 0;
		player->Inventory[slot2].EFV3 = 0;
		SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
		SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		SendClientMsg(ClientID,"!!Chegou item [ Armamento nível D ]");
		return;
	}
	if(player->ClassInfo == 1)
	{
		if(cAP2 >= cAP3)
		{
			player->Inventory[slot].Index = 899;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 60;
			player->Inventory[slot].EFV2 = 20;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			SendClientMsg(ClientID,"!!Chegou item [ Armamento nível D ]");
			return;
		}
		player->Inventory[slot].Index = 824;
		player->Inventory[slot].EF1 = 43;
		player->Inventory[slot].EFV1 = 5;
		player->Inventory[slot].EF2 = 2;
		player->Inventory[slot].EFV2 = 45;
		player->Inventory[slot].EF3 = 0;
		player->Inventory[slot].EFV3 = 0;
		SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
		SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		SendClientMsg(ClientID,"!!Chegou item [ Armamento nível D ]");
		return;
	}
	if(player->ClassInfo == 2)
	{
		if((cAP1 >= cAP3) || (cAP1 >= cAP2))
		{
			player->Inventory[slot].Index = 853;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 60;
			player->Inventory[slot].EFV2 = 20;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
			SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			SendClientMsg(ClientID,"!!Chegou item [ Armamento nível D ]");
			return;
		}
		player->Inventory[slot].Index = 869;
		player->Inventory[slot].EF1 = 43;
		player->Inventory[slot].EFV1 = 5;
		player->Inventory[slot].EF2 = 2;
		player->Inventory[slot].EFV2 = 45;
		player->Inventory[slot].EF3 = 0;
		player->Inventory[slot].EFV3 = 0;
		int slot2 = GetFirstSlotSADD(ClientID,0,64);
		player->Inventory[slot2].Index = 869;
		player->Inventory[slot2].EF1 = 43;
		player->Inventory[slot2].EFV1 = 5;
		player->Inventory[slot2].EF2 = 2;
		player->Inventory[slot2].EFV2 = 45;
		player->Inventory[slot2].EF3 = 0;
		player->Inventory[slot2].EFV3 = 0;
		SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
		SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		SendClientMsg(ClientID,"!!Chegou item [ Armamento nível D ]");
		return;
	}
	if(player->ClassInfo == 3)
	{
		player->Inventory[slot].Index = 824;
		player->Inventory[slot].EF1 = 43;
		player->Inventory[slot].EFV1 = 5;
		player->Inventory[slot].EF2 = 2;
		player->Inventory[slot].EFV2 = 45;
		player->Inventory[slot].EF3 = 0;
		player->Inventory[slot].EFV3 = 0;
		SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
		SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		SendClientMsg(ClientID,"!!Chegou item [ Armamento nível D ]");
		return;
	}
}
void Premio150(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int slot = GetFirstSlotSADD(ClientID,0,64);
	player->Inventory[slot].Index = 2367;
	player->Inventory[slot].EF1 = 16;
	player->Inventory[slot].EFV1 = 39;
	player->Inventory[slot].EF2 = 30;
	player->Inventory[slot].EFV2 = 5;
	player->Inventory[slot].EF3 = 100;
	player->Inventory[slot].EFV3 = 1;
	SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
	SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
	SendClientMsg(ClientID,"!!Chegou item [ Cavalo Fantasm N ]");
}
void Premio160(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int slot = GetFirstSlotSADD(ClientID,0,64);
	if(player->ClassInfo == 0)
	{
		if(slot == -1)
			SendToCargo(ClientID,1207,0,0,0,0,0,0);
		else
			player->Inventory[slot].Index = 1207;
			int item2 = GetFirstSlotSADD(ClientID,0,64);
		if(item2 == -1)
			SendToCargo(ClientID,1210,0,0,0,0,0,0);
		else
			player->Inventory[item2].Index = 1210;
			int item3 = GetFirstSlotSADD(ClientID,0,64);
		if(item3 == -1)
			SendToCargo(ClientID,1213,0,0,0,0,0,0);
		else
			player->Inventory[item3].Index = 1213;
			int item4 = GetFirstSlotSADD(ClientID,0,64);
		if(item4 == -1)
			SendToCargo(ClientID,1216,0,0,0,0,0,0);
		else
			player->Inventory[item4].Index = 1216;
			int item5 = GetFirstSlotSADD(ClientID,0,64);
		if(item5 == -1)
			SendToCargo(ClientID,1219,0,0,0,0,0,0);
		else
			player->Inventory[item5].Index = 1219;
	}
	if(player->ClassInfo == 1)
	{
		if(slot == -1)
			SendToCargo(ClientID,1342,0,0,0,0,0,0);
		else
			player->Inventory[slot].Index = 1342;
			int item2 = GetFirstSlotSADD(ClientID,0,64);
		if(item2 == -1)
			SendToCargo(ClientID,1345,0,0,0,0,0,0);
		else
			player->Inventory[item2].Index = 1345;
			int item3 = GetFirstSlotSADD(ClientID,0,64);
		if(item3 == -1)
			SendToCargo(ClientID,1348,0,0,0,0,0,0);
		else
			player->Inventory[item3].Index = 1348;
			int item4 = GetFirstSlotSADD(ClientID,0,64);
		if(item4 == -1)
			SendToCargo(ClientID,1351,0,0,0,0,0,0);
		else
			player->Inventory[item4].Index = 1351;
			int item5 = GetFirstSlotSADD(ClientID,0,64);
		if(item5 == -1)
			SendToCargo(ClientID,1354,0,0,0,0,0,0);
		else
			player->Inventory[item5].Index = 1354;
	}
	if(player->ClassInfo == 2)
	{
		if(slot == -1)
			SendToCargo(ClientID,1492,0,0,0,0,0,0);
		else
			player->Inventory[slot].Index = 1492;
			int item2 = GetFirstSlotSADD(ClientID,0,64);
		if(item2 == -1)
			SendToCargo(ClientID,1495,0,0,0,0,0,0);
		else
			player->Inventory[item2].Index = 1495;
			int item3 = GetFirstSlotSADD(ClientID,0,64);
		if(item3 == -1)
			SendToCargo(ClientID,1498,0,0,0,0,0,0);
		else
			player->Inventory[item3].Index = 1498;
			int item4 = GetFirstSlotSADD(ClientID,0,64);
		if(item4 == -1)
			SendToCargo(ClientID,1501,0,0,0,0,0,0);
		else
			player->Inventory[item4].Index = 1501;
			int item5 = GetFirstSlotSADD(ClientID,0,64);
		if(item5 == -1)
			SendToCargo(ClientID,1504,0,0,0,0,0,0);
		else
			player->Inventory[item5].Index = 1504;
	}
	if(player->ClassInfo == 3)
	{
		if(slot == -1)
			SendToCargo(ClientID,1642,0,0,0,0,0,0);
		else
			player->Inventory[slot].Index = 1642;
			int item2 = GetFirstSlotSADD(ClientID,0,64);
		if(item2 == -1)
			SendToCargo(ClientID,1645,0,0,0,0,0,0);
		else
			player->Inventory[item2].Index = 1645;
			int item3 = GetFirstSlotSADD(ClientID,0,64);
		if(item3 == -1)
			SendToCargo(ClientID,1648,0,0,0,0,0,0);
		else
			player->Inventory[item3].Index = 1648;
			int item4 = GetFirstSlotSADD(ClientID,0,64);
		if(item4 == -1)
			SendToCargo(ClientID,1651,0,0,0,0,0,0);
		else
			player->Inventory[item4].Index = 1651;
			int item5 = GetFirstSlotSADD(ClientID,0,64);
		if(item5 == -1)
			SendToCargo(ClientID,1654,0,0,0,0,0,0);
		else
			player->Inventory[item5].Index = 1654;
	}
	SendALL(ClientID);
	SendClientMsg(ClientID,"!!Chegou item [ Equipamento nível (D) ]");
}
void Premio261(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int slot = GetFirstSlotSADD(ClientID,0,64);
	int addr_bclient = ClientID * 0x0410;
	int learn1 = PByte(addr_bclient + 0x015C69F5);
	int learn2 = PByte(addr_bclient + 0x015C69F6);
	int learn3 = PByte(addr_bclient + 0x015C69F7);
	if(player->ClassInfo == 0)
	{
		if((learn2 >= learn1) && (learn2 >= learn3))
		{
			player->Inventory[slot].Index = 3566;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 60;
			player->Inventory[slot].EFV2 = 20;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
		}
		else
		{
			player->Inventory[slot].Index = 3596;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 2;
			player->Inventory[slot].EFV2 = 45;
			player->Inventory[slot].EF3 = 0;
			player->Inventory[slot].EFV3 = 0;
		}
	}
	if(player->ClassInfo == 1)
	{
		if((learn3 >= learn2) && (learn3 >= learn1))
		{
			player->Inventory[slot].Index = 3551;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 2;
			player->Inventory[slot].EFV2 = 45;
			int item1 = GetFirstSlotSADD(ClientID,0,64);
			player->Inventory[item1].Index = 3551;
			player->Inventory[item1].EF1 = 43;
			player->Inventory[item1].EFV1 = 5;
			player->Inventory[item1].EF2 = 2;
			player->Inventory[item1].EFV2 = 45;
			SendInv2(ClientID,1,item1,addrSlotI(ClientID,item1));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		}
		if((learn2 >= learn3) && (learn2 >= learn1))
		{
			player->Inventory[slot].Index = 3582;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 60;
			player->Inventory[slot].EFV2 = 20;
		}
		if((learn1 >= learn2) && (learn1 >= learn3))
		{
			player->Inventory[slot].Index = 3581;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 60;
			player->Inventory[slot].EFV2 = 20;
			int item1 = GetFirstSlotSADD(ClientID,0,64);
			player->Inventory[item1].Index = 1712;
			SendInv2(ClientID,1,item1,addrSlotI(ClientID,item1));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		}
	}
	if(player->ClassInfo == 2)
	{
		if((learn1 >= learn2) && (learn1 >= learn3))
		{
			player->Inventory[slot].Index = 3566;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 60;
			player->Inventory[slot].EFV2 = 20;
		}
		if((learn2 >= learn1) && (learn2 >= learn3))
		{
			player->Inventory[slot].Index = 3576;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 2;
			player->Inventory[slot].EFV2 = 45;
			int item1 = GetFirstSlotSADD(ClientID,0,64);
			player->Inventory[item1].Index = 1712;
			SendInv2(ClientID,1,item1,addrSlotI(ClientID,item1));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		}
		else
		{
			player->Inventory[slot].Index = 3571;
			player->Inventory[slot].EF1 = 43;
			player->Inventory[slot].EFV1 = 5;
			player->Inventory[slot].EF2 = 2;
			player->Inventory[slot].EFV2 = 45;
			int item1 = GetFirstSlotSADD(ClientID,0,64);
			player->Inventory[item1].Index = 3571;
			player->Inventory[item1].EF1 = 43;
			player->Inventory[item1].EFV1 = 5;
			player->Inventory[item1].EF2 = 2;
			player->Inventory[item1].EFV2 = 45;
			SendInv2(ClientID,1,item1,addrSlotI(ClientID,item1));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		}
	}
	if(player->ClassInfo == 3)
	{
		player->Inventory[slot].Index = 3556;
		player->Inventory[slot].EF1 = 43;
		player->Inventory[slot].EFV1 = 5;
		player->Inventory[slot].EF2 = 2;
		player->Inventory[slot].EFV2 = 45;
	}
	SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
	SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
	SendClientMsg(ClientID,"!!Chegou item [ Arma de nível (E) ]");
}
void Premio399(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int slot = GetFirstSlotSADD(ClientID,0,64);
	player->Inventory[slot].Index = 3500;
	player->Inventory[slot].EF1 = 43;
	player->Inventory[slot].EFV1 = 1;
	player->Inventory[slot].EF2 = 3;
	player->Inventory[slot].EFV2 = 45;
	SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
	SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
	SendClientMsg(ClientID,"!! Você atingiu o level maximo, parabéns !");
	SendClientMsg(ClientID,"!! Chegou item! [Cythera Prateada].");
}

void PremioLv(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int slot = GetFirstSlotSADD(ClientID,0,64);
	if(player->Equip[0].EFV2 == 1) // mortal
	{
		if(slot != -1)
		{
			switch(player->bStatus.Level)
			{
				case 144:
					 Premio145(ClientID);
					 break;

				case 149:
					 Premio150(ClientID);
					 break;

				case 159:
					 Premio160(ClientID);
					 break;

				case 200:
					player->Inventory[slot].Index = 4122;
					SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
					SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
					SendClientMsg(ClientID,"!Chegou item [Molar do Gárgula].");
					break;

				case 260:
					 Premio261(ClientID);
					 break;

				case 398:
					Premio399(ClientID);
					 break;
			}
		}
		else
		{
			SendClientMsg(ClientID,"!Você não possui espaço no inventário.");
		}
	}
}

*/