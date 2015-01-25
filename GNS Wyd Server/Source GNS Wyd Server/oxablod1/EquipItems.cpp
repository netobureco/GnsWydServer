#include "stdafx.h"

//Criado por Nikkw & shepher
//Source é bem antiga, mas é boa e funcional ^^

#define BancoSlot(clientid, slot) *(unsigned short*)(0x7B31A9C + (slot * 8) + clientid * 0xC4C)
#define Equip_Type 0
#define Inv_Type 1
#define Cargo_Type 2

static int ArmasCeleAnct[] = {3605,3606,3607,3608,3625,3626,3627,3628,3645,3646,3647,3648,3665,3666,3667,3668,3685,3686,3687,3688,3705,3706,3707,3708,3729,3730,3731,3732,3733,3734,3735,3736,3765,3766,3767,3768,3785,3786,3787,3788};//40
static int ArmasCeleSelada[] = {1901,1902,1903,1904,1905,1906,1907,1908,1909,1910};//10
static int SetsCele[] = {1230,1231,1232,1233,1365,1366,1367,1368,1515,1516,1517,1518,1665,1666,1667,1668};//16
static int SetsCeleSelado[] = {1234,1235,1236,1237,1369,1370,1371,1372,1519,1520,1521,1522,1669,1670,1671,1672};//16
static int ArmasArchNaoAnct[] = {811,826,841,856,871,886,903,904,912,937};//10
static int ArmasArchAnct[] = {2491,2492,2493,2494,2551,2552,2553,2554,2611,2612,2613,2614,2671,2672,2673,2674,2731,2732,2733,2734,2791,2792,2793,2794,2859,2860,2861,2862,2863,2864,2865,2866,2895,2896,2897,2898,2935,2936,2937,2938};//40
static int SetsArch[] = {1221,1222,1223,1224,1356,1357,1358,1359,1506,1507,1508,1509,1656,1657,1658,1659};//16
static int ArmasENaoAnct[] = {3551,3556,3561,3566,3571,3576,3581,3582,3591,3596};//10
static int ArmasEAnct[] = {3601,3602,3603,3604,3621,3622,3623,3624,3641,3642,3643,3644,3661,3662,3663,3664,3681,3682,3683,3684,3701,3702,3703,3704,3721,3722,3723,3724,3725,3726,3727,3728,3761,3762,3763,3764,3781,3782,3783,3784};//40
static int MontaTigre[] = {2319,2349,2379};//3
static int MontaDrag[] = {2317,2320,2347,2350,2377,2380};//6
static int MontariasDiversas[] = {2360,2361,2362,2363,2364,2365,2366,2367,2368,2369,2370,2371,2372,2373,2374,2375,2376,2381,2382,2383,2384,2385,2386,2387,2388,2330,2331,2332,2333,2334,2335,2336,2337,2338,2339,2340,2341,2342,2343,2344,2345,2346,2351,2352,2353,2354,2355,2356,2357,2358,2359};

