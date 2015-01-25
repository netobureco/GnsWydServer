#include "Stdafx.h"


BOOL entradas = TRUE;
void Quest_Cemiterio(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itenslot = GetFirstSlotSADD(ClientID,4038,64);
	if(player->Equip[0].EFV2 == 1)
	{
		if(player->bStatus.Level >= 39 && player->bStatus.Level <= 114)
		{
			if(entradas == TRUE)
			{
				SendSay(npcid,"Quest [Defensor da Alma] foi iniciada.");
				DoTeleport(ClientID,2398,2105);
				SaveChar(1,ClientID);
				return;
			}
			if(itenslot != -1)
			{
				SendSay(npcid,"Quest [Defensor da Alma] foi iniciada.");
				DoTeleport(ClientID,2398,2105);
				player->Inventory[itenslot].Index = 0;
				SendALL(ClientID);
				SaveChar(1,ClientID);
				return;
			}
			else
			{
				SendSay(npcid, "Você não possui a Vela do Coveiro.");
			}
		}
		else
		{
			SendSay(npcid,"Level Inadequado (Lv 40~116)");
		}
	}
	else
	{
		SendSay(npcid,"Somente mortais.");
	}
	return;
}

void Quest_Jardim(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itenslot = GetFirstSlotSADD(ClientID,4039,64);
	if(player->Equip[0].EFV2 == 1)
	{
		if(player->bStatus.Level >= 115 && player->bStatus.Level <= 189)
		{
			if(entradas == TRUE)
			{
				SendSay(npcid,"Quest [Jardim dos Deuses] foi iniciada.");
				DoTeleport(ClientID,2234,1714);
				SaveChar(1,ClientID);
				return;
			}
			if(itenslot != -1)
			{
				SendSay(npcid,"Quest [Jardim dos Deuses] foi iniciada.");
				DoTeleport(ClientID,2234,1714);
				player->Inventory[itenslot].Index = 0;
				SendALL(ClientID);
				SaveChar(1,ClientID);
				return;
			}
			else
			{
				SendSay(npcid,"Você não possui a Colheita do Jardineiro.");
			}
		}
		else
		{
			SendSay(npcid,"Level Inadequado (Lv 116~191)");
		}
	}
	else
	{
		SendSay(npcid,"Somente mortais.");
	}
	return;
}
void Quest_Kaizen(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itenslot = GetFirstSlotSADD(ClientID,4040,64);
	if(player->Equip[0].EFV2 == 1)
	{
		if(player->bStatus.Level >= 190 && player->bStatus.Level <= 264)
		{
			if(entradas == FALSE)
			{
				SendSay(npcid,"Quest [Ressu. Cav. Negro] foi iniciada.");
				DoTeleport(ClientID,464,3902);
				SaveChar(1,ClientID);
				return;
			}
			if(itenslot != -1)
			{
				SendSay(npcid,"Quest [Ressu. Cav. Negro] foi iniciada.");
				DoTeleport(ClientID,464,3902);
				player->Inventory[itenslot].Index = 0;
				SendALL(ClientID);
				SaveChar(1,ClientID);
				return;
			}
			else
			{
				SendSay(npcid,"Você não possui a Cura do Batedor.");
			}
		}
		else
		{
			SendSay(npcid,"Level Inadequado (Lv 191~266)");
		}
	}
	else
	{
		SendSay(npcid,"Somente mortais.");
	}
	return;
}
void Quest_Hidra(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itenslot = GetFirstSlotSADD(ClientID,4041,64);
	if(player->Equip[0].EFV2 == 1)
	{
		if(player->bStatus.Level >= 265 && player->bStatus.Level <= 319)
		{
			if(entradas == FALSE)
			{
				SendSay(npcid,"Quest [Hidra Imortal] foi iniciada.");
				DoTeleport(ClientID,668,3756);
				SaveChar(1,ClientID);
				return;
			}
			if(itenslot != -1)
			{
				SendSay(npcid,"Quest [Hidra Imortal] foi iniciada.");
				DoTeleport(ClientID,668,3756);
				player->Inventory[itenslot].Index = 0;
				SendALL(ClientID);
				SaveChar(1,ClientID);
				return;
			}
			else
			{
				SendSay(npcid,"Você não possui a Mana do Batedor.");
			}
		}
		else
		{
			SendSay(npcid,"Level Inadequado (Lv 266~321)");
		}
	}
	else
	{
		SendSay(npcid,"Somente mortais.");
	}
	return;
}
void Quest_Elfo(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itenslot = GetFirstSlotSADD(ClientID,4042,64);
	if(player->Equip[0].EFV2 == 1)
	{
		if(player->bStatus.Level >= 320 && player->bStatus.Level <= 349)
		{
			if(entradas == FALSE)
			{
				SendSay(npcid,"Quest [Inicio da Infelicidade] foi iniciada.");
				DoTeleport(ClientID, 1322,4041);
				SaveChar(1,ClientID);
				return;
			}
			if(itenslot != -1)
			{
				SendSay(npcid,"Quest [Inicio da Infelicidade] foi iniciada.");
				DoTeleport(ClientID, 1322,4041);
				player->Inventory[itenslot].Index = 0;
				SendALL(ClientID);
				SaveChar(1,ClientID);
				return;
			}
			else
			{
				SendSay(npcid,"Você não possui o Emblema do Guarda.");
			}
		}
		else
		{
			SendSay(npcid,"Level Inadequado (Lv 321~365)");
		}
	}
	else
	{
		SendSay(npcid,"Somente mortais.");
	}
	return;
}

void ModeQuest(int ClientID)
{
	if(entradas == TRUE)
	{
		entradas = FALSE;
		SendClientMsg(ClientID,"Entradas de Quest DESATIVADAS !");
		return;
	}
	if(entradas == FALSE)
	{
		entradas = TRUE;
		SendClientMsg(ClientID,"Entradas de Quest ATIVADAS !");
		return;
	}
	return;
}

