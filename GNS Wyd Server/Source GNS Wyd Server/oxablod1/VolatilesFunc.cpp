#include "BaseExp.h"
#include "StdAfx.h"
void Feijoes(st_Item *Feijao,st_Item *Equip)
{
	switch(Feijao->Index)
	{
	case 3407:
		Equip->EF1 = 116;
		break;
	case 3408:
		Equip->EF1 = 117;
		break;
	case 3409:
		Equip->EF1 = 118;
		break;
	case 3410:
		Equip->EF1 = 119;
		break;
	case 3411:
		Equip->EF1 = 120;
		break;
	case 3412:
		Equip->EF1 = 121;
		break;
	case 3413:
		Equip->EF1 = 122;
		break;
	case 3414:
		Equip->EF1 = 123;
		break;
	case 3415:
		Equip->EF1 = 124;
		break;
	case 3416:
		Equip->EF1 = 125;
		break;
	default:
		Equip->EF1 = 43;
		return;
	}
	Feijao->Index = 0;
}

void GemaDiamante(st_Item *Gema,st_Item *Equip)
{
	if(Equip->EF1 == 43  || Equip->EF1 >= 116 && Equip->EF1 <= 125)
	{
		if(Equip->EFV1 >= 230 && Equip->EFV1 <= 233)
		{
			Equip->EFV1 = 230;
			return;
		}
		else if(Equip->EFV1 >= 234 && Equip->EFV1 <= 237)
		{
			Equip->EFV1 = 234;
			return;
		}
		else if(Equip->EFV1 >= 238 && Equip->EFV1 <= 241)
		{
			Equip->EFV1 = 238;
			return;
		}
		else if(Equip->EFV1 >= 242 && Equip->EFV1 <= 245)
		{
			Equip->EFV1 = 242;
			return;
		}
		else if(Equip->EFV1 >= 246 && Equip->EFV1 <= 249)
		{
			Equip->EFV1 = 246;
			return;
		}
		else if(Equip->EFV1 >= 250 && Equip->EFV1 <= 253)
		{
			Equip->EFV1 = 250;
			return;
		}
	}
}
void GemaEsmeralda(st_Item *Gema,st_Item *Equip)
{
	if(Equip->EF1 == 43  || Equip->EF1 >= 116 && Equip->EF1 <= 125)
	{
		if(Equip->EFV1 >= 230 && Equip->EFV1 <= 233)
		{
			Equip->EFV1 = 231;
			return;
		}
		else if(Equip->EFV1 >= 234 && Equip->EFV1 <= 237)
		{
			Equip->EFV1 = 235;
			return;
		}
		else if(Equip->EFV1 >= 238 && Equip->EFV1 <= 241)
		{
			Equip->EFV1 = 239;
			return;
		}
		else if(Equip->EFV1 >= 242 && Equip->EFV1 <= 245)
		{
			Equip->EFV1 = 243;
			return;
		}
		else if(Equip->EFV1 >= 246 && Equip->EFV1 <= 249)
		{
			Equip->EFV1 = 247;
			return;
		}
		else if(Equip->EFV1 >= 250 && Equip->EFV1 <= 253)
		{
			Equip->EFV1 = 251;
			return;
		}
	}
}
void GemaCoral(st_Item *Gema,st_Item *Equip)
{
	if(Equip->EF1 == 43  || Equip->EF1 >= 116 && Equip->EF1 <= 125)
	{
		if(Equip->EFV1 >= 230 && Equip->EFV1 <= 233)
		{
			Equip->EFV1 = 232;
			return;
		}
		else if(Equip->EFV1 >= 234 && Equip->EFV1 <= 237)
		{
			Equip->EFV1 = 236;
			return;
		}
		else if(Equip->EFV1 >= 238 && Equip->EFV1 <= 241)
		{
			Equip->EFV1 = 240;
			return;
		}
		else if(Equip->EFV1 >= 242 && Equip->EFV1 <= 245)
		{
			Equip->EFV1 = 244;
			return;
		}
		else if(Equip->EFV1 >= 246 && Equip->EFV1 <= 249)
		{
			Equip->EFV1 = 248;
			return;
		}
		else if(Equip->EFV1 >= 250 && Equip->EFV1 <= 253)
		{
			Equip->EFV1 = 252;
			return;
		}
	}
}
void GemaGarnet(st_Item *Gema,st_Item *Equip)
{
	if(Equip->EF1 == 43  || Equip->EF1 >= 116 && Equip->EF1 <= 125)
	{
		if(Equip->EFV1 >= 230 && Equip->EFV1 <= 233)
		{
			Equip->EFV1 = 233;
			return;
		}
		else if(Equip->EFV1 >= 234 && Equip->EFV1 <= 237)
		{
			Equip->EFV1 = 237;
			return;
		}
		else if(Equip->EFV1 >= 238 && Equip->EFV1 <= 241)
		{
			Equip->EFV1 = 241;
			return;
		}
		else if(Equip->EFV1 >= 242 && Equip->EFV1 <= 245)
		{
			Equip->EFV1 = 245;
			return;
		}
		else if(Equip->EFV1 >= 246 && Equip->EFV1 <= 249)
		{
			Equip->EFV1 = 249;
			return;
		}
		else if(Equip->EFV1 >= 250 && Equip->EFV1 <= 253)
		{
			Equip->EFV1 = 253;
			return;
		}
	}
}
void CaçaArmia(int ClientID, int teleport)
{
	switch(teleport){
	case 1:
		DoTeleport(ClientID,2370,2106);
		break;
	case 2:
		DoTeleport(ClientID,2508,2101);
		break;
	case 3:
		DoTeleport(ClientID,2526,2009);
		break;
	case 4:
		DoTeleport(ClientID,2529,1882);
		break;
	case 5:
		DoTeleport(ClientID,2126,1600);
		break;
	case 6:
		DoTeleport(ClientID,2005,1617);
		break;
	case 7:
		DoTeleport(ClientID,2241,1474);
		break;
	case 8:
		DoTeleport(ClientID,1858,1721);
		break;
	case 9:
		DoTeleport(ClientID,2250,1316);
		break;
	case 10:
		DoTeleport(ClientID,1989,1755);
		break;
	}
}
void CaçaDung(int ClientID, int teleport)
{
	switch(teleport){
	case 1:
		DoTeleport(ClientID,290,3799);
		break;
	case 2:
		DoTeleport(ClientID,724,3781);
		break;
	case 3:
		DoTeleport(ClientID,481,4062);
		break;
	case 4:
		DoTeleport(ClientID,876,4058);
		break;
	case 5:
		DoTeleport(ClientID,855,3922);
		break;
	case 6:
		DoTeleport(ClientID,808,3876);
		break;
	case 7:
		DoTeleport(ClientID,959,3813);
		break;
	case 8:
		DoTeleport(ClientID,926,3750);
		break;
	case 9:
		DoTeleport(ClientID,1096,3730);
		break;
	case 10:
		DoTeleport(ClientID,1132,3800);
		break;
	}
}
void CaçaSubM(int ClientID, int teleport)
{
	switch(teleport){
	case 1:
		DoTeleport(ClientID,1242,4035);
		break;
	case 2:
		DoTeleport(ClientID,1264,4017);
		break;
	case 3:
		DoTeleport(ClientID,1333,3994);
		break;
	case 4:
		DoTeleport(ClientID,1358,4041);
		break;
	case 5:
		DoTeleport(ClientID,1462,4033);
		break;
	case 6:
		DoTeleport(ClientID,1326,3788);
		break;
	case 7:
		DoTeleport(ClientID,1493,3777);
		break;
	case 8:
		DoTeleport(ClientID,1437,3741);
		break;
	case 9:
		DoTeleport(ClientID,1389,3740);
		break;
	case 10:
		DoTeleport(ClientID,1422,3810);
		break;
	}
}
void CaçaKult(int ClientID, int teleport)
{
	switch(teleport){
	case 1:
		DoTeleport(ClientID,1376,1722);
		break;
	case 2:
		DoTeleport(ClientID,1426,1686);
		break;
	case 3:
		DoTeleport(ClientID,1381,1861);
		break;
	case 4:
		DoTeleport(ClientID,1326,1896);
		break;
	case 5:
		DoTeleport(ClientID,1510,1723);
		break;
	case 6:
		DoTeleport(ClientID,1543,1726);
		break;
	case 7:
		DoTeleport(ClientID,1580,1758);
		break;
	case 8:
		DoTeleport(ClientID,1182,1714);
		break;
	case 9:
		DoTeleport(ClientID,1634,1727);
		break;
	case 10:
		DoTeleport(ClientID,1237,1764);
		break;
	}
}
void CaçaKefra(int ClientID, int teleport)
{
	switch(teleport){
	case 1:
		DoTeleport(ClientID,2367,4024);
		break;
	case 2:
		DoTeleport(ClientID,2236,4044);
		break;
	case 3:
		DoTeleport(ClientID,2236,3993);
		break;
	case 4:
		DoTeleport(ClientID,2209,3989);
		break;
	case 5:
		DoTeleport(ClientID,2453,4067);
		break;
	case 6:
		DoTeleport(ClientID,2485,4043);
		break;
	case 7:
		DoTeleport(ClientID,2534,3897);
		break;
	case 8:
		DoTeleport(ClientID,2489,3919);
		break;
	case 9:
		DoTeleport(ClientID,2269,3910);
		break;
	case 10:
		DoTeleport(ClientID,2202,3866);
		break;
	}
}
void CaçaNiple(int ClientID, int teleport)
{
	switch(teleport){
	case 1:
		DoTeleport(ClientID,3664,3024);
		break;
	case 2:
		DoTeleport(ClientID,3582,3007);
		break;
	case 3:
		DoTeleport(ClientID,3514,3008);
		break;
	case 4:
		DoTeleport(ClientID,3818,2977);
		break;
	case 5:
		DoTeleport(ClientID,3517,2889);
		break;
	case 6:
		DoTeleport(ClientID,3745,2977);
		break;
	case 7:
		DoTeleport(ClientID,3639,2877);
		break;
	case 8:
		DoTeleport(ClientID,3650,2727);
		break;
	case 9:
		DoTeleport(ClientID,3660,2773);
		break;
	case 10:
		DoTeleport(ClientID,3746,2879);
		break;
	}
}
void Elime(int ClientID,st_Item *ItemSend,int SrcSlot)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
    int addr_bclient = ClientID * 0x0410;
    int cLevel = PInt(addr_bclient + 0x015C69DC);

    if (cLevel < 370)
    {
        SendClientMsg(ClientID, "Level inadequado.");
        return;
    }
 
    if(player->Equip[0].EFV2 != 2)
    {
        SendClientMsg(ClientID, "Apenas Arch.");
        return;
    }
 
    if (player->Gold < 100000000)
    {
        SendClientMsg(ClientID, "Gold insuficiente.");
    }
 
 
    else
    {
        if ((player->Equip[15].Index == 3194 || player->Equip[15].Index == 3195) && player->Equip[15].EF1 == 43 && player->Equip[15].EFV1 == 9 && player->Inventory[SrcSlot].Index == 4106 && (player->Gold >= 100000000))
        {
            int i ;
            for(i = 0;i < 64;i++)
            {
                
              if (player->Equip[15].Index == 3194 || player->Equip[15].Index == 3195 && player->Equip[15].EF1 == 43 && player->Equip[15].EFV1 == 9)
                {
					Delete(ClientID,SrcSlot);
					//DeleteItem(ClientID,SrcSlot);
                    *(short*)((ClientID * 0x410) + 0x15C6A94 + (i * 8)) = 0;
                    SendInv2(ClientID,1,i,((ClientID * 0x410) + 0x15C6A94 + (i * 8)));
                    player->Equip[15].EF1 = 4;
					player->Equip[15].EFV1 = 10;
					player->Equip[15].EF2 = 3;
					player->Equip[15].EFV2 = 10;
					player->Equip[15].EF3 = 43;
					player->Equip[15].EFV3 += 9;
                    player->StatusPoint += 50;
                    player->Gold -= 100000000;
                    player->Exp -= 100000000;
                    //player->bStatus.Level -= 14;
                    SendScore(ClientID);
                    SendStats(ClientID);
                    SendEffect(3, 0xE, ClientID);
					Atualizar(ClientID, _equip, 15);
					
                    break;
        return;
        }
        }
 
        }
    }
}

void Classe_E(int clientid, int SrcSlot, int DstSlot)
{
	
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	char msg[100];
	int chance = rand()%100;
//Peito e Calça
	if((player->Inventory[DstSlot].Index == 1226 || player->Inventory[DstSlot].Index == 1227) || 	
	(player->Inventory[DstSlot].Index == 3802 || player->Inventory[DstSlot].Index == 3803) || 	
	(player->Inventory[DstSlot].Index == 1361 || player->Inventory[DstSlot].Index == 1362) ||
	(player->Inventory[DstSlot].Index == 3822 || player->Inventory[DstSlot].Index == 3823) || 	
	(player->Inventory[DstSlot].Index == 1511 || player->Inventory[DstSlot].Index == 1512) ||	
	(player->Inventory[DstSlot].Index == 3842 || player->Inventory[DstSlot].Index == 3843) || 	
	(player->Inventory[DstSlot].Index == 1661 || player->Inventory[DstSlot].Index == 1662) ||
	(player->Inventory[DstSlot].Index == 3862 || player->Inventory[DstSlot].Index == 3863))
	{
		if(chance < 5)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 15;
			player->Inventory[DstSlot].EF3 = 71;
			player->Inventory[DstSlot].EFV3 = 60;
		}
		else if(chance >= 5 && chance < 10)
		{
			player->Inventory[DstSlot].EF2 = 71;
			player->Inventory[DstSlot].EFV2 = 60;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 10;
		}
		else if(chance >= 10 && chance < 15)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 25;
		}
		else if(chance >= 15 && chance < 18)//dificil
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 10;
		}
		else if(chance >= 18 && chance < 23)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 6;
		}
		else if(chance >= 23 && chance < 28)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 18;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 6;
		}
		else if(chance >= 28 && chance < 33)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 30;
		}
		else if(chance >= 33 && chance < 38)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 40;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance >= 38 && chance < 41)//dificil
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 71;
			player->Inventory[DstSlot].EFV3 = 70;
		}
		else if(chance >= 41 && chance < 44)//dificil
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 30;
		}
		else if(chance >= 44 && chance < 49)
		{
			player->Inventory[DstSlot].EF2 = 71;
			player->Inventory[DstSlot].EFV2 = 60;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 8;
		}
		else if(chance >= 49 && chance < 54)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 25;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 8;
		}
		else if(chance >= 54 && chance < 59)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 25;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 6;
		}
		else if(chance >= 59 && chance < 62)//dificl
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 71;
			player->Inventory[DstSlot].EFV3 = 70;
		}
		else if(chance >= 62 && chance < 67)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 25;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 6;
		}
		else if(chance >= 67 && chance < 71)
		{
			player->Inventory[DstSlot].EF2 = 71;
			player->Inventory[DstSlot].EFV2 = 60;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 6;
		}
		else if(chance >= 71 && chance < 76)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 50;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance >= 76 && chance < 81)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 18;
			player->Inventory[DstSlot].EF3 = 71;
			player->Inventory[DstSlot].EFV3 = 70;
		}
		else if(chance >= 81 && chance < 86)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 20;
			player->Inventory[DstSlot].EF3 = 71;
			player->Inventory[DstSlot].EFV3 = 60;
		}
		else if(chance >= 86 && chance < 91)
		{
			player->Inventory[DstSlot].EF2 = 71;
			player->Inventory[DstSlot].EFV2 = 60;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 10;
		}
		else if(chance >= 91 && chance < 96)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 8;
		}
		else if(chance > 96)//dificil
		{
			player->Inventory[DstSlot].EF2 = 71;
			player->Inventory[DstSlot].EFV2 = 70;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 10;
		}
	}
