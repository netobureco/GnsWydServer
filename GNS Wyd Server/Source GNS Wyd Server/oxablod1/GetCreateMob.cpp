
#include "Stdafx.h"

#include <stdio.h>


int GetAnctCode(st_Item *item)
{
	int value = 0; bool colored = false;
	
    if(item->EF1 == 43)
        value = item->EFV1;
        if(item->EF1 == 116)
        value = item->EFV1;
        if(item->EF1 == 117)
        value = item->EFV1;
        if(item->EF1 == 118)
        value = item->EFV1;
        if(item->EF1 == 119)
        value = item->EFV1;
        if(item->EF1 == 120)
        value = item->EFV1;
        if(item->EF1 == 121)
        value = item->EFV1;
    if(item->EF1 == 122)
        value = item->EFV1;
    if(item->EF1 == 123)
        value = item->EFV1;
    if(item->EF1 == 124)
        value = item->EFV1;
    if(item->EF1 == 125)
        value = item->EFV1;
   
 
    if(value == 0)
        return 0;
        if(item->EF1 == 43)
                return 43;
        if(item->EF1 == 116)
                return 116;
        if(item->EF1 == 117)
                return 117;
        if(item->EF1 == 118)
                return 118;
        if(item->EF1 == 119)
                return 119;
        if(item->EF1 == 120)
                return 120;
        if(item->EF1 == 121)
                return 121;
        if(item->EF1 == 122)
                return 122;
        if(item->EF1 == 123)
                return 123;
        if(item->EF1 == 124)
                return 124;
        if(item->EF1 == 125)
                return 125;
	else
	{
		if(item->EF1 >= 116 && item->EF1 <= 125) { // item colorido
			value = item->EFV1;
			colored = true;
		}
		else if(item->EF2 >= 116 && item->EF2 <= 125) { // item colorido
			value = item->EFV2;
			colored = true;
		}
		else if(item->EF3 >= 116 && item->EF3 <= 125) { // item colorido
			value = item->EFV3;
			colored = true;
		}
		else if(item->EF1 == 43) { // item sem cor
			value = item->EFV1;
		}
		else if(item->EF2 == 43) { // item sem cor
			value = item->EFV2;
		}
		else if(item->EF3 == 43) { // item sem cor
			value = item->EFV3;
		}
		else  // item sem refinação
			return item->Index;
	}

	if(value > 9 && !colored)
	{
		if(value >= 230 && value <= 233)
			value = 10;
		else if(value >= 234 && value <= 237)
			value = 11;
		else if(value >= 238 && value <= 241)
			value = 12;
		else if(value >= 242 && value <= 245)
			value = 13;
		else if(value >= 246 && value <= 249)
			value = 14;
		else if(value >= 250 && value <= 253)
			value = 15;
		else // value >= 254
			value = 16;
	}

	if(value > 9 && colored) {
		value = 9;
	}
    switch(value % 4)
    {
        case 0:  return 0x30;
        case 1:  return 0x40;
        case 2:  return 0x10;
        default: return 0x20;
    }
	return (value * 4096) + item->Index;
}
int GetItemIDAndEffect(st_Item *Item, int mnt)
{
	int value;

	if (mnt == 14)
	{// montaria
		if (Item->Index == 0)
			return 0;
		else if(Item->EFV1 == 0)
			return 0;
		else if(Item->EF2 <= 8)
			return Item->Index + (0 * 0x1000);
		else if(Item->EF2 <= 16)
			return Item->Index + (1 * 0x1000);
		else if(Item->EF2 <= 24)
			return Item->Index + (2 * 0x1000);
		else if(Item->EF2 <= 32)
			return Item->Index + (3 * 0x1000);
		else if(Item->EF2 <= 40)
			return Item->Index + (4 * 0x1000);
		else if(Item->EF2 <= 48)
			return Item->Index + (5 * 0x1000);
		else if(Item->EF2 <= 56)
			return Item->Index + (6 * 0x1000);
		else if(Item->EF2 <= 64)
			return Item->Index + (7 * 0x1000);
		else if(Item->EF2 <= 72)
			return Item->Index + (8 * 0x1000);
		else if(Item->EF2 <= 80)
			return Item->Index + (9 * 0x1000);
		else if(Item->EF2 <= 88)
			return Item->Index + (10 * 0x1000);
		else if(Item->EF2 <= 96)
			return Item->Index + (11 * 0x1000);
		else if(Item->EF2 <= 104)
			return Item->Index + (12 * 0x1000);
		else if(Item->EF2 <= 112)
			return Item->Index + (13 * 0x1000);
		else if(Item->EF2 <= 119)
			return Item->Index + (14 * 0x1000);
		else if(Item->EF2 >= 120)
			return Item->Index + (15 * 0x1000);
	}
	else
	{
		if(Item->Index == 0)
			return 0;
		if(Item->EF1 == 43 || (Item->EF1 >= 116 && Item->EF1 <= 125))
			value = Item->EFV1;
		else
			return Item->Index;
	}

	if (value == 0)
		return Item->Index;
	else if (value <= 1)
		value = 1;
	else if (value <= 2)
		value = 2;
	else if (value <= 3)
		value = 3;
	else if (value <= 4)
		value = 4;
	else if (value <= 5)
		value = 5;
	else if (value <= 6)
		value = 6;
	else if (value <= 7)
		value = 7;
	else if (value <= 8)
		value = 8;
	else if (value <= 9)
		value = 9;
	else if (value >= 230 && value <= 233)
		value = 10;
	else if (value >= 234 && value <= 237)
		value = 11;
	else if (value >= 238 && value <= 241)
		value = 12;
	else if (value >= 242 && value <= 245)
		value = 13;
	else if (value >= 246 && value <= 249)
		value = 14;
	else if (value >= 250 && value <= 253)
		value = 15;
	else
		return Item->Index;

	return Item->Index + (value * 0x1000);
}


void FixGetCreateMob_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer)
{
	p613_GetCreateMob *def_GetCreateMob = (p613_GetCreateMob*)packetBuffer;
	p754_GetCreateMob *new_GetCreateMob = (p754_GetCreateMob*)m_PacketBuffer;
	st_Mob *thisMob = (st_Mob*)GetMobFromIndex(new_GetCreateMob->ClientId);

	memcpy(&new_GetCreateMob->Affect[0], &def_GetCreateMob->Affect[0], 8);
	memset(&new_GetCreateMob->Affect[4], 0x0, 24);

	memcpy(&new_GetCreateMob->GuildIndex, &def_GetCreateMob->GuildIndex, 32);

	for(int i = 0; i < 16; i++)
	{
		st_Item *item = &thisMob->Equip[i];
		new_GetCreateMob->AnctCode[i] = GetAnctCode(item);
		new_GetCreateMob->ItemEff[i].ItemID = GetItemIDAndEffect(item,i==14);
	}
	//memset(&new_GetCreateMob->AnctCode, 0x0, 16);

	memset(&new_GetCreateMob->Tab[0], 0xFF, 26);
	// TODO: Implemente o tab aqui. Faça uma matriz armazenando o mesmo!
	strncpy(&new_GetCreateMob->Tab[0], "", 26);

	memset(&new_GetCreateMob->Unknow[0], 0xCC, 4);
}