void Agatha(unsigned char* szBuffer)//unsigned char* szBuffer
{
	Agathas *c = (Agathas*)szBuffer;
	MOB *player = (MOB*)GetMobFromIndex(c->Header.ClientID);
	int num1;
	char ref[120];
	srand(time(NULL));
	num1 = rand() % 100;
	int item0 = GetFirstSlot(c->Header.ClientID,c->Itens[0].Index,c->Itens[0].EF1,c->Itens[0].EFV1,c->Itens[0].EF2,c->Itens[0].EFV2,c->Itens[0].EF3,c->Itens[0].EFV3,64);
	int item1 = GetFirstSlot(c->Header.ClientID,c->Itens[1].Index,c->Itens[1].EF1,c->Itens[1].EFV1,c->Itens[1].EF2,c->Itens[1].EFV2,c->Itens[1].EF3,c->Itens[1].EFV3,64);
	int item2 = GetFirstSlot(c->Header.ClientID,c->Itens[2].Index,c->Itens[2].EF1,c->Itens[2].EFV1,c->Itens[2].EF2,c->Itens[2].EFV2,c->Itens[2].EF3,c->Itens[2].EFV3,64);
	if(item0 == -1)
	{
		return;
	}
	if(item1 == -1)
	{
		return;
	}
	if(item2 == -1)
	{
		return;
	}
	if(c->Itens[2].Index != 3140)
	{
		return;
	}
	if(c->Itens[0].Index >= 1221 && c->Itens[0].Index <= 1224)
	{
		goto ADD;
	}
	if(c->Itens[0].Index >= 1356 && c->Itens[0].Index <= 1359)
	{
		goto ADD;
	}
	if(c->Itens[0].Index >= 1506 && c->Itens[0].Index <= 1509)
	{
		goto ADD;
	}
	if(c->Itens[0].Index >= 1656 && c->Itens[0].Index <= 1659)
	{
		goto ADD;
	}
	return;

ADD:
	if(c->Itens[1].Index >= 1206 && c->Itens[1].Index <= 1220)
	{
		goto chance1;
	}
	if(c->Itens[1].Index >= 1341 && c->Itens[1].Index <= 1355)
	{
		goto chance1;
	}
	if(c->Itens[1].Index >= 1491 && c->Itens[1].Index <= 1505)
	{
		goto chance1;
	}
	if(c->Itens[1].Index >= 1641 && c->Itens[1].Index <= 1655)
	{
		goto chance1;
	}
	if(c->Itens[1].Index >= 2186 && c->Itens[1].Index <= 2190)
	{
		goto chance2;
	}
	if(c->Itens[1].Index >= 2206 && c->Itens[1].Index <= 2210)
	{
		goto chance2;
	}
	if(c->Itens[1].Index >= 2226 && c->Itens[1].Index <= 2230)
	{
		goto chance2;
	}
	if(c->Itens[1].Index >= 2246 && c->Itens[1].Index <= 2250)
	{
		goto chance2;
	}
	return;

chance1:
	if(num1 <= 30)
	{
		sprintf(BufferLoop,"Sucesso na composição ! (%d/61)",num1);
		goto sucess;
	}
	else
	{
		SendClientMsg(c->Header.ClientID,"Falha na composição.");
		player->Inventory[item0].Index = 0;
		GetRemoItem(c->Header.ClientID,3140,3);
		SendClientSignalParm(c->Header.ClientID, 0x7530, 0x3a7, 0);
		SendALL(c->Header.ClientID);
	}
	return;

chance2:
	if(num1 <= 45)
	{
		sprintf(BufferLoop,"Sucesso na composição ! (%d/61)",num1);
		goto sucess;
	}
	else
	{
		SendClientMsg(c->Header.ClientID,"Falha na composição.");
		player->Inventory[item0].Index = 0;
		GetRemoItem(c->Header.ClientID,3140,3);
		SendClientSignalParm(c->Header.ClientID, 0x7530, 0x3a7, 0);
		SendALL(c->Header.ClientID);
	}
	return;

sucess:
	player->Inventory[item0].EF1 = 43;
	player->Inventory[item0].EFV1 = 4;
	player->Inventory[item0].EF2 = c->Itens[1].EF2;
	player->Inventory[item0].EFV2 = c->Itens[1].EFV2;
	player->Inventory[item0].EF3 = c->Itens[1].EF3;
	player->Inventory[item0].EFV3 = c->Itens[1].EFV3;
	player->Inventory[item1].Index = 0;
	GetRemoItem(c->Header.ClientID,3140,3);
	SendClientMsg(c->Header.ClientID,BufferLoop);
	SendClientSignalParm(c->Header.ClientID, 0x7530, 0x3a7, 0);
	SendALL(c->Header.ClientID);
}
void Ehre(unsigned char* m_PacketBuffer)
 {
        st_Mob *player = (st_Mob*)GetMobFromIndex(*(short*)&m_PacketBuffer[6]);
        char tmp[1024];
        short clientid = *(short*)&m_PacketBuffer[6];
        if(clientid < 0 || clientid > 98)
                return;
 
        short emb1 = m_PacketBuffer[76];
        short emb2 = m_PacketBuffer[77];
        short item = m_PacketBuffer[78];
        static const int critico[3] = {663 ,42, 10};
        static const int hp[3] = {662, 4, 20};
        static const int mp[3] = {661, 5, 20};
 
        srand(time(NULL));
        if((player->Inventory[emb1].Index == critico[0]) || (player->Inventory[emb1].Index == hp[0]) ||
                (player->Inventory[emb1].Index == mp[0]) || (player->Inventory[emb2].Index == critico[0]) ||
                (player->Inventory[emb2].Index == hp[0]) || (player->Inventory[emb2].Index == mp[0]))
        { // 2 Ankhs da Glória
                int ADD = GetItemADDInventory(clientid, emb1, 43);
                int ADD2 = GetItemADDInventory(clientid, emb2, 43);
                if((ADD == 9) && (ADD2 == 9))
                { // Itens +9
                        if(player->Inventory[item].Index == 633)
                        { // Espiritual
                                int ADD3 = GetItemADDInventory(clientid, item, 43);
                                if(ADD3 == 9)
                                {
                                        if((GetItemADDInventory(clientid, item, 42) <= 40) || (GetItemADDInventory(clientid, item, 4) <= 100) ||
                                                (GetItemADDInventory(clientid, item, 5) <= 100))
                                        {
                                                int chance = rand() % 100;
                                                if(chance <= 50)
                                                { // Sucesso
                                                        player->Inventory[item].Index = 633;
                                                        if(player->Inventory[emb1].Index == critico[0]) {
                                                                if(GetItemADDInventory(clientid, item, critico[1]) != 0)
                                                                {
                                                                        if(player->Inventory[item].EF1 == critico[1])
                                                                        {       player->Inventory[item].EF1 = critico[1];
                                                                                player->Inventory[item].EFV1 += critico[2];
                                                                        } else if(player->Inventory[item].EF2 == critico[1]) { 
                                                                                player->Inventory[item].EF2 = critico[1];
                                                                                player->Inventory[item].EFV2 += critico[2];
                                                                        } else if(player->Inventory[item].EF3 == critico[1]) {
                                                                                player->Inventory[item].EF3 = critico[1];
                                                                                player->Inventory[item].EFV3 += critico[2];
                                                                        }
                                                                } else {
                                                                        if(player->Inventory[item].EF1 == 0) {
                                                                                player->Inventory[item].EF1 = critico[1];
                                                                                player->Inventory[item].EFV1 += critico[2];
                                                                        } else if(player->Inventory[item].EF2 == 0) {
                                                                                player->Inventory[item].EF2 = critico[1];
                                                                                player->Inventory[item].EFV2 += critico[2];
                                                                        } else if(player->Inventory[item].EF3 == 0) {
                                                                                player->Inventory[item].EF3 = critico[1];
                                                                                player->Inventory[item].EFV3 += critico[2];
                                                                        }
                                                                }
                                                        }
                                                        if(player->Inventory[emb1].Index == hp[0]) {
                                                                if(GetItemADDInventory(clientid, item, hp[1]) != 0)
                                                                {
                                                                        if(player->Inventory[item].EF1 == hp[1])
                                                                        {       player->Inventory[item].EF1 = hp[1];
                                                                                player->Inventory[item].EFV1 += hp[2];
                                                                        } else if(player->Inventory[item].EF2 == hp[1]) {      
                                                                                player->Inventory[item].EF2 = hp[1];
                                                                                player->Inventory[item].EFV2 += hp[2];
                                                                        } else if(player->Inventory[item].EF3 == hp[1]) {
                                                                                player->Inventory[item].EF3 = hp[1];
                                                                                player->Inventory[item].EFV3 += hp[2];
                                                                        }
                                                                } else {
                                                                        if(player->Inventory[item].EF1 == 0) {
                                                                                player->Inventory[item].EF1 = hp[1];
                                                                                player->Inventory[item].EFV1 += hp[2];
                                                                        } else if(player->Inventory[item].EF2 == 0) {
                                                                                player->Inventory[item].EF2 = hp[1];
                                                                                player->Inventory[item].EFV2 += hp[2];
                                                                        } else if(player->Inventory[item].EF3 == 0) {
                                                                                player->Inventory[item].EF3 = hp[1];
                                                                                player->Inventory[item].EFV3 += hp[2];
                                                                        }
                                                                }
                                                        }
                                                        if(player->Inventory[emb1].Index == mp[0]) {
                                                                if(GetItemADDInventory(clientid, item, mp[1]) != 0)
                                                                {
                                                                        if(player->Inventory[item].EF1 == mp[1])
                                                                        {       player->Inventory[item].EF1 = mp[1];
                                                                                player->Inventory[item].EFV1 += mp[2];
                                                                        } else if(player->Inventory[item].EF2 == mp[1]) {      
                                                                                player->Inventory[item].EF2 = mp[1];
                                                                                player->Inventory[item].EFV2 += mp[2];
                                                                        } else if(player->Inventory[item].EF3 == mp[1]) {
                                                                                player->Inventory[item].EF3 = mp[1];
                                                                                player->Inventory[item].EFV3 += mp[2];
                                                                        }
                                                                } else {
                                                                        if(player->Inventory[item].EF1 == 0) {
                                                                                player->Inventory[item].EF1 = mp[1];
                                                                                player->Inventory[item].EFV1 += mp[2];
                                                                        } else if(player->Inventory[item].EF2 == 0) {
                                                                                player->Inventory[item].EF2 = mp[1];
                                                                                player->Inventory[item].EFV2 += mp[2];
                                                                        } else if(player->Inventory[item].EF3 == 0) {
                                                                                player->Inventory[item].EF3 = mp[1];
                                                                                player->Inventory[item].EFV3 += mp[2];
                                                                        }
                                                                }
                                                        }
                                                        if(player->Inventory[emb2].Index == critico[0]) {
                                                                if(GetItemADDInventory(clientid, item, critico[1]) != 0)
                                                                {
                                                                        if(player->Inventory[item].EF1 == critico[1])
                                                                        {       player->Inventory[item].EF1 = critico[1];
                                                                                player->Inventory[item].EFV1 += critico[2];
                                                                        } else if(player->Inventory[item].EF2 == critico[1]) { 
                                                                                player->Inventory[item].EF2 = critico[1];
                                                                                player->Inventory[item].EFV2 += critico[2];
                                                                        } else if(player->Inventory[item].EF3 == critico[1]) {
                                                                                player->Inventory[item].EF3 = critico[1];
                                                                                player->Inventory[item].EFV3 += critico[2];
                                                                        }
                                                                } else {
                                                                        if(player->Inventory[item].EF1 == 0) {
                                                                                player->Inventory[item].EF1 = critico[1];
                                                                                player->Inventory[item].EFV1 += critico[2];
                                                                        } else if(player->Inventory[item].EF2 == 0) {
                                                                                player->Inventory[item].EF2 = critico[1];
                                                                                player->Inventory[item].EFV2 += critico[2];
                                                                        } else if(player->Inventory[item].EF3 == 0) {
                                                                                player->Inventory[item].EF3 = critico[1];
                                                                                player->Inventory[item].EFV3 += critico[2];
                                                                        }
                                                                }
                                                        }
                                                        if(player->Inventory[emb2].Index == hp[0]) {
                                                                if(GetItemADDInventory(clientid, item, hp[1]) != 0)
                                                                {
                                                                        if(player->Inventory[item].EF1 == hp[1])
                                                                        {       player->Inventory[item].EF1 = hp[1];
                                                                                player->Inventory[item].EFV1 += hp[2];
                                                                        } else if(player->Inventory[item].EF2 == hp[1]) {      
                                                                                player->Inventory[item].EF2 = hp[1];
                                                                                player->Inventory[item].EFV2 += hp[2];
                                                                        } else if(player->Inventory[item].EF3 == hp[1]) {
                                                                                player->Inventory[item].EF3 = hp[1];
                                                                                player->Inventory[item].EFV3 += hp[2];
                                                                        }
                                                                } else {
                                                                        if(player->Inventory[item].EF1 == 0) {
                                                                                player->Inventory[item].EF1 = hp[1];
                                                                                player->Inventory[item].EFV1 += hp[2];
                                                                        } else if(player->Inventory[item].EF2 == 0) {
                                                                                player->Inventory[item].EF2 = hp[1];
                                                                                player->Inventory[item].EFV2 += hp[2];
                                                                        } else if(player->Inventory[item].EF3 == 0) {
                                                                                player->Inventory[item].EF3 = hp[1];
                                                                                player->Inventory[item].EFV3 += hp[2];
                                                                        }
                                                                }
                                                        }
                                                        if(player->Inventory[emb2].Index == mp[0]) {
                                                                if(GetItemADDInventory(clientid, item, mp[1]) != 0)
                                                                {
                                                                        if(player->Inventory[item].EF1 == mp[1])
                                                                        {       player->Inventory[item].EF1 = mp[1];
                                                                                player->Inventory[item].EFV1 += mp[2];
                                                                        } else if(player->Inventory[item].EF2 == mp[1]) {      
                                                                                player->Inventory[item].EF2 = mp[1];
                                                                                player->Inventory[item].EFV2 += mp[2];
                                                                        } else if(player->Inventory[item].EF3 == mp[1]) {
                                                                                player->Inventory[item].EF3 = mp[1];
                                                                                player->Inventory[item].EFV3 += mp[2];
                                                                        }
                                                                } else {
                                                                        if(player->Inventory[item].EF1 == 0) {
                                                                                player->Inventory[item].EF1 = mp[1];
                                                                                player->Inventory[item].EFV1 += mp[2];
                                                                        } else if(player->Inventory[item].EF2 == 0) {
                                                                                player->Inventory[item].EF2 = mp[1];
                                                                                player->Inventory[item].EFV2 += mp[2];
                                                                        } else if(player->Inventory[item].EF3 == 0) {
                                                                                player->Inventory[item].EF3 = mp[1];
                                                                                player->Inventory[item].EFV3 += mp[2];
                                                                        }
                                                                }
                                                        }      
                                                        SendClientSignalParm(clientid,SERVER_SIDE, 0x3A7, 2);
                                                        SendClientMsg(clientid,"Composição concluída com sucesso");
                                                } else if(chance > 40)
                                                {
                                                        ZeroSlot(item);
                                                        SendClientSignalParm(clientid,SERVER_SIDE, 0x3A7, 2);
                                                        SendClientMsg(clientid, "Houve falha na composição");
                                                }
                                                ZeroSlot(emb1);
                                                ZeroSlot(emb2);
                                                SendSlot(clientid, emb2);
                                                SendSlot(clientid, emb1);
                                                SendSlot(clientid, item);
                                        } else {
                                                SendClientMsg(clientid, "O item atingiu o limite de seu adicional");
                                                return;
                                        }
                                } else {
                                        SendClientMsg(clientid, "Apenas para itens +9");
                                        return;
                                }
                        } else {
                                SendClientMsg(clientid, "Adicione a [Pedra Espiritual F]");
                                return;
                        }
                } else {
                        SendClientMsg(clientid, "Necessário itens +9");
                        return;
                }
        }
}


 void RefinacaoAbencoada(unsigned char* m_PacketBuffer)
{

	FILE * pFile;
	time_t rawtime; 
	struct tm * timeinfo;
	char tmp[1024];
	char tmp2[1024];
	MOB *thisclient = (MOB*)GetMobFromIndex(Client);
	MOB *player = (MOB*)GetMobFromIndex(GetOffset(6));
	short clientid = GetOffset(6);
	short emb1 = GetOffset(76);
	short emb2 = GetOffset(77);
	short item = GetOffset(78);
	if(thisclient->Equip[0].EFV2 >= 3 || thisclient->Equip[0].EFV3 >= 3 || thisclient->Equip[0].EFV1 >= 3 )

	{
	if(player->Exp <= 2400000000)
	{
	SendClientMsg(clientid,"Você não possui a expereiencia necessaria.");
	SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
	return;
	}
	{
if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 3338 && player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 0)
	{
	
		//player->Inventory[emb1].Index = 3338;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 += 1;
		player->Inventory[item].EF2 = 0;
		player->Inventory[item].EFV2 = 0;
		player->Inventory[item].EF3 = 0;
		player->Inventory[item].EFV3 = 0;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Exp -= 10000000;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa, Foram reduzidos 1 Milhão de Experiência.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		 time ( &rawtime );
		char tmp[1024];
        sprintf(tmp, "DataBase\\Logs\\RefinacaoAbencoada\\[%s].ini",player->Name);
        timeinfo = localtime ( &rawtime );
        pFile = fopen(tmp, "a");
        int cHor = PInt(0x00A5EA418);
        int cMin = PInt(0x00A5EA414);
        int cSeg = PInt(0x00A5EA410);
		int cDia = PInt(0x00A5EA41c);
		int cMes = PInt(0x00A5EA420) + 1;
		int cAno = PInt(0x00A5EA424) - 100;
		if(pFile != NULL)
        {	
		fprintf(pFile,"Jogador [%s] Refinou o [item Refinação Abençoada] ID : %d %d %d %d %d %d %d  Horario %d:%d:%d  Data : %d/%d/%d \n",player->Name,player->Inventory[item].Index,43,234,player->Inventory[item].EF2,player->Inventory[item].EFV2,player->Inventory[item].EF3,player->Inventory[item].EFV3,cHor,cMin,cSeg,cDia,cMes,cAno);
fclose(pFile);
	return;
	}
	}
	
else if(player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 1 && player->Inventory[item].Index == 3338 && player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 1)
	{
	
		//player->Inventory[emb1].Index = 3338;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 += 2;
		player->Inventory[item].EF2 = 0;
		player->Inventory[item].EFV2 = 0;
		player->Inventory[item].EF3 = 0;
		player->Inventory[item].EFV3 = 0;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Exp -= 10000000;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa, Foram reduzidos 1 Milhão de Experiência.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		return;
	}
else if(player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 2 && player->Inventory[item].Index == 3338 && player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 2)
	{
	
		//player->Inventory[emb1].Index = 3338;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 += 3;
		player->Inventory[item].EF2 = 0;
		player->Inventory[item].EFV2 = 0;
		player->Inventory[item].EF3 = 0;
		player->Inventory[item].EFV3 = 0;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Exp -= 10000000;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa, Foram reduzidos 1 Milhão de Experiência.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		return;
	}
	else if(player->Inventory[item].EF1 == 43 &&  player->Inventory[item].EFV1 == 3 && player->Inventory[item].Index == 3338 && player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 3 )
	{
	
		//player->Inventory[emb1].Index = 3338;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 += 4;
		player->Inventory[item].EF2 = 0;
		player->Inventory[item].EFV2 = 0;
		player->Inventory[item].EF3 = 0;
		player->Inventory[item].EFV3 = 0;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Exp -= 10000000;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa, Foram reduzidos 1 Milhão de Experiência.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		return;
	}
	else if(player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 4 && player->Inventory[item].Index == 3338 && player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 4)
	{
	
		//player->Inventory[emb1].Index = 3338;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 += 5;
		player->Inventory[item].EF2 = 0;
		player->Inventory[item].EFV2 = 0;
		player->Inventory[item].EF3 = 0;
		player->Inventory[item].EFV3 = 0;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Exp -= 10000000;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa, Foram reduzidos 1 Milhão de Experiência.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		return;
	}
	else if(player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 5 && player->Inventory[item].Index == 3338 && player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 5)
	{
	
		//player->Inventory[emb1].Index = 3338;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 += 6;
		player->Inventory[item].EF2 = 0;
		player->Inventory[item].EFV2 = 0;
		player->Inventory[item].EF3 = 0;
		player->Inventory[item].EFV3 = 0;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Exp -= 10000000;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa, Foram reduzidos 1 Milhão de Experiência.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		return;
	}
	else if(player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 6 && player->Inventory[item].Index == 3338 && player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 6)
	{
	
		//player->Inventory[emb1].Index = 3338;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 += 7;
		player->Inventory[item].EF2 = 0;
		player->Inventory[item].EFV2 = 0;
		player->Inventory[item].EF3 = 0;
		player->Inventory[item].EFV3 = 0;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Exp -= 10000000;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa, Foram reduzidos 1 Milhão de Experiência.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		return;
	}
	else if(player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 7 && player->Inventory[item].Index == 3338 && player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 7)
	{
	
		//player->Inventory[emb1].Index = 3338;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 += 8;
		player->Inventory[item].EF2 = 0;
		player->Inventory[item].EFV2 = 0;
		player->Inventory[item].EF3 = 0;
		player->Inventory[item].EFV3 = 0;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Exp -= 100000000;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa, Foram reduzidos 1 Bilhão de Experiência.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		return;
	}
	else if(player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 8 && player->Inventory[item].Index == 3338 && player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 8)
	{
	
		//player->Inventory[emb1].Index = 3338;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 9;
		player->Inventory[item].EF2 = 0;
		player->Inventory[item].EFV2 = 0;
		player->Inventory[item].EF3 = 0;
		player->Inventory[item].EFV3 = 0;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Exp -= 100000000;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa, Foram reduzidos 1 Bilhão de Experiência.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		return;
	}
	else if(player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 == 9 && player->Inventory[item].Index == 3338 )
	{
		SendALL(clientid);
		SendClientMsg(clientid,"Impossivel de refinar mais este item.");
		return;
	}
	
	else
	{

		SendClientMsg(clientid,"Há algo de errado na combinação.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		return;
	}

	return;
	}
}
}
void npcmais11(unsigned char* m_PacketBuffer)
{
	FILE * pFile;
	time_t rawtime; 
	struct tm * timeinfo;
	char local[100];
	char tmp[1024];
	char tmp2[1024];
	char msg[200];
	MOB *player = (MOB*)GetMobFromIndex(GetOffset(6));
	short clientid = GetOffset(6);
	short emb1 = GetOffset(76);
	short emb2 = GetOffset(77);
	short item = GetOffset(78);
	if(player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 < 229)
	{
	SendClientMsg(clientid,"O Item deve ser +10.");
	SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
	return;
	}
	if(player->Gold < 5000000) 
	{
	SendClientMsg(clientid,"è necessário de 50 Milhoes de Gold.");
	SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
	return;
	}
	
	if(player->Inventory[item].EF1 == 43 && player->Inventory[item].EFV1 >= 230 <=233)
    {
	if (player->Exp >= 0)
	{
if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2863 < 2866) // Eirenus anct
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item %d refinado para +11");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		time ( &rawtime );
		char tmp[1024];

        sprintf(tmp, "DataBase\\Logs\\mais11\\[%s].ini",player->Name);
        timeinfo = localtime ( &rawtime );
        pFile = fopen(tmp, "a");
        int cHor = PInt(0x00A5EA418);
        int cMin = PInt(0x00A5EA414);
        int cSeg = PInt(0x00A5EA410);
		int cDia = PInt(0x00A5EA41c);
		int cMes = PInt(0x00A5EA420) + 1;
		int cAno = PInt(0x00A5EA424) - 100;
			if(pFile != NULL)
        {	
			fprintf(pFile,"Jogador [%s] Refinou o [Item %d] ID : %d %d %d %d %d %d  Horario [%d:%d:%d]  Data : [%d/%d/%d] \n",player->Name,player->Inventory[item].Index,player->Inventory[item].EF2,player->Inventory[item].EFV2,player->Inventory[item].EF3,player->Inventory[item].EFV3,cHor,cMin,cSeg,cDia,cMes,cAno);
			 fprintf(pFile, msg);
              fclose(pFile);
	return;
	}
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 903) //erenius 
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Eirenus]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2859 < 2862) // neorion anct
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Neorion Anct]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		 
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 904) // neorion 
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Neorion]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2895 < 2898) // Thrasytes Anct
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Thrasytes Anct]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 912) // Thrasytes
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Thrasytes]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2491 < 2494) // Balmung Anct
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Balmung Anct]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		return;
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 811) // Balmung
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Balmung]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2551 < 2554) // Skytalos Anct
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Skytalos Anct]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
 
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 826) // Skytalos
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Skytalos]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2611 < 2614) // Khyrius Anct
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Khyrius Anct]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 841) // Khyrius
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Khyrius]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2671 < 2674) // Gleipnir Anct
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Gleipnir Anct]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 856) // Gleipnir
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Gleipnir]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2791 < 2794) // Hermai Anct
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Hermai Anct]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 886) // Hermai
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Hermai]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 1711) // Hophlon
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Hophlon]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}