//Elmos
	else if((player->Inventory[DstSlot].Index == 1225) || 
	(player->Inventory[DstSlot].Index == 3801) ||
	(player->Inventory[DstSlot].Index == 1360) ||
	(player->Inventory[DstSlot].Index == 3821) ||
	(player->Inventory[DstSlot].Index == 1510) ||
	(player->Inventory[DstSlot].Index == 3841) ||
	(player->Inventory[DstSlot].Index == 1660) ||
	(player->Inventory[DstSlot].Index == 3860))
	{
		if(chance < 5)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 20;
			player->Inventory[DstSlot].EF3 = 26;
			player->Inventory[DstSlot].EFV3 = 18;
		}
		else if(chance >= 5 && chance < 10)
		{
			player->Inventory[DstSlot].EF2 = 4;
			player->Inventory[DstSlot].EFV2 = 40;
			player->Inventory[DstSlot].EF3 = 26;
			player->Inventory[DstSlot].EFV3 = 15;
		}
		else if(chance >= 10 && chance < 15)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 25;
			player->Inventory[DstSlot].EF3 = 26;
			player->Inventory[DstSlot].EFV3 = 15;
		}
		else if(chance >= 15 && chance < 18)//dificil
		{
			player->Inventory[DstSlot].EF2 = 4;
			player->Inventory[DstSlot].EFV2 = 60;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 12;
		}
		else if(chance >= 18 && chance < 23)
		{
			player->Inventory[DstSlot].EF2 = 4;
			player->Inventory[DstSlot].EFV2 = 50;
			player->Inventory[DstSlot].EF3 = 26;
			player->Inventory[DstSlot].EFV3 = 15;
		}
		else if(chance >= 23 && chance < 28)
		{
			player->Inventory[DstSlot].EF2 = 26;
			player->Inventory[DstSlot].EFV2 = 15;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance >= 28 && chance < 33)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 15;
			player->Inventory[DstSlot].EF3 = 26;
			player->Inventory[DstSlot].EFV3 = 15;
		}
		else if(chance >= 33 && chance < 38)
		{
			player->Inventory[DstSlot].EF2 = 60;
			player->Inventory[DstSlot].EFV2 = 10;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance >= 38 && chance < 41)//dificil
		{
			player->Inventory[DstSlot].EF2 = 4;
			player->Inventory[DstSlot].EFV2 = 60;
			player->Inventory[DstSlot].EF3 = 26;
			player->Inventory[DstSlot].EFV3 = 18;
		}
		else if(chance >= 41 && chance < 44)//dificil
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 25;
			player->Inventory[DstSlot].EF3 = 26;
			player->Inventory[DstSlot].EFV3 = 18;
		}
		else if(chance >= 44 && chance < 49)
		{
			player->Inventory[DstSlot].EF2 = 60;
			player->Inventory[DstSlot].EFV2 = 12;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance >= 49 && chance < 54)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 15;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 12;
		}
		else if(chance >= 54 && chance < 59)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 50;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 10;
		}
		else if(chance >= 59 && chance < 62)//dificl
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 25;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 12;
		}
		else if(chance >= 62 && chance < 67)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 15;
			player->Inventory[DstSlot].EF3 = 26;
			player->Inventory[DstSlot].EFV3 = 18;
		}
		else if(chance >= 67 && chance < 71)
		{
			player->Inventory[DstSlot].EF2 = 26;
			player->Inventory[DstSlot].EFV2 = 18;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance >= 71 && chance < 76)
		{
			player->Inventory[DstSlot].EF2 = 4;
			player->Inventory[DstSlot].EFV2 = 40;
			player->Inventory[DstSlot].EF3 = 26;
			player->Inventory[DstSlot].EFV3 = 18;
		}
		else if(chance >= 76 && chance < 81)
		{
			player->Inventory[DstSlot].EF2 = 4;
			player->Inventory[DstSlot].EFV2 = 50;
			player->Inventory[DstSlot].EF3 = 26;
			player->Inventory[DstSlot].EFV3 = 18;
		}
		else if(chance >= 81 && chance < 86)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 20;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 10;
		}
		else if(chance >= 86 && chance < 91)
		{
			player->Inventory[DstSlot].EF2 = 26;
			player->Inventory[DstSlot].EFV2 = 18;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance >= 91 && chance < 96)
		{
			player->Inventory[DstSlot].EF2 = 3;
			player->Inventory[DstSlot].EFV2 = 25;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance > 96)//dificil
		{
			player->Inventory[DstSlot].EF2 = 25;
			player->Inventory[DstSlot].EFV2 = 3;
			player->Inventory[DstSlot].EF3 = 26;
			player->Inventory[DstSlot].EFV3 = 18;
		}
	}
//Luvas
	else if((player->Inventory[DstSlot].Index == 1223) || 
	(player->Inventory[DstSlot].Index == 3804) ||
	(player->Inventory[DstSlot].Index == 1363) ||
	(player->Inventory[DstSlot].Index == 3824) ||
	(player->Inventory[DstSlot].Index == 1513) ||
	(player->Inventory[DstSlot].Index == 3844) ||
	(player->Inventory[DstSlot].Index == 1663) ||
	(player->Inventory[DstSlot].Index == 3864))
	{
		if(chance < 5)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 25;
		}
		else if(chance >= 5 && chance < 10)
		{
			player->Inventory[DstSlot].EF2 = 74;
			player->Inventory[DstSlot].EFV2 = 12;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 25;
		}
		else if(chance >= 10 && chance < 15)
		{
			player->Inventory[DstSlot].EF2 = 60;
			player->Inventory[DstSlot].EFV2 = 6;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 25;
		}
		else if(chance >= 15 && chance < 18)//dificil
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 30;
		}
		else if(chance >= 18 && chance < 23)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 30;
		}
		else if(chance >= 23 && chance < 28)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 25;
		}
		else if(chance >= 28 && chance < 33)
		{
			player->Inventory[DstSlot].EF2 = 74;
			player->Inventory[DstSlot].EFV2 = 18;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 25;
		}
		else if(chance >= 33 && chance < 38)
		{
			player->Inventory[DstSlot].EF2 = 60;
			player->Inventory[DstSlot].EFV2 = 8;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 25;
		}
		else if(chance >= 38 && chance < 41)//dificil
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 10;
		}
		else if(chance >= 41 && chance < 44)//dificil
		{
			player->Inventory[DstSlot].EF2 = 74;
			player->Inventory[DstSlot].EFV2 = 18;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 30;
		}
		else if(chance >= 44 && chance < 49)
		{
			player->Inventory[DstSlot].EF2 = 60;
			player->Inventory[DstSlot].EFV2 = 8;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 30;
		}
		else if(chance >= 49 && chance < 54)
		{
			player->Inventory[DstSlot].EF2 = 74;
			player->Inventory[DstSlot].EFV2 = 12;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 30;
		}
		else if(chance >= 54 && chance < 59)
		{
			player->Inventory[DstSlot].EF2 = 60;
			player->Inventory[DstSlot].EFV2 = 10;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 25;
		}
		else if(chance >= 59 && chance < 62)//dificl
		{
			player->Inventory[DstSlot].EF2 = 74;
			player->Inventory[DstSlot].EFV2 = 18;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 30;
		}
		else if(chance >= 62 && chance < 67)
		{
			player->Inventory[DstSlot].EF2 = 74;
			player->Inventory[DstSlot].EFV2 = 15;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 25;
		}
		else if(chance >= 67 && chance < 71)
		{
			player->Inventory[DstSlot].EF2 = 60;
			player->Inventory[DstSlot].EFV2 = 6;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 30;
		}
		else if(chance >= 71 && chance < 76)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 6;
		}
		else if(chance >= 76 && chance < 81)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 25;
		}
		else if(chance >= 81 && chance < 86)
		{
			player->Inventory[DstSlot].EF2 = 74;
			player->Inventory[DstSlot].EFV2 = 12;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 25;
		}
		else if(chance >= 86 && chance < 91)
		{
			player->Inventory[DstSlot].EF2 = 60;
			player->Inventory[DstSlot].EFV2 = 6;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 25;
		}
		else if(chance >= 91 && chance < 96)
		{
			player->Inventory[DstSlot].EF2 = 60;
			player->Inventory[DstSlot].EFV2 = 6;
			player->Inventory[DstSlot].EF3 = 3;
			player->Inventory[DstSlot].EFV3 = 30;
		}
		else if(chance > 96)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 2;
			player->Inventory[DstSlot].EFV3 = 25;
		}
	}
//Botas
	else if((player->Inventory[DstSlot].Index == 1224) || 
	(player->Inventory[DstSlot].Index == 3805) ||
	(player->Inventory[DstSlot].Index == 1364) ||
	(player->Inventory[DstSlot].Index == 3825) ||
	(player->Inventory[DstSlot].Index == 1514) ||
	(player->Inventory[DstSlot].Index == 3845) ||
	(player->Inventory[DstSlot].Index == 1664) ||
	(player->Inventory[DstSlot].Index == 3865))
	{
		if(chance < 5)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 8;
		}
		else if(chance >= 5 && chance < 10)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 8;
		}
		else if(chance >= 10 && chance < 15)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 74;
			player->Inventory[DstSlot].EFV3 = 15;
		}
		else if(chance >= 15 && chance < 18)//dificil
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance >= 18 && chance < 23)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 74;
			player->Inventory[DstSlot].EFV3 = 12;
		}
		else if(chance >= 23 && chance < 28)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance >= 28 && chance < 33)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 74;
			player->Inventory[DstSlot].EFV3 = 12;
		}
		else if(chance >= 33 && chance < 38)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 6;
		}
		else if(chance >= 38 && chance < 41)//dificil
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 10;
		}
		else if(chance >= 41 && chance < 44)//dificil
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 74;
			player->Inventory[DstSlot].EFV3 = 18;
		}
		else if(chance >= 44 && chance < 49)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 74;
			player->Inventory[DstSlot].EFV3 = 12;
		}
		else if(chance >= 49 && chance < 54)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 10;
		}
		else if(chance >= 54 && chance < 59)
		{
			player->Inventory[DstSlot].EF2 = 74;
			player->Inventory[DstSlot].EFV2 = 18;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance >= 59 && chance < 62)//dificl
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 74;
			player->Inventory[DstSlot].EFV3 = 18;
		}
		else if(chance >= 62 && chance < 67)
		{
			player->Inventory[DstSlot].EF2 = 74;
			player->Inventory[DstSlot].EFV2 = 15;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance >= 67 && chance < 71)
		{
			player->Inventory[DstSlot].EF2 = 60;
			player->Inventory[DstSlot].EFV2 = 10;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance >= 71 && chance < 76)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 30;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 6;
		}
		else if(chance >= 76 && chance < 81)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 6;
		}
		else if(chance >= 81 && chance < 86)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 74;
			player->Inventory[DstSlot].EFV3 = 12;
		}
		else if(chance >= 86 && chance < 91)
		{
			player->Inventory[DstSlot].EF2 = 2;
			player->Inventory[DstSlot].EFV2 = 24;
			player->Inventory[DstSlot].EF3 = 60;
			player->Inventory[DstSlot].EFV3 = 6;
		}
		else if(chance >= 91 && chance < 96)
		{
			player->Inventory[DstSlot].EF2 = 74;
			player->Inventory[DstSlot].EFV2 = 18;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
		else if(chance > 96)
		{
			player->Inventory[DstSlot].EF2 = 74;
			player->Inventory[DstSlot].EFV2 = 12;
			player->Inventory[DstSlot].EF3 = 0;
			player->Inventory[DstSlot].EFV3 = 0;
		}
	}
	else
	{
		SendClientMsg(clientid,"Uso inadequado.");
		Attinv(clientid);
		return;
	}
//Refinação
	if(player->Inventory[DstSlot].EFV1 < 4)
	{
		if(chance < 15)
		{
			player->Inventory[DstSlot].EF1 = 43;
			player->Inventory[DstSlot].EFV1 += 3;
		}
		else if(chance >= 15 && chance < 30)
		{
			player->Inventory[DstSlot].EF1 = 43;
			player->Inventory[DstSlot].EFV1 += 1;
		}
		else if(chance >= 30 && chance < 45)
		{
			player->Inventory[DstSlot].EF1 = 43;
			player->Inventory[DstSlot].EFV1 += 2;
		}
		else
		{
			player->Inventory[DstSlot].EF1 = 43;
			player->Inventory[DstSlot].EFV1 += 0;
		}
	}
	else if(player->Inventory[DstSlot].EFV1 < 5)
	{
		if(chance < 24)
		{
			player->Inventory[DstSlot].EF1 = 43;
			player->Inventory[DstSlot].EFV1 += 2;
		}
		else if(chance >= 23 && chance < 45)
		{
			player->Inventory[DstSlot].EF1 = 43;
			player->Inventory[DstSlot].EFV1 += 1;
		}
		else
		{
			player->Inventory[DstSlot].EF1 = 43;
			player->Inventory[DstSlot].EFV1 += 0;
		}
	}
	else if(player->Inventory[DstSlot].EFV1 < 6)
	{
		if(chance < 45)
		{
			player->Inventory[DstSlot].EF1 = 43;
			player->Inventory[DstSlot].EFV1 += 1;
		}
		else
		{
			player->Inventory[DstSlot].EF1 = 43;
			player->Inventory[DstSlot].EFV1 += 0;
		}
	}
	else
	{
		player->Inventory[DstSlot].EF1 = 43;
		player->Inventory[DstSlot].EFV1 = 6;
	}
	sprintf(msg,"Refinação sucedida.");
	SendClientMsg(clientid,msg);
	DeleteItem(clientid,SrcSlot);
	SendEffect(3, 0xE, clientid);
	return;
}
 
