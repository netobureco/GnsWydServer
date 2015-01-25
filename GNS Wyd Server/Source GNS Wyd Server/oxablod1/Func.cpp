#include "Stdafx.h"

#define addrSlotI(ClientID,Slot) (ClientID * 0x0410 + Slot * 8 + 0x015C6A94)
#define SendInv2 ((void(*)(int,int,int,int))0x4015C3)


//Teleporta o char
void DoTeleport(int ClientID, int x, int y)
{
	int telecmd_addr = 0x004010C8;
	_asm
	{
		PUSH y
		PUSH x
		PUSH ClientID
		CALL telecmd_addr
		ADD ESP,0x0C
	}
}
int GetNumberOnline()
{
	int onlines =0;
	for(int i=0;i<130;i++)
	{
		if(strcmp(vNick(i),"\0")!=0)
		{
			onlines++;
		}
	}
	return onlines;
}

void CloseUser1(int clientid)
{
	int close_user = 0x0459440;
	_asm
	{
		PUSH clientid
		CALL close_user
		ADD ESP,0x04
	}
}
void GetAll(int clientid)
{
	
	{
	GetCurrentScore(clientid);
    GetCurrentScore2(clientid);
    SendStats(clientid);
    SendScore(clientid);
    SendEquip(clientid);
	}
}
void SpawnChar(int clientid,char *tab)
{
	u8 Buffer[4096];
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	int addr_bclient = clientid * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	Spawn *pServer = (Spawn*)Buffer;
	pServer->Header.PacketId = 0x364;
	pServer->Header.Size = 176;
	pServer->Header.ClientID = 30000;
	SetMem(&pServer->Affect[0],&player->Affects[0], 24);
	for(int i=0;i<16;i++)
	{
		st_Item *item = &player->Equip[i];
		SetMem(&pServer->AnctCode[i], (const void*)GetAnctCode(item), 16);
	}
	pServer->ChaosPoints = 75;
	pServer->ClientID = clientid;
	pServer->CurrentKill = 0;
	pServer->GuildIndex = player->GuildIndex;
	for(int i=0;i<16;i++)
	{
		st_Item *item = &player->Equip[i];
		SetMem(&pServer->ItemEff[i], (const void*)GetItemIDAndEffect(item,i==14), 32);
	}
	strcpy((char*)pServer->Name, (const char*)player->Name);
	pServer->Position.X = cX;
	pServer->Position.Y = cY;
	pServer->Spawn.MemberType = 0;
	pServer->Spawn.Type = 0;
	memcpy(&pServer->Status, (const void*)&player->bStatus, sizeof(player->bStatus));
	pServer->TotalKill = 0;
	strcpy(tab, (const char*)pServer->Tab);
	SendPacket(BufferLoop, clientid, 0);

}
void Atualizar(int clientid, int type, int slot)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid); st_Item Item;
	if(type == _equip)
	{
		SendItens(clientid, slot);
		return;
	}
	else if(type == _inv)
	{
		Item.Index = player->Inventory[slot].Index;
		Item.EF1 = player->Inventory[slot].EF1;
		Item.EFV1 = player->Inventory[slot].EFV1;
		Item.EF2 = player->Inventory[slot].EF2;
		Item.EFV2 = player->Inventory[slot].EFV2;
		Item.EF3 = player->Inventory[slot].EF3;
		Item.EFV3 = player->Inventory[slot].EFV3;
		return;
	}	
	else return;
}

//Atualiza o char
void GetCurrentScore(int ClientID)
{
	int getscore_addr = 0x040149C;
	int addr_bclient = ClientID * 0x0410;
	int addr = addr_bclient + 0x015C69B8;
	_asm
	{
		MOV ECX,ClientID
		PUSH ECX
		MOV ECX,addr
		CALL getscore_addr
	}
}
//Atualiza EXP
void GetCurrentScore2(int ClientID)
{
	int getscore_addr = 0x040143D;
	int addr_bclient = ClientID * 0x0410;
	int addr = addr_bclient + 0x015C69B8;
	_asm
	{
		MOV ECX,addr
		CALL getscore_addr
	}
}
//Envia msg ao cliente
void SendClientMsg(int ClientID,const char * _Format,...)
{
    int _call = 0x04010FF;
    _asm
    {
        PUSH _Format
        PUSH ClientID
        CALL _call
        ADD ESP,8
    }
}
//Envia Effeito
void SendEffect(int value1, int effectid, int ClientID)
{
	int sendeffect_addr = 0x04010DC;
	_asm
	{
		PUSH value1
		PUSH effectid
		PUSH ClientID
		CALL sendeffect_addr
		ADD ESP,0x0C
		/*
		Val1	Val2 (HEX)
        0	14		Balança os braços
        3	0e		Level up
        0	17		Pula e gira
        0	0f		Deita
        1	0e		Pula
        */
	}
}
//Atualiza HOLD, EXP, Stats especiais
void SendStats(int ClientID)
{
	int sendstats_addr = 0x04012C1;
	_asm
	{
		// client id
		PUSH ClientID
		// ??
		CALL sendstats_addr
		ADD ESP, 0x04
	}
}
//Atualiza
void SendEquip(int ClientID)
{
	int equip_addr = 0x0401069;
	_asm
	{
		PUSH ClientID
		PUSH ClientID
		CALL equip_addr
		ADD ESP,0x08
	}
}
//Atualiza Scores do Perso
void SendScore(int ClientID)
{
	int score_addr = 0x0401578;
	_asm
	{
		PUSH ClientID
		CALL score_addr
		ADD ESP,0x4
	}
}
//Evia Char List
void SendCharList(int ClientID)
{
	int dc_addr = 0x04013B6;
	_asm
	{
		PUSH ClientID
		CALL dc_addr
		ADD ESP, 0x04
	}
}
//Save Char
void SaveChar(int gg, int ClientID)
{
	int att_addr = 0x040158C;
	_asm
	{
		PUSH gg
		PUSH ClientID
		CALL att_addr
		ADD ESP,8
	}
}
void SendALL2(int ClientID, int slot)
{
	SendInv2(ClientID,1,slot,addrSlotI(ClientID,slot));
	SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
	return;
}
/*
//Send All
void SendALL(char *Data)
{
	Volatile *v = (Volatile*)Data;
	int ClientID = *(short*)&Data[6];
	SendInv2(ClientID,1,v->SrcSlot,addrSlotI(ClientID,v->SrcSlot));
	SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
	return;
	
	//int sendinv1_addr = 0x0401578;//Atualiza inventario
	int sendinv2_addr = 0x0401573;//Atualiza inventario
	int sendstats_addr = 0x04012c1;//Send Stats
	int sendequip_addr = 0x0401069;//Send Equips

	_asm
	{
		//PUSH ClientID
		//CALL sendinv1_addr
		//ADD ESP,0x04
		PUSH ClientID
		CALL sendinv2_addr
		ADD ESP,0x04
		PUSH ClientID
		CALL sendstats_addr
		ADD ESP,0x04
		PUSH ClientID
		CALL sendequip_addr
		ADD ESP,0x04
	}
}*/
//Send All
void Attinv(int ClientID)
{
	int inv1_addr = 0x0401578;//Atualiza inventario
	int inv2_addr = 0x0401573;//Atualiza inventario
		_asm
	{
		PUSH ClientID
		CALL inv1_addr
		ADD ESP,0x04
		PUSH ClientID
		CALL inv2_addr
		ADD ESP,0x04

	}
}
void SendALL(int ClientID)
{
	//int sendinv1_addr = 0x0401578;//Atualiza inventario
	int sendinv2_addr = 0x0401573;//Atualiza inventario
	int sendstats_addr = 0x04012c1;//Send Stats
	int sendequip_addr = 0x0401069;//Send Equips

	_asm
	{
		//PUSH ClientID
		//CALL sendinv1_addr
		//ADD ESP,0x04
		PUSH ClientID
		CALL sendinv2_addr
		ADD ESP,0x04
		PUSH ClientID
		CALL sendstats_addr
		ADD ESP,0x04
		PUSH ClientID
		CALL sendequip_addr
		ADD ESP,0x04
	}
}
//Envia fala ao NPC
void SendSay(int npcid, char *msg,...)
{
	int sendsay_addr = 0x0401140;
	_asm
	{
		PUSH msg
		PUSH npcid
		CALL sendsay_addr
		ADD ESP,0x08
	}
}
//Envia Notice for ALLL
void SendNotice(char *msg,...)
{
	int sendnotice_addr = 0x0401357;
	_asm
	{
		PUSH msg
		CALL sendnotice_addr
		ADD ESP, 0x04
	}
}
//Procura por um item com ADD no inventario
int GetFirstSlot(int ClientID, int item, int add1, int val1, int add2, int val2, int add3, int val3, int slotPlace)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cSlot, cSlot1, cSlot2, cSlot3, cSlot4, cSlot5, cSlot6;
	int slot = -1;
	if(slotPlace == 16)
	{
		for(int i = 0;i < 16;i++)
		{
		cSlot = player->Equip[i].Index;
		if(cSlot == player->Equip[i].Index)
		{
			slot = i;
			break;
		}
		}
	}
	else if(slotPlace == 64)
	{
		for(int i = 0;i < 64;i++)
		{
			cSlot = player->Inventory[i].Index;
			cSlot1 = player->Inventory[i].EF1;
			cSlot2 = player->Inventory[i].EFV1;
			cSlot3 = player->Inventory[i].EF2;
			cSlot4 = player->Inventory[i].EFV2;
			cSlot5 = player->Inventory[i].EF3;
			cSlot6 = player->Inventory[i].EFV3;
			if(cSlot == item && cSlot1 == add1 && cSlot2 == val1 && cSlot3 == add2 && cSlot4 == val2 && cSlot5 == add3 && cSlot6 == val3)
			{
				slot = i;
				break;
			}
		}
	}
	return slot;
}
int GetFirstSlotIgnore(int ClientID, int item, int add1, int val1, int add2, int val2, int add3, int val3, int slotPlace, int ignore = 100)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cSlot, cSlot1, cSlot2, cSlot3, cSlot4, cSlot5, cSlot6;
	int slot = -1;
	if(slotPlace == 16)
	{
		for(int i = 0;i < 16;i++)
		{
		cSlot = player->Equip[i].Index;
		if(cSlot == player->Equip[i].Index && ignore != i)
		{
			slot = i;
			break;
		}
		}
	}
	else if(slotPlace == 64)
	{
		for(int i = 0;i < 64;i++)
		{
			cSlot = player->Inventory[i].Index;
			cSlot1 = player->Inventory[i].EF1;
			cSlot2 = player->Inventory[i].EFV1;
			cSlot3 = player->Inventory[i].EF2;
			cSlot4 = player->Inventory[i].EFV2;
			cSlot5 = player->Inventory[i].EF3;
			cSlot6 = player->Inventory[i].EFV3;
			if(cSlot == item && cSlot1 == add1 && cSlot2 == val1 && cSlot3 == add2 && cSlot4 == val2 && cSlot5 == add3 && cSlot6 == val3 && ignore != i)
			{
				slot = i;
				break;
			}
		}
	}
	return slot;
}