else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 1356 < 1359) // Set Guardiã
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Set Guardiã]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 1506 < 1509) // Set Destruição
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Set Destruição]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 1221 < 1224) // Set Flamejante
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Set Flamejante]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 1656 < 1659) // Set Rake
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Set Rake]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 1660 < 1664) // Set Legionário
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Set Legionário]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 1360 < 1364) // Set Templário
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Set Templário]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 1510 < 1514) // Set Corvo
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Set Corvo]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 1225 < 1229) // Set Mortal
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Set Mortal]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
	 
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2186 < 2190) // Set Embutido(Le)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Set Embutido(Le)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		 
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2206 < 2210) // Set Mytril(Le)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Set Mytril(Le)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2226 < 2230) // Set Elemental(Le)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Set Elemental(Le)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2246 < 2250) // Set Teia(Le)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Set Teia(Le)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 2106) // Soláris
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11 Item refinado para +11 [Soláris]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2891 < 2894) // Solaris(Anct)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Solaris(Anct)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		 return;
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 2113) // Martelo Assassino
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Martelo Assassino]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
	
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2487 < 2490) // Martelo Assassino(Anct)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Martelo Assassino(Anct)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 2116) // Mjolnir
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Mjolnir]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2931 < 2934) // Mjolnir(Anct)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Mjolnir(Anct)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		 
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 2103) // Espada Vorpal
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Espada Vorpal]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		 
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2727 < 2730) // Espada Vorpal(Anct)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Espada Vorpal(Anct)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		 
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 2123) // Arco Divino
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Arco Divino]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		 
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2547 < 2550) // Arco Divino(Anct)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Arco Divino(Anct)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		 
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 2128) // Furia Divina
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Furia Divina]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		 
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2847 < 2850) // Furia Divina (Anct)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Furia Divina(Anct)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 2138) // Lança do Triunfo
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Lança do Triunfo]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2667 < 2670) // Lança do Triunfo (Anct)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Lança do Triunfo(Anct)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
	
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 2143) // Cruz Sagrada
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Cruz Sagrada]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2787 < 2790) // Cruz Sagrada (Anct)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Cruz Sagrada(Anct)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
	
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index == 840) // Garra Draconiana
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Garra Draconiana]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
	}
else if(player->Inventory[emb1].Index == 697 && player->Inventory[emb2].Index == 697 && player->Inventory[item].Index > 2607 < 2610) // Garra Draconiana (Anct)
	{
	
		//player->Inventory[emb1].Index = 2863;
		player->Inventory[item].EF1 = 43;
		player->Inventory[item].EFV1 = 234;
		player->Inventory[item].EF2 = player->Inventory[item].EF2;
		player->Inventory[item].EFV2 = player->Inventory[item].EFV2;
		player->Inventory[item].EF3 = player->Inventory[item].EF3;
		player->Inventory[item].EFV3 = player->Inventory[item].EFV3;
		player->Inventory[emb2].Index = 0;
		player->Inventory[emb1].Index = 0;
		player->Gold -= 5000000 ;
		SendALL(clientid);
		SendClientMsg(clientid,"Combinação Completa.");
		LogForAll(clientid,"Item refinado para +11[Garra Draconiana(Anct)]");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
	}
	else
	{
		SendClientMsg(clientid,"Há algo de errado na combinação.");
		SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
		return;
	}
	return;
	}
	else
	SendClientMsg(clientid,"O Item deve ser +10.");
	SendClientSignalParm(clientid,0x7530, 0x3A7, 2);
	return;
}
}


 
void Tinye(unsigned char* szBuffer)//unsigned char* szBuffer
	{
		Tiny *pClient = (Tiny*)szBuffer;
		MOB *player = (MOB*)GetMobFromIndex(pClient->Header.ClientID);
		bool v_return = false;
		char tmp[80];
	
		int num1;
		char ref[120];
		srand(time(NULL));
		num1 = rand() % 100;
		int item1 = GetFirstSlot(pClient->Header.ClientID,pClient->Itens[0].Index,pClient->Itens[0].EF1,pClient->Itens[0].EFV1,pClient->Itens[0].EF2,pClient->Itens[0].EFV2,pClient->Itens[0].EF3,pClient->Itens[0].EFV3,64);
		int item2 = GetFirstSlot(pClient->Header.ClientID,pClient->Itens[1].Index,pClient->Itens[1].EF1,pClient->Itens[1].EFV1,pClient->Itens[1].EF2,pClient->Itens[1].EFV2,pClient->Itens[1].EF3,pClient->Itens[1].EFV3,64);
		int itemD = GetFirstSlot(pClient->Header.ClientID,pClient->Itens[2].Index,pClient->Itens[2].EF1,pClient->Itens[2].EFV1,pClient->Itens[2].EF2,pClient->Itens[2].EFV2,pClient->Itens[2].EF3,pClient->Itens[2].EFV3,64);
		if(pClient->Itens[0].EFV1 > 9 && pClient->Itens[1].EFV1 > 9 && pClient->Itens[2].EFV1 <= 8)
		{
			SendClientMsg(pClient->Header.ClientID,"Apenas itens acima de +9.");
			return;
		}
		if(player->Gold < 100000000)
		{
			SendClientMsg(pClient->Header.ClientID,"É necessário 100 milhões.");
			return;
		}
		if(pClient->Itens[0].Index == 0 || pClient->Itens[1].Index == 0 || pClient->Itens[2].Index == 0)
		{
			SendClientMsg(pClient->Header.ClientID,"Um erro ocorreu.");
			return;
		}
		if(num1 <= 50)
		{
			player->Inventory[itemD].Index = 0;
			player->Inventory[item2].Index = 0;
			player->Gold -= 100000000;
			player->Inventory[item1].EFV1 = 6;
			player->Inventory[item1].EF2 = player->Inventory[item2].EF2;
			player->Inventory[item1].EFV2 = player->Inventory[item2].EFV2;
			player->Inventory[item1].EF3 = player->Inventory[item2].EF3;
			player->Inventory[item1].EFV3 = player->Inventory[item2].EFV3;
			sprintf(tmp,"Sucesso na composição ! (%d/50)",num1);
			SendClientMsg(pClient->Header.ClientID,tmp);
			SendClientSignalParm(pClient->Header.ClientID, 0x7530, 0x3a7, 0);
			SendALL(pClient->Header.ClientID);
			return;
		}
		else
		{
			player->Inventory[item1].Index = 0;
			player->Inventory[itemD].Index = 0;
			player->Gold -= 100000000;
			SendClientMsg(pClient->Header.ClientID,"Falha durante a composição.");
			SendClientSignalParm(pClient->Header.ClientID, 0x7530, 0x3a7, 0);
			SendALL(pClient->Header.ClientID);
			return;
		}
	}

