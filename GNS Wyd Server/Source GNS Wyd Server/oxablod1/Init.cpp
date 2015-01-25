#include "Stdafx.h"


static int foiounao = 0;

DWORD WINAPI OnTime()
{
	int cMin;
	int cMinQuest = 3;
	int cSeg;

    while(1)
    {
		cMin = PInt(0x00A5EA414);
		cSeg = PInt(0x00A5EA410);
		if(cMin == 4 || cMin == 14 || cMin == 24 || cMin == 34 || cMin == 44 || cMin == 54)
        {
			foiounao = 0;
		}
        if(cMin == 3 || cMin == 13 || cMin == 23 || cMin == 33 || cMin == 43 || cMin == 53)
        {
			//if(cSeg <= 12)
			if(foiounao == 0)
			{
				ClearArea(2426,2133,2379,2076);//Cemiterio 40~116
				ClearArea(2263,1592,2232,1564);//Capa verde 101~150
				ClearArea(2670,2004,2640,1966);//Reset abilidades 75~85
				ClearArea(2257,1728,2228,1700);//Carbuncles 116~191
				ClearArea(1988,1614,1950,1586);//Reset abilidades 125~135
				ClearArea(497,3916,459,3887);//Kaizen 191~266
				ClearArea(703,3762,658,3728);//Hidras 266~321
				ClearArea(1348,4055,1312,4027);//Elfos 321~351
				ClearArea(827,4080,793,4046);//Quest Gargula
				ClearArea(3965,3711,3570,3446);//Lanhouse
				foiounao = 1;
			}
        }
        Sleep(10000); // pausa pra n sobrecarregar cpu
    }
    return 0;
}



