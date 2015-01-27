#include "Stdafx.h"

void Volatiles(int ClientID,char *Packet)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	Volatile *v = (Volatile*)Packet;
	int  SrcSlot  = SrcSlot,
		 DstSlot  = DstSlot,
		 warp     = warp;

	st_Item *ItemSend = &player->Inventory[*(char*)&Packet[16]];
	st_Item *ItemRecv = &player->Equip[*(char*)&Packet[24]];
	st_Item *ItemRecv2 = &player->Inventory[*(char*)&Packet[24]];

	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
 
	//////////////////////////////////
	//Proteções para fake packet

	if(v->SrcSlot < 0 && v->SrcSlot > 64)
	{
		ZeroMemory((short*)Packet, *(short*)Packet);
		return;
	}
	if(v->Header.ClientID < 1 && v->Header.ClientID > PLAYER)
	{
		ZeroMemory((short*)Packet, *(short*)Packet);
		return;
	}

	///////////////////////////////

	switch(ItemSend->Index)
	{
	
	case 3361://Poção_Sephira_
		sephira(ClientID,v->SrcSlot);
		break;

	case 3364://Poção_de_Saúde
		saude(ClientID,v->SrcSlot);
		break;

	case 3314://frango 
		Frango(ClientID,ItemSend);
		break;
	case 4020:
		Classe_E(ClientID,SrcSlot,DstSlot);
		break;
	case 3318://pacote de frango
		Frango_P(ClientID,ItemSend);
		break;

	case 3200:
		Amount(ClientID,ItemSend);
		break;
	case 3201:
		Amount(ClientID,ItemSend);
		break;
	case 3202:
		Amount(ClientID,ItemSend);
		break;
	case 3203:
		Amount(ClientID,ItemSend);
		break;
	case 3204:
		Amount(ClientID,ItemSend);
		break;
	case 3205:
		Amount(ClientID,ItemSend);
		break;
	case 3206:
		Amount(ClientID,ItemSend);
		break;
	case 3207:
		Amount(ClientID,ItemSend);
		break;
	case 4148:
		Pedra_Misteriosa(ClientID);
		break;
	case 3208:
		Amount(ClientID,ItemSend);
		break;
	case 3209:
		Amount(ClientID,ItemSend);
		break;
	case 1728:
		FogosArtif(ClientID,ItemSend);
		Amount(ClientID,ItemSend);
		break;
	case 4144:
		BauDeExperiencia(ClientID,ItemSend);
		break;
	case 4140:
		BauDeExperiencia(ClientID,ItemSend);
		break;
	case 3227:
		VIP_30_Dias(ClientID, SrcSlot, DstSlot, warp);
		break;
	case 3417: // removedor de tinturas
		ItemRecv->EF1 = 43;
		Amount(ClientID,ItemSend);
		SendItens(ClientID,*(char*)&Packet[24]);
		SendEffect(1,0xe ,ClientID);
		break;
	/*case 4097:
		if(PInt(addr_bclient + 0x015c6a00) > PInt(addr_bclient + 0x015c6a04) + 100)
		{
			PInt(addr_bclient + 0x015c6a04) += 200;
			//SendStats(ClientID);
			//SendItens(ClientID,1);
			Amount(ClientID,ItemSend);
		}
		break;
	case 3431:
		if(PInt(addr_bclient + 0x015c6a00) > PInt(addr_bclient + 0x015c6a04) + 100)
		{
			PInt(addr_bclient + 0x015c6a04) += 200;
			//SendStats(ClientID);
			//SendItens(ClientID,1);
			Amount(ClientID,ItemSend);
		}
		break;*/
		 case 4141: // lac 100%
  if(player->Equip[v->DstSlot].Index == 3506 && player->Equip[v->DstSlot].EFV1 < 9)
  {
   player->Equip[1].EF1 = 43;
   player->Equip[1].EFV1++;
   SendItens(ClientID,1);
   SendClientMsg(ClientID,"Refinação sucedida.");
   player->Inventory[v->SrcSlot].Index = 0;
   SendInv2(ClientID,1,v->SrcSlot,addrSlotI(ClientID,v->SrcSlot));
   SendInv2(ClientID,1,0,addrSlotI(ClientID,0));
   return;
  }
  else if(((ItemRecv->EFV1 >= 230 && ItemRecv->EFV1 <= 233) || ItemRecv->EFV1 < 9) && (*(char*)&Packet[24] >= 1 && *(char*)&Packet[24] <= 7))
  {
   Lac100(ItemSend,ItemRecv);
   SendItens(ClientID,*(char*)&Packet[24]);
   SendClientMsg(ClientID,"Refinação sucedida.");
   Amount(ClientID,ItemSend);
  }
  else
   SendClientMsg(ClientID,"Impossível refinar");
  break;


	
	case 3182:
		PergaA1(ClientID,ItemSend);
		break;
	
	case 3183:
		PergaA2(ClientID,ItemSend);
		break;
	case 3184:
		PergaA3(ClientID,ItemSend);
		break;
	case 3185:
		PergaA4(ClientID,ItemSend);
		break;
	case 3186:
		PergaA5(ClientID,ItemSend);
		break;
	case 3187:
		PergaA6(ClientID,ItemSend);
		break;
	case 3188:
		PergaA7(ClientID,ItemSend);
		break;
	case 3189:
		PergaA8(ClientID,ItemSend);
		break;
	case 3190:
		NesesA(ClientID,ItemSend);
		break;
	case 1731:
		CartaA(ClientID,ItemSend);
		break;
	case 3171:
		CartaM(ClientID,ItemSend);
		break;
	case 3172:
		CartaN(ClientID,ItemSend);
		break;
	case 3386:
		if(ItemRecv->EFV1 >= 230)
			GemaDiamante(ItemSend,ItemRecv);
			SendItens(ClientID,*(char*)&Packet[24]);
			Amount(ClientID,ItemSend);
			SendEffect(1,0xe ,ClientID);
		break;
	case 3387:
		if(ItemRecv->EFV1 >= 230)
			GemaEsmeralda(ItemSend,ItemRecv);
			SendItens(ClientID,*(char*)&Packet[24]);
			Amount(ClientID,ItemSend);
			SendEffect(1,0xe ,ClientID);
		break;
	case 3388:
		if(ItemRecv->EFV1 >= 230)
			GemaCoral(ItemSend,ItemRecv);
			SendItens(ClientID,*(char*)&Packet[24]);
			Amount(ClientID,ItemSend);
			SendEffect(1,0xe ,ClientID);
		break;
	case 3389:
		if(ItemRecv->EFV1 >= 230)
			GemaGarnet(ItemSend,ItemRecv);
			SendItens(ClientID,*(char*)&Packet[24]);
			Amount(ClientID,ItemSend);
			SendEffect(1,0xe ,ClientID);
		break;

	case 3432:
		CaçaArmia(ClientID,*(short*)&Packet[32]);
		Amount(ClientID,ItemSend);
		break;
	case 3433:
		CaçaDung(ClientID,*(short*)&Packet[32]);
		Amount(ClientID,ItemSend);
		break;
	case 3434:
		CaçaSubM(ClientID,*(short*)&Packet[32]);
		Amount(ClientID,ItemSend);
		break;
	case 3435:
		CaçaKult(ClientID,*(short*)&Packet[32]);
		Amount(ClientID,ItemSend);
		break;
	case 3436:
		CaçaKefra(ClientID,*(short*)&Packet[32]);
		Amount(ClientID,ItemSend);
		break;
	case 3437:
		CaçaNiple(ClientID,*(short*)&Packet[32]);
		Amount(ClientID,ItemSend);
		break;
	case 5409:
		PacoteMagoMais11(ClientID,ItemSend);
		break;
	case 5410:
		PacoteMagoMais12(ClientID,ItemSend);
		break;
		case 5411:
		PacoteMagoMais13(ClientID,ItemSend);
		break;
		case 5413:
		PacoteMagoMais14(ClientID,ItemSend);
		break;
		case 5414:
		PacoteMagoMais15(ClientID,ItemSend);
		break;
		case 5415:
		PacoteDanoMais11(ClientID,ItemSend);
		break;
		case 5417:
		PacoteDanoMais12(ClientID,ItemSend);
		break;
		case 5418:
		PacoteDanoMais13(ClientID,ItemSend);
		break;
		case 5419:
		PacoteDanoMais14(ClientID,ItemSend);
		break;
		case 5421:
		PacoteDanoMais15(ClientID,ItemSend);
		break;
		case 5422:
		Pacote_TK(ClientID,ItemSend);
		break;
		case 5423:
		Pacote_FM(ClientID,ItemSend);
		break;
		case 5425:
		Pacote_BM(ClientID,ItemSend);
		break;
		case 5426:
		Pacote_HT(ClientID,ItemSend);
		break;
		case 5427:
		Kit_DOH_1(ClientID,ItemSend);
		break;
		case 5428:
		Kit_DOH_2(ClientID,ItemSend);
		break;
		case 5429:
		Kit_DOH_3(ClientID,ItemSend);
		break;
	case 5430:
		Kit_DOH_4(ClientID,ItemSend);
		break;
		case 5431:
		Kit_DOH_5(ClientID,ItemSend);
		break;
		case 5432:
		Kit_DOH_6(ClientID,ItemSend);
		break;
		case 5433:
		Kit_DOH_7(ClientID,ItemSend);
		break;
		case 5434:
		Kit_DOH_8(ClientID,ItemSend);
		break;
		case 5435:
		Kit_DOH_9(ClientID,ItemSend);
		break;
		case 5436:
		Kit_DOH_10(ClientID,ItemSend);
		break;
		case 5437:
		Kit_DOH_11(ClientID,ItemSend);
		break;
		case 5438:
		Kit_DOH_12(ClientID,ItemSend);
		break;
		case 5439:
		Kit_DOH_13(ClientID,ItemSend);
		break;
		case 5440:
		Kit_DOH_14(ClientID,ItemSend);
		break;
		case 5441:
		Kit_DOH_15(ClientID,ItemSend);
		break;
		case 5442:
		Kit_DOH_16(ClientID,ItemSend);
		break;
		case 5499:
		Novo_Gold1(ClientID,ItemSend);
		break;
	case 5500:
		Novo_Gold5(ClientID,ItemSend);
		break;
	case 5501:
		Novo_Gold10(ClientID,ItemSend);
		break;
	case 5502:
		Novo_Gold15(ClientID,ItemSend);
		break;
		case 5503:
		Novo_Gold20(ClientID,ItemSend);
		break;
		case 5504:
		Novo_Gold30(ClientID,ItemSend);
		break;
		case 5512:
		Novo_Gold40(ClientID,ItemSend);
		break;
		case 5513:
		Novo_Gold50(ClientID,ItemSend);
		break;
		case 5514:
		Novo_Gold60(ClientID,ItemSend);
		break;
		case 5515:
		Novo_Gold100(ClientID,ItemSend);
		break;
		case 5516:
		Novo_Gold1000(ClientID,ItemSend);
		break;
	case 4010:
		//SendClientMsg(ClientID,"Desativada");
		mi100(ClientID,ItemSend);
		break;
	case 4011:
		//SendClientMsg(ClientID,"Desativada");
		bi1(ClientID,ItemSend);
		break;
	case 4026:
		mi1(ClientID,ItemSend);
		break;
	case 4027:
		mi5(ClientID,ItemSend);
		break;
	case 4028:
		mi10(ClientID,ItemSend);
		break;
	case 4029:
		mi50(ClientID,ItemSend);
		break;
	case 3445: case 3446: 
						
		break; 
	case 3447: case 3448: 

		break;
	case 699:
		if(cX >= 1100 && cY >= 100 && cX <= 1300 && cY <= 255)
		{
			SendClientMsg(ClientID,"Você não pode ir.");
			return;
		}
		break;
	case 700:
		GemaEstrelar(ClientID,ItemSend);
		break;
	case 3351:
		Restaurad1(ClientID,ItemSend);
		break;

	case 3352:
		Restaurad2(ClientID,ItemSend);
		break;
	case 3353:
		Restaurad3(ClientID,ItemSend);
		break;
	case 3354:
		Restaurad4(ClientID,ItemSend);
		break;
	case 3355:
		Restaurad5(ClientID,ItemSend);
		break;
	case 3356:
		Restaurad6(ClientID,ItemSend);
		break;
	case 3357:
		Restaurad7(ClientID,ItemSend);
		break;
	case 3344:
		Catalis1(ClientID,ItemSend);
		break;
	case 3345:
		Catalis2(ClientID,ItemSend);
		break;
	case 3346:
		Catalis3(ClientID,ItemSend);
		break;
	case 3347:
		Catalis4(ClientID,ItemSend);
		break;
	case 3348:
		Catalis5(ClientID,ItemSend);
		break;
	case 3349:
		Catalis6(ClientID,ItemSend);
		break;
	case 3350:
		Catalis7(ClientID,ItemSend);
		break;
	case 3315:
		CuraMont(ClientID,ItemSend);
		break;
	case 3021:
		ExtracaoElmo(ClientID,ItemSend);
		break;
	case 3022:
		ExtracaoPeito(ClientID,ItemSend);
		break;
	case 3023:
		ExtracaoCalca(ClientID,ItemSend);
		break;
	case 3024:
		ExtracaoLuva(ClientID,ItemSend);
		break;
	case 3025:
		ExtracaoBota(ClientID,ItemSend);
		break;
	case 3026:
		ExtracaoArma(ClientID,ItemSend);
		break;
	case 3027:
		BarMythDano(ClientID,ItemSend,ItemRecv);
		SendItens(ClientID,*(char*)&Packet[24]);
		break;
	case 3028:
		BarMythMag(ClientID,ItemSend,ItemRecv);
		SendItens(ClientID,*(char*)&Packet[24]);
		break;
	case 3029:
		BarMythDef(ClientID,ItemSend,ItemRecv);
		SendItens(ClientID,*(char*)&Packet[24]);
		break;
	case 3030:
		BarMythCrit(ClientID,ItemSend,ItemRecv);
		SendItens(ClientID,*(char*)&Packet[24]);
		break;
	case 777:
		PergaM1(ClientID,ItemSend);
		break;
	case 778:
		PergaM2(ClientID,ItemSend);
		break;
	case 779:
		PergaM3(ClientID,ItemSend);
		break;
	case 780:
		PergaM4(ClientID,ItemSend);
		break;
	case 781:
		PergaM5(ClientID,ItemSend);
		break;
	case 782:
		PergaM6(ClientID,ItemSend);
		break;
	case 783:
		PergaM7(ClientID,ItemSend);
		break;
	case 784:
		PergaM8(ClientID,ItemSend);
		break;
	case 785:
		NesesM(ClientID,ItemSend);
		break;
	case 3326:
		PesadeloA(ClientID,ItemSend);
		break;
	case 5401:
		QuestHC(ClientID,ItemSend);
		break;
	case 4111:
		LanHouseN(ClientID,SrcSlot);
		break;
	case 4112:
		LanHouseM(ClientID,SrcSlot);
		break;
	case 4113:
		LanHouseA(ClientID,SrcSlot);
		break;
	case 3331:
		DoTeleport(ClientID,4031,4079);
		SendClientMsg(ClientID,"Bem vindo ao Hall da Felicidade.");
		Amount(ClientID,ItemSend);
		break;
	case 4012:
		DoTeleport(ClientID,4031,4079);
		SendClientMsg(ClientID,"Bem vindo ao Hall da Felicidade.");
		Amount(ClientID,ItemSend);
		break;
	case 3367:
		AguaFadas(ClientID,ItemSend,ItemRecv);
		SendItens(ClientID,*(char*)&Packet[24]);
		break;
	case 4106: // Elime
		Elime(ClientID,ItemSend,SrcSlot);
		break;
    case 4107: //Sylphed
		Sylphed(ClientID,ItemSend,SrcSlot);
		break;
	case 4108: //Thelion
		Thelion(ClientID,ItemSend,SrcSlot);
		break;
	case 4109: //Noas
		Noas(ClientID,ItemSend,SrcSlot);
		break;
	case 3173:
		PergaN1(ClientID,ItemSend);
		break;
	case 3174:
		PergaN2(ClientID,ItemSend);
		break;
	case 3175:
		PergaN3(ClientID,ItemSend);
		break;
	case 3176:
		PergaN4(ClientID,ItemSend);
		break;
	case 3177:
		PergaN5(ClientID,ItemSend);
		break;
	case 3178:
		PergaN6(ClientID,ItemSend);
		break;
	case 3179:
		PergaN7(ClientID,ItemSend);
		break;
	case 3180:
		PergaN8(ClientID,ItemSend);
		break;
	case 3181:
		NesesN(ClientID,ItemSend);
		break;
	case 412:
		Poeira_de_Ori(ClientID, SrcSlot,DstSlot);
		//SendItens(ClientID,*(char*)&Packet[24]);
	case 411:
		return;
	case 5338:
		printf("\n \n %d ideal \n \n",player->Equip[0].EFV2);
		if(player->Equip[0].EFV2 == 2)
			{
			if(player->bStatus.Level <= 353)
			{
			Cele(ClientID);
}
			else{
			Cele(ClientID);
			}
			}
			else if(player->Equip[0].EFV2 == 3)
			{
				SubCeletial(ClientID);
		    }
			else if(player->Equip[0].EFV2 == 4)
			{
				HardCore(ClientID);
			}
						else if(player->Equip[0].EFV2 == 4)
			{
				Sub_Casse_CLasse(ClientID);
			}
						else if(player->Equip[0].EFV2 == 5)
			{
				Nova_Classe(ClientID);
			}
						else if(player->Equip[0].EFV2 == 5)
			{
				HardCore(ClientID);
			}
			else if(player->Inventory[1].Index = 5334 && player->Equip[0].EFV2 == 6 && player->Equip[11].Index == 6449)
			{
				Sol(ClientID);
			}
			else if(player->Inventory[1].Index = 5335 && player->Equip[0].EFV2 == 6 && player->Equip[11].Index == 6457)
			{
				Terra(ClientID);
			}
			else if(player->Inventory[1].Index = 5334 && player->Equip[0].EFV2 == 6 && player->Equip[11].Index == 6456)
			{
				Agua(ClientID);
			}
			else if(player->Inventory[1].Index = 5337  && player->Equip[0].EFV2 == 6 && player->Equip[11].Index == 6448)
			{
				Vento(ClientID);
			}
			else if(player->Equip[0].EFV2 == 7)
			{
				SendClientMsg(ClientID,"você não pode mais evoluir.");}
		break;

	case 4122:
		if(player->Equip[0].EFV2 == 1 && player->bStatus.Level <= 250)
		{
			player->Inventory[v->SrcSlot].Index = 0;
			if(player->bStatus.Level >= 200)
			{
				for(int i = 1; i < 7; i++)
				{
					player->Equip[i].EF1 = 43;
					player->Equip[i].EFV1 = 5;
					SendItens(ClientID,i);
				}
			}
			SendClientMsg(ClientID,"Sucesso na refinação.");
		}
		break;
	
	default:
		if(ItemSend->Index >= 3407 && ItemSend->Index <= 3416) // tinturas
		{
			if(*(char*)&Packet[24] >= 1 && *(char*)&Packet[24] <= 5)
			{
				if(ItemRecv->EF1 == 43 && ItemRecv->EFV1 >= 1  || ItemRecv->EF1 >= 116)
				{
					Feijoes(ItemSend,ItemRecv);
					SendItens(ClientID,*(char*)&Packet[24]);
					SendEffect(1,0xe ,ClientID);
					return;
				}
				else
					SendClientMsg(ClientID,"Impossível em equipamentos sem refinação.");
					return;
			}
			else
				SendClientMsg(ClientID,"Somente em equipamentos de defesa.");
		}
		else if(ItemSend->Index >= 4016 && ItemSend->Index <= 4020) // itens de por adddd
		{
			ClasseA(ClientID,ItemSend,ItemRecv2);
			SendEffect(1,0x0E,ClientID);
			SendALL(ClientID);
			return;
		}
		else if(ItemSend->Index >= 4117 && ItemSend->Index <= 4121)
		{
			if(player->Gold >= 2000000000)
			{
				SendClientMsg(ClientID,"Você possui muito gold em seu inventario.");
			}
			ItensExpQuest(ClientID,v);
			SendEffect(1,0x0E,ClientID);
			return;
		}
		else if(ItemSend->Index >= 2420 && ItemSend->Index <= 2438)
		{
			if(racoes(ClientID,v->SrcSlot) == 0)
			{
				SendClientMsg(ClientID,"Montaria não confere.");
				
			}
		}
		
	break;
	}
	SendItem(ClientID, 1, v->SrcSlot,& player->Inventory[v->SrcSlot]);//1 é inventario 0 é equip
	SendItem(ClientID, 0, v->SrcSlot,& player->Equip[v->SrcSlot]);//1 é inventario 0 é equip
	SendStats(ClientID);
	SendEquip(ClientID);
	SendScore(ClientID);
	GetCurrentScore(ClientID);
	GetCurrentScore2(ClientID);
}