//Procura por um item no inventario sem ADD
int GetFirstSlotSADD(int clientid, int item, int slotPlace)
{
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	int cSlot;
	int slot = -1;
	if(slotPlace == 64)
	{
		for(int i = 0;i < 64;i++)
		{
			cSlot = player->Inventory[i].Index;
			if(cSlot == item)
			{
				slot = i;
				break;
			}
		}
	}
	if(slot == -1)
	{
		//f->SendClientMsg(clientid,"!Erro @@@@@@@@@@@@@.");
	}
	return slot;
}
//Envia Notice em uma determinada area
void SendNoticeArea(int x, int y,  int x2, int y2, char *msg)
{
	int sendnoticearea_addr = 0x043F0A0;
	_asm
	{
		PUSH y
		PUSH x
		PUSH y2
		PUSH x2
		PUSH msg
		CALL sendnoticearea_addr
		ADD ESP,0x014
	}
}
//Limpa uma area
void ClearArea(int x, int y,  int x2, int y2)
{
	int cleararea_addr = 0x040106E;
	_asm
	{
		PUSH y
		PUSH x
		PUSH y2
		PUSH x2
		CALL cleararea_addr
		ADD ESP, 0x010
	}
}
//Do Teleport Area
void DoTeleportArea(int destx, int desty, int x, int y, int x2, int y2)
{
	int doteleportarea_addr = 0x0401596 ;//é bem grande, perai
	_asm
	{
		PUSH desty
		PUSH destx
		PUSH y
		PUSH x
		PUSH y2
		PUSH x2
		CALL doteleportarea_addr
		ADD ESP, 0x018
	}
}
void GenerateSummon(int ClientID, int summon_id)
{
	int summon_addr = 0x0446170;
	_asm
	{
		PUSH 0
		PUSH summon_id
		PUSH ClientID
		CALL summon_addr
		ADD esp,0xC
	}
}
//Atualiza Equips
/*
	0 face
	1 elmo
	2 peito
	3 calça
	4 luva
	5 bota
	6 arma direita
	7 arma esquerda
	8 (brinco hp)
	9 (amuleto de prata)
	10 (orb)
	11 (amuleto amantes)
	12 (guild)
	13 (fada)
	14 montaria
	15 capa
*/
void SendItens(int ClientID, int slot)
{
	int send_addr = 0x04015C3;
	int addr_bclientid = ClientID * 0x0410 + ((slot * 8) + 0x015C6A14);
	_asm
	{
		PUSH addr_bclientid
		PUSH slot
		PUSH 0
		PUSH ClientID
		CALL send_addr
		ADD ESP,0x010
	}
}
//atualiza slot do inventario
void SendInv(int ClientID, int slot)
{
	int send_addr = 0x04015C3;
	int addr_bclientid = ClientID * 0x0410 + ((slot * 8) + 0x015C6A96);
	_asm
	{
		PUSH addr_bclientid
		PUSH slot
		PUSH 1
		PUSH ClientID
		CALL send_addr
		ADD ESP,0x010
	}
}

void SetItemSanc(int clientid, int item, int value)
{
	
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	if(player->Inventory[item].EF1 == 43)
	{
		player->Inventory[item].EFV1 = value;
		return;
	}
	else if(player->Inventory[item].EF2 == 43)
	{
		player->Inventory[item].EFV2 = value;
		return;
	}
	else if(player->Inventory[item].EF3 == 43)
	{
		player->Inventory[item].EFV3 = value;
		return;
	}
	else
	{
		SendClientMsg(clientid,"Item impossivel de refinar.");
		return;
	}
}
int GetUserInArea(int x1, int y1, int x2, int y2, char *nick)
{
	int getuser_addr = 0x044b510;
	
	_asm
	{
		PUSH nick
		PUSH y2
		PUSH x2
		PUSH y1
		PUSH x1
		CALL getuser_addr
		ADD ESP,0x014
	}
}

void GenerateSpawn(int generID)
{
	int generatespawn_addr = 0x04011CC;;
	_asm
	{
		PUSH 0
		PUSH 0
		PUSH generID
		CALL generatespawn_addr
		ADD ESP,0xC
	}
}
//Envia um Buff ao char
void Buff(int ClientID, int time1, int time2, int skill)
{
	int buff_addr = 0x04015BE;
	_asm
	{
		PUSH time1
		PUSH time2
		PUSH skill
		PUSH ClientID
		CALL buff_addr
		ADD ESP,0x010
	}
}
void ClearAreaLevel(int x, int y, int x1, int y1, int lvmax, int lvmin)
{
	int level_addr = 0x0401244;
	_asm
	{
		PUSH lvmax
		PUSH lvmin
		PUSH y
		PUSH x
		PUSH y1
		PUSH x1
		CALL level_addr
		ADD ESP,0x018
	}
}
int PTeleport(int ClientID, int PointX, int PointY)
{
        int teleportsCount = 0;
        int i = 0;
 
        for(i = 0; i < 12; i++)
        {
                int masterIndex = ClientID * 0x410;
                int memberId = *(WORD*)(masterIndex + 0x15C6D86 + (i * 2));
 
                if(memberId != ClientID)
                {
					if(memberId >= 1 && memberId <= 800)
					{
					
                        if(*(DWORD*)(memberId * 0xC4C + 0x7B318E0) == 0x16)//0x7B318E0
                        {
                                DoTeleport(memberId, PointX + 2, PointY + 2);
                                DoTeleport(ClientID, PointX, PointY);
                                teleportsCount++;
                        }
					}
                }
        }
 
        return teleportsCount;
}
void EffectArea(int effect, int xmax, int ymax, int xmin, int ymin)
{
	int effect_addr = 0x0401582;
	int damage_addr = 0x04012A8;
	_asm
	{
		PUSH 0
		PUSH 110
		PUSH ymax
		PUSH xmax
		PUSH ymin
		PUSH xmin
		CALL effect_addr
		ADD ESP,24
		PUSH ymax
		PUSH xmax
		PUSH ymin
		PUSH xmin
		CALL damage_addr
		ADD ESP,16
	}
}
void GetHPMP(int ClientID)
{
	int gethpmp_addr = 0x0401307;
	int addr_bclient = ClientID * 0x0410;
	int addr = 0x015C69B8;
	_asm
	{
		MOV ECX,addr_bclient
		ADD ECX,addr
		PUSH ECX
		CALL gethpmp_addr
		ADD ESP,4
	}
}
void GetHPMP2(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int gethpmp_addr = 0x0401307;
	int addr_bclient = ClientID * 0x0410;
	int addr = 0x015C69B8;
	_asm
	{
		MOV ECX,addr_bclient
		ADD ECX,addr
		PUSH ECX
		CALL gethpmp_addr
		ADD ESP,4
	}
}
void GetinXp(int ClientID, int exp, char *msg)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	{
		if(player->Equip[0].EFV2 == 1)
		{
		player->Exp += exp;
		SendClientMsg(ClientID,msg);
		SendStats(ClientID);
		SendEffect(1,0x0E,ClientID);
		}
	}
}
void GetinSlot(int ClientID,int item, int entrega)
{
   int i ;
   for(i = 0; i < 63 ;i++)
   {
       int id = *(short*)((ClientID * 0x410) + 0x15C6A94 + (i * 8));
       if(id == item) 
       {
       *(short*)((ClientID * 0x410) + 0x15C6A94 + (i * 8)) = entrega; 
		SendInv2(ClientID,1,i,addrSlotI(ClientID,i));
		SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
       break;
       }
   }
}
int GetUserByName(char *nick)
{
	int getuserbyname_addr = 0x04010FA;
	_asm
	{
		PUSH nick
	    	CALL getuserbyname_addr
		ADD ESP,0x04
	}
}
int GetQuantidadeItem(int ClientID, int itens)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cSlot;
	int quantidades = 0;
	
		for(int i = 0;i < 64;i++)
		{
			cSlot = player->Inventory[i].Index;
			
			if(cSlot == itens)
			{
				quantidades = quantidades+1;				
			}
		}
	
	return quantidades;
}
void DeleteUnidade(int ClientID, int itens)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int item = GetFirstSlotSADD(ClientID,itens,64);
	if(item != -1)
	{
		if(player->Inventory[item].EF1 == 61 && player->Inventory[item].EFV1 >= 2)  
		{
			player->Inventory[item].Index = 0;
			player->Inventory[item].EF1 -= 1;
			SendInv2(ClientID,1,item,addrSlotI(ClientID,item));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
		else
		{
			player->Inventory[item].Index = 0;
			player->Inventory[item].EF1 = 0;
			player->Inventory[item].EFV1 = 0;
			player->Inventory[item].EF2 = 0;
			player->Inventory[item].EFV2 = 0;
			player->Inventory[item].EF3 = 0;
			player->Inventory[item].EFV3 = 0;
			SendInv2(ClientID,1,item,addrSlotI(ClientID,item));
			SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
			return;
		}
	}
}
void GetRemoItem(int ClientID, int itens, int quatidade)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cSlot;
	int cont = 0;
	
		for(int i = 0;i < 64;i++)
		{
			cSlot = player->Inventory[i].Index;
			
			if(cSlot == itens && cont <= quatidade)
			{
				player->Inventory[i].Index = 0;	
				player->Inventory[i].EF1 = 0;
				player->Inventory[i].EFV1 = 0;
				player->Inventory[i].EF2 = 0;
				player->Inventory[i].EFV2 = 0;
				player->Inventory[i].EF3 = 0;
				player->Inventory[i].EFV3 = 0;
				cont = cont+1;
			}
		}
	
	return ;
}
int GetUnidadeItem(int ClientID, int itens)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	//int cSlotss;
	int unidade = 0;
	int uni = GetFirstSlotSADD(ClientID,itens,64);
	
			if(uni != -1)
			{
				unidade += player->Inventory[uni].EFV1;				
			}
	
	return unidade;
}
void EmpacotarPl(int ClientID, int item2, int vola, int pac)
{	
	int item = item2; // Poeira de Lac
	int itemParaEmpacotar = vola; // Escritura de Lactolerium
	int itemEmpacotado = pac; // Lactolerium

	int quantidade = GetQuantidadeItem(ClientID,item);
	int Slot;	
	int cont = 0;
	
	MOB *player = (MOB*)GetMobFromIndex(ClientID);	

		for(int i = 0;i < 64;i++)
		{				
			Slot = player->Inventory[i].Index;			
			if(Slot == item && cont != 10)
			{
				player->Inventory[i].Index = 0;	
				cont = cont+1;
			}
		}
		int itenslot1 = GetFirstSlotSADD(ClientID,0,64);
		int itenslot2 = GetFirstSlotSADD(ClientID,itemParaEmpacotar,64);
		player->Inventory[itenslot2].Index = 0;
		player->Inventory[itenslot1].Index = itemEmpacotado;
		player->Inventory[itenslot1].EF1 = 61;
		player->Inventory[itenslot1].EFV1 = cont;
		SendALL2(ClientID,itenslot1);
		SendALL2(ClientID,itenslot2);
		return;
}
void fada_vale(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	if(cX >= 2176 && cY >= 3581 && cX <= 2305 && cY <= 3713)
	{
		if(player->Equip[13].Index == 3916)
		{
			return;
		}
		else
		{
			DoTeleport(ClientID,2100,2100);
			return;
		}
	}
	else if(player->Equip[13].Index == 3916)
	{
		DoTeleport(ClientID,2286,3688);
		return;
	}
}
void PartyXp(int ClientID, int exp, char *msg, int masterCID)
{
	if(masterCID == 0) 
	{
		for(int i = 0; i < 12; i++)
		{
			int masterIndex = ClientID * 0x410;
			int memberId = *(WORD*)(masterIndex + 0x15C6D86 + (i * 2));

			if(memberId != ClientID)
			{
				if(memberId >= 1 && memberId <= 800)
				{
				
				if(*(DWORD*)(memberId * 0xC4C + 0x7B318E0) == 0x16)
				{
					GetinXp(memberId,exp,msg);
				}
				}
			}
		}
	}
	else  
	{
		GetinXp(masterCID,exp,msg);
		for(int i = 0; i < 12; i++)
		{
			int masterIndex = masterCID * 0x410;
			int memberId = *(WORD*)(masterIndex + 0x15C6CD0 + (i * 2));

			if(memberId != ClientID)
			{
				if(memberId >= 1 && memberId <= 800)
				{
				
				if(*(DWORD*)(memberId * 0xC4C + 0x7B318E0) == 0x16)
				{
				    GetinXp(memberId,exp,msg);
				}
				}
			}
		}
	}
}
int IDmap(int ClientID, int x, int y, int x2, int y2)
{
	int cont = 0;

	for(int i=0;i<999;i++)
	{
		int rid = i * 0x0410;
		int cX = PInt(rid + 0x015C6CEC);
        int cY = PInt(rid + 0x015C6CF0);
		if(cX >= x && cY >= y && cX <= x2 && cY <= y2)
		{
			cont = cont+1;
		}
	}
	return cont;
}
void IDmapItem(int ClientID, int x, int y, int x2, int y2, int pede, int devolve)
{
	for(int i=0;i<999;i++)
	{
		int rid = i * 0x0410;
		int cX = PInt(rid + 0x015C6CEC);
        int cY = PInt(rid + 0x015C6CF0);
		if(cX >= x && cY >= y && cX <= x2 && cY <= y2)
		{
			GetinSlot(i,pede,devolve);
		}
	}
	return;
}
void BuffKefra(char *msg, int tempo1, int tempo2, int skill)
{
	for(int i=0;i<999;i++)
	{
		SendClientMsg(i,msg);
		Buff(i,tempo1,tempo2,skill);
		Buff(i,tempo1,tempo2,skill);
		SendStats(i);
		SendScore(i);
	}
}
void Mob(int ClientID, int mob)
{
	int i = 0;
	while(i <= 20)
	{
	i++;
	//GenerateSpawn(mob);
	}
}
void MobTime(int ClientID, int mob, int min1, int min2, int min3, int min4, int min5, int seg1, int seg2)
{
    int cMin = PInt(0x00A5EA414);
    int cSeg = PInt(0x00A5EA410);
	int i = 0;
	if(cMin == min1 || cMin == min2 || cMin == min3 || cMin == min4 || cMin == min5)
	{
		if(cSeg >= seg1 && cSeg <= seg2)
		{
			while(i <= 20)
			{
			i++;
			//GenerateSpawn(mob);
			}
		}
	}
}