void MoveItem1(unsigned char* szBuffer)
{	
	try
	{
		p376 *p = (p376*)szBuffer;
		st_Mob *player = (st_Mob*)GetMobFromIndex((unsigned short)szBuffer[6]);	
	
		if(p->SrcType == Cargo_Type && p->DstType == Equip_Type)
		{
			if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == 747)
			{
				SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar a coroa.");
				ZeroMemory(szBuffer, *(short*)szBuffer); return;						
			}
			else if(player->Equip[0].EFV2 == 1)
			{
				for(int i = 0; i < 16; i++)
				{
					if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == SetsCele[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar sets celestiais em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
					else if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == SetsCeleSelado[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar sets celestiais selados em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
					else if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == SetsArch[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar sets archs em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 3; i++)
				{
					if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == MontaTigre[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar a montaria Tigre de Fogo em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 6; i++)
				{
					if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == MontaDrag[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar a montaria Dragão em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 40; i++)
				{
					if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == ArmasCeleAnct[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas celestiais em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
					else if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == ArmasArchAnct[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas archs em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 10; i++)
				{
					if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == ArmasCeleSelada[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas celestiais seladas em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;			
					}
					else if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == ArmasArchNaoAnct[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas archs em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
			}
			else if(player->Equip[0].EFV2 == 2)
			{
				for(int i = 0; i < 16; i++)
				{
					if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == SetsCele[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar sets celestiais em archs.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
					else if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == SetsCeleSelado[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar sets celestiais selados em archs.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 40; i++)
				{
					if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == ArmasCeleAnct[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas celestiais em archs.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
					else if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == ArmasEAnct[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas [E] em archs.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 10; i++)
				{
					if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == ArmasCeleSelada[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas celestiais seladas em archs.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
					if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == ArmasENaoAnct[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas [E] em archs.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;			
					}
				}
			}
			else if(player->Equip[0].EFV2 >= 3 && player->Equip[0].EFV2 <= 5)
			{
				for(int i = 0; i < 40; i++)
				{				
					if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == ArmasEAnct[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas [E] em sua classe.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 10; i++)
				{
					if(BancoSlot((unsigned short)szBuffer[6],p->SrcSlot) == ArmasENaoAnct[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas [E] em sua classe.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
			}
		}
		else if(p->SrcType == Equip_Type && p->DstType == Inv_Type)//do equip pro inv
		{
			if(player->Equip[p->SrcSlot].Index == 747)
			{
				SendClientMessage((unsigned short)szBuffer[6],"Não é possivel desequipar a coroa.");
				ZeroMemory(szBuffer, *(short*)szBuffer); return;						
			}
			else if(p->SrcSlot == 15)//medalha capa
			{
				ZeroMemory(szBuffer, p->Header.Size);	return;		
			}
			else if(p->SrcSlot == 12)
			{
				SendClientMessage((unsigned short)szBuffer[6],"Para retirar sua medalha de guilda use /Expulsar");
				ZeroMemory(szBuffer, *(short*)szBuffer); return;						
			}
		}
		else if(p->SrcType == Equip_Type && p->DstSlot == Cargo_Type)//do equip pro banco
		{
			if(player->Equip[p->SrcType].Index == 747 || player->Equip[p->SrcType].Index == 5447 || player->Equip[p->SrcType].Index == 5446 || player->Equip[p->SrcType].Index == 5445 || player->Equip[p->SrcType].Index == 5444  || player->Equip[p->SrcType].Index == 3507  || player->Equip[p->SrcType].Index == 3506  || player->Equip[p->SrcType].Index == 3505  || player->Equip[p->SrcType].Index == 3504  || player->Equip[p->SrcType].Index == 3503  || player->Equip[p->SrcType].Index == 3502  || player->Equip[p->SrcType].Index == 3501   || player->Equip[p->SrcType].Index == 3500)
			{
				SendClientMessage((unsigned short)szBuffer[6],"Não é possivel desequipar a coroa e cytheras.");
				ZeroMemory(szBuffer, *(short*)szBuffer); return;						
			}
		}
		else if(p->SrcType == Inv_Type && p->DstType == Equip_Type)//do inv pro equip
		{
			if(player->Inventory[p->SrcSlot].Index == 747 || player->Inventory[p->SrcSlot].Index == 5447 || player->Inventory[p->SrcSlot].Index == 5446 || player->Inventory[p->SrcSlot].Index == 5445 || player->Inventory[p->SrcSlot].Index == 5444 || player->Inventory[p->SrcSlot].Index == 3507 || player->Inventory[p->SrcSlot].Index == 3506 || player->Inventory[p->SrcSlot].Index == 3505 || player->Inventory[p->SrcSlot].Index == 3504 || player->Inventory[p->SrcSlot].Index == 3503 || player->Inventory[p->SrcSlot].Index == 3502 || player->Inventory[p->SrcSlot].Index == 3501 || player->Inventory[p->SrcSlot].Index == 3500)
			{
				SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar a coroa e cytheras");
				ZeroMemory(szBuffer, *(short*)szBuffer); return;						
			}
			else if(player->Equip[0].EFV2 == 1)
			{
				for(int i = 0; i < 16; i++)
				{
					if(player->Inventory[p->SrcSlot].Index == SetsCele[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar sets celestiais em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
					else if(player->Inventory[p->SrcSlot].Index == SetsCeleSelado[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar sets celestiais selados em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
					else if(player->Inventory[p->SrcSlot].Index == SetsArch[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar sets archs em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 3; i++)
				{
					if(player->Inventory[p->SrcSlot].Index == MontaTigre[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar a montaria Tigre de Fogo em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 6; i++)
				{
					if(player->Inventory[p->SrcSlot].Index == MontaDrag[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar a montaria Dragão em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 40; i++)
				{
					if(player->Inventory[p->SrcSlot].Index == ArmasCeleAnct[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas celestiais em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
					else if(player->Inventory[p->SrcSlot].Index == ArmasArchAnct[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas archs em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 10; i++)
				{
					if(player->Inventory[p->SrcSlot].Index == ArmasCeleSelada[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas celestiais seladas em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;			
					}
					if(player->Inventory[p->SrcSlot].Index == ArmasArchNaoAnct[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas archs em mortais.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
			}
			else if(player->Equip[0].EFV2 == 2)
			{
				for(int i = 0; i < 16; i++)
				{
					if(player->Inventory[p->SrcSlot].Index == SetsCele[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar sets celestiais em archs.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
					else if(player->Inventory[p->SrcSlot].Index == SetsCeleSelado[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar sets celestiais selados em archs.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 40; i++)
				{
					if(player->Inventory[p->SrcSlot].Index == ArmasCeleAnct[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas celestiais em archs.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
					else if(player->Inventory[p->SrcSlot].Index == ArmasEAnct[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas [E] em archs.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 10; i++)
				{
					if(player->Inventory[p->SrcSlot].Index == ArmasCeleSelada[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas celestiais seladas em archs.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
					if(player->Inventory[p->SrcSlot].Index == ArmasENaoAnct[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas [E] em archs.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;			
					}
				}
			}
			else if(player->Equip[0].EFV2 >= 3 && player->Equip[0].EFV2 <= 5)
			{
				for(int i = 0; i < 40; i++)
				{				
					if(player->Inventory[p->SrcSlot].Index == ArmasEAnct[i])
					{
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas [E] em sua classe.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
				for(int i = 0; i < 10; i++)
				{
					if(player->Inventory[p->SrcSlot].Index == ArmasENaoAnct[i])
					{				
						SendClientMessage((unsigned short)szBuffer[6],"Não é possivel equipar armas [E] em sua classe.");
						ZeroMemory(szBuffer, *(short*)szBuffer); return;				
					}
				}
			}		
		}
	}
	catch(...)
	{
		//LogError(szBuffer);
	}
}