void Refinacao10(char *Packet)
{
	Ailyn *pClient = (Ailyn*)Packet;
	MOB *player = (MOB*)GetMobFromIndex(pClient->Header.ClientID);
	bool v_return = false;
	
	int num1;
	char ref[120];
	srand(time(NULL));
	num1 = rand() % 100;
	int item1 = GetFirstSlot(pClient->Header.ClientID,pClient->Itens[0].Index,pClient->Itens[0].EF1,pClient->Itens[0].EFV1,pClient->Itens[0].EF2,pClient->Itens[0].EFV2,pClient->Itens[0].EF3,pClient->Itens[0].EFV3,64);
	int sabio = GetFirstSlot(pClient->Header.ClientID,pClient->Itens[2].Index,pClient->Itens[2].EF1,pClient->Itens[2].EFV1,pClient->Itens[2].EF2,pClient->Itens[2].EFV2,pClient->Itens[2].EF3,pClient->Itens[2].EFV3,64);
	int joia1 = GetFirstSlot(pClient->Header.ClientID,pClient->Itens[3].Index,pClient->Itens[3].EF1,pClient->Itens[3].EFV1,pClient->Itens[3].EF2,pClient->Itens[3].EFV2,pClient->Itens[3].EF3,pClient->Itens[3].EFV3,64);
	int joia2 = GetFirstSlot(pClient->Header.ClientID,pClient->Itens[4].Index,pClient->Itens[4].EF1,pClient->Itens[4].EFV1,pClient->Itens[4].EF2,pClient->Itens[4].EFV2,pClient->Itens[4].EF3,pClient->Itens[4].EFV3,64);
	int joia3 = GetFirstSlot(pClient->Header.ClientID,pClient->Itens[5].Index,pClient->Itens[5].EF1,pClient->Itens[5].EFV1,pClient->Itens[5].EF2,pClient->Itens[5].EFV2,pClient->Itens[5].EF3,pClient->Itens[5].EFV3,64);
	int joia4 = GetFirstSlot(pClient->Header.ClientID,pClient->Itens[6].Index,pClient->Itens[6].EF1,pClient->Itens[6].EFV1,pClient->Itens[6].EF2,pClient->Itens[6].EFV2,pClient->Itens[6].EF3,pClient->Itens[6].EFV3,64);
	int item = player->Inventory[item1].Index;
	player->Inventory[item1].Index = 0;
	int item2 = GetFirstSlot(pClient->Header.ClientID,pClient->Itens[1].Index,pClient->Itens[1].EF1,pClient->Itens[1].EFV1,pClient->Itens[1].EF2,pClient->Itens[1].EFV2,pClient->Itens[1].EF3,pClient->Itens[1].EFV3,64);
	player->Inventory[item1].Index = item;
	int SlotItem1 = item1, SlotItem2 = item2;
	if(pClient->Itens[0].Index == pClient->Itens[1].Index)
	{
		if(pClient->Itens[2].Index == 1774)
		{
			if(pClient->Itens[3].Index == pClient->Itens[4].Index && pClient->Itens[3].Index == pClient->Itens[5].Index && pClient->Itens[3].Index == pClient->Itens[6].Index)
			{
				if(pClient->Itens[3].Index >= 2441 && pClient->Itens[3].Index <= 2444)
				{
					if(player->Gold >= 50000000)
					{
						if(num1 <= 45)
						{
							sprintf(ref,"Jogador %s obteve sucesso na composição do +10.",player->Name);
							SendClientMsg(pClient->Header.ClientID,ref);

							player->Inventory[item1].EFV1 = 230;


							player->Gold -= 50000000;
							GetRemoItem(pClient->Header.ClientID,pClient->Itens[3].Index,3);
							player->Inventory[item2].Index = 0;
							player->Inventory[sabio].Index = 0;

							SendALL(pClient->Header.ClientID);
							SendClientSignalParm(pClient->Header.ClientID, 0x7530, 0x3a7, 0);
							if(player->Inventory[item1].EF2 == 0)
							{
								//SendClientMsg(pClient->Header.ClientID,"entrou aqui");
								return;
							}
							if(player->Inventory[item1].EF3 == 0)
							{
								//SendClientMsg(pClient->Header.ClientID,"entrou aqui");
								return;
							}
							if(player->Inventory[item2].EF2 == 0)
							{
								//SendClientMsg(pClient->Header.ClientID,"entrou aqui");
								return;
							}
							if(player->Inventory[item2].EF3 == 0)
							{
								//SendClientMsg(pClient->Header.ClientID,"entrou aqui");
								return;
							}
							
							//mistura de add
							
							int TipeAdd1 = rand() % 3;
							int TipeAdd2 = rand() % 3;
		
							if(player->Inventory[SlotItem1].EF2 == player->Inventory[SlotItem2].EF2 && player->Inventory[SlotItem1].EF2 != 0)
							{
								if(TipeAdd1 == 1)//Apenas passa +10
									player->Inventory[SlotItem1].EFV2 = player->Inventory[SlotItem2].EFV2;
			
								if(TipeAdd1 == 2)//Passa +10 e fica com add de maior valor
								{
									if(player->Inventory[SlotItem1].EFV2 < player->Inventory[SlotItem2].EFV2)
									{
										player->Inventory[SlotItem1].EFV2 = player->Inventory[SlotItem2].EFV2;
									}
								}
							}
							else if(player->Inventory[SlotItem1].EF2 != player->Inventory[SlotItem2].EF2 && player->Inventory[SlotItem1].EF2 != 0)
							{
								if(TipeAdd1 == 1)
								{
									player->Inventory[SlotItem1].EF2 = player->Inventory[SlotItem2].EF2;
									player->Inventory[SlotItem1].EFV2 = player->Inventory[SlotItem2].EFV2;
								}
							}

							if(player->Inventory[SlotItem1].EF3 == player->Inventory[SlotItem2].EF3 && player->Inventory[SlotItem1].EF3 != 0)
							{
								if(TipeAdd1 == 1)//Apenas passa +10
									player->Inventory[SlotItem1].EFV3 = player->Inventory[SlotItem2].EFV3;

								if(TipeAdd2 == 2)//Passa +10 e fica com add de maior valor
								{
									if(player->Inventory[SlotItem1].EFV3 < player->Inventory[SlotItem2].EFV3)
									{
										player->Inventory[SlotItem1].EFV3 = player->Inventory[SlotItem2].EFV3;
									}
								}
							}
							else if(player->Inventory[SlotItem1].EF3 != player->Inventory[SlotItem2].EF3 && player->Inventory[SlotItem1].EF3 != 0)
							{
								if(TipeAdd2 == 1)
								{
									player->Inventory[SlotItem1].EF3 = player->Inventory[SlotItem2].EF3;
									player->Inventory[SlotItem1].EFV3 = player->Inventory[SlotItem2].EFV3;
								}
							}
							
							player->Inventory[item1].EF1 = 43;
							player->Inventory[item1].EFV1 = 230;

							player->Inventory[item2].EF1 = 43;
							player->Inventory[item2].EFV1 = 230;
							SendALL(pClient->Header.ClientID);
							return;
						}
						else
						{
							sprintf(ref,"Jogador %s obteve falha na composição.(%d/100)",player->Name,num1);
							SendClientMsg(pClient->Header.ClientID,ref);
							GetRemoItem(pClient->Header.ClientID,pClient->Itens[3].Index,3);
							player->Inventory[sabio].Index = 0;
							player->Gold -= 50000000;
							SendALL(pClient->Header.ClientID);
							SendClientSignalParm(pClient->Header.ClientID, 0x7530, 0x3a7, 0);
							return;
						}
					}
					else
					{
						SendClientMsg(pClient->Header.ClientID,"Necessário 50 milhões para a composição.");
					}
				}
				else
				{
					SendClientMsg(pClient->Header.ClientID,"Ocorreu um erro contate o suporte.");
				}
			}
			else
			{
				SendClientMsg(pClient->Header.ClientID,"Necessário 4 joias iguais.");
			}
		}
		else
		{
			SendClientMsg(pClient->Header.ClientID,"Necessário o item pedra do Sábio.");
		}
	}
	else
	{
		SendClientMsg(pClient->Header.ClientID,"Necessário dois itens iguais.");
	}
}
void NPC_Sephirot(char *dwBuffer)
{  //by Nikkw.
       
 
        short clientID = *(short*)&dwBuffer[6];
		int npcid = *(int*)&dwBuffer[12];
 
        st_Mob *player = (st_Mob*)GetMobFromIndex(clientID);
        st_Mob *npc = (st_Mob*)GetMobFromIndex(npcid);
 
        if(*(char*)&dwBuffer[16] != 1)
        return;
 
        if(player->Equip[10].Index == 1742)
        {
                if(player->Gold >= 50000000)
                {
                        SendClientMessage(clientID, "Sephirot Composto!");
 
                        int dwStones[8];
                        register int count = 0;
                       
                        dwStones[0] = GetFirstSlotSADD(clientID,1744,64),
                        dwStones[1] = GetFirstSlotSADD(clientID,1745,64),
                        dwStones[2] = GetFirstSlotSADD(clientID,1746,64),
                        dwStones[3] = GetFirstSlotSADD(clientID,1747,64),
                        dwStones[4] = GetFirstSlotSADD(clientID,1748,64),
                        dwStones[5] = GetFirstSlotSADD(clientID,1749,64),
                        dwStones[6] = GetFirstSlotSADD(clientID,1750,64),
                        dwStones[7] = GetFirstSlotSADD(clientID,1751,64);                              
 
                        for(register int i = 0; i < 8; i ++)
                                if(dwStones[i] != -1)
                                        count ++;
                       
                        if(count != 8)
                        {
                                SendClientMessage(clientID, "Está faltando alguma pedra.");
                                return;
                        }                              
 
                        for(register int i = 0; i < 7; i ++)                           
                                memset(&player->Inventory[dwStones[i]], 0, sizeof st_Item);            
                       
                        st_Item item;
                        memset(&item, 0, sizeof st_Item);
                        if(npc->Exp == 994)
                                item.Index = 1762;
                        else if(npc->Exp == 995)
                                item.Index = 1761;
                        else if(npc->Exp == 996)
                                item.Index = 1763;
                        else if(npc->Exp == 997)
                                item.Index = 1760;
								

 
                        
						memcpy(&player->Inventory[dwStones[7]].Index, &item.Index, sizeof st_Item);
                        SendCarry(clientID);                           
 
                        player->Gold -= 50000000;
                        SendEtc(clientID);                             
                        return;
                }
                else
                {
                        SendClientMessage(clientID, "São necessários [50.000.000] de GOLD.");
                        return;
                }
        }
		/*
        else
        {
                SendClientMessage(clientID, "Deseja cômpor um sephirot?");
                return;
        }
		*/
}

