#include "Stdafx.h"

void NPCI(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int bau = GetFirstSlotSADD(clientid, 4052, 64);
	{
	if(bau == -1) {
		SendSay(npcid, "Traga-me a Medalha_Roxa. ");
		return;

	}
	int _rand = rand() % 100;
	if(_rand <= 25) { 
		memset(&player->Inventory[bau], 0, 8);
		player->Inventory[bau].Index = 2405;
		player->Inventory[bau].EF1 = 61;
		player->Inventory[bau].EFV1 = 7;
		SendClientMsg(clientid, "Item Âmago_de_Andaluz_B X7 chegou.");
	} else if(_rand <= 50) {
		memset(&player->Inventory[bau], 0, 8);
		 player->Inventory[bau].Index = 1763;
		SendClientMsg(clientid, "Item Sephirot(Huntress) chegou.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[bau], 0, 8);
		 player->Inventory[bau].Index = 1742;
		SendClientMsg(clientid, "Item Pedra_da_Imortalidade chegou.");
		memset(&player->Inventory[bau], 0, 8);
		 player->Inventory[bau].Index = 697;
		SendClientMsg(clientid, "Item Safira chegou.");
	} else {
		memset(&player->Inventory[bau], 0, 8);
		player->Inventory[bau].Index = 4051;
		SendClientMsg(clientid, "Item Medalha_Dourada chegou.");
	}
	}
	SendSay(npcid, "Troca sucedida.");
	SendSlot(clientid, bau);
	}

void NPCIII(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int Item5 = GetFirstSlotSADD(clientid, 4051, 64);
	{
	if(Item5 == -1) {
		SendSay(npcid, "Traga-me a Medalha_Dourada. ");
		return;
	}
	int _rand = rand() % 100;
	if(_rand <= 25) { 
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 2321;
		SendClientMsg(clientid, "Item Ovo_de_Unicornio chegou.");
	} else if(_rand <= 50) {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 2315;
		SendClientMsg(clientid, "Item Ovo_de_Andaluz_B chegou.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 4029;
		SendClientMsg(clientid, "Item Barra_de_Prata(50Mi) chegou.");
	} else {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 4130;
		SendClientMsg(clientid, "Item Esfera_da_Sorte(A) chegou.");
	}
	}
	SendSay(npcid, "Troca sucedida.");
	SendSlot(clientid, Item5);
	}

void NPCII(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int Item5 = GetFirstSlotSADD(clientid, 473, 64);
	{
	if(Item5 == -1) {
		SendSay(npcid, "Traga-me a Presente_de_Natal. ");
		return;
	}
	int _rand = rand() % 100;
	if(_rand <= 25) { 
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 2113;
        player->Inventory[Item5].EF1 = 2;
        player->Inventory[Item5].EFV1 = 63;
        player->Inventory[Item5].EF2 = 43;
        player->Inventory[Item5].EFV2 = 220;
        player->Inventory[Item5].EF3 = 42;
        player->Inventory[Item5].EFV3 = 40;
		SendClientMsg(clientid, "Item Martelo_Assassino chegou.");
	} else if(_rand <= 50) {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 2142;
        player->Inventory[Item5].EF1 = 2;
        player->Inventory[Item5].EFV1 = 63;
        player->Inventory[Item5].EF2 = 43;
        player->Inventory[Item5].EFV2 = 220;
        player->Inventory[Item5].EF3 = 42;
        player->Inventory[Item5].EFV3 = 40;
		SendClientMsg(clientid, "Item Lança_Relâmpago chegou.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 2123;
	    player->Inventory[Item5].EF1 = 2;
        player->Inventory[Item5].EFV1 = 63;
        player->Inventory[Item5].EF2 = 43;
        player->Inventory[Item5].EFV2 = 220;
        player->Inventory[Item5].EF3 = 42;
        player->Inventory[Item5].EFV3 = 40;
		SendClientMsg(clientid, "Item Arco_Divino chegou.");
	} else {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 4028;
		SendClientMsg(clientid, "Item Barra_de_Prata(10Mi) chegou.");
	}
	}
	SendSay(npcid, "Troca sucedida.");
	SendSlot(clientid, Item5);
	}

void NPCIV (int clientid, int npcid) {
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int bau = GetFirstSlotSADD(clientid, 4902, 64);
	{
		SendSay(npcid, "Traga-me a Grande_Baú_do_Tesouro_III. ");
		return;
	}
	 int _rand = rand() % 100;
		
	 if(_rand <= 25) { 
		memset(&player->Inventory[bau], 0, 8);
		player->Inventory[bau].Index = 3326;
		SendClientMsg(clientid, "Item Pesadelo_(A/Grupo) chegou.");
	} else if(_rand <= 50) {
		memset(&player->Inventory[bau], 0, 8);
		player->Inventory[bau].Index = 3314;
		player->Inventory[bau].Index = 3182;
		player->Inventory[bau].EF1 = 61;
		player->Inventory[bau].EFV1 = 3;
		SendClientMsg(clientid, "Item Frango_Assado chegou.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[bau], 0, 8);
		player->Inventory[bau].Index = 1774;
		SendClientMsg(clientid, "Item Pedra_do_Sábio chegou.");
	} else {
		memset(&player->Inventory[bau], 0, 8);
		player->Inventory[bau].Index = 413;
		SendClientMsg(clientid, "Item Presente_de_Natal chegou.");
	}
	SendSay(npcid, "Troca sucedida.");
	SendSlot(clientid, bau);
	}

void NPCV (int clientid, int npcid) {
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int bau = GetFirstSlotSADD(clientid, 3237, 64);
	int ny = GetFirstSlotSADD(clientid, 3238, 64);
	if(bau == -1) {
		SendSay(npcid, "Preciso de 01 Bau_COD_V.");
		return;
	}
	int _rand = rand() % 100;
	memset(&player->Inventory[bau], 0, 8);
	memset(&player->Inventory[ny], 0, 8);
	if(_rand <= 2) {
		player->Inventory[bau].Index = 4140;
		SendClientMsg(clientid, "Item Baú_de_Experiência Chegou.");

	if(_rand <= 6) {
		player->Inventory[bau].Index = 3314;
		SendClientMsg(clientid, "Item Frango_Assado Chegou.");
	}
	} else if(_rand <= 10) 
	{
		player->Inventory[bau].Index = 2315;
		SendClientMsg(clientid, "Item Ovo_de_Andaluz_B chegou.");
	} else if(_rand <= 5) 
	{
		player->Inventory[bau].Index = 2310;
		SendClientMsg(clientid, "Item SOvo_de_Andaluz_N chegou.");
	}else
	SendSlot(clientid, bau); SendSlot(clientid, ny);
	SendSay(npcid, "Troca sucedida.");
}

void NPCVI(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int bau = GetFirstSlotSADD(clientid, 4902, 64);
	{
		SendSay(npcid, "Traga-me a Grande_Baú_do_Tesouro_III. ");
		return;
	}
	 int _rand = rand() % 100;
		
	 if(_rand <= 25) { 
		memset(&player->Inventory[bau], 0, 8);
		player->Inventory[bau].Index = 3326;
		SendClientMsg(clientid, "Item Pesadelo_(A/Grupo) chegou.");
	} else if(_rand <= 50) {
		memset(&player->Inventory[bau], 0, 8);
		player->Inventory[bau].Index = 3314;
		player->Inventory[bau].Index = 3182;
		player->Inventory[bau].EF1 = 61;
		player->Inventory[bau].EFV1 = 3;
		SendClientMsg(clientid, "Item Frango_Assado chegou.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[bau], 0, 8);
		player->Inventory[bau].Index = 1774;
		SendClientMsg(clientid, "Item Pedra_do_Sábio chegou.");
	} else {
		memset(&player->Inventory[bau], 0, 8);
		player->Inventory[bau].Index = 413;
		SendClientMsg(clientid, "Item Presente_de_Natal chegou.");
	}
	SendSay(npcid, "Troca sucedida.");
	SendSlot(clientid, bau);
	}

void TrocaMedalhas(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int bau = GetFirstSlotSADD(clientid, 473, 64);
	if(bau == -1) {
		SendSay(npcid, "Preciso de Presente_de_Natal.");
	}
	int _rand = rand() % 100;
	if(_rand <= 25) { 
		memset(&player->Inventory[bau], 0, 8);
		player->Inventory[bau].Index = 900;
         player->Inventory[bau].EF1 = 60;
         player->Inventory[bau].EFV1 = 20;
         player->Inventory[bau].EF2 = 43;
         player->Inventory[bau].EFV2 = 220;
         player->Inventory[bau].EF3 = 3;
         player->Inventory[bau].EFV3 = 10;
		SendClientMsg(clientid, "Item Fúria_Divina chegou.");
	} else if(_rand <= 50) {
		memset(&player->Inventory[bau], 0, 8);
		 player->Inventory[bau].Index = 902;
		 player->Inventory[bau].EF1 = 60;
         player->Inventory[bau].EFV1 = 20;
         player->Inventory[bau].EF2 = 43;
         player->Inventory[bau].EFV2 = 220;
         player->Inventory[bau].EF3 = 3;
         player->Inventory[bau].EFV3 = 10;
		SendClientMsg(clientid, "Item Cajado_de_Âmbar chegou.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[bau], 0, 8);
		 player->Inventory[bau].Index = 1710;
	     player->Inventory[bau].EF1 = 60;
         player->Inventory[bau].EFV1 = 20;
         player->Inventory[bau].EF2 = 43;
         player->Inventory[bau].EFV2 = 220;
         player->Inventory[bau].EF3 = 3;
         player->Inventory[bau].EFV3 = 10;
		SendClientMsg(clientid, "Item Escudo_de_Runas chegou.");
	} else {
		memset(&player->Inventory[bau], 0, 8);
		player->Inventory[bau].Index = 473;
		SendClientMsg(clientid, "Item Presente_de_Natal Chegou.");
	} 
	SendSay(npcid, "Troca sucedida.");
	SendSlot(clientid, bau);
}

void PerzenN(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int Item1 = GetFirstSlotSADD(clientid, 4128, 64);
	if(Item1 == -1) {
		SendSay(npcid, "Traga-me A Esfera da Sorte (N) ");
		return;
	}
	int _rand = rand() % 100;
	if(_rand <= 25) { 
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 3986;
		SendClientMsg(clientid, "Item Shire(1Mes) Chegou.");
	} else if(_rand <= 50) {
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 3986;
		SendClientMsg(clientid, "Item Shire(1Mes) Chegou.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 3986;
		SendClientMsg(clientid, "Item Shire(1Mes) Chegou.");
	} else {
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 3986;
		SendClientMsg(clientid, "Item Shire(1Mes) Chegou.");
	} 
	SendSay(npcid, "Troca sucedida.");
	SendSlot(clientid, Item1);
	}

void PerzenM(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int Item1 = GetFirstSlotSADD(clientid, 4129, 64);
	if(Item1 == -1) {
		SendSay(npcid, "Traga-me A Esfera da Sorte (M) ");
		return;
	}
	int _rand = rand() % 100;
	if(_rand <= 25) { 
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 3989;
		SendClientMsg(clientid, "Item Gullfaxi(1Mes) Chegou.");
	} else if(_rand <= 50) {
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 3989;
		SendClientMsg(clientid, "Item Gullfaxi(1Mes) Chegou.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 3989;
		SendClientMsg(clientid, "Item Gullfaxi(1Mes) Chegou.");
	} else {
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 3989;
		SendClientMsg(clientid, "Item Gullfaxi(1Mes) Chegou.");
	} 
	SendSay(npcid, "Troca sucedida.");
	SendSlot(clientid, Item1);
	}

void PerzenA(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int Item1 = GetFirstSlotSADD(clientid, 4130, 64);
	if(Item1 == -1) {
		SendSay(npcid, "Traga-me A Esfera da Sorte (A) ");
		return;
	}
	int _rand = rand() % 100;
	if(_rand <= 25) { 
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 3987;
		SendClientMsg(clientid, "Item Thoroughbred(1Mes) Chegou.");
	} else if(_rand <= 50) {
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 3987;
		SendClientMsg(clientid, "Item Thoroughbred(1Mes) Chegou.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 3987;
		SendClientMsg(clientid, "Item Thoroughbred(1Mes) Chegou.");
	} else {
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 3987;
		SendClientMsg(clientid, "Item Thoroughbred(1Mes) Chegou.");
	} 
	SendSay(npcid, "Troca sucedida.");
	SendSlot(clientid, Item1);
	}

void EventoSemanal(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int Item1 = GetFirstSlotSADD(clientid, 475, 64);
	if(Item1 == -1) {
		SendSay(npcid, "Traga-me a Bau do Tesouro I. ");
		return;
	}
	int _rand = rand() % 100;
	if(_rand <= 25) { 
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 413;
		player->Inventory[Item1].EF1 = 61;
		player->Inventory[Item1].EFV1 = 5;
		SendClientMsg(clientid, "Item Poeira_de_Lactolerium x5 chegou.");
	} else if(_rand <= 50) {
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 4028;
		SendClientMsg(clientid, "Item Moeda_de_Prata(10Mi) chegou.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 1760;
		SendClientMsg(clientid, "Item Sephirot(TransKnight) chegou.");
	} else {
		memset(&player->Inventory[Item1], 0, 8);
		player->Inventory[Item1].Index = 4054;
		SendClientMsg(clientid, "Item Medalha_Azul Chegou.");
	} 
	SendSay(npcid, "Troca sucedida.");
	SendSlot(clientid, Item1);
	}

void EventoSemanal1(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int Item5 = GetFirstSlotSADD(clientid, 475, 64);
	{
	if(Item5 == -1) {
		SendSay(npcid, "Traga-me a Baú_do_Tesouro_I. ");
		return;
	}
	int _rand = rand() % 100;
	if(_rand <= 25) { 
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 4028;
		SendClientMsg(clientid, "Você Recebeu  Moeda_de_Prata(10Mi).");
	} else if(_rand <= 50) {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 412;
		player->Inventory[Item5].EF1 = 61;
		player->Inventory[Item5].EFV1 = 5;
		SendClientMsg(clientid, "Você Recebeu Pac Poeira_de_Oriharucon x5.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 413;
		player->Inventory[Item5].EF1 = 61;
		player->Inventory[Item5].EFV1 = 3;
		SendClientMsg(clientid, "Você Recebeu Pac Poeira_de_Lactolerium x5.");
	} else {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 476;
		SendClientMsg(clientid, "Você Recebeu Baú_do_Tesouro_II.");
	}
	}
	SendSay(npcid, "Parabéns GNS-WSV.");
	SendSlot(clientid, Item5);
	}
	
void EventoSemanal2(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int Item5 = GetFirstSlotSADD(clientid, 476, 64);
	{
	if(Item5 == -1) {
		SendSay(npcid, "Cade O  Baú_do_Tesouro_II ?. ");
		return;
	}
	int _rand = rand() % 100;
	if(_rand <= 25) { 
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 4029;
		SendClientMsg(clientid, "Você Recebeu Barra_de_Prata(50Mi).");
	} else if(_rand <= 50) {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 777;
		player->Inventory[Item5].EF1 = 61;
		player->Inventory[Item5].EFV1 = 5;
		SendClientMsg(clientid, "Você Recebeu Pergaminho_da_Água(M)LV1 X5.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 3314;
		player->Inventory[Item5].EF1 = 61;
		player->Inventory[Item5].EFV1 = 5;
		SendClientMsg(clientid, "Você Recebeu Frango_Assado X5.");
	} else {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 480;
		SendClientMsg(clientid, "Você Recebeu Baú_do_Tesouro_III.");
	}
	}
	SendSay(npcid, "Parabéns GNS-WSV.");
	SendSlot(clientid, Item5);
	}
void EventoSemanal3(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int Item5 = GetFirstSlotSADD(clientid, 480, 64);
	{
	if(Item5 == -1) { 
		return;
	}
	int _rand = rand() % 100;
	if(_rand <= 25) { 
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 4144;
		player->Inventory[Item5].EF1 = 61;
		player->Inventory[Item5].EFV1 = 2;
		SendClientMsg(clientid, "Você Recebeu Baú_de_Experiência x2.");
	} else if(_rand <= 50) {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 1740;
		SendClientMsg(clientid, "Você Recebeu Alma_do_Unicórnio.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 1741;
		SendClientMsg(clientid, "Você Recebeu Alma da Fênix.");
	} else {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 482;
		SendClientMsg(clientid, "Você Recebeu Baú_do_Tesouro_IV.");
	}
	}
	SendSay(npcid, "Parabéns GNS-WSV.");
	SendSlot(clientid, Item5);
	}
void EventoSemanal4(int clientid, int npcid)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int Item5 = GetFirstSlotSADD(clientid, 482, 64);
	{
	if(Item5 == -1) {
		SendSay(npcid, "Cade O Baú_do_Tesouro_IV?. ");
		return;
	}
	int _rand = rand() % 100;
	if(_rand <= 25) { 
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 4010;
		player->Inventory[Item5].EF1 = 61;
		player->Inventory[Item5].EFV1 = 2;
		SendClientMsg(clientid, "Você Recebeu Barra_de_Prata(100Mi).");
	} else if(_rand <= 50) {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 2310;
		SendClientMsg(clientid, "Você Recebeu Ovo_de_Andaluz_N.");
	} else if(_rand <= 75) {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 2315;
		SendClientMsg(clientid, "Você Recebeu Ovo_de_Andaluz_B.");
	} else {
		memset(&player->Inventory[Item5], 0, 8);
		player->Inventory[Item5].Index = 3908;
		SendClientMsg(clientid, "Você Recebeu Fada Vermelha(7dias).");
	}
	}
	SendSay(npcid, "Parabéns GNS-WSV.");
	SendSlot(clientid, Item5);
	}
