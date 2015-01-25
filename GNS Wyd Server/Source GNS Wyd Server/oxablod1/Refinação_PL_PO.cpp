#include "stdafx.h"

void Poeira_de_Ori(int clientid, int SrcSlot, int DstSlot)
{
	st_Mob *player = (st_Mob*)GetMobFromIndex(clientid);
	char tmp[1024];
	static int Rate[6] = {100, 10, 10, 9, 8, 7};
	int ItemID = player->Equip[DstSlot].Index;
	int ref = GetItemSanc(clientid,DstSlot,DstSlot);
	int chance = rand()%100;

	if(ItemID > 1751 && ItemID < 1760){//PEDRAs ARCHs
		PedrasArch(clientid, DstSlot, chance); //95%
		return;
	}
	else if(ref > 6){
		if(ref == 12345) //Todos Itens que não tem EF1 == 43
			SendClientMsg(clientid,"Este item não pode ser refinado");
		else // +6 ou superior
			SendClientMsg(clientid,"Não é possível refinar mais.");
		return;
	}
	else if(DstSlot == 14){//OVOs (Montarias e Crias não possuem EF1 = 43 sendo barrados no if acima).
		//78 Valor de incubação,
		//84 tempo de incubação
		if(player->Equip[DstSlot].EFV3 == 0){// Verifica se tem tempo para esperar
					
			if(ref +1 == player->Equip[DstSlot].EFV2){//Verifica se esta pronto para virar cria

				//CriaPet(clientid, DstSlot);//100%
				//MountProcess(0, &player->Equip[14]);
				return;
			}
			else if(player->Equip[DstSlot].EFV2 == 0){ //Caso incubação for 0

				//CriaPet(clientid, DstSlot);//100%
				//MountProcess(0, &player->Equip[14]);
				return;
			}
			else{//Caso ainda não esteja pronto para virar cria

				player->Equip[DstSlot].EFV3 = 1 + rand()%3; //criar um random 1 ~ 3 e adiciona no tempo de incubação
			}
		}
		else//Caso aja valores em EFV3 > 0 (tempo de incubação).
			SendClientMsg(clientid,"Espere o tempo de incubação.");
	}//Fim montarias

	else if(ItemID > 3396 && ItemID < 3407){//TINTAs (Fadas e outros itens não possuem EF1 = 43 sendo barrados no primeiro if).
		player->Equip[DstSlot].Index = ItemID + 10; //100%
		SendEffect(3, 0xE, clientid);
		return;
	}
	else{//Refinação de itens patrão Arma Sets +0 ~ +6
		//int por = ref;
		int random = rand()%2;// 0 e 1
		int RateTotal = Rate[ref] ;


		if(chance <= RateTotal){
			player->Equip[DstSlot].EFV1 = ref + 1;//Zera as % de falha e adiciona +1 a refinação
			SendEffect(3, 0xE, clientid);
			sprintf(tmp, "Refinação sucedida: %d/%d", chance, RateTotal);
			SendClientMsg(clientid, tmp);
		}
		else{
			if(random){//Random 50% para adição da %
				player->Equip[DstSlot].EFV1 + 10; //adiciona %
			}
			ZeroSlot(SrcSlot);
			sprintf(tmp, "Refinação NÃO sucedida: %d/%d Random: %d", chance, RateTotal, random);
			SendClientMsg(clientid, tmp);
		}
		return;
	}
	SendClientMsg(clientid,"Ocorreu um erro grave. Ref-1");
	return;
}//Fim Poeira de Or