void GetinItem(int ClientID, int level, int item, int add, int valor, int add2, int valor2, int add3, int valor3, char *msg)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int itemslot = GetFirstSlotSADD(ClientID,0,64);
	if(itemslot != -1 && player->Equip[0].EFV2 == 1)
	{
		if(player->bStatus.Level == level)
		{
		player->Inventory[itemslot].Index = item;
		player->Inventory[itemslot].EF1 = add;
		player->Inventory[itemslot].EFV1 = valor;
		player->Inventory[itemslot].EF2 = add2;
		player->Inventory[itemslot].EFV2 = valor2;
		player->Inventory[itemslot].EF3 = add3;
		player->Inventory[itemslot].EFV3 = valor3;
		SendClientMsg(ClientID,msg);
		SendInv2(ClientID,1,itemslot,addrSlotI(ClientID,itemslot));
		SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
		}
	}
}
void CampoTreino(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	if(cX >= 2060 && cY >= 1930 && cX <= 2160 && cY <= 2055) 
	{
		if(player->bStatus.Level >= 36)
		{
			DoTeleport(ClientID,2100,2100);
		}
	}
}
void IDmapPlayer(int ClientID, int x, int y, int x2, int y2)
{
	char nick[41];
	int cont = 0;
	for(int i=0;i<999;i++)
	{
		int rid = i * 0x0410;
		int cX = PInt(rid + 0x015C6CEC);
        int cY = PInt(rid + 0x015C6CF0);
		int cParty = PInt(i * 0x0410 + 0x015C6CD0);
		int vNick = (i * 0x0410 + 0x015C69B8);
		MOB *player = (MOB*)GetMobFromIndex(i);
		if(cX >= x && cY >= y && cX <= x2 && cY <= y2 && cParty == 0)
		{
			sprintf(nick,"O Player [%s] esta participando da quest.",player->Name);
			SendClientMsg(ClientID,nick);
			break;
		}
	}
	return;
}
void evento(int ClientID, int numero, int x, int y)
{
	int cont = PByte(0x04BFBE0);
	if(cont == numero)
	{
		DoTeleport(ClientID,x,y);
		cont = 0;
		PByte(0x04BFBE0) = cont;
		return;
	}
	else
	{
		cont += 1;
		PByte(0x04BFBE0) = cont;
		return;
	}
}
#define bSlots 90 // nao me lembro ao certo o numero de slots
int SendToCargo(int ClientID, int item, int add1, int value1, int add2, int value2, int add3, int value3)
{
	int i;
	for(i=0;i< 90;i++)
	{
		if(PInt(ClientID * 0x410 + (i * 8) + 0x007B326E8) = 0)
		{
			PInt(ClientID * 0x410 + (i * 8) + 0x007B326E8) = item;
			PInt(ClientID * 0x410 + (i * 8) + 0x007B326E8 + 2) = add1;
			PInt(ClientID * 0x410 + (i * 8) + 0x007B326E8 + 3) = value1;
			PInt(ClientID * 0x410 + (i * 8) + 0x007B326E8 + 4) = add2;
			PInt(ClientID * 0x410 + (i * 8) + 0x007B326E8 + 5) = value2;
			PInt(ClientID * 0x410 + (i * 8) + 0x007B326E8 + 6) = add3;
			PInt(ClientID * 0x410 + (i * 8) + 0x007B326E8 + 7) = value3;
			//SendALL(ClientID);
			return TRUE;
			break;
		}
	}
	return FALSE;
}
int CheckCargo(int ClientID, int item)
{
	int i;
	for(i=0;i<bSlots;i++)
	{
		int SlotBau = PInt(ClientID * 0x410 + (i * 8) + 0x007B326E8);
		if(SlotBau == item)
		{
			return i;
		}

	}
	return -1;
}
int IDmob(int ClientID, int x, int y, int x2, int y2)
{
	int cont = 0;

	for(int i=0;i<3000;i++)
	{
		int rid = i * 0x0BAC;
		int cX = PInt(rid + 0x015C6CEC);
        int cY = PInt(rid + 0x015C6CF0);
		if(cX >= x && cY >= y && cX <= x2 && cY <= y2)
		{
			cont = cont+1;
		}
	}
	return cont;
}
void SendLevel(int ClientID)
{
	int Func = 0x040149C;
	int Send = 0x401578;
	int addr_bclient = ClientID * 0x410 + 0x15C69B8; 
	__asm
	{
		MOV ECX,addr_bclient
		CALL Func
		ADD ESP,4
		PUSH ClientID
		CALL Send
		ADD ESP,4


	}
}
void SendPacket(char *bufr, int ClientID)
{
	int sizes = *(short*)&bufr[0];
	int func_addr = 0x4198C0;
	__asm
	{
		MOV ECX, ClientID
		IMUL ECX, ECX, 0xC4C
		ADD ECX, 0x7B318E8
		

		PUSH sizes
		PUSH bufr
		CALL func_addr
	}
}

void CreateMOB(char *Name,int LocX,int LocY,char *Caminho)
{
	int Address_call = 0x447000;
	__asm
	{
		PUSH Caminho
		PUSH LocY
		PUSH LocX
		PUSH Name
		CALL Address_call
		ADD ESP,0x10
	}
}
int file_exists(const char *filename)
{
  FILE *arquivo;

  if(arquivo = fopen(filename, "r"))
  {
    fclose(arquivo);
    return 1;
  }
  return 0;
}
int GreenTimeMap(int x2, int y2, int x, int y, int tempo)
{
	int cont = 0;

	for(int i=0;i<999;i++)
	{
		int rid = i * 0x0410;
		int cX = PInt(rid + 0x015C6CEC);
        int cY = PInt(rid + 0x015C6CF0);
		if(cX >= x && cY >= y && cX <= x2 && cY <= y2)
		{
			TempoVerde(i,tempo);
		}
	}
	return cont;
}
void gameconfig()
{
	int calle;
	_asm
	{
		MOV calle, 0x04015F5
		CALL calle
		MOV DWORD PTR DS:[0x08BF1878],1
	}
}
void itemlist()
{
	int calle;
	_asm
	{
		MOV calle, 0x040aa90
		CALL calle
	}
}
void skilldata()
{
	int calle;
	_asm
	{
		MOV calle, 0x0401127
		CALL calle
	}
}
void WarNoatun()
{
	*(BYTE*)0x04CBBE0 = 0;
	*(BYTE*)0x04CBBE0 = 0;
	int calle = 0x0457A20;
	_asm
	{
		MOV EAX,DWORD PTR DS:[0x4CBBE0]
		MOV DWORD PTR DS:[0x8BF181C],EAX
		CALL calle
		MOV calle, 0x0401438
		CALL calle
	}
}

void DeadArea(int x, int y, int x1, int y1)
{
	for(int i=1000;i<32000;i++)
	{
		int rid = i * 0x0410;
		int cX = PInt(rid + 0x015C6CEC);
        int cY = PInt(rid + 0x015C6CF0);
		if(cX >= x && cY >= y && cX <= x1 && cY <= y1)
		{
			PInt(rid + 0x015c6a04) = 0;//Função HP
		}
	}
}
int PlayerInArea(int x, int y, int x1, int y1)
{
	for(int i=1;i<999;i++)
	{
		int rid = i * 0x0410;
		int cX = PInt(rid + 0x015C6CEC);
        int cY = PInt(rid + 0x015C6CF0);
		if(cX >= x && cY >= y && cX <= x1 && cY <= y1)
		{
			return 1;
		}
	}
	return 0;
}
int ContOnline()
{
	int cont = 0;
	for(int i = 0;i < 999;i++)
		if(*(unsigned short*)(0x07B3252C + (0xc4c * i)) != 0)
			cont++;
	return cont;
}
int MobInArea(int x, int y, int x1, int y1)
{
	int cont = 0;
	for(int i=1000;i<32000;i++)
	{
		MOB *npc = (MOB*)GetMobFromIndex(i);
		int rid = i * 0x0410;
		int cX = PInt(rid + 0x015C6CEC);
        int cY = PInt(rid + 0x015C6CF0);
		int hp = PInt(rid + 0x015c6a04);
		if(cX >= x && cY >= y && cX <= x1 && cY <= y1)
		{
			if(hp != 0 && npc->bStatus.STR != 21)
			{
				cont += 1;
			}
		}
	}
	return cont;
}
void LeftMob(int ClientID,int mobs)
{
		for(int i = 0; i < 12; i++)
        {
                int masterIndex = ClientID * 0x410;
                int memberId = *(WORD*)(masterIndex + 0x015C6D86 + (i * 2));
				if(memberId >= 1 && memberId <= 800)
				{
				
                if(*(DWORD*)(memberId * 0xC4C + 0x07B318E0) == 0x16)
                {
					SendClientSignalParm(memberId,32,0x3B0,mobs);
			    }  
				}
        }
		SendClientSignalParm(ClientID,32,0x3B0,mobs);
}



void CreateChar(int ClientID, int classe,int face,int slot, char *name) //arch new slot2
{
        CriarArch pack = *(CriarArch*)malloc(sizeof(CriarArch));
        pack.Header.PacketId = 0x802;
        pack.Header.Size =  sizeof(CriarArch);
		pack.Header.ClientID = ClientID;
        char namee[16];
		sprintf(namee,"%s-",name);
        pack.Class = face;
        strcpy((char*)pack.NewCharName, namee);
		pack.nArch.Equip[0].Index = face;
		pack.nArch.Equip[0].EF1 = 43;
		pack.nArch.Equip[0].EFV2 = 2;
		pack.nArch.Equip[0].EFV3 = face;
		pack.nArch.ClassInfo = classe;
		pack.nArch.Gold = 0;


        int Slot = CharSlotReturn(ClientID);
        if(Slot == 4)
        {
                return;
        }
		        
                pack.Slot = Slot;
		        SendDBPacket((BYTE*)&pack,sizeof(CriarArch));
                return;
		
}