void Sylphed(int ClientID,st_Item *ItemSend,int SrcSlot)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
    int addr_bclient = ClientID * 0x0410;
    int cLevel = PInt(addr_bclient + 0x015C69DC);
    if (cLevel < 370)
    {
        SendClientMsg(ClientID, "Level inadequado.");
        return;
    }
 
    if(player->Equip[0].EFV2 != 2)
    {
        SendClientMsg(ClientID, "Apenas Arch.");
        return;
    }
	if(player->Equip[15].EF1 != 4 && player->Equip[15].EFV1 != 10 &&  player->Equip[15].EF2 != 3 && player->Equip[15].EFV2 != 10)
    {
        SendClientMsg(ClientID, "Você deve usar o Cristal Elime Antes.");
		
        return;
    }
 
    if (player->Gold < 100000000)
    {
        SendClientMsg(ClientID, "Gold insuficiente.");
    }
 
 
    else
    {
        if ((player->Equip[15].Index == 3194 || player->Equip[15].Index == 3195) && player->Equip[15].EF1 == 4 && player->Equip[15].EFV1 == 10 && player->Equip[15].EF2 == 3 && player->Equip[15].EFV2 == 10 &&player->Inventory[SrcSlot].Index == 4107 && (player->Gold >= 100000000))
        {
            int i ;
            for(i = 0;i < 64;i++)
            {
                
              if (player->Equip[15].Index == 3194 || player->Equip[15].Index == 3195 && player->Equip[15].EF1 == 4 && player->Equip[15].EFV1 == 10 && player->Equip[15].EF2 == 3 && player->Equip[15].EFV2 == 10)
                {
					Delete(ClientID,SrcSlot);
					//DeleteItem(ClientID,SrcSlot);
                    *(short*)((ClientID * 0x410) + 0x15C6A94 + (i * 8)) = 0;
                    SendInv2(ClientID,1,i,((ClientID * 0x410) + 0x15C6A94 + (i * 8)));
                    player->Equip[15].EF1 = 4;
					player->Equip[15].EFV1 = 20;
					player->Equip[15].EF2 = 3;
					player->Equip[15].EFV2 = 20;
					player->Equip[15].EF3 = 43;
					player->Equip[15].EFV3 += 9;
                    player->StatusPoint += 50;
                    player->Gold -= 100000000;
                    player->Exp -= 100000000;
                   // player->bStatus.Level -= 14;
                    SendScore(ClientID);
                    SendStats(ClientID);
					Atualizar(ClientID, _equip, 15);
                    SendEffect(3, 0xE, ClientID);
					
                    break;
        return;
        }
        }
 
        }
    }
}
 
 
void Thelion(int ClientID,st_Item *ItemSend,int SrcSlot)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
    int addr_bclient = ClientID * 0x0410;
    int cLevel = PInt(addr_bclient + 0x015C69DC);
    if (cLevel < 370)
    {
        SendClientMsg(ClientID, "Level inadequado.");
        return;
    }
 
    if(player->Equip[0].EFV2 != 2)
    {
        SendClientMsg(ClientID, "Apenas Arch.");
        return;
    }
	if(player->Equip[15].EF1 != 4 && player->Equip[15].EFV1 != 20 &&  player->Equip[15].EF2 != 3 && player->Equip[15].EFV2 != 20)
    {
        SendClientMsg(ClientID, "Você deve usar o Cristal Sylphed Ates.");
		
        return;
    }
 
    if (player->Gold < 100000000)
    {
        SendClientMsg(ClientID, "Gold insuficiente.");
    }
 
 
    else
    {
        if ((player->Equip[15].Index == 3194 || player->Equip[15].Index == 3195) && player->Equip[15].EF1 == 4 && player->Equip[15].EFV1 == 20 &&  player->Equip[15].EF2 == 3 && player->Equip[15].EFV2 == 20 && player->Inventory[SrcSlot].Index == 4108 && (player->Gold >= 100000000))
        {
            int i ;
            for(i = 0;i < 64;i++)
            {
                
             if  (player->Equip[15].Index == 3194 || player->Equip[15].Index == 3195 && player->Equip[15].EF1 == 4 && player->Equip[15].EFV1 == 20 &&  player->Equip[15].EF2 == 3 && player->Equip[15].EFV2 == 20)
                {
					Delete(ClientID,SrcSlot);
					//DeleteItem(ClientID,SrcSlot);
                    *(short*)((ClientID * 0x410) + 0x15C6A94 + (i * 8)) = 0;
                    SendInv2(ClientID,1,i,((ClientID * 0x410) + 0x15C6A94 + (i * 8)));
                    player->Equip[15].EF1 = 4;
					player->Equip[15].EFV1 = 30;
					player->Equip[15].EF2 = 3;
					player->Equip[15].EFV2 = 30;
					player->Equip[15].EF3 = 43;
					player->Equip[15].EFV3 += 9;
                    player->StatusPoint += 50;
                    player->Gold -= 100000000;
                    player->Exp -= 100000000;
                    //player->bStatus.Level -= 14;
                    SendScore(ClientID);
                    SendStats(ClientID);
					Atualizar(ClientID, _equip, 15);
                    SendEffect(3, 0xE, ClientID);
 					
                    break;
        return;
        }
        }
 
        }
    }
}
 
 
void Noas(int ClientID,st_Item *ItemSend,int SrcSlot)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
    int addr_bclient = ClientID * 0x0410;
    int cLevel = PInt(addr_bclient + 0x015C69DC);
    if (cLevel < 370)
    {
        SendClientMsg(ClientID, "Level inadequado.");
        return;
    }
 
    if(player->Equip[0].EFV2 != 2)
    {
        SendClientMsg(ClientID, "Apenas Arch.");
        return;
    }
	if(player->Equip[15].EF1 != 4 && player->Equip[15].EFV1 != 30 && player->Equip[15].EF2 != 3 && player->Equip[15].EFV2 != 30)
    {
        SendClientMsg(ClientID, "Você deve usar o Cristal Thelion Ates.");
		
        return;
    }
 
    if (player->Gold < 100000000)
    {
        SendClientMsg(ClientID, "Gold insuficiente.");
    }
 
 
    else
    {
        if ((player->Equip[15].Index == 3194 || player->Equip[15].Index == 3195) && player->Equip[15].EF1 == 4 && player->Equip[15].EFV1 == 30 && player->Equip[15].EF2 == 3 && player->Equip[15].EFV2 == 30 && player->Inventory[SrcSlot].Index == 4109 && (player->Gold >= 100000000))
        {
            int i ;
            for(i = 0;i < 64;i++)
            {
                
              if (player->Equip[15].Index == 3194 || player->Equip[15].Index == 3195 && player->Equip[15].EF1 == 4 && player->Equip[15].EFV1 == 30 && player->Equip[15].EF2 == 3 && player->Equip[15].EFV2 == 30)
                {
					Delete(ClientID,SrcSlot);
					//DeleteItem(ClientID,SrcSlot);
                    *(short*)((ClientID * 0x410) + 0x15C6A94 + (i * 8)) = 0;
                    SendInv2(ClientID,1,i,((ClientID * 0x410) + 0x15C6A94 + (i * 8)));
                    player->Equip[15].EF1 = 4;
					player->Equip[15].EFV1 = 50;
					player->Equip[15].EF2 = 3;
					player->Equip[15].EFV2 = 50;
					player->Equip[15].EF3 = 43;
					player->Equip[15].EFV3 += 9;
                    player->StatusPoint += 50;
                    player->Gold -= 100000000;
                    player->Exp -= 100000000;
                    //player->bStatus.Level -= 14;
                    SendScore(ClientID);
                    SendStats(ClientID);
					Atualizar(ClientID, _equip, 15);
                    SendEffect(3, 0xE, ClientID);
 					
                    break;
        return;
        }
        }
 
        }
    }
}
void Amount(int ClientID,st_Item *ItemSend)
{
	if(ItemSend->EF1 == 61)
	{
		if(ItemSend->EFV1 >= 2)
		{
		ItemSend->EFV1 -= 1;
		return;
		}
		else
		ItemSend->Index = 0;
	}
	if(ItemSend->EF2 == 61)
	{
		if(ItemSend->EFV2 >= 2)
		{
		ItemSend->EFV2 -= 1;
		return;
		}
		else
		ItemSend->Index = 0;
	}
	if(ItemSend->EF3 == 61)
	{
		if(ItemSend->EFV3 >= 2)
		{
		ItemSend->EFV3 -= 1;
		return;
		}
		else
		ItemSend->Index = 0;
	}
	else
		ItemSend->Index = 0;
}
void ClasseA(int ClientID,st_Item *ItemSend,st_Item *Inventory)
{

	if(Inventory->EFV1 > 9)
	{
		SendClientMsg(ClientID,"Apenas em itens com refinação inferior à +9.");
		return;
	}
	if(Inventory->Index >= 1101 && Inventory->Index <= 1220)
	{
		goto ADD;
	}
	if(Inventory->Index >= 1251 && Inventory->Index <= 1355)
	{
		goto ADD;
	}
	if(Inventory->Index >= 1401 && Inventory->Index <= 1505)
	{
		goto ADD;
	}
	if(Inventory->Index >= 1551 && Inventory->Index <= 1655)
	{
		goto ADD;
	}
	if(Inventory->Index >= 2186 && Inventory->Index <= 2190)
	{
		goto ADD;
	}
	if(Inventory->Index >= 2206 && Inventory->Index <= 2210)
	{
		goto ADD;
	}
	if(Inventory->Index >= 2226 && Inventory->Index <= 2230)
	{
		goto ADD;
	}
	if(Inventory->Index >= 2246 && Inventory->Index <= 2250)
	{
		goto ADD;
	}
	return;
	
ADD:
	srand((int)time(NULL));
	int random = 0;
	int random1 = rand() % 16, random2 = rand() % 16, random3 = rand() % 16;
	random = random1;
	if(random == 1 || random == 0)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 2;
		Inventory->EFV2 = 12;
		Inventory->EF3 = 42;
		Inventory->EFV3 = 50;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 2)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 2;
		Inventory->EFV2 = 18;
		Inventory->EF3 = 42;
		Inventory->EFV3 = 50;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 3)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 2;
		Inventory->EFV2 = 12;
		Inventory->EF3 = 3;
		Inventory->EFV3 = 20;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 4)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 2;
		Inventory->EFV2 = 12;
		Inventory->EF3 = 3;
		Inventory->EFV3 = 30;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 5)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 2;
		Inventory->EFV2 = 18;
		Inventory->EF3 = 3;
		Inventory->EFV3 = 20;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 6)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 2;
		Inventory->EFV2 = 18;
		Inventory->EF3 = 3;
		Inventory->EFV3 = 30;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 7)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 2;
		Inventory->EFV2 = 30;
		Inventory->EF3 = 3;
		Inventory->EFV3 = 30;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 8)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 2;
		Inventory->EFV2 = 30;
		Inventory->EF3 = 42;
		Inventory->EFV3 = 7;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 9)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 2;
		Inventory->EFV2 = 30;
		Inventory->EF3 = 3;
		Inventory->EFV3 = 20;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 10)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 2;
		Inventory->EFV2 = 30;
		Inventory->EF3 = 42;
		Inventory->EFV3 = 50;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 11)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 60;
		Inventory->EFV2 = 6;
		Inventory->EF3 = 3;
		Inventory->EFV3 = 20;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 12)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 60;
		Inventory->EFV2 = 8;
		Inventory->EF3 = 3;
		Inventory->EFV3 = 20;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 13)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 60;
		Inventory->EFV2 = 10;
		Inventory->EF3 = 3;
		Inventory->EFV3 = 20;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 14)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 60;
		Inventory->EFV2 = 10;
		Inventory->EF3 = 3;
		Inventory->EFV3 = 30;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random == 15)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 60;
		Inventory->EFV2 = 8;
		Inventory->EF3 = 3;
		Inventory->EFV3 = 30;
		Amount(ClientID,ItemSend);
		return;
	}
	else if(random >= 16)
	{
		Inventory->EF1 = 0;
		Inventory->EFV1 = 0;
		Inventory->EF2 = 3;
		Inventory->EFV2 = 30;
		Inventory->EF3 = 74;
		Inventory->EFV3 = 15;
		Amount(ClientID,ItemSend);
		return;
	}

}
void mi100(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Gold >= 1900000001)
	{
		SendClientMsg(ClientID,"Não é possível carregar mais que 2 bilhões de gold.");
		return;
	}
	player->Gold += 100000000;
	Amount(ClientID,ItemSend);
}
void bi1(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Gold >= 1000000001)
	{
		SendClientMsg(ClientID,"Não é possível carregar mais que 2 bilhões de gold.");
		return;
	}
	player->Gold += 1000000000;
	Amount(ClientID,ItemSend);
}
void mi1(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Gold >= 1999000001)
	{
		SendClientMsg(ClientID,"Não é possível carregar mais que 2 bilhões de gold.");
		return;
	}
	player->Gold += 1000000;
	Amount(ClientID,ItemSend);
}
void mi5(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Gold >= 1995000001)
	{
		SendClientMsg(ClientID,"Não é possível carregar mais que 2 bilhões de gold.");
		return;
	}
	player->Gold += 5000000;
	Amount(ClientID,ItemSend);
}
void mi10(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Gold >= 1990000001)
	{
		SendClientMsg(ClientID,"Não é possível carregar mais que 2 bilhões de gold.");
		return;
	}
	player->Gold += 10000000;
	Amount(ClientID,ItemSend);
}
void mi50(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Gold >= 1950000001)
	{
		SendClientMsg(ClientID,"Não é possível carregar mais que 2 bilhões de gold.");
		return;
	}
	player->Gold += 50000000;
	Amount(ClientID,ItemSend);
}

void PacoteMagoMais11(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int item = GetFirstSlotSADD(ClientID, 5409, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[item].Index = 0; 
 player->Inventory[free1].Index = 3022; 
 player->Inventory[free1].EF1 = 3; 
 player->Inventory[free1].EFV1 = 30; 
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 237;
 player->Inventory[free1].EF3= 60; 
 player->Inventory[free1].EFV3 = 28; 
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index =3023; 
 player->Inventory[free2].EF1 = 3; 
 player->Inventory[free2].EFV1 = 30; 
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 237; 
 player->Inventory[free2].EF3= 60; 
 player->Inventory[free2].EFV3 = 28;
// SendInv(ClientID,free2); 
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3024; 
 player->Inventory[free3].EF1 = 3; 
 player->Inventory[free3].EFV1 = 30; 
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 237;
 player->Inventory[free3].EF3= 60; 
 player->Inventory[free3].EFV3 = 28;
 //SendInv(ClientID,free3);
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3025; 
 player->Inventory[free4].EF1 = 3; 
 player->Inventory[free4].EFV1 = 30; 
 player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 237;
 player->Inventory[free4].EF3= 60; 
 player->Inventory[free4].EFV3 = 28;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3026; 
 player->Inventory[free5].EF1 = 60; 
 player->Inventory[free5].EFV1 = 32;
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 237;
 //SendInv(ClientID,free5); 
 SendALL(ClientID);
 } 
 }
}
void PacoteMagoMais12(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int item = GetFirstSlotSADD(ClientID, 5410, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[item].Index = 0;
 player->Inventory[free1].Index = 3022; 
 player->Inventory[free1].EF1 = 3; 
 player->Inventory[free1].EFV1 = 30; 
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 241;
 player->Inventory[free1].EF3= 60; 
 player->Inventory[free1].EFV3 = 28; 
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index =3023; 
 player->Inventory[free2].EF1 = 3; 
 player->Inventory[free2].EFV1 = 30; 
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 241; 
 player->Inventory[free2].EF3= 60; 
 player->Inventory[free2].EFV3 = 28;
// SendInv(ClientID,free2);
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3024; 
 player->Inventory[free3].EF1 = 3; 
 player->Inventory[free3].EFV1 = 30; 
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 241;
 player->Inventory[free3].EF3= 60; 
 player->Inventory[free3].EFV3 = 28;
 //SendInv(ClientID,free3);
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3025; 
 player->Inventory[free4].EF1 = 3; 
 player->Inventory[free4].EFV1 = 30; 
 player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 241;
 player->Inventory[free4].EF3= 60; 
 player->Inventory[free4].EFV3 = 28;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3026; 
 player->Inventory[free5].EF1 = 60; 
 player->Inventory[free5].EFV1 = 32;
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 241;
// SendInv(ClientID,free5); 
 SendALL(ClientID);
 } 
 }
}
void PacoteMagoMais13(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int item = GetFirstSlotSADD(ClientID, 5410, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[item].Index = 0;
 player->Inventory[free1].Index = 3022; 
 player->Inventory[free1].EF1 = 3; 
 player->Inventory[free1].EFV1 = 30; 
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 245;
 player->Inventory[free1].EF3= 60; 
 player->Inventory[free1].EFV3 = 28; 
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index =3023; 
 player->Inventory[free2].EF1 = 3; 
 player->Inventory[free2].EFV1 = 30; 
  player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 245; 
 player->Inventory[free2].EF3= 60; 
 player->Inventory[free2].EFV3 = 28;
 //SendInv(ClientID,free2);
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3024; 
 player->Inventory[free3].EF1 = 3; 
 player->Inventory[free3].EFV1 = 30; 
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 245;
 player->Inventory[free3].EF3= 60; 
 player->Inventory[free3].EFV3 = 28;
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3025; 
 player->Inventory[free4].EF1 = 3; 
 player->Inventory[free4].EFV1 = 30; 
 player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 245;
 player->Inventory[free4].EF3= 60; 
 player->Inventory[free4].EFV3 = 28;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3026; 
 player->Inventory[free5].EF1 = 60; 
 player->Inventory[free5].EFV1 = 32;
 player->Inventory[free5].EF3= 43; 
 player->Inventory[free5].EFV3 = 245;
 //SendInv(ClientID,free5); 
 SendALL(ClientID);
 } 
 }
}
void PacoteMagoMais15(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int item = GetFirstSlotSADD(ClientID, 5410, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
  player->Inventory[item].Index = 0;
 player->Inventory[free1].Index = 3022; 
 player->Inventory[free1].EF1 = 3; 
 player->Inventory[free1].EFV1 = 30; 
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 253;
 player->Inventory[free1].EF3= 60; 
 player->Inventory[free1].EFV3 = 28; 
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index =3023; 
 player->Inventory[free2].EF1 = 3; 
 player->Inventory[free2].EFV1 = 30; 
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 253; 
 player->Inventory[free2].EF3= 60; 
 player->Inventory[free2].EFV3 = 28;
 //SendInv(ClientID,free2);
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3024; 
 player->Inventory[free3].EF1 = 3; 
 player->Inventory[free3].EFV1 = 30; 
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 253;
 player->Inventory[free3].EF3= 60; 
 player->Inventory[free3].EFV3 = 28;
// SendInv(ClientID,free3);
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3025; 
 player->Inventory[free4].EF1 = 3; 
 player->Inventory[free4].EFV1 = 30; 
  player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 253;
 player->Inventory[free4].EF3= 60; 
 player->Inventory[free4].EFV3 = 28;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3026; 
 player->Inventory[free5].EF1 = 60; 
 player->Inventory[free5].EFV1 = 32;
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 253;
// SendInv(ClientID,free5); 
 SendALL(ClientID);
 } 
 }
}
void PacoteMagoMais14(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int item = GetFirstSlotSADD(ClientID, 5410, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
  player->Inventory[item].Index = 0;
 player->Inventory[free1].Index = 3022; 
 player->Inventory[free1].EF1 = 3; 
 player->Inventory[free1].EFV1 = 30; 
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 249;
 player->Inventory[free1].EF3= 60; 
 player->Inventory[free1].EFV3 = 28; 
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index =3023; 
 player->Inventory[free2].EF1 = 3; 
 player->Inventory[free2].EFV1 = 30; 
  player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 249; 
 player->Inventory[free2].EF3= 60; 
 player->Inventory[free2].EFV3 = 28;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3024; 
 player->Inventory[free3].EF1 = 3; 
 player->Inventory[free3].EFV1 = 30; 
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 249;
 player->Inventory[free3].EF3= 60; 
 player->Inventory[free3].EFV3 = 28;
 //SendInv(ClientID,free3);
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3025; 
 player->Inventory[free4].EF1 = 3; 
 player->Inventory[free4].EFV1 = 30; 
  player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 249;
 player->Inventory[free4].EF3= 60; 
 player->Inventory[free4].EFV3 = 28;
// SendInv(ClientID,free4); 
 SendALL(ClientID);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3026; 
 player->Inventory[free5].EF1 = 60; 
 player->Inventory[free5].EFV1 = 32;
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 249;
 //SendInv(ClientID,free5); 
 SendALL(ClientID);
 } 
 }
}
void PacoteDanoMais11(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int item = GetFirstSlotSADD(ClientID, 5415, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
  player->Inventory[item].Index = 0;
 player->Inventory[free1].Index = 3022; 
 player->Inventory[free1].EF1 = 2; 
 player->Inventory[free1].EFV1 = 35; 
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 237;
 player->Inventory[free1].EF3= 71; 
 player->Inventory[free1].EFV3 = 70; 
// SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index =3023; 
 player->Inventory[free2].EF1 = 2; 
 player->Inventory[free2].EFV1 = 35; 
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 237; 
 player->Inventory[free2].EF3= 71; 
 player->Inventory[free2].EFV3 = 70;
// SendInv(ClientID,free2); 
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3024; 
 player->Inventory[free3].EF1 = 2; 
 player->Inventory[free3].EFV1 = 35; 
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 237;
 player->Inventory[free3].EF3= 3; 
 player->Inventory[free3].EFV3 = 35;
 //SendInv(ClientID,free3);
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3025; 
 player->Inventory[free4].EF1 = 2; 
 player->Inventory[free4].EFV1 = 35; 
 player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 237;
 player->Inventory[free4].EF3= 3; 
 player->Inventory[free4].EFV3 = 35;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3026; 
 player->Inventory[free5].EF1 = 2; 
 player->Inventory[free5].EFV1 = 50;
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 237;
 //SendInv(ClientID,free5); 
 SendALL(ClientID);
 } 
 }
}
void PacoteDanoMais12(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int item = GetFirstSlotSADD(ClientID, 5417, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
  player->Inventory[item].Index = 0;
 player->Inventory[free1].Index = 3022; 
 player->Inventory[free1].EF1 = 2; 
 player->Inventory[free1].EFV1 = 35; 
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 241;
 player->Inventory[free1].EF3= 3; 
 player->Inventory[free1].EFV3 = 35; 
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index =3023; 
 player->Inventory[free2].EF1 = 2; 
 player->Inventory[free2].EFV1 = 35; 
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 241; 
 player->Inventory[free2].EF3= 3; 
 player->Inventory[free2].EFV3 = 35;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3024; 
 player->Inventory[free3].EF1 = 2; 
 player->Inventory[free3].EFV1 = 35; 
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 241;
 player->Inventory[free3].EF3= 3; 
 player->Inventory[free3].EFV3 = 35;
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3025; 
 player->Inventory[free4].EF1 = 2; 
 player->Inventory[free4].EFV1 = 35; 
 player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 241;
 player->Inventory[free4].EF3= 74; 
 player->Inventory[free4].EFV3 = 28;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3026; 
 player->Inventory[free5].EF1 = 2; 
 player->Inventory[free5].EFV1 = 50;
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 241;
 //SendInv(ClientID,free5); 
 SendALL(ClientID);
 } 
 }
}
void PacoteDanoMais13(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int item = GetFirstSlotSADD(ClientID, 5418, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
  player->Inventory[item].Index = 0;
 player->Inventory[free1].Index = 3022; 
 player->Inventory[free1].EF1 = 2; 
 player->Inventory[free1].EFV1 = 35; 
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 245;
 player->Inventory[free1].EF3= 71; 
 player->Inventory[free1].EFV3 = 70; 
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index =3023; 
 player->Inventory[free2].EF1 = 2; 
 player->Inventory[free2].EFV1 = 35; 
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 245; 
 player->Inventory[free2].EF3= 71; 
 player->Inventory[free2].EFV3 = 70;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3024; 
 player->Inventory[free3].EF1 = 2; 
 player->Inventory[free3].EFV1 = 35; 
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 245;
 player->Inventory[free3].EF3= 3; 
 player->Inventory[free3].EFV3 = 35;
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3025; 
 player->Inventory[free4].EF1 = 2; 
 player->Inventory[free4].EFV1 = 35; 
 player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 245;
 player->Inventory[free4].EF3= 74; 
 player->Inventory[free4].EFV3 = 28;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3026; 
 player->Inventory[free5].EF1 = 2; 
 player->Inventory[free5].EFV1 = 50;
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 245;
 //SendInv(ClientID,free5); 
 SendALL(ClientID);
 } 
 }
}
void PacoteDanoMais15(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int item = GetFirstSlotSADD(ClientID, 5421, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
  player->Inventory[item].Index = 0;
 player->Inventory[free1].Index = 3022; 
 player->Inventory[free1].EF1 = 2; 
 player->Inventory[free1].EFV1 = 35; 
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 253;
 player->Inventory[free1].EF3= 71; 
 player->Inventory[free1].EFV3 = 70; 
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index =3023; 
 player->Inventory[free2].EF1 = 2; 
 player->Inventory[free2].EFV1 = 35; 
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 253; 
 player->Inventory[free2].EF3= 71; 
 player->Inventory[free2].EFV3 = 70;
// SendInv(ClientID,free2); 
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3024; 
 player->Inventory[free3].EF1 = 2; 
 player->Inventory[free3].EFV1 = 35; 
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 253;
 player->Inventory[free3].EF3= 3; 
 player->Inventory[free3].EFV3 = 35;
 //SendInv(ClientID,free3);
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3025; 
 player->Inventory[free4].EF1 = 2; 
 player->Inventory[free4].EFV1 = 35; 
 player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 253;
 player->Inventory[free4].EF3= 74; 
 player->Inventory[free4].EFV3 = 28;
 //SendInv(ClientID,free4);
 SendALL(ClientID);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3026; 
 player->Inventory[free5].EF1 = 2; 
 player->Inventory[free5].EFV1 = 50;
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 253;
 //SendInv(ClientID,free5); 
 SendALL(ClientID);
 } 
 }
}
void PacoteDanoMais14(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int item = GetFirstSlotSADD(ClientID, 5419, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
  player->Inventory[item].Index = 0;
 player->Inventory[free1].Index = 3022; 
 player->Inventory[free1].EF1 = 2; 
 player->Inventory[free1].EFV1 = 35; 
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 249;
 player->Inventory[free1].EF3= 71; 
 player->Inventory[free1].EFV3 = 70; 
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index =3023; 
 player->Inventory[free2].EF1 = 2; 
 player->Inventory[free2].EFV1 = 35; 
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 249; 
 player->Inventory[free2].EF3= 71; 
 player->Inventory[free2].EFV3 = 70;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3024; 
 player->Inventory[free3].EF1 = 2; 
 player->Inventory[free3].EFV1 = 35; 
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 249;
 player->Inventory[free3].EF3= 3; 
 player->Inventory[free3].EFV3 = 35;
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3025; 
 player->Inventory[free4].EF1 = 2; 
 player->Inventory[free4].EFV1 = 35; 
 player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 249;
 player->Inventory[free4].EF3= 74; 
 player->Inventory[free4].EFV3 = 28;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3026; 
 player->Inventory[free5].EF1 = 2; 
 player->Inventory[free5].EFV1 = 50;
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 249;
 //SendInv(ClientID,free5); 
 SendALL(ClientID);
 } 
 }
}