void DestravaArch(char *Packet)
{
	short ClientID = *(short*)&Packet[6];
	st_Item *Item1 = (st_Item*)&Packet[12];// deve ser 3448 61 10
	st_Item *Item2 = (st_Item*)&Packet[20];// deve ser 3448 61 10
	st_Item *Item3 = (st_Item*)&Packet[28];// deve ser 4127
	st_Item *Item4 = (st_Item*)&Packet[36];// deve ser 413
	st_Item *Item5 = (st_Item*)&Packet[44];// deve ser 413
	st_Item *Item6 = (st_Item*)&Packet[52];// deve ser 413
	st_Item *Item7 = (st_Item*)&Packet[60];// deve ser 413
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int lac1 = 0, lac2 = 0, lac3 = 0, lac4 = 0;
	lac1 = Item4->Index;
	lac2 = Item5->Index;
	lac3 = Item6->Index;
	lac4 = Item7->Index;
	if(Item3->Index != 4127)
	{
		SendClientMsg(ClientID,"Você não possui o Pergaminho Selado.");
		return;
	}
	if(Item1->EF1 != 61 && Item1->EFV1 != 10)
	{
		SendClientMsg(ClientID,"Os pacotes devem ter 10 unidades cada.");
		return;
	}
	if(Item2->EF1 != 61 && Item2->EFV1 != 10)
	{
		SendClientMsg(ClientID,"Os pacotes devem ter 10 unidades cada.");
		return;
	}
	if(lac1 != 413)
	{
		SendClientMsg(ClientID,"São necessárias 04 poeiras de lactolerium.");
		return;
	}
	if(lac2 != 413)
	{
		SendClientMsg(ClientID,"São necessárias 04 poeiras de lactolerium.");
		return;
	}
	if(lac3 != 413)
	{
		SendClientMsg(ClientID,"São necessárias 04 poeiras de lactolerium.");
		return;
	}
	if(lac4 != 413)
	{
		SendClientMsg(ClientID,"São necessárias 04 poeiras de lactolerium.");
		return;
	}
	GetRemoItem(ClientID, Item4->Index, 4);
	GetRemoItem(ClientID, Item1->Index, 2);
	GetRemoItem(ClientID, Item3->Index, 1);
	//itemslot1 = GetFirstSlotSADD(ClientID,Item3->Index,64);
	SendClientMsg(ClientID,"Sucesso na composição.");
	SendALL(ClientID);
}
void FraseAoLogar(char *Packet)
{
	short ClientID = *(short*)&Packet[6];
	char msgg[100];
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	sprintf(msgg,"Olá %s , tenha um ótimo jogo.", player->Name);
	SendClientMsg(ClientID,msgg);
}

void Juli(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->bStatus.Level >= 255)
	{
			if(player->Gold >= 0x03E8)
			{
				if(player->Equip[0].EFV2 == 1)
				{
					SendSay(npcid,"Mortais não podem ir até Nipleheim.");
					return;
				}
				else if(player->Equip[0].EFV2 >= 2)
				{
					SendSay(npcid,"Teleportado.");
					player->Gold -= 0x03E8;
					DoTeleport(ClientID,3649,3136);
					SendALL(ClientID);
					return;
				}

			}
			else
			{
				SendSay(npcid,"O custo do teleporte é de 1.000 gold.");
			}
	}
	else
	{
		SendSay(npcid,"Necessário level 256 ou superior.");
	}
	return;
}
void Juli2(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->bStatus.Level >= 255)
	{
			if(player->Gold >= 0x03E8)
			{
				if(player->Equip[0].EFV2 == 1)
				{
					SendSay(npcid,"Mortais não podem ir até Nipleheim.");
					return;
				}
				else if(player->Equip[0].EFV2 > 1)
				{
					SendSay(npcid,"Teleportado.");
					player->Gold -= 0x03E8;
					DoTeleport(ClientID,2480,1648);
					SendALL(ClientID);
					return;
				}
			}
			else
			{
				SendSay(npcid,"O custo do teleporte é de 1.000 gold.");
			}
	}
	else
	{
		SendSay(npcid,"Necessário level 256 ou superior.");
	}
	return;
}
void M_Hab(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itenslot = GetFirstSlotSADD(ClientID,3336,64);
	if(itenslot != -1)
	{
		if(player->Equip[1].Index == 0 && player->Equip[2].Index == 0 && player->Equip[3].Index == 0 && player->Equip[4].Index == 0 && player->Equip[5].Index == 0 && player->Equip[6].Index == 0 && player->Equip[7].Index == 0)
		{
			player->StatusPoint += player->bStatus.STR + player->bStatus.INT + player->bStatus.DEX + player->bStatus.CON - 20;
			player->bStatus.STR = 5;
			player->bStatus.INT = 5;
			player->bStatus.DEX = 5;
			player->bStatus.CON = 5;
			player->Inventory[itenslot].Index = 0;
			SendCharList(ClientID);
			SendSay(npcid,"Pontos reinicializados com sucesso.");
			return;
		}
		else
		{
			SendClientMsg(ClientID,"Desequipe todos seus itens.");
		}
	}
	else
	{
		SendSay(npcid,"É necessário 5 safiras.");
	}
	return;
}
void Capaverde(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[0].EFV2 == 1)
	{
		if(player->bStatus.Level >= 100 && player->bStatus.Level <= 149)
		{
			if(player->Equip[15].Index == 0)
			{
				if(player->Equip[13].Index == 4080)
				{
					SendSay(npcid,"Hum... Nem parece ser o mesmo...");
					player->Equip[15].Index = 4006;
					player->Equip[13].Index = 0;
					SendItens(ClientID,13);
					SendItens(ClientID,15);
					GetCurrentScore(ClientID);
					return;
				}
				else
				{
					SendSay(npcid,"Equipe o Emblema do Aprendiz.");
				}
			}
			else
			{
				SendSay(npcid,"Você já completou esta quest.");
			}
		}
		else if(player->bStatus.Level >= 219 && player->bStatus.Level <= 254)
		{
			if(player->Equip[13].Index == 4081)
			{
				SendSay(npcid,"Escolha a cor da sua capa digitando /blue ou /red");
				return;
			}
			else
			{
				SendSay(npcid,"Equipe o Emblema do Reino.");
			}
		}
		else
		{
			SendSay(npcid,"Level inadequado.[101~150 e 221~255]");
		}
	}
	else
	{
		SendSay(npcid,"Apenas mortais.");
	}
	return;
}
void KingdomBroker(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itenslot1 = GetFirstSlotSADD(ClientID,4131,64);
	if(itenslot1 != -1)
	{
		if(player->Equip[15].Index == 545)
		{
			player->Equip[15].Index = 548;
			player->Inventory[itenslot1].Index = 0;
			player->Inventory[itenslot1].EF1 = 0;
			player->Inventory[itenslot1].EFV1 = 0;
			SendItens(ClientID,15);
			SendALL(ClientID);
			SendClientMsg(ClientID,"Você saiu do reino.");
			return;
		}
		else if(player->Equip[15].Index == 546)
		{
			player->Equip[15].Index = 548;
			player->Inventory[itenslot1].Index = 0;
			player->Inventory[itenslot1].EF1 = 0;
			player->Inventory[itenslot1].EFV1 = 0;
			SendItens(ClientID,15);
			SendALL(ClientID);
			SendClientMsg(ClientID,"Você saiu do reino.");
			return;
		}
		else if(player->Equip[15].Index == 543)
		{
			player->Equip[15].Index = 549;
			player->Inventory[itenslot1].Index = 0;
			player->Inventory[itenslot1].EF1 = 0;
			player->Inventory[itenslot1].EFV1 = 0;
			SendItens(ClientID,15);
			SendALL(ClientID);
			SendClientMsg(ClientID,"Você saiu do reino.");
			return;
		}
		else if(player->Equip[15].Index == 544)
		{
			player->Equip[15].Index = 549;
			player->Inventory[itenslot1].Index = 0;
			player->Inventory[itenslot1].EF1 = 0;
			player->Inventory[itenslot1].EFV1 = 0;
			SendItens(ClientID,15);
			SendALL(ClientID);
			SendClientMsg(ClientID,"Você saiu do reino.");
			return;
		}
		else if(player->Equip[15].Index == 3191)
		{
			player->Equip[15].Index = 3193;
			player->Inventory[itenslot1].Index = 0;
			player->Inventory[itenslot1].EF1 = 0;
			player->Inventory[itenslot1].EFV1 = 0;
			SendItens(ClientID,15);
			SendALL(ClientID);
			SendClientMsg(ClientID,"Você saiu do reino.");
			return;
		}
		else if(player->Equip[15].Index == 3192)
		{
			player->Equip[15].Index = 3193;
			player->Inventory[itenslot1].Index = 0;
			player->Inventory[itenslot1].EF1 = 0;
			player->Inventory[itenslot1].EFV1 = 0;
			SendItens(ClientID,15);
			SendALL(ClientID);
			SendClientMsg(ClientID,"Você saiu do reino.");
			return;
		}
		else if(player->Equip[15].Index == 3194)
		{
			player->Equip[15].Index = 3196;
			player->Inventory[itenslot1].Index = 0;
			player->Inventory[itenslot1].EF1 = 0;
			player->Inventory[itenslot1].EFV1 = 0;
			SendItens(ClientID,15);
			SendALL(ClientID);
			SendClientMsg(ClientID,"Você saiu do reino.");
			return;
		}
		else if(player->Equip[15].Index == 3195)
		{
			player->Equip[15].Index = 3196;
			player->Inventory[itenslot1].Index = 0;
			player->Inventory[itenslot1].EF1 = 0;
			player->Inventory[itenslot1].EFV1 = 0;
			SendItens(ClientID,15);
			SendALL(ClientID);
			SendClientMsg(ClientID,"Você saiu do reino.");
			return;
		}
		else if(player->Equip[15].Index == 3197)
		{
			player->Equip[15].Index = 3199;
			player->Inventory[itenslot1].Index = 0;
			player->Inventory[itenslot1].EF1 = 0;
			player->Inventory[itenslot1].EFV1 = 0;
			SendItens(ClientID,15);
			SendALL(ClientID);
			SendClientMsg(ClientID,"Você saiu do reino.");
			return;
		}
		else if(player->Equip[15].Index == 3198)
		{
			player->Equip[15].Index = 3199;
			player->Inventory[itenslot1].Index = 0;
			player->Inventory[itenslot1].EF1 = 0;
			player->Inventory[itenslot1].EFV1 = 0;
			SendItens(ClientID,15);
			SendALL(ClientID);
			SendClientMsg(ClientID,"Você saiu do reino.");
			return;
		}
		else
		{
			SendClientMsg(ClientID,"Você não possui reino.");
			return;
		}
	}
	else
	{
		SendClientMsg(ClientID,"É necessário um Pacote de Safiras(10).");
		return;
	}
}
void Quest_CapaVerde(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[0].EFV2 == 1)
	{
		if(player->bStatus.Level >= 100 && player->bStatus.Level <= 149)
		{
			{
				SendSay(npcid,"Quest [Formatura do Aprendiz] foi iniciada.");
				DoTeleport(ClientID,2244,1581);
				return;
			}
		}
		else
		{
			SendSay(npcid,"Level Inadequado (Lv 101~150)");
		}
	}
	else
	{
		SendSay(npcid,"Somente Mortais.");
	}
	return;
}
void LiderAprend(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itenslot = GetFirstSlotSADD(ClientID,4131,64);
	if(player->Equip[0].Index == 2)
	{
		if(player->Equip[15].Index == 0)
		{
			if(player->bStatus.Level >= 99)
			{
				if(itenslot != -1)
				{
					player->Inventory[itenslot].Index = 0;
					player->Equip[15].Index = 4006;
					SendALL(ClientID);
					SendItens(ClientID,15);
					return;
				}
				else
				{
					SendSay(npcid,"Você precisa de um Pacote Safiras(10).");
				}
			}
			else
			{
				SendSay(npcid,"Somente para level 100 ou superior.");
			}
		}
		else
		{
			SendSay(npcid,"Você já possui capa.");
		}
	}
	else
	{
		SendSay(npcid,"Apenas para personagem arch.");
	}
	return;
}
void Jeffie(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int bilhete = GetQuantidadeItem(ClientID,3327);
	if(bilhete < 3)
	{
		SendSay(npcid,"Você precisa de 10 restos para compor uma poeira.");
		return;
	}
	GetRemoItem(ClientID,3327,3);
	int itenslot = GetFirstSlotSADD(ClientID,0,64);
	player->Inventory[itenslot].Index = 413;
	SendALL(ClientID);
	SendSay(npcid,"Composição realizada com sucesso!");
}
void TrocaArmas(int ClientID, int npcid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->bStatus.Level >= 80)
	{
		SendSay(npcid,"Apenas personagens com level inferior à 80.");
		return;
	}
	if(player->Equip[6].Index == 862)//espada curta
	{
		player->Equip[6].Index = 939;
		player->Equip[6].EF1 = 43;
		player->Equip[6].EFV1 = 5;
		player->Equip[6].EF2 = 2;
		player->Equip[6].EFV2 = 45;
		SendItens(ClientID,6);
		SendSay(npcid,"Sente-se mais forte agora ?");
		SendStats(ClientID);
		SendScore(ClientID);
		SendEquip(ClientID);
		return;
	}
	if(player->Equip[6].Index == 817)//arco de madeira
	{
		player->Equip[6].Index = 943;
		player->Equip[6].EF1 = 43;
		player->Equip[6].EFV1 = 5;
		player->Equip[6].EF2 = 2;
		player->Equip[6].EFV2 = 45;
		SendItens(ClientID,6);
		SendSay(npcid,"Sente-se mais forte agora ?");
		SendStats(ClientID);
		SendScore(ClientID);
		SendEquip(ClientID);
		return;
	}
	if(player->Equip[6].Index == 892)//Varinha da Guerra
	{
		player->Equip[6].Index = 940;
		player->Equip[6].EF1 = 43;
		player->Equip[6].EFV1 = 5;
		player->Equip[6].EF2 = 60;
		player->Equip[6].EFV2 = 20;
		SendItens(ClientID,6);
		SendSay(npcid,"Sente-se mais forte agora ?");
		SendStats(ClientID);
		SendScore(ClientID);
		SendEquip(ClientID);
		return;
	}
	if(player->Equip[6].Index == 847)//Lança curva
	{
		player->Equip[6].Index = 941;
		player->Equip[6].EF1 = 43;
		player->Equip[6].EFV1 = 5;
		player->Equip[6].EF2 = 60;
		player->Equip[6].EFV2 = 20;
		SendItens(ClientID,6);
		SendSay(npcid,"Sente-se mais forte agora ?");
		SendStats(ClientID);
		SendScore(ClientID);
		SendEquip(ClientID);
		return;
	}
	SendSay(npcid,"Necessito de pelo menos uma das seguintes armas:");
	SendSay(npcid,"Varinha de Guerra,Lança Curva,Arco de Madeira,Espada Curta");
	SendSay(npcid,"Você pode encontra-las a venda no comerciante Galford.");
}



