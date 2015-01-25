
#include "Stdafx.h"


void FixSendExp_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer)
{
	char CargaPak[30];
	memcpy(&CargaPak, &m_PacketBuffer[12], 8);
	memcpy(&m_PacketBuffer[16],&CargaPak , 8);
	*(DWORD*)&m_PacketBuffer[12] = 0x0;
}