void Pacote_TK(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5422, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 5334; // Secreta Agua
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 0;
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 5335; // Secreta Terra
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 5336;  // Secreta Sol
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 5337; // Secreta Vento
 player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 0;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 1742;  // imortalidade
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 0;
 player->Inventory[free5].EF1= 0; 
 player->Inventory[free5].EFV1 = 0;
 player->Inventory[free5].EF3= 43; 
 player->Inventory[free5].EFV3 = 0;
// SendInv(ClientID,free5); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free6 = GetFirstSlotSADD(ClientID,0,64); 
 if(free6 != -1) 
 { 
 player->Inventory[free6].Index = 1760; // Sephirot TK
 player->Inventory[free6].EF2= 43; 
 player->Inventory[free6].EFV2 = 0;
 player->Inventory[free6].EF1= 0; 
 player->Inventory[free6].EFV1 = 0;
 player->Inventory[free6].EF3= 43; 
 player->Inventory[free6].EFV3 = 0;
 //SendInv(ClientID,free6); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 }
 }
}


void Pacote_FM(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5423, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
  player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 5334; // Secreta Agua
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 0;
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
// Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 5335; // Secreta Terra
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
//Amount(ClientID,ItemSend);
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 5336;  // Secreta Sol
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
//Amount(ClientID,ItemSend);
// SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 5337; // Secreta Vento
 player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 0;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 1742;  // imortalidade
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 0;
 player->Inventory[free5].EF1= 0; 
 player->Inventory[free5].EFV1 = 0;
 player->Inventory[free5].EF3= 43; 
 player->Inventory[free5].EFV3 = 0;
 //SendInv(ClientID,free5); 
 SendALL(ClientID);
// Amount(ClientID,ItemSend);
 } 
  int free6 = GetFirstSlotSADD(ClientID,0,64); 
 if(free6 != -1) 
 { 
 player->Inventory[free6].Index = 1761; // Sephirot FM
 player->Inventory[free6].EF2= 43; 
 player->Inventory[free6].EFV2 = 0;
 player->Inventory[free6].EF1= 0; 
 player->Inventory[free6].EFV1 = 0;
 player->Inventory[free6].EF3= 43; 
 player->Inventory[free6].EFV3 = 0;
 //SendInv(ClientID,free6);
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 }
 }
}


void Pacote_BM(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5425, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 5334; // Secreta Agua
 player->Inventory[free1].EF2= 43; 
 player->Inventory[free1].EFV2 = 0;
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 ///Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 5335; // Secreta Terra
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
//Amount(ClientID,ItemSend);
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 5336;  // Secreta Sol
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
//Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 5337; // Secreta Vento
 player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 0;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 1742;  // imortalidade
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 0;
 player->Inventory[free5].EF1= 0; 
 player->Inventory[free5].EFV1 = 0;
 player->Inventory[free5].EF3= 43; 
 player->Inventory[free5].EFV3 = 0;
 //SendInv(ClientID,free5); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
  int free6 = GetFirstSlotSADD(ClientID,0,64); 
 if(free6 != -1) 
 { 
 player->Inventory[free6].Index = 1762; // Sephirot BM
 player->Inventory[free6].EF2= 43; 
 player->Inventory[free6].EFV2 = 0;
 player->Inventory[free6].EF1= 0; 
 player->Inventory[free6].EFV1 = 0;
 player->Inventory[free6].EF3= 43; 
 player->Inventory[free6].EFV3 = 0;
 //SendInv(ClientID,free6); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 }
}
}
 
 
void Pacote_HT(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5426, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
  player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 5334; // Secreta Agua
 SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 5335; // Secreta Terra
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
//Amount(ClientID,ItemSend);
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 5336;  // Secreta Sol
 player->Inventory[free3].EF2= 43; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
//Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 5337; // Secreta Vento
  player->Inventory[free4].EF2= 43; 
 player->Inventory[free4].EFV2 = 0;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 1742;  // imortalidade
 player->Inventory[free5].EF2= 43; 
 player->Inventory[free5].EFV2 = 0;
 player->Inventory[free5].EF1= 0; 
 player->Inventory[free5].EFV1 = 0;
 player->Inventory[free5].EF3= 43; 
 player->Inventory[free5].EFV3 = 0;
 //SendInv(ClientID,free5);
 SendALL(ClientID);
//Amount(ClientID,ItemSend); 
 } 
  int free6 = GetFirstSlotSADD(ClientID,0,64); 
 if(free6 != -1) 
 { 
 player->Inventory[free6].Index = 1763; // Sephirot HT
 player->Inventory[free6].EF2= 43; 
 player->Inventory[free6].EFV2 = 0;
 player->Inventory[free6].EF1= 0; 
 player->Inventory[free6].EFV1 = 0;
 player->Inventory[free6].EF3= 43; 
 player->Inventory[free6].EFV3 = 0;
 SendInv(ClientID,free6); 
 SendALL(ClientID);
// Amount(ClientID,ItemSend);
 }
 }
 }
void Kit_DOH_1(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5427, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 3182; // Pergaminho Agua A
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 20;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2321; // Ovo de Unicornio
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 4140;  // Bau de Experiencia
 player->Inventory[free3].EF2= 61; 
 player->Inventory[free3].EFV2 = 5;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3326; // Pesadelo Arcano
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 5;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3314;  // imortalidade
 player->Inventory[free5].EF2= 61; 
 player->Inventory[free5].EFV2 = 10;
 player->Inventory[free5].EF1= 0; 
 player->Inventory[free5].EFV1 = 0;
 player->Inventory[free5].EF3= 43; 
 player->Inventory[free5].EFV3 = 0;
// SendInv(ClientID,free5); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free6 = GetFirstSlotSADD(ClientID,0,64); 
 if(free6 != -1) 
 { 
 player->Inventory[free6].Index = 2411; // Âmago_de_Unicórnio
 player->Inventory[free6].EF2= 61; 
 player->Inventory[free6].EFV2 = 15;
 player->Inventory[free6].EF1= 0; 
 player->Inventory[free6].EFV1 = 0;
 player->Inventory[free6].EF3= 43; 
 player->Inventory[free6].EFV3 = 0;
 //SendInv(ClientID,free6); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 }
 }
}

void Kit_DOH_2(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5428, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 777; // Pergaminho Agua M
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 5;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2322; // Ovo de Pegasus
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 4140;  // Bau de Experiencia
 player->Inventory[free3].EF2= 61; 
 player->Inventory[free3].EFV2 = 5;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3326; // Pesadelo Arcano
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 10;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3314;  // Frango
 player->Inventory[free5].EF2= 61; 
 player->Inventory[free5].EFV2 = 5;
 player->Inventory[free5].EF1= 0; 
 player->Inventory[free5].EFV1 = 0;
 player->Inventory[free5].EF3= 43; 
 player->Inventory[free5].EFV3 = 0;
// SendInv(ClientID,free5); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free6 = GetFirstSlotSADD(ClientID,0,64); 
 if(free6 != -1) 
 { 
 player->Inventory[free6].Index = 2412; // Âmago_de_Pegasus
 player->Inventory[free6].EF2= 61; 
 player->Inventory[free6].EFV2 = 15;
 player->Inventory[free6].EF1= 0; 
 player->Inventory[free6].EFV1 = 0;
 player->Inventory[free6].EF3= 43; 
 player->Inventory[free6].EFV3 = 0;
 //SendInv(ClientID,free6); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 }
 }
}