void Kibita(int clientid,int npcid)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	Atualizar ;
	int cHor = PInt(0x00A5EA418);
	int cDia = PInt(0x00a5ea428);
	if(thisclient->Equip[0].EFV2 == 1)
	{
	if(cDia != 0 && cDia != 6)
	{
	if(cHor == 19)
	{
	for(int i=0;i<15;i++)
	{
	if(thisclient->Affects[i].Index == 0)
	{
	thisclient->Affects[i].Index = 29;
	thisclient->Affects[i].Master = 29;
	thisclient->Affects[i].Time = 500;
	thisclient->Affects[i].Value = 700;
	break;
	}
	else
	return;
	}
	thisclient->bStatus.maxHP += 2000;
	if(thisclient->bStatus.curHP > 20000)
	{
	thisclient->bStatus.maxHP -= 3500;
	}
	SendScore(clientid);
	SendALL(clientid);
	return;
	}
	else
	SendSay(npcid,"Aguarde ate as 19:00 Horas.");
	return;
	}
	else
	SendSay(npcid,"Você só pode usar a Kibita em dias da semana.");
	return;
	}
	else
	{
	SendSay(npcid,"Desculpe.");
	return;
	}
}	

void Shaman(int ClientID, int npcid)
{
	/*
		Redução de status para oitava skill já aprendida.
	*/
	MOB *thismob = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int learn1 = PByte(addr_bclient + 0x15c6c94);
	int learn2 = PByte(addr_bclient + 0x15c6c95);
	int learn3 = PByte(addr_bclient + 0x15c6c96);
	if(thismob->Equip[13].Index == 695 || thismob->Equip[13].Index == 450)
	{
		if(learn3 == 255)
		{
			thismob->bStatus.Defense -= 300;
			SendStats(ClientID);
			return;
		}
		return;
	}
	if(thismob->Equip[13].Index == 694 || thismob->Equip[13].Index == 449)
	{
		if(learn2 == 255)
		{
			if(thismob->Equip[0].Index == 6 || thismob->Equip[0].Index == 16 || thismob->Equip[0].Index == 26 || thismob->Equip[0].Index == 36)
			{
				thismob->bStatus.Defense -= 300;//toda oitava
				thismob->bStatus.Defense -= 500;//função da skill
				SendStats(ClientID);
				return;
			}
			thismob->bStatus.Defense -= 300;
			SendStats(ClientID);
			return;
		}
		return;
	}
	if(thismob->Equip[13].Index == 693 || thismob->Equip[13].Index == 448)
	{
		if(learn1 == 255)
		{
			thismob->bStatus.Defense -= 300;
			SendStats(ClientID);
			return;
		}
		return;
	}
}
void GodGover(int ClientID, int npcid)
{
	MOB *thismob = (MOB*)GetMobFromIndex(ClientID);
	int caos = PByte(ClientID * 0x410 + 0x15c6c8e);
	if(thismob->Gold <= 99999999)
	{
		SendSay(npcid,"Preciso de 100 milhões para reiniciar seu CP.");
		return;
	}
	thismob->Gold -= 100000000;
	PByte(ClientID * 0x410 + 0x15c6c8e) = 120;
	int x = PInt((ClientID * 0x0410) + 0x015C6CEC) - 60, y = PInt((ClientID * 0x0410) + 0x015C6CF0) - 60;
	int x1 = PInt((ClientID * 0x0410) + 0x015C6CEC) + 60, y1 = PInt((ClientID * 0x0410) + 0x015C6CF0) + 60;
	for(int i=1;i<100;i++)
	{
			int rid = i * 0x0410;
			int cX = PInt(rid + 0x015C6CEC);
			int cY = PInt(rid + 0x015C6CF0);
			if(cX >= x && cY >= y && cX <= x1 && cY <= y1)
			{
				SendCreateMob(i,ClientID,1);
			}
	}
	SendALL(ClientID);
	SendSay(npcid,"Caos Point reinicializado.");
}

void LevaKaiz(int ClientID, int npcid)
{
	MOB *play = (MOB*)GetMobFromIndex(ClientID);
	if(play->bStatus.Level < 190 && play->bStatus.Level > 264)
	{
		SendSay(npcid,"Level inadequado.[191~265]");
		return;
	}
	if(play->Gold <= 499999)
	{
		SendSay(npcid,"O custo de teleporte é de 500 mil.");
		return;
	}
	if(play->Equip[0].EFV2 != 1)
	{
		SendSay(npcid,"Apenas mortais.");
		return;
	}
	if(play->bStatus.Level >= 190 && play->bStatus.Level <= 265)
	{
		SendSay(npcid,"Teleportado.");
		play->Gold -= 500000;
		SendALL(ClientID);
		DoTeleport(ClientID,452,3912);
		return;
	}
	SendSay(npcid,"Level inadequado.[191~266]");
}
void LevaHid(int ClientID, int npcid)
{
	MOB *play = (MOB*)GetMobFromIndex(ClientID);
	if(play->Gold <= 999999)
	{
		SendSay(npcid,"O custo de teleporte é de 1 milhão.");
		return;
	}
	if(play->Equip[0].EFV2 != 1)
	{
		SendSay(npcid,"Apenas mortais.");
		return;
	}
	if(play->bStatus.Level >= 265 && play->bStatus.Level <= 319)
	{
		SendSay(npcid,"Teleportado.");
		play->Gold -= 1000000;
		SendALL(ClientID);
		DoTeleport(ClientID,669,3770);
		return;
	}
	SendSay(npcid,"Level inadequado.[266~320]");
}