void WINAPI CGerarMob()
{
	Sleep(20000);

	//CreateMOB("Uxmal",3295,1692,"pista");

	CreateMOB("NPC_I",1059,1721,"npc");
	CreateMOB("NPC_II",1059,1721,"npc");
	CreateMOB("NPC_III",1053,1721,"npc");
	CreateMOB("NPC_IV",1055,1718,"npc");
	//CreateMOB("NPC_V",2083,2110,"npc");
	//CreateMOB("NPC_VI",2083,2104,"npc");
	//CreateMOB("NPC_VII",2083,2100,"npc");

	CreateMOB("SELL_4",1067,1717,"npc");
	CreateMOB("SELL_3",2501,1714,"npc");
	CreateMOB("SELL_2",2461,2009,"npc");
	CreateMOB("SELL_1",2104,2101,"npc");
	CreateMOB("Arnold",2460,1734,"npc");
	CreateMOB("Ruti",2486,1702,"npc");
	CreateMOB("Lucy",2548,1715,"npc");
	CreateMOB("Tera",2476,1688,"npc");
	CreateMOB("Smith_",2500,1684,"npc");
	CreateMOB("Rapein_",2466,1692,"npc");
	CreateMOB("Arnod_",2466,1686,"npc");
	CreateMOB("Rainy_",2500,1690,"npc");
	CreateMOB("Hera",2595,1724,"npc");
	CreateMOB("Kara",2538,1714,"npc");
	CreateMOB("Knights_Leader",2445,1721,"npc");
	CreateMOB("Shaman",2506,1727,"npc");
	CreateMOB("Jeffi",2515,1727,"npc");
	CreateMOB("Compositor",2530,1733,"npc");
	CreateMOB("Galford",2076,2099,"npc");
	CreateMOB("Aki",2144,2088,"npc");
	CreateMOB("Foema_Ancian",2092,2126,"npc");
	CreateMOB("Guarda_Carga",2144,2082,"npc");
	CreateMOB("Guarda_Carga",2102,2116,"npc");
	CreateMOB("Smith",2146,2116,"npc");
	CreateMOB("Knight_Leader",2144,2122,"npc");
	CreateMOB("ForeLearner",2138,2124,"npc");
	//CreateMOB("Mestre_de_Hab",2148,2068,"npc");
	CreateMOB("Balmus",2107,2144,"npc");
	CreateMOB("Martin",2116,2150,"npc");
	CreateMOB("Arnod",2078,2120,"npc");
	CreateMOB("Mestre_Archi",2078,2124,"npc");
	CreateMOB("reiners",2468,1998,"npc");
	CreateMOB("Mount_Captor",2465,2017,"npc");
	CreateMOB("Mount_Master",2456,2010,"npc");
	CreateMOB("Farche",2465,2004,"npc");
	CreateMOB("Guarda_Carga_",2466,1990,"npc");
	CreateMOB("Ropelion",2467,1995,"npc");
	CreateMOB("Luvian",2469,1991,"npc");
	CreateMOB("Empis",2458,1986,"npc");
	CreateMOB("Premium_Neil",2594,1724,"npc");
	CreateMOB("Agatha",2536,1730,"npc");
	CreateMOB("Lindy",1705,1726,"npc");
	CreateMOB("Lider_Aprend",1705,1725,"npc");
	CreateMOB("Aylin",2529,1724,"npc");
	CreateMOB("Uxmal",3293,1692,"npc");
	CreateMOB("Kibita",2134,2105,"npc");
	CreateMOB("GodGovernment",1052,1717,"npc");
	CreateMOB("Dragao_Prateado",2489,1687,"npc");
	CreateMOB("Tiny",3646,3115,"npc");
	//CreateMOB("Sugyro",3670,3123,"npc");
	CreateMOB("Shany",3655,3117,"npc");
	CreateMOB("Guarda_Carga",3660,3134,"npc");
	CreateMOB("Juli_",3649,3134,"npc");
	CreateMOB("Juli",2481,1646,"npc");
	CreateMOB("Com_Krill",2366,4060,"npc");
	CreateMOB("Guarda_Carga",3242,1683,"npc");
	CreateMOB("Bruce",3637,3119,"npc");
	CreateMOB("Alquimista_Odin",3237,1691,"npc");
	CreateMOB("Ehre",2454,2000,"npc");
	CreateMOB("Restats",2128,2101,"npc");
	
	//CreateMOB("Loja_Fama",2100,2100,"npc");

	//CreateMOB("Set_1",2100,2100,"npc");
	//CreateMOB("Set_2",2100,2100,"npc");

	//Guardas
	CreateMOB("Gate_Keeper",2117,2136,"npc");
	CreateMOB("Gate_Keeper",2111,2136,"npc");
	CreateMOB("Guard",2150,2106,"npc");
	CreateMOB("Guard",2150,2098,"npc");
	CreateMOB("Guard_",2115,2072,"npc");
	CreateMOB("Guard_",2105,2072,"npc");
	CreateMOB("Town_Watcher",2488,1744,"npc");
	CreateMOB("Town_Watcher",2482,1744,"npc");
	CreateMOB("Town_Watcher_",2441,1722,"npc");
	CreateMOB("Town_Watcher_",2441,1715,"npc");
	CreateMOB("Town_Watcher_",2577,1731,"npc");
	CreateMOB("Town_Watcher_",2577,1724,"npc");

	//Quests
	CreateMOB("Guard__",1737,1725,"npc");
	CreateMOB("Guard__",2234,1567,"npc");
	CreateMOB("Guard___",2244,1596,"npc");
	CreateMOB("Coveiro",2373,2098,"npc");
	CreateMOB("Jardineiro",2223,1714,"npc");
	CreateMOB("Patrulha",452,3913,"npc");
	CreateMOB("Patrulha__",669,3769,"npc");
	CreateMOB("Patrulha_",787,4058,"npc");
	CreateMOB("Guarda_Elf",1299,4035,"npc");
	CreateMOB("Unicornio",2181,2106,"npc");
	CreateMOB("Kaizen",1054,1729,"npc");
	CreateMOB("Hidra",1054,1726,"npc");



	//Premium's
	CreateMOB("Premium_Neil",2476,1685,"npc");
	CreateMOB("Premium_Neil",2099,2116,"npc");
	CreateMOB("Premium_Neil",2145,2076,"npc");
	CreateMOB("Premium_Neil",2464,1987,"npc");
	CreateMOB("Premium_Neil",3661,3127,"npc");
	CreateMOB("Premium_Neil",3224,1693,"npc");
	//CreateMOB("Premium_Sell",2094,2098,"npc");

	//outros npc
	CreateMOB("Cristais",2078,2093,"npc");
}

