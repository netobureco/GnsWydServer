#include "stdafx.h"

 // 0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 
 // 14 00 EE 7A DR 02 01 00 30 6A 4B 05 00 00 01 00 03 00 00 00
void SkillExtracao(BYTE *m_PacketBuffer)
{
	WORD clientid;
	memcpy(&clientid, &m_PacketBuffer[6], 2);
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	int slot = m_PacketBuffer[16];
	int confirm = m_PacketBuffer[14];
	if(confirm == 1) // Apertou Ok
	{
		int type = GetItemType(clientid, player->Inventory[slot].Index);
		if(type >= 3021 && type <= 3026) // Equipável 
		{
			if(GetItemADDInventory(clientid, slot, 43) <= 9)
			{
				int sabio = GetFirstSlotSADD(clientid, 1774, 64);
				if(sabio != -1)
				{
					st_OtherItem item;
					memcpy(&item, &player->Inventory[slot], sizeof st_Item);
					for(int i=0;i<3;i++)
						if(item.Effects[i].Index == 43)
							item.Effects[i].Value = 0, item.Effects[i].Index = 0;
					item.Index = GetItemType(clientid, player->Inventory[slot].Index);
					memset(&player->Inventory[sabio], 0, sizeof st_Item);
					memset(&player->Inventory[slot], 0, sizeof st_Item);
					memcpy(&player->Inventory[slot], &item, sizeof item);
					SendClientMsg(clientid, "Extração criada!");
					SendSlot(clientid, slot); SendSlot(clientid, sabio);
				} else {
					SendClientMsg(clientid, "É necessário uma [Pedra do Sábio] para a composição!");
					return;
				}
			} else {
				SendClientMsg(clientid, "Só é possível utilizar em itens +9 ou abaixo.");
				return;
			}
		}
		else {
			SendClientMsg(clientid, "Só é possível utilizar em equipamentos ou armas.");
			return;
		}
	}
}