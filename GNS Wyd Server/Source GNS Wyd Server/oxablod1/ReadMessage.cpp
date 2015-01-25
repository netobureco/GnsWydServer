

#include "Stdafx.h"




BYTE *HKD_ReadMessage(BYTE *packetBuffer, DWORD packetSize)
{
	BYTE *m_PacketBuffer;
	
	if(*(WORD*)&packetBuffer[0] != (WORD)packetSize)
	{
		*(WORD*)&packetBuffer[0] = (WORD)packetSize;
	}

	m_PacketBuffer = PacketControlASM((PacketHeader*)packetBuffer, CLIENT_SIDE);

	PacketHeader *packetHeader = (PacketHeader*)packetBuffer;
	

	return m_PacketBuffer;
}

