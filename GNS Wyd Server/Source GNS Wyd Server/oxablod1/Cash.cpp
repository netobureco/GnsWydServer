#include "stdafx.h"

void CashNPC(int ClientID,int npcid)
{
	FILE *arquivo;
	
	char cash[1000];
	//char cash2[1000];
	//char  line[120], nome[100], msg[100]; // Retirar variáveis desnecessárias
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	MOB *vLogin = (MOB*)GetMobFromIndex(ClientID);
	int itenslot1 = GetFirstSlotSADD(ClientID,3394,64);
	if(itenslot1 != -1)
	{
		sprintf(cash,"DataBase\\Cash\\%s.txt",vLogin(ClientID));
	    
		if(file_exists(cash))
	    {
			arquivo = fopen(cash, "w");
			fputs("1000", arquivo);
			fclose(arquivo);
			SendSay(npcid,"Obrigado por nos ajudar. Agora você possui 1000 Cash");
			player->Inventory[itenslot1].Index = 0;
			SendInv(ClientID,itenslot1);
			SendCharList(ClientID);
			return;
		}
		else
		{
			arquivo = fopen(cash, "w");
			fputs("1000", arquivo);
			fclose(arquivo);
			SendSay(npcid,"Obrigado por nos ajudar. Agora você possui 1000 Cash");
			player->Inventory[itenslot1].Index = 0;
			SendInv(ClientID,itenslot1);
			SendCharList(ClientID);
			return;
		}
	}
	else
	{
		SendSay(npcid,"Nos Traga seu Vale Cash!");
		return;
	}
}