int CharSlotReturn(int ClientID) // arch new slot2
{
	char CharData1[16];
	char CharData2[16];
	char CharData3[16];
	char CharData4[16];

	sprintf(CharData1,"%s",vChar1(ClientID));
	sprintf(CharData2,"%s",vChar2(ClientID));
	sprintf(CharData3,"%s",vChar3(ClientID));
	sprintf(CharData4,"%s",vChar4(ClientID));

	if(strcmp(CharData1,"\0")==0)
		return 0;
	if(strcmp(CharData2,"\0")==0)
		return 1;
	if(strcmp(CharData3,"\0")==0)
		return 2;
	if(strcmp(CharData4,"\0")==0)
		return 3;
	else
	return 4;
}
st_CharBase charBase[4]; //arch new slot2- nome existente

void ChangeCharStructPointer()
{
for(int a=0;a < 4; a++)
{
for(DWORD i = 0x401000, addrBase = 0x15AB710 + (a * 0x2F4), addrFinal = 0x15AB710 + ((a + 1) *(0x2F4)); i < 0x455FFF; i++)
{
if ((*(DWORD*)i >= addrBase) && (*(DWORD*)i < addrFinal))
{
int diff = *(DWORD*)i - addrBase;
*(DWORD*)i = (DWORD)&charBase[a] + diff;
}
}
}
}
//arch new slot2- nome existente
void CreateChar(int classe){ 
if(classe < 10)
{
return;
}
//
int face, cls;
if(classe == 10){ face = 6; cls = 0;}
else if(classe == 11){ face = 16; cls =0; }
else if(classe == 12){ face = 26; cls =0; }
else if(classe == 13){ face = 36; cls =0; }
else if(classe == 20){ face = 6; cls =1; }
else if(classe == 21){ face = 16; cls =1; }
else if(classe == 22){ face = 28; cls =1; }
else if(classe == 23){ face = 36; cls =1; }
else if(classe == 30){ face = 6; cls =2; }
else if(classe == 31){ face = 16; cls =2; }
else if(classe == 32){ face = 28; cls =2; }
else if(classe == 33){ face = 36; cls =2; }
else if(classe == 40){ face = 6; cls =3; }
else if(classe == 41){ face = 16; cls =3; }
else if(classe == 42){ face = 28; cls =3; }
else if(classe == 43){ face = 36; cls =3; }
else{ return;}


charBase[0].Equip[0].Index = face;
charBase[0].Equip[0].EF1 = 43;
charBase[0].Equip[0].EFV1 = 0;
charBase[0].Equip[0].EF2 = 98;
charBase[0].Equip[0].EFV1 = 2;
charBase[0].Equip[0].EF3 = 99;
charBase[0].Equip[0].EFV3 = face;
charBase[0].ClassInfo = cls;
for(int i=1;i<16;i++)
{
charBase[0].Equip[i].Index = 0;
charBase[0].Equip[i].EF1 = 0;
charBase[0].Equip[i].EFV1 = 0;
charBase[0].Equip[i].EF2 = 0;
charBase[0].Equip[i].EFV1 = 0;
charBase[0].Equip[i].EF3 = 0;
charBase[0].Equip[i].EFV3 = 0;
}
for(int i=0;i<64;i++)
{
charBase[0].Inv[i].Index = 0;
charBase[0].Inv[i].EF1 = 0;
charBase[0].Inv[i].EFV1 = 0;
charBase[0].Inv[i].EF2 = 0;
charBase[0].Inv[i].EFV1 = 0;
charBase[0].Inv[i].EF3 = 0;
charBase[0].Inv[i].EFV3 = 0;
}
return;
}
void LuzArch(int ClientID, int charid)
{
	ZeroMemory(BufferLoop,12);
	*(short*)&BufferLoop[0] = 12;
	*(short*)&BufferLoop[2] = 0;
	*(short*)&BufferLoop[4] = 0x3B4;
	*(short*)&BufferLoop[6] = ClientID;
	*(short*)&BufferLoop[8] = charid;
	SendPacket(BufferLoop, ClientID);
}

void ExpQuest(int ClientID,int exp)
{
	int cPartys = PInt(ClientID*0x0410 + 0x015C6CD0);
	int cXPar = PInt(cPartys * 0x410 + 0x015C6CEC);
	int cYPar = PInt(cPartys * 0x410 + 0x015C6CF0);
	int exisp = exp / 10;
	MOB *thisis = (MOB*)GetMobFromIndex(ClientID);
	if(thisis->Equip[0].EFV2 != 1)
	{
		return;
	}
	if(cPartys == 0)
	{
		for(int i = 0; i < 12; i++)
		{
			int masterIndex = ClientID * 0x410;
			int memberId = *(WORD*)(masterIndex + 0x15C6D86 + (i * 2));
			if(memberId != ClientID)
			{
				if(memberId >= 1 && memberId <= 800)
				{
				MOB *thisclient = (MOB*)GetMobFromIndex(memberId);
				if(memberId >= 1 && memberId <= 800)
				{
					if(*(DWORD*)(memberId * 0xC4C + 0x7B318E0) == 0x16)
					{
						if(thisclient->bStatus.Level >= 350 && thisclient->Equip[0].EFV2 != 1)
						{
							sprintf(BufferLoop,"+ + + 0 EXP + + +");
							SendClientMsg(memberId,BufferLoop);
							break;
						}
						sprintf(BufferLoop,"+ + + %d EXP + + +",exisp);
						SendClientMsg(memberId,BufferLoop);
						thisclient->Exp += exisp;
						SendStats(memberId);
						SendEquip(memberId);
						SendScore(memberId);
						GetCurrentScore(memberId);
						GetCurrentScore2(memberId);	
					}
				}
				}
			}
        }
	}
	else
	{
		MOB *lider = (MOB*)GetMobFromIndex(cPartys);
		if(cPartys >= 1 && cPartys <= 800)
		{
		if(lider->bStatus.Level >= 350 && lider->Equip[0].EFV2 != 1)
		{
			sprintf(BufferLoop,"+ + + 0 EXP + + +");
			SendClientMsg(cPartys,BufferLoop);
			return;
		}
		sprintf(BufferLoop,"+ + + %d EXP + + +",exisp);
		SendClientMsg(cPartys,BufferLoop);
		lider->Exp += exisp;
		SendStats(cPartys);
		SendEquip(cPartys);
		SendScore(cPartys);
		GetCurrentScore(cPartys);
		GetCurrentScore2(cPartys);	
		}
		for(int i = 0; i < 12; i++)
		{
			int masterIndex = cPartys * 0x410;
			int memberId = *(WORD*)(masterIndex + 0x15C6D86 + (i * 2));
			int cXthi2 = PInt(memberId * 0x410 + 0x015C6CEC);
			int cYthi2 = PInt(memberId * 0x410 + 0x015C6CF0);
			if(memberId != ClientID)
			{
				if(memberId >= 1 && memberId <= 800)
				{
				
				MOB *thisclient = (MOB*)GetMobFromIndex(memberId);
				if(*(DWORD*)(memberId * 0xC4C + 0x7B318E0) == 0x16)
				{
					if(thisclient->bStatus.Level >= 350 && thisclient->Equip[0].EFV2 != 1)
					{
						sprintf(BufferLoop,"+ + + 0 EXP + + +");
						SendClientMsg(memberId,BufferLoop);
						break;
					}
					sprintf(BufferLoop,"+ + + %d EXP + + +",exisp);
					SendClientMsg(memberId,BufferLoop);
					thisclient->Exp += exp;
					SendStats(memberId);
					SendEquip(memberId);
					SendScore(memberId);
					GetCurrentScore(memberId);
					GetCurrentScore2(memberId);
				}
				}
			}
		}
	}
}
int verifeden(int ClientID)
{
	for(int i=1;i<16;i++)
	{
		if(mobaffectbuffer[ClientID].Affects[i].Master == 16)
		{
			return 1;
		}
	}
	return 0;
}
void LogForAll(int ClientID, char *frase)
{
	int cMes = PInt(0x00A5EA420); //0 Janeiro, 1 Fev
	int cDia = PInt(0x00A5EA41c);
	int cHor = PInt(0x00A5EA418);
	int cMin = PInt(0x00A5EA414);
	int cSeg = PInt(0x00A5EA410);
	MOB *thisc = (MOB*)GetMobFromIndex(ClientID);
		FILE *fp;
		int i = 0;

		fp = fopen("Log.txt", "at");

		if(fp != NULL)
		{
			fprintf(fp, "%d/%d %d:%d:%d ClientID: %d login: %s personagem: %s --> %s", cDia,cMes+1,cHor,cMin,cSeg,ClientID,vLogin(ClientID),thisc->Name,frase);
			fprintf(fp, "%\n");
			fclose(fp);
		}
	printf("%d:%d:%d char:%s --> %s\n",cHor,cMin,cSeg,thisc->Name,frase);
}
void SendClientMsE(LPVOID ClientID,const char * _Format,...)
{
    int _call = 0x04010FF;
    _asm
    {
        PUSH _Format
        PUSH ClientID
        CALL _call
        ADD ESP,8
    }
}
void LogForHelp(int ClientID, char *frase)
{
	int cMes = PInt(0x00A5EA420); //0 Janeiro, 1 Fev
	int cDia = PInt(0x00A5EA41c);
	int cHor = PInt(0x00A5EA418);
	int cMin = PInt(0x00A5EA414);
	int cSeg = PInt(0x00A5EA410);
	MOB *thisc = (MOB*)GetMobFromIndex(ClientID);
		FILE *fp;
		int i = 0;

		fp = fopen("HELP.txt", "at");

		if(fp != NULL)
		{
			fprintf(fp, "%s",frase);
			fprintf(fp, "%\n");
			fclose(fp);
		}
	printf("%d:%d:%d char:%s --> %s\n",cHor,cMin,cSeg,thisc->Name,frase);
}
void GetBonusScore(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int getbonus_addr = 0x040133E;
	int addr_bclient = ClientID * 0x0410;
	int addr = 0x015C69B8;
	_asm
	{
		MOV ECX,addr_bclient
		ADD ECX,addr
		PUSH ECX
		CALL getbonus_addr
		ADD ESP,04
	}
}


