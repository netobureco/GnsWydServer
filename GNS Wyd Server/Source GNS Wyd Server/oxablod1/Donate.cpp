#include "stdafx.h"

void NPCDonate(BYTE *m_PacketBuffer)
{
	
	FILE *arq, *arq2;
	int clientid = m_PacketBuffer[6];
	p379 *pak = (p379*)m_PacketBuffer;
	MOB *player = (MOB*)GetMobFromIndex(m_PacketBuffer[6]);
	MOB *npc = (MOB*)GetMobFromIndex(pak->MobID);
	char local_item[100], line[120], nome[100], local_cash[100], msg[100],msg_confirm[100];
	int slot_nulo = GetFirstSlotSADD(clientid,0,64);
	int preco, cash, confirm;
	sprintf(local_item,"DataBase\\Itens\\%d.txt",npc->Inventory[pak->SellSlot].Index);
	sprintf(local_cash,"DataBase\\Cash\\%s.txt",vLogin(clientid));
	{
		arq=fopen(local_item,"r");
		if(arq != NULL)
		{
			while((fscanf(arq, "%[^\n]", line)) != EOF)
			{
			fgetc(arq);
			sscanf(line,"%d,%s",&preco,&nome);
			}
			fclose(arq);
			arq2=fopen(local_cash,"r");
			if(arq2 != NULL)
			{
				while((fscanf(arq2, "%[^\n]", line)) != EOF)
				{
				fgetc(arq2);
				sscanf(line,"%d",&cash);
				}
				fclose(arq2);
				if(cash >= preco)
				{
					player->Inventory[slot_nulo].Index = npc->Inventory[pak->SellSlot].Index;
					player->Inventory[slot_nulo].EF1 = npc->Inventory[pak->SellSlot].EF1;
					player->Inventory[slot_nulo].EFV1 = npc->Inventory[pak->SellSlot].EFV1;
					player->Inventory[slot_nulo].EF2 = npc->Inventory[pak->SellSlot].EF2;
					player->Inventory[slot_nulo].EFV2 = npc->Inventory[pak->SellSlot].EFV2;
					player->Inventory[slot_nulo].EF3 = npc->Inventory[pak->SellSlot].EF3;
					player->Inventory[slot_nulo].EFV3 = npc->Inventory[pak->SellSlot].EFV3;
					arq2=fopen(local_cash,"w");
					fprintf(arq2,"%d",(cash - preco));
					fclose(arq2);
					sprintf(msg,"O item [%s] foi comprado com sucesso.",nome);
					SendSay(clientid,msg);
					SendALL(clientid);
					ZeroMemory(m_PacketBuffer, *(short*)m_PacketBuffer);
					return;
				}
				else
				{
					fclose(arq2);
					sprintf(msg,"Necessário [%d] Donates.",preco);
					SendClientMsg(clientid,msg);
					ZeroMemory(m_PacketBuffer, *(short*)m_PacketBuffer);
					return;
				}
			}
			else
			{
				sprintf(msg,"Necessário [%d] Donates.",preco);
				SendClientMsg(clientid,msg);
				ZeroMemory(m_PacketBuffer, *(short*)m_PacketBuffer);
				return;
			}
		}
	}
}