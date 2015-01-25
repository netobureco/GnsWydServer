

#include "Stdafx.h"


void FixExitParty_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer)
{
	PacketHeader *packetHeader = (PacketHeader*)packetBuffer;

	*(WORD*)&m_PacketBuffer[14] = packetHeader->ClientID;
	*(WORD*)&m_PacketBuffer[14] = 0x0;
}

void FixExitParty_CLIENT(BYTE *m_PacketBuffer, BYTE *packetBuffer)
{
	PacketHeader *packetHeader = (PacketHeader*)packetBuffer;

	*(WORD*)&m_PacketBuffer[12] = packetHeader->ClientID;
}