int veseta(int ClientID)
{
	//agua A
	//(1372,3549,1383,3560);
	return 1;
}
void ExpParty(int ClientID,int exp)
{
	//ew
	int cPartys = PInt(ClientID*0x0410 + 0x015C6CD0);

	int cXPar = PInt(cPartys * 0x410 + 0x015C6CEC);
	int cYPar = PInt(cPartys * 0x410 + 0x015C6CF0);

	

	if(cPartys == 0)
	{
		for(int i = 0; i < 12; i++)
		{
			int masterIndex = ClientID * 0x410;
			int memberId = *(WORD*)(masterIndex + 0x15C6D86 + (i * 2));
			int cXthi = PInt(memberId * 0x410 + 0x015C6CEC);
			int cYthi = PInt(memberId * 0x410 + 0x015C6CF0);
			if(memberId != ClientID)
			{
				if(memberId >= 1 && memberId <= 800)
				{
					
				
				MOB *thisclient = (MOB*)GetMobFromIndex(memberId);
				if(*(DWORD*)(memberId * 0xC4C + 0x7B318E0) == 0x16)
				{
					//if(cXthi >= 1100 && cYthi >= 100 && cXthi <= 1300 && cYthi <= 255)//player->Exp += exp;
						thisclient->Exp += exp;
				}
				}
			}
        }
	}
	else
	{
		MOB *lider = (MOB*)GetMobFromIndex(cPartys);
		//if(cXPar >= 1100 && cYPar >= 100 && cXPar <= 1300 && cYPar <= 255)
			lider->Exp += exp;
		for(int i = 0; i < 12; i++)
		{
			int masterIndex = cPartys * 0x410;
			int memberId = *(WORD*)(masterIndex + 0x15C6D86 + (i * 2));
			int cXthi2 = PInt(memberId * 0x410 + 0x015C6CEC);
			int cYthi2 = PInt(memberId * 0x410 + 0x015C6CF0);
			if(memberId != ClientID)
			{
				if(memberId >= 1 && memberId <= 800)
				{
					
				
				MOB *thisclient = (MOB*)GetMobFromIndex(memberId);
				if(*(DWORD*)(memberId * 0xC4C + 0x7B318E0) == 0x16)
				{
					//if(cXthi2 >= 1100 && cYthi2 >= 100 && cXthi2 <= 1300 && cYthi2 <= 255)
						thisclient->Exp += exp;
				}
				}
			}
		}
	}
				
}



int GetItemSanc(int ClientID, int slot, int item)
{
	
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	if(slot == 0)// Item Equipado
	{
		if((thisclient->Equip[item].EF1 == 43) || (thisclient->Equip[item].EF1 >= 116 && thisclient->Equip[item].EF1 <= 125))
		{
			return thisclient->Equip[item].EFV1;
		}
		else if((thisclient->Equip[item].EF2 == 43) || (thisclient->Equip[item].EF2 >= 116 && thisclient->Equip[item].EF2 <= 125))
		{
			return thisclient->Equip[item].EFV2;
		}
		else if((thisclient->Equip[item].EF3 == 43) || (thisclient->Equip[item].EF3 >= 116 && thisclient->Equip[item].EF3 <= 125))
		{
			return thisclient->Equip[item].EFV2;
		}
		else
		{
			return 0;
		}
	}
	else if(slot == 1)// Item Inventário
	{
		if((thisclient->Inventory[item].EF1 == 43) || (thisclient->Inventory[item].EF1 >= 116 && thisclient->Inventory[item].EF1 <= 125))
		{
			return thisclient->Inventory[item].EFV1;
		}
		else if((thisclient->Inventory[item].EF2 == 43) || (thisclient->Inventory[item].EF2 >= 116 && thisclient->Inventory[item].EF2 <= 125))
		{
			return thisclient->Inventory[item].EFV2;
		}
		else if((thisclient->Inventory[item].EF3 == 43) || (thisclient->Inventory[item].EF3 >= 116 && thisclient->Inventory[item].EF3 <= 125))
		{
			return thisclient->Inventory[item].EFV3;
		}
		else
		{
			return 0;
		}
	}
}
int GetAdd(int ClientID, int slot, int add,int val)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	if(thisclient->Equip[slot].EF1 == add)
	{
		thisclient->Equip[slot].EFV1 = val;
		return thisclient->Equip[slot].EFV1;
	}
	if(thisclient->Equip[slot].EF2 == add)
	{
		thisclient->Equip[slot].EFV2 = val;
		return thisclient->Equip[slot].EFV2;
	}
	if(thisclient->Equip[slot].EF3 == add)
	{
		thisclient->Equip[slot].EFV3 = val;
		return thisclient->Equip[slot].EFV3;
	}
	else
		return 0;
}

int PegaRef(int ClientID, int slot)
{
        st_Mob *thisclient = (st_Mob*)GetMobFromIndex(ClientID);
		//MOB *thisclient=(MOB*)GetMobFromIndex(ClientID);
        if(thisclient->Inventory[slot].EF1 == 43)
		{
            if(thisclient->Inventory[slot].EFV1 >= 230 && thisclient->Inventory[slot].EFV1 < 234)
                return 10;
			if(thisclient->Inventory[slot].EFV1 >= 234 && thisclient->Inventory[slot].EFV1 < 238)
				return 11;
			if(thisclient->Inventory[slot].EFV1 >= 238 && thisclient->Inventory[slot].EFV1 < 242)
				return 12;
			if(thisclient->Inventory[slot].EFV1 >= 242 && thisclient->Inventory[slot].EFV1 < 246)
				return 13;
			if(thisclient->Inventory[slot].EFV1 >= 246 && thisclient->Inventory[slot].EFV1 < 250)
				return 14;
			if(thisclient->Inventory[slot].EFV1 >= 250 && thisclient->Inventory[slot].EFV1 < 254)
				return 15;
		}
        if(thisclient->Inventory[slot].EF2 == 43)
		{
			if(thisclient->Inventory[slot].EFV2 >= 230 && thisclient->Inventory[slot].EFV2 < 234)
                return 10;
			if(thisclient->Inventory[slot].EFV2 >= 234 && thisclient->Inventory[slot].EFV2 < 238)
				return 11;
			if(thisclient->Inventory[slot].EFV2 >= 238 && thisclient->Inventory[slot].EFV2 < 242)
				return 12;
			if(thisclient->Inventory[slot].EFV2 >= 242 && thisclient->Inventory[slot].EFV2 < 246)
				return 13;
			if(thisclient->Inventory[slot].EFV2 >= 246 && thisclient->Inventory[slot].EFV2 < 250)
				return 14;
			if(thisclient->Inventory[slot].EFV2 >= 250 && thisclient->Inventory[slot].EFV2 < 254)
				return 15;
 		}
        if(thisclient->Inventory[slot].EF3 == 43)
		{
            if(thisclient->Inventory[slot].EFV3 >= 230 && thisclient->Inventory[slot].EFV3 < 234)
                return 10;
			if(thisclient->Inventory[slot].EFV3 >= 234 && thisclient->Inventory[slot].EFV3 < 238)
				return 11;
			if(thisclient->Inventory[slot].EFV3 >= 238 && thisclient->Inventory[slot].EFV3 < 242)
				return 12;
			if(thisclient->Inventory[slot].EFV3 >= 242 && thisclient->Inventory[slot].EFV3 < 246)
				return 13;
			if(thisclient->Inventory[slot].EFV2 >= 246 && thisclient->Inventory[slot].EFV3 < 250)
				return 14;
			if(thisclient->Inventory[slot].EFV3 >= 250 && thisclient->Inventory[slot].EFV3 < 254)
				return 15;
		}
        else return 0;
}

