#include "Stdafx.h"

void VIP_30_Dias(int ClientID, int SrcSlot, int DstSlot, int warp)
{
	char szLocal[1024], szPut[1024], tmp[1024];

	int cDia = *(unsigned short*)(0x00A5EA41c);
	int cMes = *(unsigned short*)(0x00A5EA420) + 1;
	int cAno = *(unsigned short*)(0x00A5EA424) - 100;

	int new_dia, new_mes, new_ano;
	
	sprintf(szLocal, "DataBase\\Accounts\\Vips\\%s.txt", vLogin(ClientID));

	if(file_exists(szLocal)) {
		SendClientMsg(ClientID, "Você já possui VIP ativo em sua conta.");
		Atualizar(ClientID, _inv, SrcSlot);
		Delete(ClientID,SrcSlot);
		return;
	}
	else
	{
		FILE *hFile = fopen(szLocal, "w");
		if(hFile)
		{
			new_dia = cDia;
			new_mes = cMes + 1;
			new_ano = cAno;
			if(cMes == 12)
			{
				new_mes = 1;
				new_ano = cAno + 1;
			}
			if(cMes == 1 && cDia >= 29)
			{
				new_mes = 3;
				if (cDia == 29) new_dia = 1;
				if (cDia == 30) new_dia = 2;
				if (cDia == 31) new_dia = 3;
			}
			sprintf(szPut, "%02d,%02d,%02d", new_dia, new_mes, new_ano);
			fputs(szPut, hFile);
			fclose(hFile);
			Atualizar(ClientID, _inv, SrcSlot);
			sprintf(tmp, "VIP até [%02d/%02d/%02d] foi creditado em sua conta!", new_dia, new_mes, new_ano);
			SendClientMsg(ClientID, tmp);
			return;
		}
		else
		{
			SendClientMsg(ClientID, "Falha ao ativar VIP, contate a administração.");
			Atualizar(ClientID, _inv, SrcSlot);
			return;
		}
	}

}