void Kit_DOH_3(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5429, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 3182; // Pergaminho Agua A
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 10;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2323; // Ovo de Unisus
 player->Inventory[free2].EF2= 43; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 4140;  // Bau de Experiencia
 player->Inventory[free3].EF2= 61; 
 player->Inventory[free3].EFV2 = 10;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 3326; // Pesadelo Arcano
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 10;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 3314;  // Frango
 player->Inventory[free5].EF2= 61; 
 player->Inventory[free5].EFV2 = 10;
 player->Inventory[free5].EF1= 0; 
 player->Inventory[free5].EFV1 = 0;
 player->Inventory[free5].EF3= 43; 
 player->Inventory[free5].EFV3 = 0;
// SendInv(ClientID,free5); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free6 = GetFirstSlotSADD(ClientID,0,64); 
 if(free6 != -1) 
 { 
 player->Inventory[free6].Index = 2413; // Âmago_de_Unisus
 player->Inventory[free6].EF2= 61; 
 player->Inventory[free6].EFV2 = 15;
 player->Inventory[free6].EF1= 0; 
 player->Inventory[free6].EFV1 = 0;
 player->Inventory[free6].EF3= 43; 
 player->Inventory[free6].EFV3 = 0;
 //SendInv(ClientID,free6); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 }
 }
}
void Kit_DOH_4(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5429, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 5338; // Pedra Ideal
 player->Inventory[free1].EF2= 0;      // Quantidade
 player->Inventory[free1].EFV2 = 0;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 5334; // Secreta
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 5335;  // Secreta
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 5336; // Secreta
 player->Inventory[free4].EF2= 0; 
 player->Inventory[free4].EFV2 = 0;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free5 = GetFirstSlotSADD(ClientID,0,64); 
 if(free5 != -1) 
 { 
 player->Inventory[free5].Index = 5337;  // Secreta
 player->Inventory[free5].EF2= 0; 
 player->Inventory[free5].EFV2 = 0;
 player->Inventory[free5].EF1= 0; 
 player->Inventory[free5].EFV1 = 0;
 player->Inventory[free5].EF3= 43; 
 player->Inventory[free5].EFV3 = 0;
// SendInv(ClientID,free5); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void Kit_DOH_5(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5431, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 2400; // amago Anda Luz N
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 120;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2310; // Ovo de Andaluz N
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3346;  // Catalisador_de_Mencar
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 2426; // Ração de Cavalo
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 120;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void Kit_DOH_6(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5432, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 2405; // amago Anda Luz B
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 120;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2315; // Ovo de Andaluz B
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3346;  // Catalisador_de_Mencar
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 2426; // Ração de Cavalo
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 120;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void Kit_DOH_7(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5433, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 2406; // amago Fenrir
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 120;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2316; // Ovo de Fenrir
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3347;  // Catalisador_de_Birago
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 2436; // Ração de Fenrir
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 120;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void Kit_DOH_8(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5434, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 2407; // amago Dragão
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 120;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2317; // Ovo de Dragão
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3347;  // Catalisador_de_Birago
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 2437; // Ração de Dragão
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 120;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void Kit_DOH_9(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5435, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 2409; // amago Tigre de fogo
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 120;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2319; // Ovo de Tigre de Fogo
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3350;  // Catalisador_de_Alperath
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 2427; // Ração de Tigre de Fogo
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 120;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void Kit_DOH_10(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5436, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 2409; // amago Dragão vermelho
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 120;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2320; // Ovo de Dragão Vermelho
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3350;  // Catalisador_de_Alperath
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 2428; // Ração de Dragão Vermelho
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 120;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void Kit_DOH_11(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5437, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 2411; // amago de Unicornio
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 120;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2321; // Ovo de Unicornio
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3348;  // Catalisador_de_Yus
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 2429; // Ração de Unicornio
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 120;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void Kit_DOH_12(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5438, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 2412; // amago de Pegasus
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 120;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2322; // Ovo de Pegasus
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3348;  // Catalisador_de_Yus
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 2429; // Ração de Unicornio
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 120;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void Kit_DOH_13(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5439, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 2413; // amago de Unisus
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 120;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2323; // Ovo de Unisus
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3348;  // Catalisador_de_Yus
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 2429; // Ração de Unisus
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 120;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void Kit_DOH_14(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5440, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 2414; // amago de Grifo
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 120;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2324; // Ovo de Grifo
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3349;  // Catalisador_de_Makav
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 2430; // Ração de Grifo
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 120;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void Kit_DOH_15(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5441, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 2415; // amago de HipoGrifo
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 120;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2325; // Ovo de HipoGrifo
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3349;  // Catalisador_de_Makav
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 2430; // Ração de Grifo
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 120;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void Kit_DOH_16(int ClientID,st_Item *ItemSend)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	int free = GetFirstSlotSADD(ClientID, 5442, 64);

	
		{ 
int free1 = GetFirstSlotSADD(ClientID,0,64);
 if(free1 != -1) 
 { 
 player->Inventory[free].Index = 0;
 player->Inventory[free1].Index = 2416; // amago de GrifoSangrento
 player->Inventory[free1].EF2= 61;      // Quantidade
 player->Inventory[free1].EFV2 = 120;    // Quantos Vem no pacote
 player->Inventory[free1].EF1= 0; 
 player->Inventory[free1].EFV1 = 0;
 player->Inventory[free1].EF3= 43; 
 player->Inventory[free1].EFV3 = 0;
 //SendInv(ClientID,free1); 
 Amount(ClientID,ItemSend);
 SendALL(ClientID);
 } 
 int free2 = GetFirstSlotSADD(ClientID,0,64);
 if(free2 != -1) 
 { 
 player->Inventory[free2].Index = 2326; // Ovo de GrifoSangrento
 player->Inventory[free2].EF2= 0; 
 player->Inventory[free2].EFV2 = 0;
 player->Inventory[free2].EF1= 0; 
 player->Inventory[free2].EFV1 = 0;
 player->Inventory[free2].EF3= 43; 
 player->Inventory[free2].EFV3 = 0;
 //SendInv(ClientID,free2); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 int free3 = GetFirstSlotSADD(ClientID,0,64); 
 if(free3 != -1) 
 { 
 player->Inventory[free3].Index = 3349;  // Catalisador_de_Makav
 player->Inventory[free3].EF2= 0; 
 player->Inventory[free3].EFV2 = 0;
 player->Inventory[free3].EF1= 0; 
 player->Inventory[free3].EFV1 = 0;
 player->Inventory[free3].EF3= 43; 
 player->Inventory[free3].EFV3 = 0;
 Amount(ClientID,ItemSend);
 //SendInv(ClientID,free3); 
 SendALL(ClientID);
 } 
 int free4 = GetFirstSlotSADD(ClientID,0,64); 
 if(free4 != -1) 
 { 
 player->Inventory[free4].Index = 2430; // Ração de Grifo
 player->Inventory[free4].EF2= 61; 
 player->Inventory[free4].EFV2 = 120;
 player->Inventory[free4].EF1= 0; 
 player->Inventory[free4].EFV1 = 0;
 player->Inventory[free4].EF3= 43; 
 player->Inventory[free4].EFV3 = 0;
 //SendInv(ClientID,free4); 
 SendALL(ClientID);
 //Amount(ClientID,ItemSend);
 } 
 }
}
void PacLac(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itenslot1 = GetFirstSlotSADD(ClientID,0,64);
	int lac = 413, paclac = 3448;
	if(ItemSend->EFV1 == 1)
	{
		ItemSend->Index = lac;
		ItemSend->EF1 = 0;
		ItemSend->EFV1 = 0;
		SendALL(ClientID);
		return;
	}
	else if(ItemSend->EFV1 >= 2)
	{
		if(itenslot1 != -1)
		{
			ItemSend->EFV1 -= 1;
			player->Inventory[itenslot1].Index = lac;
			int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
			if(ItemSend->EFV1 >= 2 && itenslot2 != -1)
			{
				ItemSend->EFV1 -= 1;
				player->Inventory[itenslot2].Index = lac;
				SendALL(ClientID);
				int itenslot3 = GetFirstSlotSADD(ClientID,0,64);
				if(ItemSend->EFV1 >= 2 && itenslot3 != -1)
				{
					ItemSend->EFV1 -= 1;
					player->Inventory[itenslot3].Index = lac;
					SendALL(ClientID);
					int itenslot4 = GetFirstSlotSADD(ClientID,0,64);
					if(ItemSend->EFV1 >= 2 && itenslot4 != -1)
					{
						ItemSend->EFV1 -= 1;
						player->Inventory[itenslot4].Index = lac;
						SendALL(ClientID);
						int itenslot5 = GetFirstSlotSADD(ClientID,0,64);
						if(ItemSend->EFV1 >= 2 && itenslot5 != -1)
						{
							ItemSend->EFV1 -= 1;
							player->Inventory[itenslot5].Index = lac;
							SendALL(ClientID);
							int itenslot6 = GetFirstSlotSADD(ClientID,0,64);
							if(ItemSend->EFV1 >= 2 && itenslot6 != -1)
							{
								ItemSend->EFV1 -= 1;
								player->Inventory[itenslot6].Index = lac;
								SendALL(ClientID);
								int itenslot7 = GetFirstSlotSADD(ClientID,0,64);
								if(ItemSend->EFV1 >= 2 && itenslot7 != -1)
								{
									ItemSend->EFV1 -= 1;
									player->Inventory[itenslot7].Index = lac;
									SendALL(ClientID);
									int itenslot8 = GetFirstSlotSADD(ClientID,0,64);
									if(ItemSend->EFV1 >= 2 && itenslot8 != -1)
									{
										ItemSend->EFV1 -= 1;
										player->Inventory[itenslot8].Index = lac;
										SendALL(ClientID);
										int itenslot9 = GetFirstSlotSADD(ClientID,0,64);
										if(ItemSend->EFV1 >= 2 && itenslot9 != -1)
										{
											ItemSend->EFV1 -= 1;
											player->Inventory[itenslot9].Index = lac;
											SendALL(ClientID);
											int itenslot10 = GetFirstSlotSADD(ClientID,0,64);
											if(ItemSend->EFV1 >= 2 && itenslot10 != -1)
											{
												ItemSend->EFV1 -= 1;
												player->Inventory[itenslot9].Index = lac;
												SendALL(ClientID);
												return;
											}
											else if(ItemSend->EFV1  == 1)
											{
												ItemSend->Index = 0;
												player->Inventory[itenslot10].Index = lac;
												SendALL(ClientID);
												return;
											}
											SendALL(ClientID);
											return;
										}
										else if(ItemSend->EFV1  == 1)
										{
											ItemSend->Index = 0;
											player->Inventory[itenslot9].Index = lac;
											SendALL(ClientID);
											return;
										}
										SendALL(ClientID);
										return;
									}
									else if(ItemSend->EFV1  == 1)
									{
										ItemSend->Index = 0;
										player->Inventory[itenslot8].Index = lac;
										SendALL(ClientID);
										return;
									}
									SendALL(ClientID);
									return;
								}
								else if(ItemSend->EFV1  == 1)
								{
									ItemSend->Index = 0;
									player->Inventory[itenslot7].Index = lac;
									SendALL(ClientID);
									return;
								}
								SendALL(ClientID);
								return;
							}
							else if(ItemSend->EFV1  == 1)
							{
								ItemSend->Index = 0;
								player->Inventory[itenslot6].Index = lac;
								SendALL(ClientID);
								return;
							}
							SendALL(ClientID);
							return;
						}
						else if(ItemSend->EFV1  == 1)
						{
							ItemSend->Index = 0;
							player->Inventory[itenslot5].Index = lac;
							SendALL(ClientID);
							return;
						}
						SendALL(ClientID);
						return;
					}
					else if(ItemSend->EFV1  == 1)
					{
						ItemSend->Index = 0;
						player->Inventory[itenslot4].Index = lac;
						SendALL(ClientID);
						return;
					}
					SendALL(ClientID);
					return;
				}
				else if(ItemSend->EFV1  == 1)
				{
					ItemSend->Index = 0;
					player->Inventory[itenslot3].Index = lac;
					SendALL(ClientID);
					return;
				}
				SendALL(ClientID);
				return;
			}
			else if(ItemSend->EFV1  == 1)
			{
				ItemSend->Index = 0;
				player->Inventory[itenslot2].Index = lac;
				SendALL(ClientID);
				return;
			}
			SendALL(ClientID);
			return;
		}
	}
	else
	{
		SendClientMsg(ClientID,"Ocorreu um erro.");
		SendALL(ClientID);
		return;
	}
}
void PacOri(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itenslot1 = GetFirstSlotSADD(ClientID,0,64);
	int lac = 412, paclac = 3448;
	if(ItemSend->EFV1 == 1)
	{
		ItemSend->Index = lac;
		ItemSend->EF1 = 0;
		ItemSend->EFV1 = 0;
		SendALL(ClientID);
		return;
	}
	else if(ItemSend->EFV1 >= 2)
	{
		if(itenslot1 != -1)
		{
			ItemSend->EFV1 -= 1;
			player->Inventory[itenslot1].Index = lac;
			int itenslot2 = GetFirstSlotSADD(ClientID,0,64);
			if(ItemSend->EFV1 >= 2 && itenslot2 != -1)
			{
				ItemSend->EFV1 -= 1;
				player->Inventory[itenslot2].Index = lac;
				SendALL(ClientID);
				int itenslot3 = GetFirstSlotSADD(ClientID,0,64);
				if(ItemSend->EFV1 >= 2 && itenslot3 != -1)
				{
					ItemSend->EFV1 -= 1;
					player->Inventory[itenslot3].Index = lac;
					SendALL(ClientID);
					int itenslot4 = GetFirstSlotSADD(ClientID,0,64);
					if(ItemSend->EFV1 >= 2 && itenslot4 != -1)
					{
						ItemSend->EFV1 -= 1;
						player->Inventory[itenslot4].Index = lac;
						SendALL(ClientID);
						int itenslot5 = GetFirstSlotSADD(ClientID,0,64);
						if(ItemSend->EFV1 >= 2 && itenslot5 != -1)
						{
							ItemSend->EFV1 -= 1;
							player->Inventory[itenslot5].Index = lac;
							SendALL(ClientID);
							int itenslot6 = GetFirstSlotSADD(ClientID,0,64);
							if(ItemSend->EFV1 >= 2 && itenslot6 != -1)
							{
								ItemSend->EFV1 -= 1;
								player->Inventory[itenslot6].Index = lac;
								SendALL(ClientID);
								int itenslot7 = GetFirstSlotSADD(ClientID,0,64);
								if(ItemSend->EFV1 >= 2 && itenslot7 != -1)
								{
									ItemSend->EFV1 -= 1;
									player->Inventory[itenslot7].Index = lac;
									SendALL(ClientID);
									int itenslot8 = GetFirstSlotSADD(ClientID,0,64);
									if(ItemSend->EFV1 >= 2 && itenslot8 != -1)
									{
										ItemSend->EFV1 -= 1;
										player->Inventory[itenslot8].Index = lac;
										SendALL(ClientID);
										int itenslot9 = GetFirstSlotSADD(ClientID,0,64);
										if(ItemSend->EFV1 >= 2 && itenslot9 != -1)
										{
											ItemSend->EFV1 -= 1;
											player->Inventory[itenslot9].Index = lac;
											SendALL(ClientID);
											int itenslot10 = GetFirstSlotSADD(ClientID,0,64);
											if(ItemSend->EFV1 >= 2 && itenslot10 != -1)
											{
												ItemSend->EFV1 -= 1;
												player->Inventory[itenslot9].Index = lac;
												SendALL(ClientID);
												return;
											}
											else if(ItemSend->EFV1  == 1)
											{
												ItemSend->Index = 0;
												player->Inventory[itenslot10].Index = lac;
												SendALL(ClientID);
												return;
											}
											SendALL(ClientID);
											return;
										}
										else if(ItemSend->EFV1  == 1)
										{
											ItemSend->Index = 0;
											player->Inventory[itenslot9].Index = lac;
											SendALL(ClientID);
											return;
										}
										SendALL(ClientID);
										return;
									}
									else if(ItemSend->EFV1  == 1)
									{
										ItemSend->Index = 0;
										player->Inventory[itenslot8].Index = lac;
										SendALL(ClientID);
										return;
									}
									SendALL(ClientID);
									return;
								}
								else if(ItemSend->EFV1  == 1)
								{
									ItemSend->Index = 0;
									player->Inventory[itenslot7].Index = lac;
									SendALL(ClientID);
									return;
								}
								SendALL(ClientID);
								return;
							}
							else if(ItemSend->EFV1  == 1)
							{
								ItemSend->Index = 0;
								player->Inventory[itenslot6].Index = lac;
								SendALL(ClientID);
								return;
							}
							SendALL(ClientID);
							return;
						}
						else if(ItemSend->EFV1  == 1)
						{
							ItemSend->Index = 0;
							player->Inventory[itenslot5].Index = lac;
							SendALL(ClientID);
							return;
						}
						SendALL(ClientID);
						return;
					}
					else if(ItemSend->EFV1  == 1)
					{
						ItemSend->Index = 0;
						player->Inventory[itenslot4].Index = lac;
						SendALL(ClientID);
						return;
					}
					SendALL(ClientID);
					return;
				}
				else if(ItemSend->EFV1  == 1)
				{
					ItemSend->Index = 0;
					player->Inventory[itenslot3].Index = lac;
					SendALL(ClientID);
					return;
				}
				SendALL(ClientID);
				return;
			}
			else if(ItemSend->EFV1  == 1)
			{
				ItemSend->Index = 0;
				player->Inventory[itenslot2].Index = lac;
				SendALL(ClientID);
				return;
			}
			SendALL(ClientID);
			return;
		}
	}
	else
	{
		SendClientMsg(ClientID,"Ocorreu um erro.");
		SendALL(ClientID);
		return;
	}
}
void EscrtLac(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itenslot1 = GetFirstSlotSADD(ClientID,413,64);
	if(itenslot1 != -1)
	{
		player->Inventory[itenslot1].Index = 0;
		int itenslot2 = GetFirstSlotSADD(ClientID,413,64);
		if(itenslot2 != -1)
		{
			player->Inventory[itenslot2].Index = 0;
			int itenslot3 = GetFirstSlotSADD(ClientID,413,64);
			if(itenslot3 != -1)
			{
				player->Inventory[itenslot3].Index = 0;
				int itenslot4 = GetFirstSlotSADD(ClientID,413,64);
				if(itenslot4 != -1)
				{
					player->Inventory[itenslot4].Index = 0;
					int itenslot5 = GetFirstSlotSADD(ClientID,413,64);
					if(itenslot5 != -1)
					{
						player->Inventory[itenslot5].Index = 0;
						int itenslot6 = GetFirstSlotSADD(ClientID,413,64);
						if(itenslot6 != -1)
						{
							player->Inventory[itenslot6].Index = 0;
							int itenslot7 = GetFirstSlotSADD(ClientID,413,64);
							if(itenslot7 != -1)
							{
								player->Inventory[itenslot7].Index = 0;
								int itenslot8 = GetFirstSlotSADD(ClientID,413,64);
								if(itenslot8 != -1)
								{
									player->Inventory[itenslot8].Index = 0;
									int itenslot9 = GetFirstSlotSADD(ClientID,413,64);
									if(itenslot9 != -1)
									{
										player->Inventory[itenslot9].Index = 0;
										int itenslot10 = GetFirstSlotSADD(ClientID,413,64);
										if(itenslot10 != -1)
										{
											player->Inventory[itenslot10].Index = 0;
											player->Inventory[itenslot1].Index = 3448;
											player->Inventory[itenslot1].EF1 = 61;
											player->Inventory[itenslot1].EFV1 = 10;
											if(ItemSend->EF1 == 61)
											{
												if(ItemSend->EFV1 >= 2)
												{
													ItemSend->EFV1 -= 1;
													SendALL(ClientID);
													return;
												}
												else
												{
													ItemSend->Index = 0;
													SendALL(ClientID);
													return;
												}
											}
											else
											{
												ItemSend->Index = 0;
												SendALL(ClientID);
												return;
											}
										}
										else
										{
											player->Inventory[itenslot1].Index = 3448;
											player->Inventory[itenslot1].EF1 = 61;
											player->Inventory[itenslot1].EFV1 = 9;
											if(ItemSend->EF1 == 61)
											{
												if(ItemSend->EFV1 >= 2)
												{
													ItemSend->EFV1 -= 1;
													SendALL(ClientID);
													return;
												}
												else
												{
													ItemSend->Index = 0;
													SendALL(ClientID);
													return;
												}
											}
											else
											{
												ItemSend->Index = 0;
												SendALL(ClientID);
												return;
											}
											SendALL(ClientID);
											return;
										}
									}
									else
									{
										player->Inventory[itenslot1].Index = 3448;
										player->Inventory[itenslot1].EF1 = 61;
										player->Inventory[itenslot1].EFV1 = 8;
										if(ItemSend->EF1 == 61)
										{
											if(ItemSend->EFV1 >= 2)
											{
												ItemSend->EFV1 -= 1;
												SendALL(ClientID);
												return;
											}
											else
											{
												ItemSend->Index = 0;
												SendALL(ClientID);
												return;
											}
										}
										else
										{
											ItemSend->Index = 0;
											SendALL(ClientID);
											return;
										}
									SendALL(ClientID);
									return;
									}
								}
								else
								{
									player->Inventory[itenslot1].Index = 3448;
									player->Inventory[itenslot1].EF1 = 61;
									player->Inventory[itenslot1].EFV1 = 7;
									if(ItemSend->EF1 == 61)
									{
										if(ItemSend->EFV1 >= 2)
										{
											ItemSend->EFV1 -= 1;
											SendALL(ClientID);
											return;
										}
										else
										{
											ItemSend->Index = 0;
											SendALL(ClientID);
											return;
										}
									}
									else
									{
										ItemSend->Index = 0;
										SendALL(ClientID);
										return;
									}
									SendALL(ClientID);
									return;
								}
							}
							else
							{
								player->Inventory[itenslot1].Index = 3448;
								player->Inventory[itenslot1].EF1 = 61;
								player->Inventory[itenslot1].EFV1 = 6;
								if(ItemSend->EF1 == 61)
								{
									if(ItemSend->EFV1 >= 2)
									{
										ItemSend->EFV1 -= 1;
										SendALL(ClientID);
										return;
									}
									else
									{
										ItemSend->Index = 0;
										SendALL(ClientID);
										return;
									}
							}
							else
							{
								ItemSend->Index = 0;
								SendALL(ClientID);
								return;
							}
								SendALL(ClientID);
								return;
							}
						}
						else
						{
							player->Inventory[itenslot1].Index = 3448;
							player->Inventory[itenslot1].EF1 = 61;
							player->Inventory[itenslot1].EFV1 = 5;
							if(ItemSend->EF1 == 61)
							{
								if(ItemSend->EFV1 >= 2)
								{
									ItemSend->EFV1 -= 1;
									SendALL(ClientID);
									return;
								}
								else
								{
									ItemSend->Index = 0;
									SendALL(ClientID);
									return;
								}
						}
						else
						{
							ItemSend->Index = 0;
							SendALL(ClientID);
							return;
						}
							SendALL(ClientID);
							return;
						}
					}
					else
					{
						player->Inventory[itenslot1].Index = 3448;
						player->Inventory[itenslot1].EF1 = 61;
						player->Inventory[itenslot1].EFV1 = 4;
						if(ItemSend->EF1 == 61)
						{
							if(ItemSend->EFV1 >= 2)
							{
								ItemSend->EFV1 -= 1;
								SendALL(ClientID);
								return;
							}
							else
							{
								ItemSend->Index = 0;
								SendALL(ClientID);
								return;
							}
						}
						else
						{
							ItemSend->Index = 0;
							SendALL(ClientID);
							return;
						}
						SendALL(ClientID);
						return;
					}
				}
				else
				{
					player->Inventory[itenslot1].Index = 3448;
					player->Inventory[itenslot1].EF1 = 61;
					player->Inventory[itenslot1].EFV1 = 3;
					if(ItemSend->EF1 == 61)
					{
						if(ItemSend->EFV1 >= 2)
						{
							ItemSend->EFV1 -= 1;
							SendALL(ClientID);
							return;
						}
						else
						{
							ItemSend->Index = 0;
							SendALL(ClientID);
							return;
						}
					}
					else
					{
						ItemSend->Index = 0;
						SendALL(ClientID);
						return;
					}
					SendALL(ClientID);
					return;
				}
			}
			else
			{
				player->Inventory[itenslot1].Index = 3448;
				player->Inventory[itenslot1].EF1 = 61;
				player->Inventory[itenslot1].EFV1 = 2;
				if(ItemSend->EF1 == 61)
				{
					if(ItemSend->EFV1 >= 2)
					{
						ItemSend->EFV1 -= 1;
						SendALL(ClientID);
						return;
					}
					else
					{
						ItemSend->Index = 0;
						SendALL(ClientID);
						return;
					}
				}
				else
				{
					ItemSend->Index = 0;
					SendALL(ClientID);
					return;
				}
				SendALL(ClientID);
				return;
			}
		}
		else
		{
			player->Inventory[itenslot1].Index = 3448;
			player->Inventory[itenslot1].EF1 = 61;
			player->Inventory[itenslot1].EFV1 = 1;
			if(ItemSend->EF1 == 61)
			{
				if(ItemSend->EFV1 >= 2)
				{
					ItemSend->EFV1 -= 1;
					SendALL(ClientID);
					return;
				}
				else
				{
					ItemSend->Index = 0;
					SendALL(ClientID);
					return;
				}
			}
			else
			{
				ItemSend->Index = 0;
				SendALL(ClientID);
				return;
			}
			SendALL(ClientID);
			return;
		}
	}
	else
	{
		SendClientMsg(ClientID,"Você não possui o item Poeira de Lactolerium.");
		SendALL(ClientID);
		return;
	}
	
	
}
void EscrtOri(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itenslot1 = GetFirstSlotSADD(ClientID,412,64);
	if(itenslot1 != -1)
	{
		player->Inventory[itenslot1].Index = 0;
		int itenslot2 = GetFirstSlotSADD(ClientID,412,64);
		if(itenslot2 != -1)
		{
			player->Inventory[itenslot2].Index = 0;
			int itenslot3 = GetFirstSlotSADD(ClientID,412,64);
			if(itenslot3 != -1)
			{
				player->Inventory[itenslot3].Index = 0;
				int itenslot4 = GetFirstSlotSADD(ClientID,412,64);
				if(itenslot4 != -1)
				{
					player->Inventory[itenslot4].Index = 0;
					int itenslot5 = GetFirstSlotSADD(ClientID,412,64);
					if(itenslot5 != -1)
					{
						player->Inventory[itenslot5].Index = 0;
						int itenslot6 = GetFirstSlotSADD(ClientID,412,64);
						if(itenslot6 != -1)
						{
							player->Inventory[itenslot6].Index = 0;
							int itenslot7 = GetFirstSlotSADD(ClientID,412,64);
							if(itenslot7 != -1)
							{
								player->Inventory[itenslot7].Index = 0;
								int itenslot8 = GetFirstSlotSADD(ClientID,412,64);
								if(itenslot8 != -1)
								{
									player->Inventory[itenslot8].Index = 0;
									int itenslot9 = GetFirstSlotSADD(ClientID,412,64);
									if(itenslot9 != -1)
									{
										player->Inventory[itenslot9].Index = 0;
										int itenslot10 = GetFirstSlotSADD(ClientID,412,64);
										if(itenslot10 != -1)
										{
											player->Inventory[itenslot10].Index = 0;
											player->Inventory[itenslot1].Index = 3447;
											player->Inventory[itenslot1].EF1 = 61;
											player->Inventory[itenslot1].EFV1 = 10;
											if(ItemSend->EF1 == 61)
											{
												if(ItemSend->EFV1 >= 2)
												{
													ItemSend->EFV1 -= 1;
													SendALL(ClientID);
													return;
												}
												else
												{
													ItemSend->Index = 0;
													SendALL(ClientID);
													return;
												}
											}
											else
											{
												ItemSend->Index = 0;
												SendALL(ClientID);
												return;
											}
										}
										else
										{
											player->Inventory[itenslot1].Index = 3447;
											player->Inventory[itenslot1].EF1 = 61;
											player->Inventory[itenslot1].EFV1 = 9;
											if(ItemSend->EF1 == 61)
											{
												if(ItemSend->EFV1 >= 2)
												{
													ItemSend->EFV1 -= 1;
													SendALL(ClientID);
													return;
												}
												else
												{
													ItemSend->Index = 0;
													SendALL(ClientID);
													return;
												}
											}
											else
											{
												ItemSend->Index = 0;
												SendALL(ClientID);
												return;
											}
											SendALL(ClientID);
											return;
										}
									}
									else
									{
										player->Inventory[itenslot1].Index = 3447;
										player->Inventory[itenslot1].EF1 = 61;
										player->Inventory[itenslot1].EFV1 = 8;
										if(ItemSend->EF1 == 61)
										{
											if(ItemSend->EFV1 >= 2)
											{
												ItemSend->EFV1 -= 1;
												SendALL(ClientID);
												return;
											}
											else
											{
												ItemSend->Index = 0;
												SendALL(ClientID);
												return;
											}
										}
										else
										{
											ItemSend->Index = 0;
											SendALL(ClientID);
											return;
										}
									SendALL(ClientID);
									return;
									}
								}
								else
								{
									player->Inventory[itenslot1].Index = 3447;
									player->Inventory[itenslot1].EF1 = 61;
									player->Inventory[itenslot1].EFV1 = 7;
									if(ItemSend->EF1 == 61)
									{
										if(ItemSend->EFV1 >= 2)
										{
											ItemSend->EFV1 -= 1;
											SendALL(ClientID);
											return;
										}
										else
										{
											ItemSend->Index = 0;
											SendALL(ClientID);
											return;
										}
									}
									else
									{
										ItemSend->Index = 0;
										SendALL(ClientID);
										return;
									}
									SendALL(ClientID);
									return;
								}
							}
							else
							{
								player->Inventory[itenslot1].Index = 3447;
								player->Inventory[itenslot1].EF1 = 61;
								player->Inventory[itenslot1].EFV1 = 6;
								if(ItemSend->EF1 == 61)
								{
									if(ItemSend->EFV1 >= 2)
									{
										ItemSend->EFV1 -= 1;
										SendALL(ClientID);
										return;
									}
									else
									{
										ItemSend->Index = 0;
										SendALL(ClientID);
										return;
									}
							}
							else
							{
								ItemSend->Index = 0;
								SendALL(ClientID);
								return;
							}
								SendALL(ClientID);
								return;
							}
						}
						else
						{
							player->Inventory[itenslot1].Index = 3447;
							player->Inventory[itenslot1].EF1 = 61;
							player->Inventory[itenslot1].EFV1 = 5;
							if(ItemSend->EF1 == 61)
							{
								if(ItemSend->EFV1 >= 2)
								{
									ItemSend->EFV1 -= 1;
									SendALL(ClientID);
									return;
								}
								else
								{
									ItemSend->Index = 0;
									SendALL(ClientID);
									return;
								}
						}
						else
						{
							ItemSend->Index = 0;
							SendALL(ClientID);
							return;
						}
							SendALL(ClientID);
							return;
						}
					}
					else
					{
						player->Inventory[itenslot1].Index = 3447;
						player->Inventory[itenslot1].EF1 = 61;
						player->Inventory[itenslot1].EFV1 = 4;
						if(ItemSend->EF1 == 61)
						{
							if(ItemSend->EFV1 >= 2)
							{
								ItemSend->EFV1 -= 1;
								SendALL(ClientID);
								return;
							}
							else
							{
								ItemSend->Index = 0;
								SendALL(ClientID);
								return;
							}
						}
						else
						{
							ItemSend->Index = 0;
							SendALL(ClientID);
							return;
						}
						SendALL(ClientID);
						return;
					}
				}
				else
				{
					player->Inventory[itenslot1].Index = 3447;
					player->Inventory[itenslot1].EF1 = 61;
					player->Inventory[itenslot1].EFV1 = 3;
					if(ItemSend->EF1 == 61)
					{
						if(ItemSend->EFV1 >= 2)
						{
							ItemSend->EFV1 -= 1;
							SendALL(ClientID);
							return;
						}
						else
						{
							ItemSend->Index = 0;
							SendALL(ClientID);
							return;
						}
					}
					else
					{
						ItemSend->Index = 0;
						SendALL(ClientID);
						return;
					}
					SendALL(ClientID);
					return;
				}
			}
			else
			{
				player->Inventory[itenslot1].Index = 3447;
				player->Inventory[itenslot1].EF1 = 61;
				player->Inventory[itenslot1].EFV1 = 2;
				if(ItemSend->EF1 == 61)
				{
					if(ItemSend->EFV1 >= 2)
					{
						ItemSend->EFV1 -= 1;
						SendALL(ClientID);
						return;
					}
					else
					{
						ItemSend->Index = 0;
						SendALL(ClientID);
						return;
					}
				}
				else
				{
					ItemSend->Index = 0;
					SendALL(ClientID);
					return;
				}
				SendALL(ClientID);
				return;
			}
		}
		else
		{
			player->Inventory[itenslot1].Index = 3447;
			player->Inventory[itenslot1].EF1 = 61;
			player->Inventory[itenslot1].EFV1 = 1;
			if(ItemSend->EF1 == 61)
			{
				if(ItemSend->EFV1 >= 2)
				{
					ItemSend->EFV1 -= 1;
					SendALL(ClientID);
					return;
				}
				else
				{
					ItemSend->Index = 0;
					SendALL(ClientID);
					return;
				}
			}
			else
			{
				ItemSend->Index = 0;
				SendALL(ClientID);
				return;
			}
			SendALL(ClientID);
			return;
		}
	}
	else
	{
		SendClientMsg(ClientID,"Você não possui o item Poeira de Oriharucon.");
		SendALL(ClientID);
		return;
	}
	
	
}
void GemaEstrelar(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cGemaX = PInt(addr_bclient + 0x15C69D8);
	int cGemaY = PInt(addr_bclient + 0x15C69DA);
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	if(cX >= 2379 && cY >= 2077 && cX <= 2426 && cY <= 2132)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 2228 && cY >= 1700 && cX <= 2257 && cY <= 1720)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 459 && cY >= 3887 && cX <= 496 && cY <= 3916)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 656 && cY >= 3728 && cX <= 704 && cY <= 3763)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 1309 && cY >= 4025 && cX <= 1350 && cY <= 4056)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 0 && cY >= 0 && cX <= 1415 && cY <= 387)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 3140 && cY >= 1031 && cX <= 3650 && cY <= 1809)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 2175 && cY >= 1152 && cX <= 2303 && cY <= 1279)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 1023 && cY >= 1663 && cX <= 1159 && cY <= 1791)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 1677 && cY >= 1550 && cX <= 1777 && cY <= 1904)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 2446 && cY >= 1552 && cX <= 2673 && cY <= 1777)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 2446 && cY >= 1852 && cX <= 2545 && cY >= 1918)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 2048 && cY >= 1920 && cX <= 2170 && cY <= 2171)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 2444 && cY >= 1965 && cX <= 2475 && cY <= 2026)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 2633 && cY >= 1965 && cX <= 2671 && cY <= 2007)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 1024 && cY >= 1920 && cX <= 1280 && cY <= 2175)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 3583 && cY >= 3098 && cX <= 3710 && cY <= 3199)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 3700 && cY >= 2816 && cX <= 3965 && cY <= 2943)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 3534 && cY >= 3433 && cX <= 4084 && cY <= 4092)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 1558 && cY >= 3557 && cX <= 2566 && cY <= 4094)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 980 && cY >= 3453 && cX <= 1410 && cY <= 3703)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 767 && cY >= 3583 && cX <= 894 && cY <= 3711)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else if(cX >= 105 && cY >= 3949 && cX <= 388 && cY <= 4095)
	{
		SendClientMsg(ClientID,"Você não pode usar aqui.");
	}
	else
	{
		PInt(addr_bclient + 0x15C69D8) = PInt(addr_bclient + 0x015C6CEC);
		PInt(addr_bclient + 0x15C69DA) = PInt(addr_bclient + 0x015C6CF0);
		SaveChar(1,ClientID);
		SendClientMsg(ClientID,"Posição definida.");
		ItemSend->Index = 0;
	}
}