int ContadorDeRef(int ClientID, int item1, int item2, int item3, int item4)
{
/*
Return 
00 = Refs 1 2 3 4
01 = Refs 1 2 3
02 = Refs 1 2 4
03 = Refs 1 2
04 = Refs 1 3 4
05 = Refs 1 3
06 = Refs 1 4
07 = Refs 1
08 = Refs 2 3 4
09 = Refs 2 3
10 = Refs 2 4
11 = Refs 2
12 = Refs 3 4
13 = Refs 3
14 = Refs 4
15 = Refs 0
*/
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	if(thisclient->Inventory[item1].Index == 3338)
	{
		if(thisclient->Inventory[item2].Index == 3338)
		{
			if(thisclient->Inventory[item3].Index == 3338)
			{
				if(thisclient->Inventory[item4].Index == 3338)
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				if(thisclient->Inventory[item4].Index == 3338)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
		}
		else
		{
			if(thisclient->Inventory[item3].Index == 3338)
			{
				if(thisclient->Inventory[item4].Index == 3338)
				{
					return 4;
				}
				else
				{
					return 5;
				}
			}
			else
			{
				if(thisclient->Inventory[item4].Index == 3338)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
		}
	}
	else
	{
		if(thisclient->Inventory[item2].Index == 3338)
		{
			if(thisclient->Inventory[item3].Index == 3338)
			{
				if(thisclient->Inventory[item4].Index == 3338)
				{
					return 8;
				}
				else
				{
					return 9;
				}
			}
			else
			{
				if(thisclient->Inventory[item4].Index == 3338)
				{
					return 10;
				}
				else
				{
					return 11;
				}
			}
		}
		else
		{
			if(thisclient->Inventory[item3].Index == 3338)
			{
				if(thisclient->Inventory[item4].Index == 3338)
				{
					return 12;
				}
				else
				{
					return 13;
				}
			}
			else
			{
				if(thisclient->Inventory[item4].Index == 3338)
				{
					return 14;
				}
				else
				{
					return 15;
				}
			}
		}
	}
}
int MaisChance1215(int ClientID, int returncounter, int RefDaRef1, int RefDaRef2, int RefDaRef3, int RefDaRef4)
{
	
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	int soma = 0;
	if(returncounter == 0)
	{
		if(RefDaRef1 == 0)
		{
			if(RefDaRef2 == 0)
			{
				if(RefDaRef3 == 0)
				{
					if(RefDaRef4 == 0)
					{
						soma += 100;// Todas Refs +0
						return soma;
					}
					else
					{
						soma += 100+RefDaRef4;// Todas Refs +0
						return soma;
					}
				}
				else
				{
					if(RefDaRef4 == 0)
					{
						soma += 100+RefDaRef3;// Todas Refs +0
						return soma;
					}
					else
					{
						soma += 100+RefDaRef4+RefDaRef3;// Todas Refs +0
						return soma;
					}
				}
			}
			else
			{
				if(RefDaRef3 == 0)
				{
					if(RefDaRef4 == 0)
					{
						soma += 100+RefDaRef2;// Todas Refs +0
						return soma;
					}
					else
					{
						soma += 100+RefDaRef4+RefDaRef2;// Todas Refs +0
						return soma;
					}
				}
				else
				{
					if(RefDaRef4 == 0)
					{
						soma += 100+RefDaRef3+RefDaRef2;// Todas Refs +0
						return soma;
					}
					else
					{
						soma += 100+RefDaRef4+RefDaRef3+RefDaRef2;// Todas Refs +0
						return soma;
					}
				}
			}
		}
		else
		{
			if(RefDaRef2 == 0)
			{
				if(RefDaRef3 == 0)
				{
					if(RefDaRef4 == 0)
					{
						soma += 100+RefDaRef1;// Todas Refs +0
						return soma;
					}
					else
					{
						soma += 100+RefDaRef4+RefDaRef1;// Todas Refs +0
						return soma;
					}
				}
				else
				{
					if(RefDaRef4 == 0)
					{
						soma += 100+RefDaRef3+RefDaRef1;// Todas Refs +0
						return soma;
					}
					else
					{
						soma += 100+RefDaRef4+RefDaRef3+RefDaRef1;// Todas Refs +0
						return soma;
					}
				}
			}
			else
			{
				if(RefDaRef3 == 0)
				{
					if(RefDaRef4 == 0)
					{
						soma += 100+RefDaRef2+RefDaRef1;// Todas Refs +0
						return soma;
					}
					else
					{
						soma += 100+RefDaRef4+RefDaRef2+RefDaRef1;// Todas Refs +0
						return soma;
					}
				}
				else
				{
					if(RefDaRef4 == 0)
					{
						soma += 100+RefDaRef3+RefDaRef2+RefDaRef1;// Todas Refs +0
						return soma;
					}
					else
					{
						soma += RefDaRef1 + RefDaRef2 + RefDaRef3 + RefDaRef4;
						return soma;
					}
				}
			}
		}
		if(soma == 0)
		{
			soma += 99;
			return soma;
		}
		else if(soma == 1)
		{
			soma += 98;
			return soma;
		}
		else
		{
			return soma;
		}
	}
	else if(returncounter == 1)
	{
		soma += RefDaRef1 + RefDaRef2 + RefDaRef3;
		return soma;
	}
	else if(returncounter == 2)
	{
		soma += RefDaRef1 + RefDaRef2 + RefDaRef4;
		return soma;
	}
	else if(returncounter == 3)
	{
		soma += RefDaRef1 + RefDaRef2;
		return soma;
	}
	else if(returncounter == 4)
	{
		soma += RefDaRef1 + RefDaRef3 + RefDaRef4;
		return soma;
	}
	else if(returncounter == 5)
	{
		soma += RefDaRef1 + RefDaRef3;
		return soma;
	}
	else if(returncounter == 6)
	{
		soma += RefDaRef1 + RefDaRef4;
		return soma;
	}
	else if(returncounter == 7)
	{
		soma += RefDaRef1;
		return soma;
	}
	else if(returncounter == 8)
	{
		soma += RefDaRef2 + RefDaRef3 + RefDaRef4;
		return soma;
	}
	else if(returncounter == 9)
	{
		soma += RefDaRef2 + RefDaRef3;
		return soma;
	}
	else if(returncounter == 10)
	{
		soma += RefDaRef2 + RefDaRef4;
		return soma;
	}
	else if(returncounter == 11)
	{
		soma += RefDaRef2;
		return soma;
	}
	else if(returncounter == 12)
	{
		soma += RefDaRef3 + RefDaRef4;
		return soma;
	}
	else if(returncounter == 13)
	{
		soma += RefDaRef3;
		return soma;
	}
	else if(returncounter == 14)
	{
		soma += RefDaRef4;
		return soma;
	}
	else if(returncounter == 15)
	{
		soma += 0;
		return soma;
	}
}
int ChanceDeSucesso(int ClientID, int RefItem, int returnchance1215)
{
	
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	int chance = 0;
	if(RefItem >= 234 && RefItem <= 237)// +11
	{
		int ChanceFixa = 5;
		if(returnchance1215 == 0)// Sem nenhuma refianção
		{
			chance += ChanceFixa;
			return chance;
		}
		else if(returnchance1215 == 1)// Refinação +1
		{
			chance += 3+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 2)// Refinação +2
		{
			chance += 4+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 3)// Refinação +3
		{
			chance += 5+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 4)// Refinação +4
		{
			chance += 6+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 5)// Refinação +7
		{
			chance += 7+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 6)// Refinação +6
		{
			chance += 8+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 7)// Refinação +7
		{
			chance += 9+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 8)// Refinação +8
		{
			chance += 12+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 9)// Refinação +9
		{
			chance += 15+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 10)// Refinação +9 + Refinação +1
		{
			chance += 18+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 11)// Refinação +9 + Refinação +2
		{
			chance += 19+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 12)// Refinação +9 + Refinação +3
		{
			chance += 20+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 13)// Refinação +9 + Refinação +4
		{
			chance += 21+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 14)// Refinação +9 + Refinação +5
		{
			chance += 22+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 15)// Refinação +9 + Refinação +6
		{
			chance += 23+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 16)// Refinação +9 + Refinação +7
		{
			chance += 24+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 17)// Refinação +9 + Refinação +8
		{
			chance += 27+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 18)// Refinação +9 + Refinação +9
		{
			chance += 30+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 19)// Refinação +9 + Refinação +9 + Refinação +1
		{
			chance += 33+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 20)// Refinação +9 + Refinação +9 + Refinação +2
		{
			chance += 34+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 21)// Refinação +9 + Refinação +9 + Refinação +3
		{
			chance += 35+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 22)// Refinação +9 + Refinação +9 + Refinação +4
		{
			chance += 36+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 23)// Refinação +9 + Refinação +9 + Refinação +5
		{
			chance += 37+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 24)// Refinação +9 + Refinação +9 + Refinação +6
		{
			chance += 38+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 25)// Refinação +9 + Refinação +9 + Refinação +7
		{
			chance += 39+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 26)// Refinação +9 + Refinação +9 + Refinação +8
		{
			chance += 42+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 27)// Refinação +9 + Refinação +9 + Refinação +9
		{
			chance += 45+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 28)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +1
		{
			chance += 48+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 29)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +2
		{
			chance += 49+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 30)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +3
		{
			chance += 50+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 31)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +4
		{
			chance += 51+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 32)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +5
		{
			chance += 52+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 33)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +6
		{
			chance += 53+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 34)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +7
		{
			chance += 54+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 35)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +8
		{
			chance += 57+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 36)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +9
		{
			chance += 60+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 >= 100)
		{
			if(returnchance1215 == 100)// 4 Refinações +0
			{
				chance += 8+ChanceFixa;
				return chance;
			}
			else if(returnchance1215 == 101)// Refinação +1
			{
				chance += 6+3+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 102)// Refinação +2
			{
				chance += 6+4+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 103)// Refinação +3
			{
				chance += 6+5+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 104)// Refinação +4
			{
				chance += 6+6+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 105)// Refinação +7
			{
				chance += 6+7+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 106)// Refinação +6
			{
				chance += 6+8+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 107)// Refinação +7
			{
				chance += 6+9+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 108)// Refinação +8
			{
				chance += 6+12+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 109)// Refinação +9
			{
				chance += 6+15+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 110)// Refinação +9 + Refinação +1
			{
				chance += 4+18+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 111)// Refinação +9 + Refinação +2
			{
				chance += 4+19+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 112)// Refinação +9 + Refinação +3
			{
				chance += 4+20+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 113)// Refinação +9 + Refinação +4
			{
				chance += 4+21+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 114)// Refinação +9 + Refinação +5
			{
				chance += 4+22+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 115)// Refinação +9 + Refinação +6
			{
				chance += 4+23+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 116)// Refinação +9 + Refinação +7
			{
				chance += 4+24+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 117)// Refinação +9 + Refinação +8
			{
				chance += 4+27+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 118)// Refinação +9 + Refinação +9
			{
				chance += 4+30+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 119)// Refinação +9 + Refinação +9 + Refinação +1
			{
				chance += 2+33+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 120)// Refinação +9 + Refinação +9 + Refinação +2
			{
				chance += 2+34+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 121)// Refinação +9 + Refinação +9 + Refinação +3
			{
				chance += 2+35+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 122)// Refinação +9 + Refinação +9 + Refinação +4
			{
				chance += 2+36+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 123)// Refinação +9 + Refinação +9 + Refinação +5
			{
				chance += 2+37+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 124)// Refinação +9 + Refinação +9 + Refinação +6
			{
				chance += 2+38+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 125)// Refinação +9 + Refinação +9 + Refinação +7
			{
				chance += 2+39+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 126)// Refinação +9 + Refinação +9 + Refinação +8
			{
				chance += 2+42+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 127)// Refinação +9 + Refinação +9 + Refinação +9
			{
				chance += 2+45+ChanceFixa; 
				return chance;
			}
		}
	}
	else if(RefItem >= 238 && RefItem <= 241)// +12
	{
		int ChanceFixa = 3;
		if(returnchance1215 == 0)// Sem nenhuma refianção
		{
			chance += ChanceFixa;
			return chance;
		}
		else if(returnchance1215 == 1)// Refinação +1
		{
			chance += 3+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 2)// Refinação +2
		{
			chance += 4+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 3)// Refinação +3
		{
			chance += 5+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 4)// Refinação +4
		{
			chance += 6+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 5)// Refinação +7
		{
			chance += 7+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 6)// Refinação +6
		{
			chance += 8+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 7)// Refinação +7
		{
			chance += 9+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 8)// Refinação +8
		{
			chance += 12+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 9)// Refinação +9
		{
			chance += 15+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 10)// Refinação +9 + Refinação +1
		{
			chance += 18+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 11)// Refinação +9 + Refinação +2
		{
			chance += 19+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 12)// Refinação +9 + Refinação +3
		{
			chance += 20+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 13)// Refinação +9 + Refinação +4
		{
			chance += 21+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 14)// Refinação +9 + Refinação +5
		{
			chance += 22+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 15)// Refinação +9 + Refinação +6
		{
			chance += 23+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 16)// Refinação +9 + Refinação +7
		{
			chance += 24+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 17)// Refinação +9 + Refinação +8
		{
			chance += 27+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 18)// Refinação +9 + Refinação +9
		{
			chance += 30+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 19)// Refinação +9 + Refinação +9 + Refinação +1
		{
			chance += 33+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 20)// Refinação +9 + Refinação +9 + Refinação +2
		{
			chance += 34+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 21)// Refinação +9 + Refinação +9 + Refinação +3
		{
			chance += 35+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 22)// Refinação +9 + Refinação +9 + Refinação +4
		{
			chance += 36+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 23)// Refinação +9 + Refinação +9 + Refinação +5
		{
			chance += 37+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 24)// Refinação +9 + Refinação +9 + Refinação +6
		{
			chance += 38+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 25)// Refinação +9 + Refinação +9 + Refinação +7
		{
			chance += 39+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 26)// Refinação +9 + Refinação +9 + Refinação +8
		{
			chance += 42+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 27)// Refinação +9 + Refinação +9 + Refinação +9
		{
			chance += 45+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 28)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +1
		{
			chance += 48+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 29)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +2
		{
			chance += 49+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 30)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +3
		{
			chance += 50+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 31)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +4
		{
			chance += 51+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 32)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +5
		{
			chance += 52+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 33)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +6
		{
			chance += 53+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 34)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +7
		{
			chance += 54+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 35)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +8
		{
			chance += 57+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 36)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +9
		{
			chance += 60+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 >= 100)
		{
			if(returnchance1215 == 100)// 4 Refinações +0
			{
				chance += 8+ChanceFixa;
				return chance;
			}
			else if(returnchance1215 == 101)// Refinação +1
			{
				chance += 6+3+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 102)// Refinação +2
			{
				chance += 6+4+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 103)// Refinação +3
			{
				chance += 6+5+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 104)// Refinação +4
			{
				chance += 6+6+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 105)// Refinação +7
			{
				chance += 6+7+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 106)// Refinação +6
			{
				chance += 6+8+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 107)// Refinação +7
			{
				chance += 6+9+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 108)// Refinação +8
			{
				chance += 6+12+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 109)// Refinação +9
			{
				chance += 6+15+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 110)// Refinação +9 + Refinação +1
			{
				chance += 4+18+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 111)// Refinação +9 + Refinação +2
			{
				chance += 4+19+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 112)// Refinação +9 + Refinação +3
			{
				chance += 4+20+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 113)// Refinação +9 + Refinação +4
			{
				chance += 4+21+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 114)// Refinação +9 + Refinação +5
			{
				chance += 4+22+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 115)// Refinação +9 + Refinação +6
			{
				chance += 4+23+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 116)// Refinação +9 + Refinação +7
			{
				chance += 4+24+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 117)// Refinação +9 + Refinação +8
			{
				chance += 4+27+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 118)// Refinação +9 + Refinação +9
			{
				chance += 4+30+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 119)// Refinação +9 + Refinação +9 + Refinação +1
			{
				chance += 2+33+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 120)// Refinação +9 + Refinação +9 + Refinação +2
			{
				chance += 2+34+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 121)// Refinação +9 + Refinação +9 + Refinação +3
			{
				chance += 2+35+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 122)// Refinação +9 + Refinação +9 + Refinação +4
			{
				chance += 2+36+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 123)// Refinação +9 + Refinação +9 + Refinação +5
			{
				chance += 2+37+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 124)// Refinação +9 + Refinação +9 + Refinação +6
			{
				chance += 2+38+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 125)// Refinação +9 + Refinação +9 + Refinação +7
			{
				chance += 2+39+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 126)// Refinação +9 + Refinação +9 + Refinação +8
			{
				chance += 2+42+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 127)// Refinação +9 + Refinação +9 + Refinação +9
			{
				chance += 2+45+ChanceFixa; 
				return chance;
			}
		}
	}
	else if(RefItem >= 242 && RefItem <= 245)// +13
	{
		int ChanceFixa = 2;
		if(returnchance1215 == 0)// Sem nenhuma refianção
		{
			chance += ChanceFixa;
			return chance;
		}
		else if(returnchance1215 == 1)// Refinação +1
		{
			chance += 3+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 2)// Refinação +2
		{
			chance += 4+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 3)// Refinação +3
		{
			chance += 5+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 4)// Refinação +4
		{
			chance += 6+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 5)// Refinação +7
		{
			chance += 7+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 6)// Refinação +6
		{
			chance += 8+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 7)// Refinação +7
		{
			chance += 9+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 8)// Refinação +8
		{
			chance += 12+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 9)// Refinação +9
		{
			chance += 15+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 10)// Refinação +9 + Refinação +1
		{
			chance += 18+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 11)// Refinação +9 + Refinação +2
		{
			chance += 19+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 12)// Refinação +9 + Refinação +3
		{
			chance += 20+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 13)// Refinação +9 + Refinação +4
		{
			chance += 21+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 14)// Refinação +9 + Refinação +5
		{
			chance += 22+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 15)// Refinação +9 + Refinação +6
		{
			chance += 23+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 16)// Refinação +9 + Refinação +7
		{
			chance += 24+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 17)// Refinação +9 + Refinação +8
		{
			chance += 27+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 18)// Refinação +9 + Refinação +9
		{
			chance += 30+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 19)// Refinação +9 + Refinação +9 + Refinação +1
		{
			chance += 33+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 20)// Refinação +9 + Refinação +9 + Refinação +2
		{
			chance += 34+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 21)// Refinação +9 + Refinação +9 + Refinação +3
		{
			chance += 35+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 22)// Refinação +9 + Refinação +9 + Refinação +4
		{
			chance += 36+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 23)// Refinação +9 + Refinação +9 + Refinação +5
		{
			chance += 37+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 24)// Refinação +9 + Refinação +9 + Refinação +6
		{
			chance += 38+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 25)// Refinação +9 + Refinação +9 + Refinação +7
		{
			chance += 39+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 26)// Refinação +9 + Refinação +9 + Refinação +8
		{
			chance += 42+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 27)// Refinação +9 + Refinação +9 + Refinação +9
		{
			chance += 45+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 28)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +1
		{
			chance += 48+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 29)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +2
		{
			chance += 49+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 30)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +3
		{
			chance += 50+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 31)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +4
		{
			chance += 51+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 32)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +5
		{
			chance += 52+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 33)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +6
		{
			chance += 53+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 34)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +7
		{
			chance += 54+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 35)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +8
		{
			chance += 57+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 36)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +9
		{
			chance += 60+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 >= 100)
		{
			if(returnchance1215 == 100)// 4 Refinações +0
			{
				chance += 8+ChanceFixa;
				return chance;
			}
			else if(returnchance1215 == 101)// Refinação +1
			{
				chance += 6+3+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 102)// Refinação +2
			{
				chance += 6+4+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 103)// Refinação +3
			{
				chance += 6+5+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 104)// Refinação +4
			{
				chance += 6+6+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 105)// Refinação +7
			{
				chance += 6+7+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 106)// Refinação +6
			{
				chance += 6+8+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 107)// Refinação +7
			{
				chance += 6+9+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 108)// Refinação +8
			{
				chance += 6+12+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 109)// Refinação +9
			{
				chance += 6+15+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 110)// Refinação +9 + Refinação +1
			{
				chance += 4+18+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 111)// Refinação +9 + Refinação +2
			{
				chance += 4+19+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 112)// Refinação +9 + Refinação +3
			{
				chance += 4+20+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 113)// Refinação +9 + Refinação +4
			{
				chance += 4+21+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 114)// Refinação +9 + Refinação +5
			{
				chance += 4+22+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 115)// Refinação +9 + Refinação +6
			{
				chance += 4+23+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 116)// Refinação +9 + Refinação +7
			{
				chance += 4+24+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 117)// Refinação +9 + Refinação +8
			{
				chance += 4+27+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 118)// Refinação +9 + Refinação +9
			{
				chance += 4+30+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 119)// Refinação +9 + Refinação +9 + Refinação +1
			{
				chance += 2+33+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 120)// Refinação +9 + Refinação +9 + Refinação +2
			{
				chance += 2+34+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 121)// Refinação +9 + Refinação +9 + Refinação +3
			{
				chance += 2+35+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 122)// Refinação +9 + Refinação +9 + Refinação +4
			{
				chance += 2+36+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 123)// Refinação +9 + Refinação +9 + Refinação +5
			{
				chance += 2+37+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 124)// Refinação +9 + Refinação +9 + Refinação +6
			{
				chance += 2+38+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 125)// Refinação +9 + Refinação +9 + Refinação +7
			{
				chance += 2+39+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 126)// Refinação +9 + Refinação +9 + Refinação +8
			{
				chance += 2+42+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 127)// Refinação +9 + Refinação +9 + Refinação +9
			{
				chance += 2+45+ChanceFixa; 
				return chance;
			}
		}
	}
	else if(RefItem >= 246 && RefItem <= 249)// +14
	{
		int ChanceFixa = 1;
		if(returnchance1215 == 0)// Sem nenhuma refianção
		{
			chance += ChanceFixa;
			return chance;
		}
		else if(returnchance1215 == 1)// Refinação +1
		{
			chance += 3+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 2)// Refinação +2
		{
			chance += 4+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 3)// Refinação +3
		{
			chance += 5+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 4)// Refinação +4
		{
			chance += 6+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 5)// Refinação +7
		{
			chance += 7+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 6)// Refinação +6
		{
			chance += 8+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 7)// Refinação +7
		{
			chance += 9+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 8)// Refinação +8
		{
			chance += 12+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 9)// Refinação +9
		{
			chance += 15+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 10)// Refinação +9 + Refinação +1
		{
			chance += 18+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 11)// Refinação +9 + Refinação +2
		{
			chance += 19+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 12)// Refinação +9 + Refinação +3
		{
			chance += 20+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 13)// Refinação +9 + Refinação +4
		{
			chance += 21+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 14)// Refinação +9 + Refinação +5
		{
			chance += 22+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 15)// Refinação +9 + Refinação +6
		{
			chance += 23+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 16)// Refinação +9 + Refinação +7
		{
			chance += 24+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 17)// Refinação +9 + Refinação +8
		{
			chance += 27+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 18)// Refinação +9 + Refinação +9
		{
			chance += 30+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 19)// Refinação +9 + Refinação +9 + Refinação +1
		{
			chance += 33+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 20)// Refinação +9 + Refinação +9 + Refinação +2
		{
			chance += 34+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 21)// Refinação +9 + Refinação +9 + Refinação +3
		{
			chance += 35+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 22)// Refinação +9 + Refinação +9 + Refinação +4
		{
			chance += 36+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 23)// Refinação +9 + Refinação +9 + Refinação +5
		{
			chance += 37+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 24)// Refinação +9 + Refinação +9 + Refinação +6
		{
			chance += 38+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 25)// Refinação +9 + Refinação +9 + Refinação +7
		{
			chance += 39+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 26)// Refinação +9 + Refinação +9 + Refinação +8
		{
			chance += 42+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 27)// Refinação +9 + Refinação +9 + Refinação +9
		{
			chance += 45+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 28)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +1
		{
			chance += 48+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 29)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +2
		{
			chance += 49+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 30)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +3
		{
			chance += 50+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 31)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +4
		{
			chance += 51+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 32)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +5
		{
			chance += 52+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 33)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +6
		{
			chance += 53+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 34)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +7
		{
			chance += 54+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 35)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +8
		{
			chance += 57+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 == 36)// Refinação +9 + Refinação +9 + Refinação +9 + Refinação +9
		{
			chance += 60+ChanceFixa; 
			return chance;
		}
		else if(returnchance1215 >= 100)
		{
			if(returnchance1215 == 100)// 4 Refinações +0
			{
				chance += 8+ChanceFixa;
				return chance;
			}
			else if(returnchance1215 == 101)// Refinação +1
			{
				chance += 6+3+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 102)// Refinação +2
			{
				chance += 6+4+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 103)// Refinação +3
			{
				chance += 6+5+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 104)// Refinação +4
			{
				chance += 6+6+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 105)// Refinação +7
			{
				chance += 6+7+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 106)// Refinação +6
			{
				chance += 6+8+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 107)// Refinação +7
			{
				chance += 6+9+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 108)// Refinação +8
			{
				chance += 6+12+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 109)// Refinação +9
			{
				chance += 6+15+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 110)// Refinação +9 + Refinação +1
			{
				chance += 4+18+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 111)// Refinação +9 + Refinação +2
			{
				chance += 4+19+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 112)// Refinação +9 + Refinação +3
			{
				chance += 4+20+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 113)// Refinação +9 + Refinação +4
			{
				chance += 4+21+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 114)// Refinação +9 + Refinação +5
			{
				chance += 4+22+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 115)// Refinação +9 + Refinação +6
			{
				chance += 4+23+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 116)// Refinação +9 + Refinação +7
			{
				chance += 4+24+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 117)// Refinação +9 + Refinação +8
			{
				chance += 4+27+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 118)// Refinação +9 + Refinação +9
			{
				chance += 4+30+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 119)// Refinação +9 + Refinação +9 + Refinação +1
			{
				chance += 2+33+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 120)// Refinação +9 + Refinação +9 + Refinação +2
			{
				chance += 2+34+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 121)// Refinação +9 + Refinação +9 + Refinação +3
			{
				chance += 2+35+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 122)// Refinação +9 + Refinação +9 + Refinação +4
			{
				chance += 2+36+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 123)// Refinação +9 + Refinação +9 + Refinação +5
			{
				chance += 2+37+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 124)// Refinação +9 + Refinação +9 + Refinação +6
			{
				chance += 2+38+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 125)// Refinação +9 + Refinação +9 + Refinação +7
			{
				chance += 2+39+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 126)// Refinação +9 + Refinação +9 + Refinação +8
			{
				chance += 2+42+ChanceFixa; 
				return chance;
			}
			else if(returnchance1215 == 127)// Refinação +9 + Refinação +9 + Refinação +9
			{
				chance += 2+45+ChanceFixa; 
				return chance;
			}
		}
	}
}




void DeleteItemCompleto(int ClientID,int item)
{

	MOB *player=(MOB*)GetMobFromIndex(ClientID);
	player->Inventory[item].Index = 0;
	player->Inventory[item].EF1 = 0;
	player->Inventory[item].EFV1 = 0;
	player->Inventory[item].EF2 = 0;
	player->Inventory[item].EFV2 = 0;
	player->Inventory[item].EF3 = 0;
	player->Inventory[item].EFV3 = 0;
	SendALL(ClientID);
	return;
}
void DeleteItem(int ClientID,int slot)
{
	MOB *player=(MOB*)GetMobFromIndex(ClientID);
	if(player->Inventory[slot].EF1 == 61)
	{
		if(player->Inventory[slot].EFV1 > 1)
		{
			player->Inventory[slot].EFV1 -= 1;
		}
		else
		{
			player->Inventory[slot].Index = 0;
		}
	}
	else if(player->Inventory[slot].EF2 == 61)
	{
		if(player->Inventory[slot].EFV2 > 1)
		{
			player->Inventory[slot].EFV2 -= 1;
		}
		else
		{
			player->Inventory[slot].Index = 0;
		}
	}
	else if(player->Inventory[slot].EF3 == 61)
	{
		if(player->Inventory[slot].EFV3 > 1)
		{
			player->Inventory[slot].EFV3 -= 1;
		}
		else
		{
			player->Inventory[slot].Index = 0;
		}
	}
	else
	{
		player->Inventory[slot].Index = 0;
	}
	SendALL(ClientID);
	return;
}

int GetItemType(int ClientID, int id)
{
	char line[1024];
	//st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	MOB *thisclient=(MOB*)GetMobFromIndex(ClientID);
	FILE *fs;
	fs = fopen("DataBase\\Arquivos\\ItemType.txt", "r");
	if(fs != NULL)
	{
		while((fscanf(fs, "%[^\n]", line)) != EOF)
		{
			int id_; int type; int ret;
			fgetc(fs);
			sscanf(line,"%d %*s %d",&id_, &type);
			if(id == id_)
			{ 
				if(type == 2) // Elmo
					ret = 3021;
				 else if(type == 1) // Face
					ret = 1;
				 else if(type == 4) // Peito
					ret = 3022;
				 else if(type == 8) // Calca
				    ret = 3023;
				 else if(type == 16) // Luva
				    ret = 3024;
				 else if(type == 32) // Bota
					ret = 3025;
				 else if(type == 64) // Arma
				    ret = 3026;
				 else if(type == 128) // Escudo
					ret = 3;
				 else if(type == 192) // Arma de Uma mão
					ret = 4;
				 else if(type == 3840) // Amuleto
					ret = 5;
				 else if(type == 4096) // Medalha
					ret = 6;
				 else if(type == 256) // Amuleto
					ret = 7;
				 else if(type == 512) // Amuleto
				    ret = 8;
				 else if(type == 1024) // Amuleto
					ret = 9;
				 else if(type == 16384) // Amuleto
					ret = 10;
				 else if(type == 2048) // Amuleto
					ret = 11;
				 else if(type == 8192) // Amuleto
					ret = 12;
				else // Nao é equipável
					ret = 0;
				return ret;
			}
		}
		fclose(fs);
	}
}
int GetItemType2(int SlotID)
{
	char line[1024];
	FILE *fs;
	fs = fopen("DataBase\\Arquivos\\ItemType.txt", "r");
	if(fs != NULL)
	{
		while((fscanf(fs, "%[^\n]", line)) != EOF)
		{
			int id_; int type; int ret;
			fgetc(fs);
			sscanf(line,"%d %*s %d",&id_, &type);
			if(SlotID == id_)
			{ 
				if(type == 2) // Elmo
					ret = 3021;
				 else if(type == 1) // Face
					ret = 1;
				 else if(type == 4) // Peito
					ret = 3022;
				 else if(type == 8) // Calca
				    ret = 3023;
				 else if(type == 16) // Luva
				    ret = 3024;
				 else if(type == 32) // Bota
					ret = 3025;
				 else if(type == 64) // Arma
				    ret = 3026;
				 else if(type == 128) // Escudo
					ret = 3;
				 else if(type == 192) // Arma de Uma mão
					ret = 3026;
				 else if(type == 3840) // Amuleto
					ret = 5;
				 else if(type == 4096) // Medalha
					ret = 6;
				 else if(type == 256) // Amuleto
					ret = 7;
				 else if(type == 512) // Amuleto
				    ret = 8;
				 else if(type == 1024) // Amuleto
					ret = 9;
				 else if(type == 16384) // Amuleto
					ret = 10;
				 else if(type == 2048) // Amuleto
					ret = 11;
				 else if(type == 8192) // Amuleto
					ret = 12;
				else // Nao é equipável
					ret = 0;
				fclose(fs);
				return ret;
			}
		}
	}
	return 0;
}
int ReturnChance(int ClientID, int slot, int refatual)
{
	// refatual
	// 1 = +11 | 2 = +12 | 3 = +13 | 4 = +14 | 5 = +15
	//st_Mob *player = (st_Mob*)GetMobFromIndex(ClientID);
	MOB *thisclient=(MOB*)GetMobFromIndex(ClientID);
	int refs[12] = {2, 3, 4, 5, 6, 7 , 8, 9, 12, 15};
	int ref_atual[6] = {0, 1, 2, 3, 4, 5}; // 5 = não é para ser usado
	int chance; int value;
	if(thisclient->Inventory[slot].EF1 == 43)
	{
		chance = refs[thisclient->Inventory[slot].EFV1];
		//value = PegaRef(ClientID, slot) - 10;
		//chance -= ref_atual[value];
//		printf("%d %d %d\n", chance, refs[thisclient->Inventory[slot].EFV1], value);
		return chance;
	}
	if(thisclient->Inventory[slot].EF2 == 43)
	{
		chance = refs[thisclient->Inventory[slot].EFV2];
		value = PegaRef(ClientID, slot) - 10;
		chance -= ref_atual[value];
		return chance;
	}
	if(thisclient->Inventory[slot].EF3 == 43)
	{
		chance = refs[thisclient->Inventory[slot].EFV3];
		value = PegaRef(ClientID, slot) - 10;
		chance -= ref_atual[value];
		return chance;
	}
}

int RefinarItemMenos(int ClientID,int slot, int item, int addref)
{
	
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	if(slot == 0)// Item Equipado
	{
		if((thisclient->Equip[item].EF1 == 43) || (thisclient->Equip[item].EF1 >= 116 && thisclient->Equip[item].EF1 <= 125))
		{
			thisclient->Equip[item].EFV1 -= addref;
			SendALL(ClientID);
			return 1;
		}
		else if((thisclient->Equip[item].EF2 == 43) || (thisclient->Equip[item].EF2 >= 116 && thisclient->Equip[item].EF2 <= 125))
		{
			thisclient->Equip[item].EFV2 -= addref;
			SendALL(ClientID);
			return 1;
		}
		else if((thisclient->Equip[item].EF3 == 43) || (thisclient->Equip[item].EF3 >= 116 && thisclient->Equip[item].EF3 <= 125))
		{
			thisclient->Equip[item].EFV3 -= addref;
			SendALL(ClientID);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if(slot == 1)// Item Inventário
	{
		if((thisclient->Inventory[item].EF1 == 43) || (thisclient->Inventory[item].EF1 >= 116 && thisclient->Inventory[item].EF1 <= 125))
		{
			thisclient->Inventory[item].EFV1 -= addref;
			SendALL(ClientID);
			return 1;
		}
		else if((thisclient->Inventory[item].EF2 == 43) || (thisclient->Inventory[item].EF2 >= 116 && thisclient->Inventory[item].EF2 <= 125))
		{
			thisclient->Inventory[item].EFV2 -= addref;
			SendALL(ClientID);
			return 1;
		}
		else if((thisclient->Inventory[item].EF3 == 43) || (thisclient->Inventory[item].EF3 >= 116 && thisclient->Inventory[item].EF3 <= 125))
		{
			thisclient->Inventory[item].EFV3 -= addref;
			SendALL(ClientID);
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

int RefinarItemMais(int ClientID,int slot, int item, int addref)
{
	
	MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
	if(slot == 0)// Item Equipado
	{
		if((thisclient->Equip[item].EF1 == 43) || (thisclient->Equip[item].EF1 >= 116 && thisclient->Equip[item].EF1 <= 125))
		{
			thisclient->Equip[item].EFV1 += addref;
			SendALL(ClientID);
			return 1;
		}
		else if((thisclient->Equip[item].EF2 == 43) || (thisclient->Equip[item].EF2 >= 116 && thisclient->Equip[item].EF2 <= 125))
		{
			thisclient->Equip[item].EFV2 += addref;
			SendALL(ClientID);
			return 1;
		}
		else if((thisclient->Equip[item].EF3 == 43) || (thisclient->Equip[item].EF3 >= 116 && thisclient->Equip[item].EF3 <= 125))
		{
			thisclient->Equip[item].EFV3 += addref;
			SendALL(ClientID);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if(slot == 1)// Item Inventário
	{
		if((thisclient->Inventory[item].EF1 == 43) || (thisclient->Inventory[item].EF1 >= 116 && thisclient->Inventory[item].EF1 <= 125))
		{
			thisclient->Inventory[item].EFV1 += addref;
			SendALL(ClientID);
			return 1;
		}
		else if((thisclient->Inventory[item].EF2 == 43) || (thisclient->Inventory[item].EF2 >= 116 && thisclient->Inventory[item].EF2 <= 125))
		{
			thisclient->Inventory[item].EFV2 += addref;
			SendALL(ClientID);
			return 1;
		}
		else if((thisclient->Inventory[item].EF3 == 43) || (thisclient->Inventory[item].EF3 >= 116 && thisclient->Inventory[item].EF3 <= 125))
		{
			thisclient->Inventory[item].EFV3 += addref;
			SendALL(ClientID);
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
void Disconect(int ClientID)
{
	int addr = 0x459440;
	__asm
	{
		PUSH ClientID
		CALL addr
		ADD ESP,4
	}
}
//Procura o Item x na janela do npc
int GetItemNpcJanela(int clientid, int nSlot, BYTE *slot, int ItemID)
{ 
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	for(int i = 0; i < nSlot; i++)
	{
		if(player->Inventory[slot[i]].Index == ItemID)
		{
			return 1;
		}
	}    
	return 0;
}
//Verifica se a Composição é ou não valida , E se esta na ordem certa ou não ^^.
int CompositionValidt(int clientid, int nSlot, BYTE *slot, int *Itens)
{
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	int resut=0;
	for(int i=0;i<nSlot; i++)
	{
		if(player->Inventory[slot[i]].Index == Itens[i])
		{
			resut=1;
		}
		else
		{
			resut=0;
			break;
		}
	}
	if(resut == 0)
	{
		for(int a=0;a<nSlot; a++)
		{
			if(GetItemNpcJanela(clientid, nSlot, slot, Itens[a]) == 0)
			{
				resut = 0;
				break;
			}
			else
			{
				resut=2;
			}
		}
	}
	return resut;
}
//DeletaMob
void DeleteMob(int mobid, int reason)
{
	//1:killed 2:logout 3:suicide 5:teleport
	int mdelete = 0x00459cb0;
	__asm
	{
		PUSH reason
		PUSH mobid
		CALL mdelete
		ADD ESP,8
	}
}

//Apaga itens com quantidade
void Delete(int ClientID, int slot)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);

	if(player->Inventory[slot].EF1 == 61 && player->Inventory[slot].EFV1 > 1)
		player->Inventory[slot].EFV1--;
	else if(player->Inventory[slot].EF2 == 61 && player->Inventory[slot].EFV2 > 1)
		player->Inventory[slot].EFV2--;
	else if(player->Inventory[slot].EF3 == 61 && player->Inventory[slot].EFV3 > 1)
		player->Inventory[slot].EFV3--;
	else
		memset(&player->Inventory[slot],0x00,sizeof(st_Item));
	
	return;
}
int GetItemADDInventory(int clientid, int slot, int add)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
    if(player->Inventory[slot].EF1 == add) 
	  return player->Inventory[slot].EFV1; 
    if(player->Inventory[slot].EF2 == add) 
	  return player->Inventory[slot].EFV2;
	if(player->Inventory[slot].EF3 == add)
	  return player->Inventory[slot].EFV3; 
	else 
	  return 0; 
}
// Funções v2.0
void SendSlot(int clientid, int slot)
{ // Envia sem abrir o inventário
	int send_addr = 0x04015C3;
	int addr_bclientid = clientid * 0x0410 + ((slot * 8) + 0x15C6A94);
	_asm {
		PUSH addr_bclientid
		PUSH slot
		PUSH 1
		PUSH clientid
		CALL send_addr
		ADD ESP,0x010
	}
}