void LevaCapaReino(int ClientID, int npcid)
{
	MOB *play = (MOB*)GetMobFromIndex(ClientID);
	if(play->Equip[0].EFV2 =! 1)
	{
		SendSay(npcid,"Apenas mortais.");
		return;
	}
	if(play->bStatus.Level >= 219 && play->bStatus.Level <= 254)
	{
		DoTeleport(ClientID,1728,1725);
		return;
	}
	SendSay(npcid,"Level inadequado.[Qst. Medalha do Reino 220~255]");
}
void JuntaImortalidade(int ClientID, int npcid)
{
	MOB *play = (MOB*)GetMobFromIndex(ClientID);
	int almauni = GetFirstSlotSADD(ClientID,1740,64);
	int almafenix = GetFirstSlotSADD(ClientID,1741,64);
	int pacsafira = GetFirstSlotSADD(ClientID,4131,64);
	if(almauni == -1 || almafenix == -1)
	{
		SendSay(npcid,"Você não possui as duas almas.");
		return;
	}
	if(pacsafira == -1)
	{
		SendSay(npcid,"É necessário um pacote de safiras(10).");
		return;
	}
	play->Inventory[almauni].Index = 1742;
	play->Inventory[almafenix].Index = 0;
	play->Inventory[pacsafira].Index = 0;
	SendALL(ClientID);
	SendSay(npcid,"Composição realizada com sucesso.");
	LogForAll(ClientID,"Sucesso na composição da Pedra da Imortalidade.");
}
void AlqOdin(BYTE *m_PacketBuffer)
{
	FILE * pFile;
	time_t rawtime; 
	struct tm * timeinfo;
	char local[100];
	MOB *player = (MOB*)GetMobFromIndex(GetOffset(6));
	MOB *thisclient = (MOB*)GetMobFromIndex(GetOffset(6));
	short ClientID = GetOffset(6);
	short emb1 = GetOffset(76), emb2 = GetOffset(77), item = GetOffset(78), ref1 = GetOffset(79), ref2 = GetOffset(80), ref3 = GetOffset(81), ref4 = GetOffset(82);
	char tmp[1024], tmp2[1024], msg[100];
	int RefDoItem = GetItemSanc(ClientID,1,item);
	int RefDaRef1 = GetItemSanc(ClientID,1,ref1);
	int RefDaRef2 = GetItemSanc(ClientID,1,ref2);
	int RefDaRef3 = GetItemSanc(ClientID,1,ref3);
	int RefDaRef4 = GetItemSanc(ClientID,1,ref4);
	int chance = rand() % 100; 
	int refatual = PegaRef(ClientID, item);
	srand(time(NULL));
	srand(time(NULL) / 5 * (rand() % 500) * 5);
	// Refinação +12 ~ +15
// Tentativa com 2 Pacs de PL c/ 10
	if(thisclient->Inventory[emb1].Index == 3448 && thisclient->Inventory[emb1].EF1 == 61 && thisclient->Inventory[emb1].EFV1 >= 10 && thisclient->Inventory[emb2].Index == 3448 && thisclient->Inventory[emb2].EF1 == 61 && thisclient->Inventory[emb2].EFV1 >= 10)
	{
		if(PegaRef(ClientID, item) == 15)
		{
			SendClientMsg(ClientID, "Refinação Máxima!");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		} 
		int RetornoDoCounter = ContadorDeRef(ClientID,ref1,ref2,ref3,ref4);
		int RetornoMaisC1215 = MaisChance1215(ClientID,RetornoDoCounter,RefDaRef1,RefDaRef2,RefDaRef3,RefDaRef4);
		int ChancesDeSucesso = ChanceDeSucesso(ClientID,RefDoItem,RetornoMaisC1215);
		 if(RefDoItem != 0)
		{
			if(RefDoItem < 250)
			{
				if(chance < ChancesDeSucesso)
				{
					if(RefDoItem > 233 && RefDoItem < 238)// +11
					{
						RefinarItemMais(ClientID,1,item,4);
					}
					else if(RefDoItem > 237 && RefDoItem < 242)// +12
					{
						RefinarItemMais(ClientID,1,item,4);
					}
					else if(RefDoItem > 241 && RefDoItem < 246)// +13
					{
						RefinarItemMais(ClientID,1,item,4);
					}
					else if(RefDoItem > 245 && RefDoItem < 250)// +14
					{
						RefinarItemMais(ClientID,1,item,4);
					}
					
					sprintf(tmp, "Sucesso na composição [%d/%d]");
					SendClientMsg(ClientID, tmp);
					
				}
				else
				{
					if(RefDoItem > 233 && RefDoItem < 238)// +11 Falha
					{
						int chancequebrar = rand() % 100;
						if(chance < 50)
						{
							DeleteItemCompleto(ClientID,item);
						}
						else if(chance >= 50 && chance < 70)
						{
							RefinarItemMenos(ClientID,1,item,4);
						}
						else
						{
							DeleteItemCompleto(ClientID,item);
						}
					}
					else if(RefDoItem > 237 && RefDoItem < 242)// +12 Falha
					{
						int chancequebrar = rand() % 100;
						if(chance < 70)
						{
							DeleteItemCompleto(ClientID,item);
						}
						else if(chance >= 70 && chance < 75)
						{
							RefinarItemMenos(ClientID,1,item,4);
						}
						else
						{
							DeleteItemCompleto(ClientID,item);
						}
					}
					else if(RefDoItem > 241 && RefDoItem < 246)// +13 Falha
					{
						int chancequebrar = rand() % 100;
						if(chance < 55)
						{
							DeleteItemCompleto(ClientID,item);
						}
						else if(chance >= 55 && chance < 70)
						{
							RefinarItemMenos(ClientID,1,item,4);
						}
						else
						{
							DeleteItemCompleto(ClientID,item);
						}
					}
					else if(RefDoItem > 245 && RefDoItem < 250)// +14
					{
						int chancequebrar = rand() % 100;
						if(chance < 55)
						{
							DeleteItemCompleto(ClientID,item);
						}
						else if(chance >= 55 && chance < 70)
						{
							RefinarItemMenos(ClientID,1,item,4);
						}
						else
						{
							DeleteItemCompleto(ClientID,item);
						}
					}
					SendClientMsg(ClientID,"Composição do item falhou.");
				}
				DeleteItemCompleto(ClientID,emb1);
				DeleteItemCompleto(ClientID,emb2);
				DeleteItemCompleto(ClientID,ref1);
				DeleteItemCompleto(ClientID,ref2);
				DeleteItemCompleto(ClientID,ref3);
				DeleteItemCompleto(ClientID,ref4);
				SendALL(ClientID);
				SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
				 time ( &rawtime );
		char tmp[1024];
        sprintf(tmp, "DataBase\\Controle\\mais12\\Falha\\[%s].ini",player->Name);
        timeinfo = localtime ( &rawtime );
        pFile = fopen(tmp, "a");
        int cHor = PInt(0x00A5EA418);
        int cMin = PInt(0x00A5EA414);
        int cSeg = PInt(0x00A5EA410);
		int cDia = PInt(0x00A5EA41c);
		int cMes = PInt(0x00A5EA420) + 1;
		int cAno = PInt(0x00A5EA424) - 100;
		if(pFile != NULL)
        {	
		fprintf(pFile,"Jogador [%s] Falhou o [item] ID : %d %d %d %d %d %d %d  Horario [%d:%d:%d]  Data : [%d/%d/%d] \n",player->Name,item,43,234,player->Inventory[item].EF2,player->Inventory[item].EFV2,player->Inventory[item].EF3,player->Inventory[item].EFV3,cHor,cMin,cSeg,cDia,cMes,cAno);
fclose(pFile);
	return;
	}
			}
			else
			{
				SendClientMsg(ClientID,"Há algo de errado na combinação.");
				SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
				return;
			}
		}
		else
		{
			SendClientMsg(ClientID,"Há algo de errado na combinação.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		}
	}
// Refinação +12 ~ +15
	// Tentativa com 2 Emblema da proteçao
	else if(thisclient->Inventory[emb1].Index == 4043 || thisclient->Inventory[emb1].Index == 3448 || thisclient->Inventory[emb2].Index == 4043 || thisclient->Inventory[emb2].Index == 3448)
	{
		if(PegaRef(ClientID, item) == 15)
		{
			SendClientMsg(ClientID, "Refinação Máxima!");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		} 
		else
		{
			int chance = rand() % 100;
			int chance_total;
			chance_total = ReturnChance(ClientID, ref1, refatual) + ReturnChance(ClientID, ref2, refatual) +
				ReturnChance(ClientID, ref3, refatual) + ReturnChance(ClientID, ref4, refatual) - (PegaRef(ClientID, item) - 10);
			if((thisclient->Inventory[emb1].Index == 4043) && (thisclient->Inventory[emb2].Index == 4043)) // Item protegido
			{
				if(chance<=chance_total && chance <= 95) // Sucesso na refinação
				{
					thisclient->Inventory[emb1].Index = 0;
					thisclient->Inventory[emb2].Index = 0;
					thisclient->Inventory[ref1].Index = 0;
					thisclient->Inventory[ref2].Index = 0;
					thisclient->Inventory[ref3].Index = 0;
					thisclient->Inventory[ref4].Index = 0;
					thisclient->Inventory[item].EFV1 += 4;
					sprintf(tmp, "Sucesso na composição [%d/%d]", chance, chance_total);
					SendClientMsg(ClientID, tmp);
					SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
				    SendALL(ClientID);
					 time ( &rawtime );
		char tmp[1024];
        sprintf(tmp, "DataBase\\Controle\\mais12\\Sucesso\\[%s].ini",player->Name);
        timeinfo = localtime ( &rawtime );
        pFile = fopen(tmp, "a");
        int cHor = PInt(0x00A5EA418);
        int cMin = PInt(0x00A5EA414);
        int cSeg = PInt(0x00A5EA410);
		int cDia = PInt(0x00A5EA41c);
		int cMes = PInt(0x00A5EA420) + 1;
		int cAno = PInt(0x00A5EA424) - 100;
		if(pFile != NULL)
        {	
		fprintf(pFile,"Jogador [%s] Falhou o [item] ID : %d %d %d %d %d %d %d  Horario %d:%d:%d  Data : %d/%d/%d \n",player->Name,item,43,234,player->Inventory[item].EF2,player->Inventory[item].EFV2,player->Inventory[item].EF3,player->Inventory[item].EFV3,cHor,cMin,cSeg,cDia,cMes,cAno);
fclose(pFile);
	return;
	}
				}
				else if(chance >= 95 && chance <= 100)// Aconteceu uma tragédia. Extração, amigo!
				{
					thisclient->Inventory[emb1].Index = 0;
					thisclient->Inventory[emb2].Index = 0;
					thisclient->Inventory[ref1].Index = 0;
					thisclient->Inventory[ref2].Index = 0;
					thisclient->Inventory[ref3].Index = 0;
					thisclient->Inventory[ref4].Index = 0;
					thisclient->Inventory[item+1].Index = GetItemType(ClientID, thisclient->Inventory[item].Index);
					thisclient->Inventory[item+1].EF1 = thisclient->Inventory[item].EF1;
					thisclient->Inventory[item+1].EF2 = thisclient->Inventory[item].EF2;
					thisclient->Inventory[item+1].EF3 = thisclient->Inventory[item].EF3;
					thisclient->Inventory[item+1].EFV1 = thisclient->Inventory[item].EFV1;
					thisclient->Inventory[item+1].EFV2 = thisclient->Inventory[item].EFV2;
					thisclient->Inventory[item+1].EFV3 = thisclient->Inventory[item].EFV3;
					thisclient->Inventory[item].Index = 0;
					sprintf(tmp, "Houve uma falha durante a composição (%d/%d) - Item destruído", chance, chance_total);
					SendClientMsg(ClientID, tmp);
					LogForAll(ClientID,"Extração Foi para o invetario do Jogador %s");
					SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
				    SendALL(ClientID);
					time ( &rawtime );
		char tmp[1024];
        sprintf(tmp, "DataBase\\Logs\\odin\\[%s].ini",player->Name);
        timeinfo = localtime ( &rawtime );
        pFile = fopen(tmp, "a");
        int cHor = PInt(0x00A5EA418);
        int cMin = PInt(0x00A5EA414);
        int cSeg = PInt(0x00A5EA410);
		int cDia = PInt(0x00A5EA41c);
		int cMes = PInt(0x00A5EA420) + 1;
		int cAno = PInt(0x00A5EA424) - 100;
			if(pFile != NULL)
        {	
			fprintf(pFile,"Jogador [%s] Obteve o [Item %d] ID : %d %d %d %d %d %d %d  Horario %d:%d:%d  Data : %d/%d/%d \n",player->Name,GetItemType(ClientID, thisclient->Inventory[item].Index),thisclient->Inventory[item].EF1,thisclient->Inventory[item].EFV1,thisclient->Inventory[item].EF2,thisclient->Inventory[item].EFV2,thisclient->Inventory[item].EF3,thisclient->Inventory[item].EFV3,cHor,cMin,cSeg,cDia,cMes,cAno);
			fclose(pFile);
	return;
	}
				}
				else 
				{
					thisclient->Inventory[emb1].Index = 0;
					thisclient->Inventory[emb2].Index = 0;
					thisclient->Inventory[ref1].Index = 0;
					thisclient->Inventory[ref2].Index = 0;
					thisclient->Inventory[ref3].Index = 0;
					thisclient->Inventory[ref4].Index = 0;
					thisclient->Inventory[item].EFV1 -= 4;
					sprintf(tmp, "Houve uma falha durante a composição (%d/%d)", chance, chance_total);
					SendClientMsg(ClientID, tmp);
					SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
				    SendALL(ClientID);
				}
			} 
			else 
			{
					
				// Não são emblemas - Chance de quebrar
				//5110, 5124, 5117, 5129, 5114, 5125,5128.
			}
		} // Não é refinação máxima
	}

// Destravando Item Celestial
	//Sets
	else if(((thisclient->Inventory[emb1].Index >= 1234 && thisclient->Inventory[emb1].Index <= 1237/*TK*/) ||
	(thisclient->Inventory[emb1].Index >= 1269 && thisclient->Inventory[emb1].Index <= 1272/*FM*/) ||
	(thisclient->Inventory[emb1].Index >= 1519 && thisclient->Inventory[emb1].Index <= 1522/*FM*/) ||
	(thisclient->Inventory[emb1].Index >= 1669 && thisclient->Inventory[emb1].Index <= 1672/*FM*/)) && thisclient->Inventory[item].Index == 542)
	{
		int RefDoSet = GetItemSanc(ClientID,1,emb1);
		thisclient->Inventory[emb1].Index -= 4;
		thisclient->Inventory[emb1].EF1 = thisclient->Inventory[emb1].EF1;
		thisclient->Inventory[emb1].EFV1 = thisclient->Inventory[emb1].EFV1;
		thisclient->Inventory[emb1].EF2 = thisclient->Inventory[emb1].EF2;
		thisclient->Inventory[emb1].EFV2 = thisclient->Inventory[emb1].EFV2;
		thisclient->Inventory[emb1].EF3 = thisclient->Inventory[emb1].EF3;
		thisclient->Inventory[emb1].EFV3 = thisclient->Inventory[emb1].EFV3;
		SendALL(ClientID);
		RefDoSet = 9;
		DeleteItemCompleto(ClientID,emb2);
		DeleteItemCompleto(ClientID,item);
		DeleteItemCompleto(ClientID,ref1);
		DeleteItemCompleto(ClientID,ref2);
		DeleteItemCompleto(ClientID,ref3);
		DeleteItemCompleto(ClientID,ref4);
		SendALL(ClientID);
		SendClientMsg(ClientID,"Refinação sucedida.");
		SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
		return;
	}

// Refinação de capas Celestiais
	else if(thisclient->Inventory[emb1].Index == 4127 && thisclient->Inventory[emb2].Index == 4127 && thisclient->Inventory[item].Index == 5135 && thisclient->Inventory[ref1].Index == 413 && thisclient->Inventory[ref2].Index == 413 && thisclient->Inventory[ref3].Index == 413 && thisclient->Inventory[ref4].Index == 413)
	{
		if(thisclient->Equip[0].EFV2 >= 3)
		{
		  if(thisclient->Equip[15].Index == 0)
			{
				SendClientMsg(ClientID,"Há algo de errado na combinação.");
				SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			}
			else if(thisclient->Equip[15].EFV1 <= 8)
			{
				RefinarItemMais(ClientID,0,15,1);
				DeleteItemCompleto(ClientID,emb1);
				DeleteItemCompleto(ClientID,emb2);
				DeleteItemCompleto(ClientID,item);
				DeleteItemCompleto(ClientID,ref1);
				DeleteItemCompleto(ClientID,ref2);
				DeleteItemCompleto(ClientID,ref3);
				DeleteItemCompleto(ClientID,ref4);
				GetCurrentScore(ClientID);
				SendStats(ClientID);
				SendScore(ClientID);
				SendALL(ClientID);
				SendClientMsg(ClientID,"Refinação sucedida.");
				SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
				return;
			}
			else
			{
				SendClientMsg(ClientID,"Há algo de errado na combinação.");
				SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
				return;
			}
		}
		else
		{
			SendClientMsg(ClientID,"Há algo de errado na combinação.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		}
	}
// Composição de Pedras Secretas
	// Pedra Secreta da Agua
	else if(thisclient->Inventory[emb1].Index == 5126 && thisclient->Inventory[emb2].Index == 5122 && thisclient->Inventory[item].Index == 5121 && thisclient->Inventory[ref1].Index == 5114 && thisclient->Inventory[ref2].Index == 5125 && thisclient->Inventory[ref3].Index == 5111 && thisclient->Inventory[ref4].Index == 5118)
	{
		if(thisclient->Gold >= 2000000)
		{
			thisclient->Inventory[emb1].Index = 5334;
			thisclient->Inventory[emb1].EF1 = 0;
			thisclient->Inventory[emb1].EFV1 = 0;
			thisclient->Inventory[emb1].EF2 = 0;
			thisclient->Inventory[emb1].EFV2 = 0;
			thisclient->Inventory[emb1].EF3 = 0;
			thisclient->Inventory[emb1].EFV3 = 0;
			DeleteItemCompleto(ClientID,emb2);
			DeleteItemCompleto(ClientID,item);
			DeleteItemCompleto(ClientID,ref1);
			DeleteItemCompleto(ClientID,ref2);
			DeleteItemCompleto(ClientID,ref3);
			DeleteItemCompleto(ClientID,ref4);
			thisclient->Gold -= 2000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição sucedida.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		}
		else
		{
			SendClientMsg(ClientID,"Necessário 2.000.000 (2Mi) de Gold.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		}
	}
	// Pedra Secreta da Terra
	else if(thisclient->Inventory[emb1].Index == 5131 && thisclient->Inventory[emb2].Index == 5113 && thisclient->Inventory[item].Index == 5115 && thisclient->Inventory[ref1].Index == 5116 && thisclient->Inventory[ref2].Index == 5125 && thisclient->Inventory[ref3].Index == 5112 && thisclient->Inventory[ref4].Index == 5114)
	{
		if(thisclient->Gold >= 2000000)
		{
			thisclient->Inventory[emb1].Index = 5335;
			thisclient->Inventory[emb1].EF1 = 0;
			thisclient->Inventory[emb1].EFV1 = 0;
			thisclient->Inventory[emb1].EF2 = 0;
			thisclient->Inventory[emb1].EFV2 = 0;
			thisclient->Inventory[emb1].EF3 = 0;
			thisclient->Inventory[emb1].EFV3 = 0;
			DeleteItemCompleto(ClientID,emb2);
			DeleteItemCompleto(ClientID,item);
			DeleteItemCompleto(ClientID,ref1);
			DeleteItemCompleto(ClientID,ref2);
			DeleteItemCompleto(ClientID,ref3);
			DeleteItemCompleto(ClientID,ref4);
			thisclient->Gold -= 2000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição sucedida.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		}
		else
		{
			SendClientMsg(ClientID,"Necessário 2.000.000 (2Mi) de Gold.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		}
	}
	// Pedra Secreta do Sol
	else if(thisclient->Inventory[emb1].Index == 5110 && thisclient->Inventory[emb2].Index == 5124 && thisclient->Inventory[item].Index == 5117 && thisclient->Inventory[ref1].Index == 5129 && thisclient->Inventory[ref2].Index == 5114 && thisclient->Inventory[ref3].Index == 5125 && thisclient->Inventory[ref4].Index == 5128)
	{
		if(thisclient->Gold >= 2000000)
		{
			thisclient->Inventory[emb1].Index = 5336;
			thisclient->Inventory[emb1].EF1 = 0;
			thisclient->Inventory[emb1].EFV1 = 0;
			thisclient->Inventory[emb1].EF2 = 0;
			thisclient->Inventory[emb1].EFV2 = 0;
			thisclient->Inventory[emb1].EF3 = 0;
			thisclient->Inventory[emb1].EFV3 = 0;
			DeleteItemCompleto(ClientID,emb2);
			DeleteItemCompleto(ClientID,item);
			DeleteItemCompleto(ClientID,ref1);
			DeleteItemCompleto(ClientID,ref2);
			DeleteItemCompleto(ClientID,ref3);
			DeleteItemCompleto(ClientID,ref4);
			thisclient->Gold -= 2000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição sucedida.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		}
		else
		{
			SendClientMsg(ClientID,"Necessário 2.000.000 (2Mi) de Gold.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		}
	}
	// Pedra Secreta do Vento
	else if(thisclient->Inventory[emb1].Index == 5122 && thisclient->Inventory[emb2].Index == 5119 && thisclient->Inventory[item].Index == 5132 && thisclient->Inventory[ref1].Index == 5120 && thisclient->Inventory[ref2].Index == 5130 && thisclient->Inventory[ref3].Index == 5133 && thisclient->Inventory[ref4].Index == 5123)
	{
		if(thisclient->Gold >= 2000000)
		{
			thisclient->Inventory[emb1].Index = 5337;
			thisclient->Inventory[emb1].EF1 = 0;
			thisclient->Inventory[emb1].EFV1 = 0;
			thisclient->Inventory[emb1].EF2 = 0;
			thisclient->Inventory[emb1].EFV2 = 0;
			thisclient->Inventory[emb1].EF3 = 0;
			thisclient->Inventory[emb1].EFV3 = 0;
			DeleteItem(ClientID,emb2);
			DeleteItem(ClientID,item);
			DeleteItem(ClientID,ref1);
			DeleteItem(ClientID,ref2);
			DeleteItem(ClientID,ref3);
			DeleteItem(ClientID,ref4);
			thisclient->Gold -= 2000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição sucedida.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		}
		else
		{
			SendClientMsg(ClientID,"Necessário 2.000.000 (2Mi) de Gold.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		}
	}
//Composição de Pistas de Runas
	else if(thisclient->Inventory[emb1].Index == 413 && thisclient->Inventory[emb2].Index == 413 && thisclient->Inventory[item].Index == 413 && thisclient->Inventory[ref1].Index == 413 && thisclient->Inventory[ref2].Index == 413 && thisclient->Inventory[ref3].Index == 413 && thisclient->Inventory[ref4].Index == 413)
	{
		thisclient->Inventory[emb1].Index = 5134;
		thisclient->Inventory[emb1].EF1 = 0;
		thisclient->Inventory[emb1].EFV1 = 0;
		thisclient->Inventory[emb1].EF2 = 0;
		thisclient->Inventory[emb1].EFV2 = 0;
		thisclient->Inventory[emb1].EF3 = 0;
		thisclient->Inventory[emb1].EFV3 = 0;
		DeleteItemCompleto(ClientID,emb2);
		DeleteItemCompleto(ClientID,item);
		DeleteItemCompleto(ClientID,ref1);
		DeleteItemCompleto(ClientID,ref2);
		DeleteItemCompleto(ClientID,ref3);
		DeleteItemCompleto(ClientID,ref4);
		SendALL(ClientID);
		SendClientMsg(ClientID,"Combinação completa.");
		SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
		return;
	}
	else
	{
		SendClientMsg(ClientID,"Há algo de errado na combinação.");
		SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
		return;
	}
}

void ComporIdeal(int ClientID,int npcid)
{
	
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	//MOB *thisclient = (MOB*)GetMobFromIndex(Client);
	int addr_bclient = ClientID * 0x0410;
	
	int stone0 = GetFirstSlotSADD(ClientID,5334,64);
	int stone1 = GetFirstSlotSADD(ClientID,5335,64);
	int stone2 = GetFirstSlotSADD(ClientID,5336,64);
	int stone3 = GetFirstSlotSADD(ClientID,5337,64);
	if(player->Gold < 100000000 )
	{
		SendClientMsg(ClientID,"É necessário 100kk.");
		return;
	}


	if(player->Inventory[stone0].Index == 5334 && player->Inventory[stone1].Index == 5335 && player->Inventory[stone2].Index == 5336 && player->Inventory[stone3].Index == 5337)
	{
		
		    player->Inventory[stone0].Index = 5338;
			//DeleteItem(ClientID,stone0);
			DeleteItem(ClientID,stone1);
			DeleteItem(ClientID,stone2);
			DeleteItem(ClientID,stone3);
			player->Gold -=  100000000;
			SendALL(ClientID);
			SendClientMsg(ClientID,"Composição sucedida.");
			SendClientSignalParm(ClientID,0x7530, 0x3A7, 2);
			return;
		
	}
if(stone0 == -1 || stone1 == -1 || stone2 == -1 || stone3 == -1)
	{
		SendClientMsg(ClientID,"É necessário as quatro pedras elementares(Terra,Agua,Vento e Sol).");
		return;
	}
}

void ResetStatus(int ClientID, int npcid)
{
	MOB *play = (MOB*)GetMobFromIndex(ClientID);
	int total = play->bStatus.STR + play->bStatus.INT + play->bStatus.DEX + play->bStatus.CON - 20;
	int itenslot = GetFirstSlotSADD(ClientID,3336,64);
	if(itenslot != -1)
	{
		M_Hab(ClientID,npcid);
		return;
	}
	if(play->Equip[0].EFV2 == 1)
	{
		for(int i = 1;i <= 7;i++)
		{
			if(play->Equip[i].Index != 0)
			{
				SendSay(npcid,"Desequipe seus itens.");
				return;
			}
			if(i == 7)
			{
				play->bStatus.STR = 5;
				play->bStatus.INT = 5;
				play->bStatus.DEX = 5;
				play->bStatus.CON = 5;
				if(total <= 30 && play->bStatus.Level <= 5)
				{
					total = play->bStatus.Level * 5 ;
				}
				play->StatusPoint += total;
				SendClientMsg(ClientID,"Pontos de status reinicializados.");
				SendCharList(ClientID);
			}
		}
	}
}

void Uxmal(int clientid, int npcid)
{
	MOB *play = (MOB*)GetMobFromIndex(clientid);
	int cMin = PInt(0x00A5EA414);
	int item0 = GetFirstSlot(clientid,5134,43,0,0,0,0,0,64);
	int item02 = GetFirstSlot(clientid,5134,0,0,0,0,0,0,64);
	int item1 = GetFirstSlot(clientid,5134,43,1,0,0,0,0,64);
	int item2 = GetFirstSlot(clientid,5134,43,2,0,0,0,0,64);

	if(item0 != -1)
	{
		if(cMin == 00 || cMin == 15 || cMin == 30 || cMin == 45)
		{
			if(Pista0_0(clientid) == TRUE) play->Inventory[item0].Index = 0;
		}
		else SendClientMsg(clientid,"Apenas nos minutos 00,15,30 e 45.");
	}
	else if(item02 != -1)
	{
		if(cMin == 00 || cMin == 15 || cMin == 30 || cMin == 45)
		{
			if(Pista0_0(clientid) == TRUE) play->Inventory[item02].Index = 0;
		}
		else SendClientMsg(clientid,"Apenas nos minutos 00,15,30 e 45.");
	}
	else if(item1 != -1)
	{
		if(cMin == 00 || cMin == 15 || cMin == 30 || cMin == 45)
		{
			if(Pista1_0(clientid) == TRUE) play->Inventory[item1].Index = 0;
		}
		else SendClientMsg(clientid,"Apenas nos minutos 00,15,30 e 45.");
	}
	else if(item2 != -1)
	{
		//play->Inventory[item2].Index = 0;
	}
	else
	{
		SendClientMsg(clientid,"Boa sorte, bravo guerreiro.");
	}
}
bool isvip(int clientid)
{
	char local[100];
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	sprintf(local,"DataBase\\Accounts\\Vips\\%s.txt",vLogin(clientid));
	if(file_exists(local)) { return true; }
	else { return false; }
}
