
#include "Stdafx.h"



void FixSendTrade_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer)
{
	p754_SendTrade *new_SendTrade = (p754_SendTrade*)m_PacketBuffer;
	p613_SendTrade *def_SendTrade = (p613_SendTrade*)packetBuffer;

	memset(&new_SendTrade->TradeItem[0], 0x0, sizeof(st_Item) * 15);
	memcpy(&new_SendTrade->TradeItem[0], &def_SendTrade->TradeItem[0], sizeof(st_Item) * 8);

	memset(&new_SendTrade->TradeItemSlot[0], 0xFF, 15);
	memcpy(&new_SendTrade->TradeItemSlot[0], &def_SendTrade->TradeItemSlot[0], 8);

	new_SendTrade->Unknow = 0x0;

	memcpy(&new_SendTrade->TradeInfo[0], &def_SendTrade->TradeInfo[0], 8);
}

void FixSendTrade_CLIENT(BYTE *m_PacketBuffer, BYTE *packetBuffer)
{
	p754_SendTrade *new_SendTrade = (p754_SendTrade*)packetBuffer;
	p613_SendTrade *def_SendTrade = (p613_SendTrade*)m_PacketBuffer;

	memset(&def_SendTrade->TradeItem[0], 0x0, sizeof(st_Item) * 8);
	memcpy(&def_SendTrade->TradeItem[0], &new_SendTrade->TradeItem[0], sizeof(st_Item) * 8);

	memset(&def_SendTrade->TradeItemSlot[0], 0xFF, 8);
	memcpy(&def_SendTrade->TradeItemSlot[0], &new_SendTrade->TradeItemSlot[0], 8);

	memcpy(&def_SendTrade->TradeInfo[0], &new_SendTrade->TradeInfo[0], 8);
}
bool CheckTrade(BYTE *m_PacketBuffer) {
	p754_SendTrade *p = (p754_SendTrade*)m_PacketBuffer;
	if(StatusPK(p->Header.ClientID) == 1 || StatusPK(p->TradeInfo[6]) == 1 || WhisperStatus(p->Header.ClientID) == 1 || WhisperStatus(p->TradeInfo[6]) == 1) {
		SendClientMsg(p->Header.ClientID, "Não é possível utilizar troca com o modo PK ou whisper");
		SendClientMsg(p->TradeInfo[6], "Não é possível utilizar troca com o modo PK ou whisper");
		ZeroMemory(m_PacketBuffer, sizeof p754_SendTrade);
		return false;
	}
	return true;
}