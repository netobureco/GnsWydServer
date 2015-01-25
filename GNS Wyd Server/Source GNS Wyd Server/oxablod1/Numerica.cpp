#include "Stdafx.h"



void __stdcall Functions::Numeric754(unsigned char* szBuffer){

	pFDE *p = (pFDE*)szBuffer; int clientid = p->Header.ClientID;
	pFDE Request;
	char tmp[1024], szLocal[1024]; FILE* hFile = NULL; char szNumeric[7] = {0, 0, 0, 0, 0, 0, 0};

	sprintf(szLocal, "config\\Numeric\\%s.txt", vLogin(clientid));

	hFile = fopen(szLocal, "r");

	if(!hFile)
	{
		fopen_s(&hFile, szLocal, "w+");
		if(!hFile){
			SendClientMsg(clientid, "Erro ao definir senha, contate o administrador.");
			return;
		}
		fputs(p->Numeric, hFile);
		fclose(hFile);
		sprintf(tmp, "Sua Senha No Gods Are Back Foi [%s] Definida Com Sucesso", p->Numeric);
		SendClientMsg(clientid, tmp);
		Numeric[0][clientid] = true;
		return;
	}

	else{
		fgets(szNumeric, 7, hFile);
		fclose(hFile);
		if(p->ChangeNumeric == 1 && Numeric[0][p->Header.ClientID]){
			fopen_s(&hFile, szLocal, "w+");
			if(!hFile){
				SendClientMSG(p->Header.ClientID, "Erro ao alterar senha, contate o administrador");
				return;
			}
			fputs(p->Numeric, hFile);
			fclose(hFile);
			Request.Header.Size = sizeof pFDE;
			Request.Header.PacketId = 0xFDE;
			SendPacket(p->Header.ClientID, (unsigned char*)&Request, sizeof pFDE);
			sprintf(tmp, "Senha [%s] alterada para [%s].", szNumeric, p->Numeric);
			SendClientMsg(clientid, tmp);
			return;
		}
		else{
			if(!strcmp(szNumeric, p->Numeric)){
				Request.Header.Size = sizeof pFDE;
				Request.Header.PacketId = 0xFDE;
				SendPacket(p->Header.ClientID, (unsigned char*)&Request, sizeof pFDE);
				Numeric[0][p->Header.ClientID] = true;
				Numeric[1][p->Header.ClientID] = 0;
				return;
			}
			else{
				Request.Header.Size = 12;
				Request.Header.PacketId = 0xFDF;
				SendPacket(p->Header.ClientID, (unsigned char*)&Request, 12);
				SendClientMSG(p->Header.ClientID, "Senha Incorreta");
				Numeric[0][p->Header.ClientID] = false;
				Numeric[1][p->Header.ClientID] ++;
				if(Numeric[1][p->Header.ClientID] >= 2){
					CloseUser(p->Header.ClientID);
				}
				return;
			}
		}
	}
}