clock_t timer_min = 0;
clock_t timer_sec3 = 0;
static int opas = 0;
DWORD WINAPI CLOCKTIMER()
{
	int cMin = PInt(0x00A5EA414);
	while(1)
    {
		clock_t now = clock();
		if(cMin == 00 || cMin == 15 || cMin == 30 || cMin == 45)
		{
			if(opas == 0)
			{
				timer_sec3 = now;
				timer_min = now;
				opas = 1;
			}
		}
		if((timer_min + 899999) <= now)
		{
			Pista1_clock();
			Pista0_clock();
			timer_min = now;
		}
		if((timer_sec3 + 79999) <= now)
		{
			Pista0_clock1();
			Pista0_clock2();
			timer_sec3 = now;
		}
		Sleep(1000);
	}
}


DWORD WINAPI DanoKefra()
{
	while(1)
	{
		//if(kefr == 1)
		//{
		EffectArea(0x20,2391,3953,2340,3899);
		//}
		Sleep(7000);
	}
}
//Pedras arch
void PedrasArch(int clientid, int DstSlot, int random){
        st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
        char tmp[1024];
        int aux = rand()%4;//rand de 0 a 3
        int cont, ItemID = player->Equip[DstSlot].Index;
 
        if(random < 50 + aux){//aux(0) = 50% ~ aux(3) = 53%;
                player->Equip[DstSlot].Index -= 8;//Tipos 1 e 2.
        }
        else if(random < 71){//aux(0) = 21% ~ aux(3) = 18%;
                                        //Tipo 1: [Pedra_do_Lorde_Orc, Pedra_do_Esqueleto]
                if((ItemID - 1750) < 6){//Tipo 1: [Pedra_de_Dragão_Lich, Pedra_do_Demonlord]                                  
                        cont = ItemID - 1745;
                }
                     //Tipo 2: [Pedra_de_Mantícora, Pedra_de_Gárgula_de_Fogo]
                else{//Tipo 2: [Pedra_do_Lugefer, Pedra_do_Rei_Demonlord]
                        cont = ItemID - 1749;
                }
                if(cont > 7){
                        cont++;
                }
                player->Equip[DstSlot].Index -= cont;
        }
        else if(random < 88 + aux){//aux(0) = 17% ~ aux(3) = 20%;
 
                if((ItemID - 1750) < 6){//Tipo 1
                        cont = ItemID - 1746;
                }
                else{//Tipo 2
                        cont = ItemID - 1750;
                }
                if(cont > 7){
                        cont++;
                }
                player->Equip[DstSlot].Index -= cont;
        }
        else if(random < 95){//aux(0) = 7% ~ aux(3) = 4%;
               
                if((ItemID - 1750) < 6){//Tipo 1
                        cont = ItemID - 1747;
                }
                else{//Tipo 2
                        cont = ItemID - 1751;
                }
                if(cont > 7){
                        cont++;
                }
                player->Equip[DstSlot].Index -= cont;
        }
        else{//Falha = 5%                                           //Por que 94?
                sprintf(tmp, "Criação NÃO sucedida: %d/94", random);//R: o rand()%100 começa no 0 vai até 99 então o 94 é o 95
                SendClientMsg(clientid, tmp);//Da para aumenta +1 ao rand e assim ele começaria do 1 até 100
        }
        if(random < 95){//Para poder mostrar efeito de refinãção sucedida
                SendEffect(3, 0xE, clientid);//Mostrar efeito
                sprintf(tmp, "Criação sucedida: %d/94 Mini-rand: %d", random, aux);//Coloquei para testar
                SendClientMsg(clientid, tmp);
        }
}



void DllInit()
{
	SetDefaultConstants();
	Montarias();
	
	//CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)VerificaSkills, NULL, 0, 0);
    CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)OnTime, NULL, 0, 0);
	//CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)CGerarMob, NULL, 0, 0);
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)CLOCKTIMER, NULL, 0, 0);
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)DanoKefra, NULL, 0, 0);
}