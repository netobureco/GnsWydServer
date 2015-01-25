#include "Stdafx.h"

static DWORD _AddMessage_ = 0x4198C0;

DWORD *HKD_AddMessage(BYTE *packetBuffer, DWORD packetSize)
{
	int SocketID = 0;

	__asm MOV SocketID, ECX

	try
	{
		DWORD *m_PacketBuffer;
		int retnErro = 0;

		if(*(WORD*)&packetBuffer[0] != (WORD)packetSize)
		{
			*(WORD*)&packetBuffer[0] = (WORD)packetSize;
		}
		
		m_PacketBuffer = (DWORD*)PacketControlASM((PacketHeader*)packetBuffer, SERVER_SIDE);
		PacketHeader *packetHeader = (PacketHeader*)m_PacketBuffer;
		return m_PacketBuffer;
		
		__asm
		{
			PUSH packetSize
			PUSH m_PacketBuffer

			MOV ECX, SocketID
			CALL _AddMessage_
			MOV retnErro, EAX
		}

		free(m_PacketBuffer);
		return m_PacketBuffer;
	}
	catch(...)
	{
		return 0;
	}
}
/*
DWORD *HKD_AddMessage(BYTE *packetBuffer, DWORD packetSize)
{
	DWORD *m_PacketBuffer;

	if(*(WORD*)&packetBuffer[0] != (WORD)packetSize)
	{
		*(WORD*)&packetBuffer[0] = (WORD)packetSize;
	}

	m_PacketBuffer = (DWORD*)PacketControlASM((PacketHeader*)packetBuffer, SERVER_SIDE);

	PacketHeader *packetHeader = (PacketHeader*)m_PacketBuffer;

	return m_PacketBuffer;
}
*/