void Restaurad1(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cSeg = PInt(0x00A5EA410);
	int num;
	if(player->Equip[14].Index >= 2363 && player->Equip[14].Index <= 2365)
	{
		if(player->Equip[14].EFV2 >= 1 && player->Equip[14].EFV2 <= 60)
		{
			srand((int)time(NULL));
			num = rand() % 3;
			if(num == 1)
			{
				player->Equip[14].EFV2 += 1;
				SendClientMsg(ClientID,"Foi restaurada uma vida da montaria.");
				SendItens(ClientID,14);
				Amount(ClientID,ItemSend);
				return;
			}
			else if(num == 2)
			{
				player->Equip[14].EFV2 += 3;
				SendClientMsg(ClientID,"Foi restaurada três vida da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else
			{
				player->Equip[14].EFV2 += 2;
				SendClientMsg(ClientID,"Foi restaurada duas vida da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
		}
		else
		{
			SendClientMsg(ClientID,"A vida da montaria deve estar entre 1 a 60.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}

}
void Restaurad2(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cSeg = PInt(0x00A5EA410);
	int num;
	int itenslot1 = GetFirstSlotSADD(ClientID,3352,64);
	if(player->Equip[14].Index >= 2366 && player->Equip[14].Index <= 2368)
	{
		if(player->Equip[14].EFV2 >= 1 && player->Equip[14].EFV2 <= 60)
		{
			srand((int)time(NULL));
			num = rand() % 3;
			if(num == 1)
			{
				player->Equip[14].EFV2 += 1;
				SendClientMsg(ClientID,"Foi restaurada uma vida da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else if(num == 2)
			{
				player->Equip[14].EFV2 += 3;
				SendClientMsg(ClientID,"Foi restaurada três vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else
			{
				player->Equip[14].EFV2 += 2;
				SendClientMsg(ClientID,"Foi restaurada duas vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
		}
		else
		{
			SendClientMsg(ClientID,"A vida da montaria deve estar entre 1 a 60.");
		}
	}
	else if(player->Equip[14].Index >= 2371 && player->Equip[14].Index <= 2373)
	{
		if(player->Equip[14].EFV2 >= 1 && player->Equip[14].EFV2 <= 60)
		{
			if(cSeg >= 0 && cSeg <= 35)
			{
				player->Equip[14].EFV2 += 1;
				SendClientMsg(ClientID,"Foi restaurada uma vida da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else if(cSeg >= 50 && cSeg <= 59)
			{
				player->Equip[14].EFV2 += 3;
				SendClientMsg(ClientID,"Foi restaurada três vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else
			{
				player->Equip[14].EFV2 += 2;
				SendClientMsg(ClientID,"Foi restaurada duas vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
		}
		else
		{
			SendClientMsg(ClientID,"A vida da montaria deve estar entre 1 a 60.");

		}
	}
	else
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void Restaurad3(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cSeg = PInt(0x00A5EA410);
	int num;
	int itenslot1 = GetFirstSlotSADD(ClientID,3353,64);
	if(player->Equip[14].Index >= 2369 && player->Equip[14].Index <= 2370)
	{
		if(player->Equip[14].EFV2 >= 1 && player->Equip[14].EFV2 <= 60)
		{
			srand((int)time(NULL));
			num = rand() % 3;
			if(num == 1)
			{
				player->Equip[14].EFV2 += 1;
				SendClientMsg(ClientID,"Foi restaurada uma vida da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else if(num == 2)
			{
				player->Equip[14].EFV2 += 3;
				SendClientMsg(ClientID,"Foi restaurada três vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else
			{
				player->Equip[14].EFV2 += 2;
				SendClientMsg(ClientID,"Foi restaurada duas vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
		}
		else
		{
			SendClientMsg(ClientID,"A vida da montaria deve estar entre 1 a 60.");
		}
	}
	else if(player->Equip[14].Index >= 2374 && player->Equip[14].Index <= 2375)
	{
		if(player->Equip[14].EFV2 >= 1 && player->Equip[14].EFV2 <= 60)
		{
			if(cSeg >= 0 && cSeg <= 35)
			{
				player->Equip[14].EFV2 += 1;
				SendClientMsg(ClientID,"Foi restaurada uma vida da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else if(cSeg >= 50 && cSeg <= 59)
			{
				player->Equip[14].EFV2 += 3;
				SendClientMsg(ClientID,"Foi restaurada três vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else
			{
				player->Equip[14].EFV2 += 2;
				SendClientMsg(ClientID,"Foi restaurada duas vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
		}
		else
		{
			SendClientMsg(ClientID,"A vida da montaria deve estar entre 1 a 60.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void Restaurad4(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cSeg = PInt(0x00A5EA410);
	int num;
	int itenslot1 = GetFirstSlotSADD(ClientID,3354,64);
	if(player->Equip[14].Index >= 2376 && player->Equip[14].Index <= 2378)
	{
		if(player->Equip[14].EFV2 >= 1 && player->Equip[14].EFV2 <= 60)
		{
			srand((int)time(NULL));
			num = rand() % 3;
			if(num == 1)
			{
				player->Equip[14].EFV2 += 1;
				SendClientMsg(ClientID,"Foi restaurada uma vida da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else if(num == 2)
			{
				player->Equip[14].EFV2 += 3;
				SendClientMsg(ClientID,"Foi restaurada três vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else
			{
				player->Equip[14].EFV2 += 2;
				SendClientMsg(ClientID,"Foi restaurada duas vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
		}
		else
		{
			SendClientMsg(ClientID,"A vida da montaria deve estar entre 1 a 60.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void Restaurad5(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cSeg = PInt(0x00A5EA410);
	int num;
	int itenslot1 = GetFirstSlotSADD(ClientID,3355,64);
	if(player->Equip[14].Index >= 2381 && player->Equip[14].Index <= 2383)
	{
		if(player->Equip[14].EFV2 >= 1 && player->Equip[14].EFV2 <= 60)
		{
			srand((int)time(NULL));
			num = rand() % 3;
			if(num == 1)
			{
				player->Equip[14].EFV2 += 1;
				SendClientMsg(ClientID,"Foi restaurada uma vida da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else if(num == 2)
			{
				player->Equip[14].EFV2 += 3;
				SendClientMsg(ClientID,"Foi restaurada três vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else
			{
				player->Equip[14].EFV2 += 2;
				SendClientMsg(ClientID,"Foi restaurada duas vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
		}
		else
		{
			SendClientMsg(ClientID,"A vida da montaria deve estar entre 1 a 60.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void Restaurad6(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cSeg = PInt(0x00A5EA410);
	int num;
	int itenslot1 = GetFirstSlotSADD(ClientID,3356,64);
	if(player->Equip[14].Index >= 2384 && player->Equip[14].Index <= 2386)
	{
		if(player->Equip[14].EFV2 >= 1 && player->Equip[14].EFV2 <= 60)
		{
			srand((int)time(NULL));
			num = rand() % 3;
			if(num == 1)
			{
				player->Equip[14].EFV2 += 1;
				SendClientMsg(ClientID,"Foi restaurada uma vida da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else if(num == 2)
			{
				player->Equip[14].EFV2 += 3;
				SendClientMsg(ClientID,"Foi restaurada três vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else
			{
				player->Equip[14].EFV2 += 2;
				SendClientMsg(ClientID,"Foi restaurada duas vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
		}
		else
		{
			SendClientMsg(ClientID,"A vida da montaria deve estar entre 1 a 60.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void Restaurad7(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cSeg = PInt(0x00A5EA410);
	int num;
	int itenslot1 = GetFirstSlotSADD(ClientID,3357,64);
	if(player->Equip[14].Index >= 2379 && player->Equip[14].Index <= 2380)
	{
		if(player->Equip[14].EFV2 >= 1 && player->Equip[14].EFV2 <= 60)
		{
			srand((int)time(NULL));
			num = rand() % 3;
			if(num == 1)
			{
				player->Equip[14].EFV2 += 1;
				SendClientMsg(ClientID,"Foi restaurada uma vida da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else if(num == 2)
			{
				player->Equip[14].EFV2 += 3;
				SendClientMsg(ClientID,"Foi restaurada três vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
			else
			{
				player->Equip[14].EFV2 += 2;
				SendClientMsg(ClientID,"Foi restaurada duas vidas da montaria.");
				Amount(ClientID,ItemSend);
				SendItens(ClientID,14);
				return;
			}
		}
		else
		{
			SendClientMsg(ClientID,"A vida da montaria deve estar entre 1 a 60.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void Catalis1(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[14].Index >= 2333 && player->Equip[14].Index <= 2335)
	{
		player->Equip[14].Index = player->Equip[14].Index + 30;
		SendItens(ClientID,14);
		SendClientMsg(ClientID,"Sua cria cresceu.");
		Amount(ClientID,ItemSend);
	}
	else 
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void Catalis2(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[14].Index >= 2336 && player->Equip[14].Index <= 2338)
	{
		player->Equip[14].Index = player->Equip[14].Index + 30;
		SendItens(ClientID,14);
		Amount(ClientID,ItemSend);
		SendClientMsg(ClientID,"Sua cria cresceu.");
	}
	else if(player->Equip[14].Index >= 2341 && player->Equip[14].Index <= 2343)
	{
		player->Equip[14].Index = player->Equip[14].Index + 30;
		SendItens(ClientID,14);
		Amount(ClientID,ItemSend);
		SendClientMsg(ClientID,"Sua cria cresceu.");
	}
	else 
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void Catalis3(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[14].Index >= 2339 && player->Equip[14].Index <= 2340)
	{
		player->Equip[14].Index = player->Equip[14].Index + 30;
		SendItens(ClientID,14);
		Amount(ClientID,ItemSend);
		SendClientMsg(ClientID,"Sua cria cresceu.");
	}
	//else if(player->Equip[14].Index >= 2344 && player->Equip[14].Index <= 2345)
	else if(player->Equip[14].Index >= 2344 && player->Equip[14].Index <= 2345 && player->Equip[14].Index == 2357 && player->Equip[14].Index == 2358 )
	{
		player->Equip[14].Index = player->Equip[14].Index + 30;
		SendItens(ClientID,14);
		Amount(ClientID,ItemSend);
		SendClientMsg(ClientID,"Sua cria cresceu.");
	}
	else 
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void Catalis4(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[14].Index >= 2346 && player->Equip[14].Index <= 2348)
	{
		player->Equip[14].Index = player->Equip[14].Index + 30;
		SendItens(ClientID,14);
		Amount(ClientID,ItemSend);
		SendClientMsg(ClientID,"Sua cria cresceu.");
	}
	else 
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void Catalis5(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[14].Index >= 2351 && player->Equip[14].Index <= 2353)
	{
		player->Equip[14].Index = player->Equip[14].Index + 30;
		SendItens(ClientID,14);
		Amount(ClientID,ItemSend);
		SendClientMsg(ClientID,"Sua cria cresceu.");
	}
	else 
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void Catalis6(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[14].Index >= 2354 && player->Equip[14].Index <= 2356)
	{
		player->Equip[14].Index = player->Equip[14].Index + 30;
		SendItens(ClientID,14);
		Amount(ClientID,ItemSend);
		SendClientMsg(ClientID,"Sua cria cresceu.");
	}
	else 
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void Catalis7(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[14].Index == 2349)
	{
		player->Equip[14].Index = player->Equip[14].Index + 30;
		SendItens(ClientID,14);
		Amount(ClientID,ItemSend);
		SendClientMsg(ClientID,"Sua cria cresceu.");
	}
	else if(player->Equip[14].Index == 2350)
	{
		player->Equip[14].Index = player->Equip[14].Index + 30;
		SendItens(ClientID,14);
		Amount(ClientID,ItemSend);
		SendClientMsg(ClientID,"Sua cria cresceu.");
	}
	else 
	{
		SendClientMsg(ClientID,"Montaria inválida.");
	}
}
void CuraMont(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cSeg = PInt(0x00A5EA410);
	if(player->Equip[14].Index >= 2360 && player->Equip[14].Index <= 2388)
	{ 
		if(player->Equip[14].EFV2 >= 1 && player->Equip[14].EFV2 <= 60)
		{
			player->Equip[14].EFV2 += 1;
			SendClientMsg(ClientID,"Foi restaurada uma vida da montaria.");
			Amount(ClientID,ItemSend);
			SendItens(ClientID,14);
			return;
		}
		else
		{
			SendClientMsg(ClientID,"A vida da montaria deve estar entre 5 a 60.");
		}
	}
	else
	{
		SendClientMsg(ClientID,"Item inválido.");
	}
}
void ExtracaoElmo(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[1].EFV1 < 9)
	{
		SendClientMsg(ClientID,"Apenas em itens acima de +9.");
		return;
	}
	else if(player->Equip[1].Index == 0)
	{
		SendClientMsg(ClientID,"Equipe o item correspondente.");
		return;
	}
	player->Equip[1].EF1 = ItemSend->EF1;
	player->Equip[1].EF2 = ItemSend->EF2;
	player->Equip[1].EF3 = ItemSend->EF3;
	player->Equip[1].EFV1 = ItemSend->EFV1;
	player->Equip[1].EFV2 = ItemSend->EFV2;
	player->Equip[1].EFV3 = ItemSend->EFV3;
	SendItens(ClientID,1);
	Amount(ClientID,ItemSend);
}
void ExtracaoPeito(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[2].EFV1 < 9)
	{
		SendClientMsg(ClientID,"Apenas em itens acima de +9.");
		return;
	}
	else if(player->Equip[2].Index == 0)
	{
		SendClientMsg(ClientID,"Equipe o item correspondente.");
		return;
	}
	player->Equip[2].EF1 = ItemSend->EF1;
	player->Equip[2].EF2 = ItemSend->EF2;
	player->Equip[2].EF3 = ItemSend->EF3;
	player->Equip[2].EFV1 = ItemSend->EFV1;
	player->Equip[2].EFV2 = ItemSend->EFV2;
	player->Equip[2].EFV3 = ItemSend->EFV3;
	SendItens(ClientID,2);
	Amount(ClientID,ItemSend);
}
void ExtracaoCalca(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[3].EFV1 < 9)
	{
		SendClientMsg(ClientID,"Apenas em itens acima de +9.");
		return;
	}
	else if(player->Equip[3].Index == 0)
	{
		SendClientMsg(ClientID,"Equipe o item correspondente.");
		return;
	}
	player->Equip[3].EF1 = ItemSend->EF1;
	player->Equip[3].EF2 = ItemSend->EF2;
	player->Equip[3].EF3 = ItemSend->EF3;
	player->Equip[3].EFV1 = ItemSend->EFV1;
	player->Equip[3].EFV2 = ItemSend->EFV2;
	player->Equip[3].EFV3 = ItemSend->EFV3;
	SendItens(ClientID,3);
	Amount(ClientID,ItemSend);
}
void ExtracaoLuva(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[4].EFV1 < 9)
	{
		SendClientMsg(ClientID,"Apenas em itens acima de +9.");
		return;
	}
	else if(player->Equip[4].Index == 0)
	{
		SendClientMsg(ClientID,"Equipe o item correspondente.");
		return;
	}
	player->Equip[4].EF1 = ItemSend->EF1;
	player->Equip[4].EF2 = ItemSend->EF2;
	player->Equip[4].EF3 = ItemSend->EF3;
	player->Equip[4].EFV1= ItemSend->EFV1;
	player->Equip[4].EFV2 = ItemSend->EFV2;
	player->Equip[4].EFV3 = ItemSend->EFV3;
	SendItens(ClientID,4);
	Amount(ClientID,ItemSend);
}
void ExtracaoBota(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[5].EFV1 < 9)
	{
		SendClientMsg(ClientID,"Apenas em itens acima de +9.");
		return;
	}
	else if(player->Equip[5].Index == 0)
	{
		SendClientMsg(ClientID,"Equipe o item correspondente.");
		return;
	}
	player->Equip[5].EF1 = ItemSend->EF1;
	player->Equip[5].EF2 = ItemSend->EF2;
	player->Equip[5].EF3 = ItemSend->EF3;
	player->Equip[5].EFV1 = ItemSend->EFV1;
	player->Equip[5].EFV2 = ItemSend->EFV2;
	player->Equip[5].EFV3 = ItemSend->EFV3;
	SendItens(ClientID,5);
	Amount(ClientID,ItemSend);
}
void ExtracaoArma(int ClientID,st_Item *ItemSend)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[6].EFV1 < 9)
	{
		SendClientMsg(ClientID,"Apenas em itens acima de +9.");
		return;
	}
	else if(player->Equip[6].Index == 0)
	{
		SendClientMsg(ClientID,"Equipe o item correspondente.");
		return;
	}
	player->Equip[6].EF1 = ItemSend->EF1;
	player->Equip[6].EF2 = ItemSend->EF2;
	player->Equip[6].EF3 = ItemSend->EF3;
	player->Equip[6].EFV1 = ItemSend->EFV1;
	player->Equip[6].EFV2 = ItemSend->EFV2;
	player->Equip[6].EFV3 = ItemSend->EFV3;
	SendItens(ClientID,6);
	Amount(ClientID,ItemSend);
}
void BarMythDano(int ClientID,st_Item *ItemSend,st_Item *Equip)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	srand((int)time(NULL));
	int soma1 = rand() % 100, soma2 = rand() % 100, soma3 = rand() % 100;
	int num = (soma1 + soma2 + soma3) / 3;
	
	if(Equip->EF1 != 43 && Equip->EFV1 <= 233)
	{
		SendClientMsg(ClientID,"Apenas em itens acima de +11.");
		return;
	}
	if(Equip->Index >= 1221 && Equip->Index <= 1224)
	{
		goto ADD;
	}
	if(Equip->Index >= 1356 && Equip->Index <= 1359)
	{
		goto ADD;
	}
	if(Equip->Index >= 1506 && Equip->Index <= 1509)
	{
		goto ADD;
	}
	if(Equip->Index >= 1656 && Equip->Index <= 1659)
	{
		goto ADD;
	}
	return;

ADD:
	if(Equip->EF2 == 2)
	{
		if(num <= 55)
		{
			if(Equip->EFV2 <= 35)
			{
				Equip->EFV2 += 5;
			}
			else
			{
				SendClientMsg(ClientID,"Não é possivel aumentar mais.");
				return;
			}
		}
		else if(Equip->EFV2 > 0)
		{
			Equip->EFV2 -= 5;
			
		}
		Amount(ClientID,ItemSend);
	}
	else if(Equip->EF3 == 2)
	{
		if(num <= 55)
		{
			if(Equip->EFV3 <= 35)
			{
				Equip->EFV3 += 5;
				
			}
			else
			{
				SendClientMsg(ClientID,"Não é possivel aumentar mais.");
				return;
			}
		}
		else if(Equip->EFV3 > 0)
		{
			Equip->EFV3 -= 5;
		}
		Amount(ClientID,ItemSend);
	}
	else
	{
		SendClientMsg(ClientID,"O item não possui o adicional.");
	}

}
void BarMythMag(int ClientID,st_Item *ItemSend,st_Item *Equip)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	srand((int)time(NULL));
	int soma1 = rand() % 100, soma2 = rand() % 100, soma3 = rand() % 100;
	int num = (soma1 + soma2 + soma3) / 3;
	
	if(Equip->EF1 != 43 && Equip->EFV1 <= 233)
	{
		SendClientMsg(ClientID,"Apenas em itens acima de +11.");
		return;
	}
	if(Equip->Index >= 1221 && Equip->Index <= 1224)
	{
		goto ADD;
	}
	if(Equip->Index >= 1356 && Equip->Index <= 1359)
	{
		goto ADD;
	}
	if(Equip->Index >= 1506 && Equip->Index <= 1509)
	{
		goto ADD;
	}
	if(Equip->Index >= 1656 && Equip->Index <= 1659)
	{
		goto ADD;
	}
	return;
ADD:
	if(Equip->EF2 == 60)
	{
		if(num <= 55)
		{
			if(Equip->EFV2 <= 12)
			{
				Equip->EFV2 += 2;
			}
			else
			{
				SendClientMsg(ClientID,"Não é possivel aumentar mais.");
				return;
			}
		}
		else if(Equip->EFV2 > 0)
		{
			Equip->EFV2 -= 2;
			
		}
		Amount(ClientID,ItemSend);
	}
	else if(Equip->EF3 == 60)
	{
		if(num <= 55)
		{
			if(Equip->EFV3 <= 12)
			{
				Equip->EFV3 += 2;
				
			}
			else
			{
				SendClientMsg(ClientID,"Não é possivel aumentar mais.");
				return;
			}
		}
		else if(Equip->EFV3 > 0)
		{
			Equip->EFV3 -= 2;
		}
		Amount(ClientID,ItemSend);
	}
	else
	{
		SendClientMsg(ClientID,"O item não possui o adicional.");
	}

}
void BarMythDef(int ClientID,st_Item *ItemSend,st_Item *Equip)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	srand((int)time(NULL));
	int soma1 = rand() % 100, soma2 = rand() % 100, soma3 = rand() % 100;
	int num = (soma1 + soma2 + soma3) / 3;
	
	if(Equip->EF1 != 43 && Equip->EFV1 <= 233)
	{
		SendClientMsg(ClientID,"Apenas em itens acima de +11.");
		return;
	}
	if(Equip->Index >= 1221 && Equip->Index <= 1224)
	{
		goto ADD;
	}
	if(Equip->Index >= 1356 && Equip->Index <= 1359)
	{
		goto ADD;
	}
	if(Equip->Index >= 1506 && Equip->Index <= 1509)
	{
		goto ADD;
	}
	if(Equip->Index >= 1656 && Equip->Index <= 1659)
	{
		goto ADD;
	}
	return;
ADD:
	if(Equip->EF2 == 3)
	{
		if(num <= 55)
		{
			if(Equip->EFV2 <= 35)
			{
				Equip->EFV2 += 5;
			}
			else
			{
				SendClientMsg(ClientID,"Não é possivel aumentar mais.");
				return;
			}
		}
		else if(Equip->EFV2 > 0)
		{
			Equip->EFV2 -= 5;
			
		}
		Amount(ClientID,ItemSend);
	}
	else if(Equip->EF3 == 3)
	{
		if(num <= 55)
		{
			if(Equip->EFV3 <= 35)
			{
				Equip->EFV3 += 5;
				
			}
			else
			{
				SendClientMsg(ClientID,"Não é possivel aumentar mais.");
				return;
			}
		}
		else if(Equip->EFV3 > 0)
		{
			Equip->EFV3 -= 5;
		}
		Amount(ClientID,ItemSend);
	}
	else
	{
		SendClientMsg(ClientID,"O item não possui o adicional.");
	}

}
void BarMythCrit(int ClientID,st_Item *ItemSend,st_Item *Equip)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	srand((int)time(NULL));
	int soma1 = rand() % 100, soma2 = rand() % 100, soma3 = rand() % 100;
	int num = (soma1 + soma2 + soma3) / 3;
	
	if(Equip->EF1 != 43 && Equip->EFV1 <= 233)
	{
		SendClientMsg(ClientID,"Apenas em itens acima de +11.");
		return;
	}
	if(Equip->Index >= 1221 && Equip->Index <= 1224)
	{
		goto ADD;
	}
	if(Equip->Index >= 1356 && Equip->Index <= 1359)
	{
		goto ADD;
	}
	if(Equip->Index >= 1506 && Equip->Index <= 1509)
	{
		goto ADD;
	}
	if(Equip->Index >= 1656 && Equip->Index <= 1659)
	{
		goto ADD;
	}
	return;
ADD:
	if(Equip->EF2 == 42)
	{
		if(num <= 55)
		{
			if(Equip->EFV2 <= 105)
			{
				Equip->EFV2 += 35;
			}
			else
			{
				SendClientMsg(ClientID,"Não é possivel aumentar mais.");
				return;
			}
		}
		else if(Equip->EFV2 > 0)
		{
			Equip->EFV2 -= 35;
			
		}
		Amount(ClientID,ItemSend);
	}
	else if(Equip->EF3 == 42)
	{
		if(num <= 55)
		{
			if(Equip->EFV3 <= 105)
			{
				Equip->EFV3 += 35;
				
			}
			else
			{
				SendClientMsg(ClientID,"Não é possivel aumentar mais.");
				return;
			}
		}
		else if(Equip->EFV3 > 0)
		{
			Equip->EFV3 -= 35;
		}
		Amount(ClientID,ItemSend);
	}
	else
	{
		SendClientMsg(ClientID,"O item não possui o adicional.");
	}

}
void AguaFadas(int ClientID,st_Item *ItemSend,st_Item *Equip)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[13].Index == 769 || player->Equip[13].Index == 753 || player->Equip[13].Index == 1726)
	{
		if(player->Equip[13].EF1 == 0 && player->Equip[13].EFV1 == 0)
		{
			Equip->EF1 = 43;
			Equip->EFV1 = 4;
			SendClientMsg(ClientID,"Refinação sucedida.");
			SendEffect(1,0xe ,ClientID);
			Amount(ClientID,ItemSend);
			return;
		}
		else if(player->Equip[13].EFV1 >= 4 && player->Equip[13].EFV1 <= 5)
		{
			Equip->EFV1 = 6;
			SendClientMsg(ClientID,"Refinação sucedida.");
			SendEffect(1,0xe ,ClientID);
			Amount(ClientID,ItemSend);
			return;
		}
		else if(player->Equip[13].EFV1 <= 3)
		{
			Equip->EFV1 = 4;
			SendClientMsg(ClientID,"Refinação sucedida.");
			SendEffect(1,0xe ,ClientID);
			Amount(ClientID,ItemSend);
			return;
		}
		else if(player->Equip[13].EFV1 >= 6)
		{
			SendClientMsg(ClientID,"Refinação máxima de até +6.");
			return;
		}
	}
	else
	{
		SendClientMsg(ClientID,"Apenas em fadas que auxiliam no ataque.");
		return;
	}
}
void BauDeExperiencia(int ClientID,st_Item *ItemSend)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	
	for(int i=1;i<16;i++)
	{
		if(mobaffectbuffer[ClientID].Affects[i].Master == 39)
		{
			if(mobaffectbuffer[ClientID].Affects[i].Time <= 5394)
			{
				mobaffectbuffer[ClientID].Affects[i].Time += 902;
				SendScore(ClientID);
				Amount(ClientID,ItemSend);
				return;	
			}
			else
			{
				SendClientMsg(ClientID,"Tempo máximo atingido.");
				return;
			}
		}
	}
	for(int i=1;i<16;i++)
	{
		if(mobaffectbuffer[ClientID].Affects[i].Index == 0)
		{
			mobaffectbuffer[ClientID].Affects[i].Index = 39;
			mobaffectbuffer[ClientID].Affects[i].Master = 39;
			mobaffectbuffer[ClientID].Affects[i].Time = 902;
			mobaffectbuffer[ClientID].Affects[i].Value = 39;
			Amount(ClientID,ItemSend);
			SendScore(ClientID);
			break;
		}
	}
	return;
}
void ItensExpQuest(int ClientID,Volatile *v)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	int exp = 0;
	if(ClientID >= 1 && ClientID <= 750)
	{
	if(thisclient->Equip[0].EFV2 != 1)
	{
		SendClientMsg(ClientID,"Apenas mortais.");
		thisclient->Inventory[v->SrcSlot].Index = 0;
		return;
	}
	if(thisclient->bStatus.Level >= 39 && thisclient->bStatus.Level <= 114)
	{
		if(thisclient->Inventory[v->SrcSlot].Index == 4117)
		{
			exp = 100000;
			SendClientMsg(ClientID,"+ + + 100.000 EXP + + +");
			thisclient->Exp += exp;
			if(thisclient->Gold >= 2000000000)
			{
				thisclient->Gold += 10000;
			}
			ExpQuest(ClientID,exp);
		}
	}
	if(thisclient->bStatus.Level >= 115 && thisclient->bStatus.Level <= 189)
	{
		if(thisclient->Inventory[v->SrcSlot].Index == 4118)
		{
			exp = 180000;
			SendClientMsg(ClientID,"+ + + 180.000 EXP + + +");
			thisclient->Exp += exp;
			if(thisclient->Gold >= 2000000000)
			{
				thisclient->Gold += 
			}12500;
			ExpQuest(ClientID,exp);
		}
	}
	if(thisclient->bStatus.Level >= 190 && thisclient->bStatus.Level <= 264)
	{
		if(thisclient->Inventory[v->SrcSlot].Index == 4119)
		{
			exp = 240000;
			SendClientMsg(ClientID,"+ + + 240.000 EXP + + +");
			thisclient->Exp += exp;
			if(thisclient->Gold >= 2000000000)
			{
				thisclient->Gold += 15000;
			}
			ExpQuest(ClientID,exp);
		}
	}
	if(thisclient->bStatus.Level >= 265 && thisclient->bStatus.Level <= 319)
	{
		if(thisclient->Inventory[v->SrcSlot].Index == 4120)
		{
			exp = 320000;
			SendClientMsg(ClientID,"+ + + 320.000 EXP + + +");
			thisclient->Exp += exp;
			if(thisclient->Gold >= 2000000000)
			{
				thisclient->Gold += 17500;
			}
			ExpQuest(ClientID,exp);
		}
	}
	if(thisclient->bStatus.Level >= 320 && thisclient->bStatus.Level <= 350)
	{
		if(thisclient->Inventory[v->SrcSlot].Index == 4121)
		{
			exp = 400000;
			SendClientMsg(ClientID,"+ + + 400.000 EXP + + +");
			thisclient->Exp += exp;
			if(thisclient->Gold >= 2000000000)
			{
				thisclient->Gold += 20000;
			}
			ExpQuest(ClientID,exp);
		}
	}
	SendStats(ClientID);
	SendEquip(ClientID);
	SendScore(ClientID);
	GetCurrentScore(ClientID);
	GetCurrentScore2(ClientID);	
	//Amount(ClientID,ItemSend);
	thisclient->Inventory[v->SrcSlot].Index = 0;
	}
}
void LanHouseA(int ClientID, int SrcSlot)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	if(thisclient->Equip[0].EFV2 >= 3)
	{
		for(int i = 0;i < 2;i++)
			{
	CreateMOB("Gargula_Giga",3866,3683,"Lan-A");
				}
		for(int i = 0;i < 2;i++)
			{
	CreateMOB("Gargula_Giga_",3882,3683,"Lan-A");
				}
		for(int i = 0;i < 2;i++)
			{
	CreateMOB("Gargula_Giga__",3896,3683,"Lan-A");
				}
		for(int i = 0;i < 2;i++)
			{
	CreateMOB("Gargula_Giga___",3911,3683,"Lan-A");
				}
		for(int i = 0;i < 2;i++)
			{
	CreateMOB("Gargula_Giga",3926,3683,"Lan-A");
				}1t);
		Atualizar(ClientID, _inv, SrcSlot);
		return;
	}

	else
	SendClientMsg(ClientID,"Desculpe, somente archs.");
	Atualizar(ClientID, _inv, SrcSlot);
	return;
}
void LanHouseM(int ClientID, int SrcSlot)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	if(thisclient->Equip[0].EFV2 == 2)
	{
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3753,3482,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3783,3482,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3813,3482,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3798,3497,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3767,3496,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3739,3496,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3753,3515,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3782,3512,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3812,3513,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3798,3527,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3767,3528,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3737,3526,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3754,3541,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3784,3542,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3814,3540,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3797,3556,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3767,3557,"Lan-M");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Cav.Caveira_",3738,3557,"Lan-M");
				}
		DoTeleport(ClientID,3780,3524);
		DeleteItem(ClientID,SrcSlot);
		Atualizar(ClientID, _inv, SrcSlot);
		return;
	}

	else
	SendClientMsg(ClientID,"Desculpe, somente archs.");
	Atualizar(ClientID, _inv, SrcSlot);
	return;
}

void LanHouseN(int ClientID, int SrcSlot)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	if(thisclient->Equip[0].EFV2 == 1)
	{
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Taurus_Maldito",3625,3609,"Lan-N");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Taurus_Maldito",3656,3610,"Lan-N");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Taurus_Maldito",3685,3610,"Lan-N");
				}
		for(int i = 0;i < 3;i++)
			{
	CreateMOB("Taurus_Maldito",3670,3625,"Lan-N");
				}
		DoTeleport(ClientID,3651,3651);
		DeleteItem(ClientID,SrcSlot);
		Atualizar(ClientID, _inv, SrcSlot);
		return;
	}
	else
	SendClientMsg(ClientID,"Desculpe, somente mortais.");
	Atualizar(ClientID, _inv, SrcSlot);
	return;
}
void FogosArtif(int ClientID,st_Item *ItemSend)
{
        int num;
        num = rand()  %100;
        if(num >= 0 && num <= 9)
        {
                SendEffect(0,100,ClientID);//laranja
        }
        else if(num >= 10 && num <= 19)
        {
                SendEffect(1,100,ClientID);//verde
        }
        else if(num >= 20 && num <= 29)
        {
                SendEffect(2,100,ClientID);//roxo
        }
        else if(num >= 30 && num <= 39)
        {
                SendEffect(3,100,ClientID);//branco
        }
        else if(num >= 40 && num <= 49)
        {
                SendEffect(4,100,ClientID);//vermelho
        }
        else if(num >= 50 && num <= 59)
        {
                SendEffect(5,100,ClientID);//azul
        }
        else if(num >= 60 && num <= 65)
        {
                SendEffect(0,100,ClientID);//laranja
        }
        else if(num >= 65 && num <= 69)
        {
                SendEffect(1,100,ClientID);//verde
        }
        else if(num >= 70 && num <= 75)
        {
                SendEffect(2,100,ClientID);//roxo
        }
        else if(num >= 75 && num <= 79)
        {
                SendEffect(3,100,ClientID);//branco
        }
        else if(num >= 80 && num <= 85)
        {
                SendEffect(4,100,ClientID);//vermelho
        }
        else if(num >= 85 && num <= 99)
        {
                SendEffect(5,100,ClientID);//azul
        }
}
int racoes(int ClientID,int slot)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	if(PInt(addr_bclient + 0x015C6A84+2) >= 1)
	{
	if(player->Inventory[slot].Index == 2420 && player->Equip[14].Index == 2360)
	{
		//player->Equip[14].EFV1 = 100;
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2421 && player->Equip[14].Index == 2361)
	{
		
		SendItens(ClientID,14);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		Delete(ClientID,slot);
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2422 && player->Equip[14].Index == 2362)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2423 && player->Equip[14].Index == 2363)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2424 && player->Equip[14].Index == 2364)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2425 && player->Equip[14].Index == 2365)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2426 && player->Equip[14].Index >= 2366 && player->Equip[14].Index <= 2375)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2436 && player->Equip[14].Index <= 2376)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2427 && player->Equip[14].Index == 2379)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2428 && player->Equip[14].Index == 2380)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2429 && player->Equip[14].Index >= 2381 && player->Equip[14].Index <= 2383)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2429 && player->Equip[14].Index == 2388)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2430 && player->Equip[14].Index >= 2384 && player->Equip[14].Index <= 2385 && player->Equip[14].Index <= 2386)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2437 && player->Equip[14].Index <= 2377)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2426 && player->Equip[14].Index == 2387)
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2438 && player->Equip[14].Index == 2378)//grande fenrir
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
	if(player->Inventory[slot].Index == 2430 && player->Equip[14].Index == 2386)//grifo sangrento
	{
		
		SendItens(ClientID,14);
		Delete(ClientID,slot);
		if (PInt(addr_bclient + 0x015C6A84+2)+5000<=20000) PInt(addr_bclient + 0x015C6A84+2) += 5000;
		if (PInt(addr_bclient + 0x015C6A84+2)+5000>=20000) PInt(addr_bclient + 0x015C6A84+2) = 20000;  
		if (PInt(addr_bclient + 0x015C6A84+6)+30 <= 100) PInt(addr_bclient + 0x015C6A84+6) += 30 ;
		if (PInt(addr_bclient + 0x015C6A84+6)+30 >= 100) PInt(addr_bclient + 0x015C6A84+6) = 100 ;
		SendItem(ClientID, 1, slot,& player->Inventory[slot]);//1 é inventario 
		return 1;
	}
 }
	return;
}	