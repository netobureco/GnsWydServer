#include "Stdafx.h"


struct pCL_20Dh
{
    PacketHeader Header;
    char Login[16];
    char Password[12];

    int ClientVersion;
    int unk1;

    char Keys[16];
    char Address[16];
};

BOOL CLogin::Login(int conn, unsigned char *Msg)
{
	pCL_20Dh *Rm = (pCL_20Dh*)Msg;
	BOOL CanalStatus = LimitedConection(conn, Msg);

	if(CanalStatus == FALSE) // este canal está lotado.
	{
		return FALSE;
	}
	if(Rm->ClientVersion != 753)
	{
		SendClientMessage(conn, "Atualize a versão do seu client.");
		return FALSE;
	}

	return TRUE;
}
BOOL CLogin::LimitedConection(int conn,unsigned char *Msg)
{
	if(conn < 0 || conn >= MAX_USER-5)
	{
		SendClientMessage(conn, "Canal está full. tente novamente mais tarde.");
		return FALSE;
	}
	return TRUE;
}