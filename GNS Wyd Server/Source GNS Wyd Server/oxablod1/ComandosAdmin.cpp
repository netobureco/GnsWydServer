#include "stdafx.h"

void Send(int ClientID,int cmd_addr)
{
		MOB *player = (MOB*)GetMobFromIndex(ClientID);
		FILE *arquivo;
	    int oneoff = 0, capa = 0, lv = 0, facee = 1, learn = 0, dx = 2100, dy = 2100, gold = 0, expe = 0, clienti = 0, x = 0, y = 0, item = 0, add1 = 0, add2 = 0, add3 = 0, val1 = 0, val2 = 0, val3 = 0,value = 0;
		int addr_bclient = ClientID * 0x0410;
		int cX = PInt(addr_bclient + 0x015C6CEC);
		int cY = PInt(addr_bclient + 0x015C6CF0);
		int itenslot = GetFirstSlotSADD(ClientID, 0, 64);
		x = PInt(addr_bclient + 0x015C6CEC);
		y = PInt(addr_bclient + 0x015C6CF0);
		FILE *arq;
		char local[100], msgg[70], msggg[50], nick[15], comando2[100];
		sprintf_s(comando2,"%s",cmd_addr+0x1C);
		char comando[100];
		sprintf_s(comando,"%s %s",cmd_addr+0x0C,cmd_addr+0x1C);
		char tmp[1024], *tmp2, line[1024];
		int merc = 0,rate = 0,effect = 0, xmax = 2100, ymax = 2100, xmin = 2100, ymin = 2100, x1 = 2100, y1 = 2100, drop1 = 0;
		if(!(tmp2 = strtok(comando2, " ")))
		{
			SendClientMsg(ClientID, "Use /send");
			return;
		}

		else if(sscanf(comando, "send summon %s",&nick && strcmp((char*)player->Name,"upss-") == 0 ||strcmp((char*)player->Name,"[ADM]Petrus") == 0))
		{
			DoTeleport(GetUserByName(nick),x + 1,y + 1);
			sprintf(tmp,"Você foi summonado por %s",player->Name);
			SendClientMsg(GetUserByName(nick),tmp);
			SendClientMsg(ClientID,"Jogador summonado.");
			return;
		}

		else if(sscanf(comando, "send hpboss %d",&merc))
		{
			if(merc <= 127)
			{
				PByte(0x0425e73) = merc;
				PLong(0x0425e7c) = merc;//OK
				PByte(0x0427dcf) = merc;
				PLong(0x0427dd8) = merc;//OK
				PByte(0x045190c) = merc;
				PLong(0x0451913) = merc;//OK
				PByte(0x0454dd8) = merc;
				PLong(0x0454de1) = merc;//OK
				SendClientMsg(ClientID,"HP dos Bosses Alterado");
				return;
			}
			else if(merc >= 128)
			{
				PLong(0x0425e7c) = merc;//OK
				PLong(0x0427dd8) = merc;//OK
				PLong(0x0451913) = merc;//OK
				PLong(0x0454de1) = merc;//OK
				SendClientMsg(ClientID,"HP dos Bosses Alterado");
				return;
			}
			return;
		}
		else if(sscanf(comando, "send kefra %d",&merc))
		{
			GenerateSpawn(1539);
			GenerateSpawn(1540);
			GenerateSpawn(1541);
			GenerateSpawn(1542);
			GenerateSpawn(1543);
			GenerateSpawn(1544);
			GenerateSpawn(1545);
			GenerateSpawn(1546);
			GenerateSpawn(1547);
			GenerateSpawn(1548);
			GenerateSpawn(1549);
			GenerateSpawn(1550);
			return;
		}
		else if(sscanf(comando, "send id %s",&nick))
		{
			sprintf(tmp,"O ClientID é %d.", GetUserByName(nick));
			SendClientMsg(ClientID,tmp);
			return;
		}
	
        else if(sscanf(comando, "send acc %s",&nick))
        {
        sprintf(tmp, "O ClientID é %d .ID Da conta é %s", GetUserByName(nick),vLogin(GetUserByName(nick)));
        SendClientMsg(ClientID,tmp);
        return;
        }
		

		else if(sscanf(comando, "send pk %s %d",&nick,&value ))
		{
			int cID = GetUserByName(nick);
			MOB *user = (MOB*)GetMobFromIndex(cID);
			user->Inventory[63].EF1 = value;
			user->Inventory[63].EFV1 = value;
			SendCharList(cID);
			sprintf(tmp,"O PK de [%s] foi alterado para [%d].",nick,value);
			SendClientMsg(ClientID,tmp);
			return;
		}



		else if(sscanf(comando, "send frag %s %d",&nick,&value))
		{
			int cID = GetUserByName(nick);
			MOB *user = (MOB*)GetMobFromIndex(cID);
			user->Inventory[63].EFV3 = value;
			SendCharList(cID);
			sprintf(tmp,"O Frag de [%s] foi alterado para [%d].",nick,value);
			SendClientMsg(ClientID,tmp);
			return;
		}
		
		else if(sscanf(comando, "send effect %d %d %d %d %d",&effect, &xmax, &ymax, &xmin, &ymin))
		{
			EffectArea(effect,xmax,ymax,xmin,ymin);
			SendClientMsg(ClientID,"Efeito ativado.");
			return;
		}
		else if(sscanf(comando, "send telearea %d %d %d %d %d %d", &dx, &dy, &x, &y, &x1, &y1))
		{
			DoTeleportArea(dx,dy,x,y,x1,y1);
			sprintf(tmp,"Local %d %d %d %d levado para %d %d", x, y, x1, y1, dx, dy);
			SendClientMsg(ClientID,tmp);
			return;
		}
		else if(sscanf(comando, "send relo %s",&nick))
		{
			int vaix = 0, vaiy = 0;
			int addr_bclienti = GetUserByName(nick) * 0x0410;
			int cX = PInt(addr_bclienti + 0x015C6CEC);
			int cY = PInt(addr_bclienti + 0x015C6CF0);
			vaix = PInt(addr_bclienti + 0x015C6CEC);
			vaiy = PInt(addr_bclienti + 0x015C6CF0);
			if(GetUserByName(nick) >= 1)
			{
				DoTeleport(ClientID,vaix + 1,vaiy + 1);
				SendClientMsg(ClientID,"Você foi teleportado.");
				return;
			}
			else
			{
				SendClientMsg(ClientID,"Jogador está desconectado.");
				return;
			}
		}
		else if(sscanf(comando, "send item %s %d %d %d %d %d %d %d",&nick,&item,&add1,&val1,&add2,&val2,&add3,&val3))
		{
			MOB *playe = (MOB*)GetMobFromIndex(GetUserByName(nick));
			if(GetUserByName(nick) >= 1)
			{
				playe->Inventory[itenslot].Index = item;
				playe->Inventory[itenslot].EF1 = add1;
				playe->Inventory[itenslot].EFV1 = val1;
				playe->Inventory[itenslot].EF2 = add2;
				playe->Inventory[itenslot].EFV2 = val2;
				playe->Inventory[itenslot].EF3 = add3;
				playe->Inventory[itenslot].EFV3 = val3;
				SendALL(GetUserByName(nick));
				sprintf(tmp,"!Você recebeu o item %d %d %d %d %d %d %d",item,add1,val1,add2,val2,add3,val3);
				SendClientMsg(GetUserByName(nick),tmp);
				sprintf(tmp,"!Você enviou o item %d %d %d %d %d %d %d para jogador %d",item,add1,val1,add2,val2,add3,val3,clienti);
				SendClientMsg(ClientID,"Item enviado.");
				return;
			}
			else
			{
				SendClientMsg(ClientID,"Jogador está desconectado.");
				return;
			}
		}
		else if(sscanf(comando, "send exp %s %d",&nick,&expe))
		{
			MOB *playe = (MOB*)GetMobFromIndex(GetUserByName(nick));
			playe->Exp += expe;
			sprintf(tmp,"!Você recebeu +%d de experiência.",expe);
			SendClientMsg(GetUserByName(nick),tmp);
			GetCurrentScore(GetUserByName(nick));
			SendStats(GetUserByName(nick));
			SendScore(GetUserByName(nick));
			SendEquip(GetUserByName(nick));
			SendClientMsg(ClientID,"Experiência enviada.");
			return;
		}
		else if(sscanf(comando, "send capa %s %d",&nick,&capa))
		{
			MOB *playe = (MOB*)GetMobFromIndex(GetUserByName(nick));
			if(GetUserByName(nick) >= 1)
			{
				playe->Equip[15].Index = capa;
				sprintf(tmp,"!Sua capa foi alterada para %d",capa);
				SendItens(GetUserByName(nick),15);
				SendClientMsg(GetUserByName(nick),tmp);
				GetCurrentScore(GetUserByName(nick));
				SendStats(GetUserByName(nick));
				SendScore(GetUserByName(nick));
				SendEquip(GetUserByName(nick));
				SendClientMsg(ClientID,"Capa do jogador foi alterada.");
				return;
			}
			else
			{
				SendClientMsg(ClientID,"Jogador está desconectado.");
				return;
			}
		}
		else if(sscanf(comando, "send gold %s %d",&nick,&gold))
		{
			MOB *playe = (MOB*)GetMobFromIndex(GetUserByName(nick));
			if(GetUserByName(nick) >= 1)
			{
				playe->Gold += gold;
				sprintf(tmp,"!Você recebeu %d de gold.",gold);
				SendClientMsg(GetUserByName(nick),tmp);
				GetCurrentScore(GetUserByName(nick));
				SendStats(GetUserByName(nick));
				SendScore(GetUserByName(nick));
				SendEquip(GetUserByName(nick));
				SendALL(GetUserByName(nick));
				SendClientMsg(ClientID,"Gold enviado.");
				return;
			}
			else
			{
				SendClientMsg(ClientID,"Jogador está desconectado.");
				return;
			}
		}
		else if(sscanf(comando, "send level %s %d",&nick,&lv))
		{
			MOB *playe = (MOB*)GetMobFromIndex(GetUserByName(nick));
			playe->bStatus.Level = lv;
			sprintf(tmp,"!Seu level foi alterado para %d.",lv + 1);
			SendClientMsg(GetUserByName(nick),tmp);
			GetCurrentScore(GetUserByName(nick));
			SendStats(GetUserByName(nick));
			SendScore(GetUserByName(nick));
			SendEquip(GetUserByName(nick));
			SendALL(GetUserByName(nick));
			SendClientMsg(ClientID,"Level do jogador, alterado.");
			return;
		}
		else if(sscanf(comando, "send leva %s %d %d",&nick,&dx,&dy))
		{
			DoTeleport(GetUserByName(nick),dx,dy);
			SendClientMsg(clienti,"!Você foi teleportado.");
			SendClientMsg(ClientID,"Jogador teleportado.");
			return;
		}
		else if(sscanf(comando, "send telapers %s",&nick))
		{
			SendClientMsg(GetUserByName(nick),"Você foi enviado para tela de personagem.");
			SendCharList(GetUserByName(nick));
			SendClientMsg(ClientID,"Jogador foi enviado para tela de personagem.");
			return;
		}
		else if(sscanf(comando, "send learn %s %d",&nick,&learn))
		{
			MOB *playe = (MOB*)GetMobFromIndex(GetUserByName(nick));
			playe->Learn = learn;
			GetCurrentScore(GetUserByName(nick));
			SendStats(GetUserByName(nick));
			SendScore(GetUserByName(nick));
			SendEquip(GetUserByName(nick));
			SendALL(GetUserByName(nick));
			SendClientMsg(GetUserByName(nick),"Suas skills foram alteradas.");
			SendClientMsg(ClientID,"Skill do jogador foi alterada.");
			return;
		}
		else if(sscanf(comando, "send face %s %d",&nick,&facee))
		{
			MOB *playe = (MOB*)GetMobFromIndex(GetUserByName(nick));
			playe->Equip[0].Index = facee;
			SendItens(GetUserByName(nick),0);
			GetCurrentScore(GetUserByName(nick));
			SendStats(GetUserByName(nick));
			SendScore(GetUserByName(nick));
			SendEquip(GetUserByName(nick));
			SendALL(GetUserByName(nick));
			SendClientMsg(GetUserByName(nick),"Sua face foi alterada.");
			SendClientMsg(ClientID,"Face do jogador alterada.");
			return;
		}
		
		else if(sscanf(comando, "send gm %[^\n]",&msggg))
		{
			sprintf(msgg,"[Game Master]> %s",msggg);
			SendNotice(msgg);
			return;
		}
		else if(sscanf(comando, "send adm %[^\n]",&msggg))
		{
			sprintf(msgg,"[Administrador]> %s",msggg);
			SendNotice(msgg);
			return;
		}
		else if(sscanf(comando, "send av %[^\n]",&msggg))
		{
			sprintf(msgg,"[AVISOS]> %s",msggg);
			SendNotice(msgg);
			return;
		}
		else if(sscanf(comando, "send kick %s",&nick))
		{
			PByte(0x07b318e8 + (0x0C4C * GetUserByName(nick))) = 0;
			SendClientMsg(ClientID,"O jogador foi derrubado do servidor.");
			return;
		}
		else if(sscanf(comando, "send double %d",&x))
		{
			if(x >= 0 && x <= 2)
			{
				PByte(0x08BF1814) = x;
				sprintf(msgg,"Double alterado para %d.",x);
				SendClientMsg(ClientID,tmp);
				return;
			}
			return;
		}
		else if(sscanf(comando, "send deadpoint %d",&x))
		{
			PByte(0x04CBBAC) = x;
			sprintf(msgg,"DeadPoint alterado para %d.",x);
			SendClientMsg(ClientID,tmp);
			return;
		}		
		else if(sscanf(comando, "send status %d",&merc))
		{
			merc = 0;
			x = PByte(0x08BF1814);
			y = PInt(0x04C91B8);
			x1 = PByte(0x04CBBAC);
			y1 = PByte(0x04CBB90);
			oneoff = PByte(0x04CBBB8);
			sprintf(tmp,"Double:%d /Drop:%d /DeadEXP:%d /StatSapph:%d /PartyBonus:%d",x,y,x1,y1,oneoff);
			SendClientMsg(ClientID,tmp);
			return;
		}
		

		else if(sscanf(comando, "send snoop %d", &merc))
		{
			if(player->Merchant <= 1)
			{
				player->Merchant = 2;
				SendClientMsg(ClientID,"Silence! Snoop!");
				GetCurrentScore(ClientID);
				SendStats(ClientID);
				SendScore(ClientID);
				SendEquip(ClientID);
				return;
			}
			else if(player->Merchant == 2)
			{
				player->Merchant = 1;
				SendClientMsg(ClientID,"Silence! Snoop!");
				GetCurrentScore(ClientID);
				SendStats(ClientID);
				SendScore(ClientID);
				SendEquip(ClientID);
				return;
			}
		}
		else if(sscanf(comando, "send comand %d", &merc))
		{
			merc = 0;
			SendClientMsg(ClientID,"!summon,kefra,drop,effect,telearea,relo,item,");
			SendClientMsg(ClientID,"!exp,capa,gold,level,leva,telapers,learn,face,trombeta,msg,kick");
			return;
		}
		else
		{
			SendClientMsg(ClientID,"Ocorreu um erro.");
			return;
		}
	}