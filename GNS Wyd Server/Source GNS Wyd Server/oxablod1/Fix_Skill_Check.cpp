#include "Stdafx.h"

void __stdcall GetCurrentScoreAffect(int clientid)
{
	
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);

#pragma region Return TMSRV Function GetCurScore
	int dwGetCurScore = 0x04123C0;
	int dwaddr = clientid * 0x410 + 0x015C69B8;

	_asm
	{
		MOV ECX,clientid
		PUSH ECX
		MOV ECX,dwaddr
		CALL dwGetCurScore
	}
#pragma endregion

	//lembrar 787,Poção_Kappa,719.0,0.0.0.0.0,0,200000,0,0,0,EF_CLASS,255,EF_VOLATILE,10,EF_AMOUNT,5
	//efeito igual soul
	int transfEdem = -1;
	for(int i=0;i<16;i++)
	{
		switch(mobaffectbuffer[clientid].Affects[i].Index)
		{
			case 38: // 8 skill de troca Converte metade do MP para HP
			{
				thisclient->Status.maxHP += (thisclient->Status.maxMP/100)*50;
				thisclient->Status.maxMP = (thisclient->Status.maxMP/100)*100;
				break;
			}
			case 30: // Bônus PvM - Frango
			{
				thisclient->Status.Attack += 500;
				SendScore(clientid);
				break;
			}
			case 16:
			{
				if(mobaffectbuffer[clientid].Affects[i].Master != 5)
					break;

				thisclient->Equip[0].EFV3 = thisclient->Equip[0].Index;
				thisclient->Equip[0].Index = 32;
				thisclient->Equip[0].EFV1 = 9;
				
				thisclient->Status.maxHP += thisclient->Status.tMaster * 3;
				thisclient->Status.Attack += thisclient->Status.tMaster * 3;
				thisclient->Status.Defense += thisclient->Status.tMaster * 2;
				
				SendScore(clientid);
				SendStats(clientid);
				//SendSetHpMp(clientid);
				SendItem(clientid, 0, 0, &thisclient->Equip[0]);
				RespawCreatMob(clientid);
				transfEdem = 1;
				break;
			}
			case 34: // sephira
			{
				thisclient->Status.Attack += (thisclient->Status.Attack/100)*25;
				thisclient->Status.INT +=(thisclient->Status.INT/100)*35;
				break;
			}
			case 35: // Bônus HP/MP poção saude
			{
				thisclient->Status.maxHP +=  (thisclient->Status.maxHP/100)*25;
				thisclient->Status.maxMP +=  (thisclient->Status.maxMP/100)*35;
				break;
			}

			case 29:
			{
				int porcentStr = thisclient->bStatus.STR / 100;
				int porcentInt = thisclient->bStatus.INT / 100;
				int porcentDex = thisclient->bStatus.DEX / 100;
				int porcentCon = thisclient->bStatus.CON / 100;

				switch(mobaffectbuffer[clientid].Affects[i].Master)
				{
					case 0: // Full Força
						thisclient->Status.STR += porcentStr * 120;
						break;
					case 1: // Full Inteligencia
						thisclient->Status.INT += porcentInt * 120;
						thisclient->Status.maxMP += porcentInt * 80 << 1;
						break;
					case 2: // Full Dextresa
						thisclient->Status.DEX += porcentDex * 120;
						break;
					case 3: // Full Constituição
						thisclient->Status.CON += porcentCon * 80;
						thisclient->Status.maxHP += porcentCon * 80 << 1;
						break;

					case 4: // Força + INT
						thisclient->Status.STR += porcentStr * 80;
						thisclient->Status.INT += porcentInt * 40;
						thisclient->Status.maxMP += porcentInt * 40 << 1;
						break;
					case 5: // Força + DEX
						thisclient->Status.STR += porcentStr * 80;
						thisclient->Status.DEX += porcentDex * 40;
						break;
					case 6: // Força + CON
						thisclient->Status.STR += porcentStr * 80;
						thisclient->Status.CON += porcentCon * 40;
						thisclient->Status.maxHP += porcentCon * 40 << 1;
						break;

					case 7: // Inteligencia + Força
						thisclient->Status.INT += porcentInt * 80;
						thisclient->Status.STR += porcentStr * 40;
						thisclient->Status.maxMP += porcentInt * 80 << 1;
						break;
					case 8: // Inteligencia + DEX
						thisclient->Status.INT += porcentInt * 80;
						thisclient->Status.DEX += porcentDex * 40;
						thisclient->Status.maxMP += porcentInt * 80 << 1;
						break;
					case 9: // Inteligencia + CON
						thisclient->Status.INT += porcentInt * 80;
						thisclient->Status.CON += porcentCon * 40;
						thisclient->Status.maxMP += porcentInt * 80 << 1;
						break;

					case 10: // Dextresa + Força
						thisclient->Status.DEX += porcentDex * 80;
						thisclient->Status.STR += porcentStr * 40;
						break;
					case 11: // Dextresa + INT
						thisclient->Status.DEX += porcentDex * 80;
						thisclient->Status.INT += porcentInt * 40;
						thisclient->Status.maxMP += porcentInt * 40 << 1;
						break;
					case 12: // Dextresa + CON
						thisclient->Status.DEX += porcentDex * 80;
						thisclient->Status.CON += porcentCon * 40;
						thisclient->Status.maxHP += porcentCon * 40 << 1;
						break;

					case 13: // Constituição + Força
						thisclient->Status.CON += porcentCon * 80;
						thisclient->Status.STR += porcentStr * 40;
						thisclient->Status.maxHP += porcentCon * 80 << 1;
						break;
					case 14: // Constituição + INT
						thisclient->Status.CON += porcentCon * 80;
						thisclient->Status.INT += porcentInt * 40;
						thisclient->Status.maxHP += porcentCon * 80 << 1;
						break;
					case 15: // Constituição + DEX
						thisclient->Status.CON += porcentCon * 80;
						thisclient->Status.DEX += porcentDex * 40;
						thisclient->Status.maxHP += porcentCon * 80 << 1;
						break;
					default:
						thisclient->Status.STR = 2000;
						thisclient->Status.INT = 2000;
						thisclient->Status.maxHP = 10000;
						thisclient->Status.maxMP = 10000;
						break;
				}
			}
		}
	}
	if(thisclient->Equip[0].Index == 32 && transfEdem == -1)
	{
		if(thisclient->Equip[0].EFV2 == 1)
		{
			thisclient->Equip[0].Index = 21;
			thisclient->Equip[0].EFV1 = 0;
		}
		else
		{
			thisclient->Equip[0].Index = thisclient->Equip[0].EFV3;
			thisclient->Equip[0].EFV1 = 0;
		}
		SendItem(clientid, 0, 0, &thisclient->Equip[0]);
		RespawCreatMob(clientid);
	}
	SendScore(clientid);
	return;

}

void Skills(char *Packet)
{
	DWORD *m_PacketBuffer;
	short ClientID = *(short*)&Packet[6];
	short skill = *(short*)&Packet[24];
	st_Item *X = (st_Item*)&Packet[16];
	st_Item *Y = (st_Item*)&Packet[18];
	short alvo = *(short*)&Packet[40];
	if(skill == 99)
	{
		LivroRessu(ClientID);
		return;
	}
	
	else if(skill == 98)//vinha
	{
		//CreateMOB("Vinha",X->Index,Y->Index,"npc");
		return;
	}
	else if(skill == 31)
	{
		Renascimento(ClientID,alvo);
		return;
	}
	else if(skill == 71)
	{
		eden(ClientID);
		return;
	}
	else if(skill == 47)
	{
		Skill_Cancel(ClientID,((BYTE*)m_PacketBuffer));
		return;
	}
	else if(skill == 102)
	{
		soul(ClientID);
		return;
	}

}

int FixMestreSkill(int ClientID,int IDSkill)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int learn1 = PByte(addr_bclient + 0x15c6c94);
	int learn2 = PByte(addr_bclient + 0x15c6c95);
	int learn3 = PByte(addr_bclient + 0x15c6c96);
	int HP = PInt(addr_bclient + 0x015c6a00);
	int cAP0 = PByte(addr_bclient + 0x015C69F4);
	int cAP1 = PByte(addr_bclient + 0x015C69F5);
	int cAP2 = PByte(addr_bclient + 0x015C69F6);
	int cAP3 = PByte(addr_bclient + 0x015C69F7);
	char cMyFace = PByte((0x410 * ClientID) + 0x015C6A14);
	if(cMyFace == 1 || cMyFace == 6 || cMyFace == 16 || cMyFace == 26 || cMyFace == 36) // TK
	{
		if(IDSkill >= 5000 && IDSkill <= 5023)
		{
		if(IDSkill >= 5000 && IDSkill <= 5006)
			return 1;
		if(IDSkill >= 5008 && IDSkill <= 5014)
			return 1;
		if(IDSkill >= 5016 && IDSkill <= 5022)
			return 1;
		if(learn1 == 255 || learn2 == 255 || learn3 == 255)
		{
			SendClientMsg(ClientID,"Você já aprendeu uma oitava skill.");
			return 0;
		}
		if(IDSkill == 5007)
		{
			if(player->Gold >= 30000000)
			{
				if(cAP1 < 199)
				{
					SendClientMsg(ClientID,"Você precisa de mais pontos da linhagem.");
					return 0;
				}
				if(learn1 == 127)
				{
					player->Gold -= 30000000;
					player->bStatus.Defense += 300;
					SendALL(ClientID);
					SendStats(ClientID);
					SendEquip(ClientID);
					SaveChar(1,ClientID);
					LogForAll(ClientID,"Aprendeu oitava skill.");
					return 1;
				}
				else
				{
					SendClientMsg(ClientID,"É necessário aprender as skill's anteriores.");
					return 0;
				}

			}
			else
			{SendClientMsg(ClientID,"É necessário 30 milhões ou 200 pontos de linhagem.");
			return 0;}
		}
		if(IDSkill == 5015)
		{
			if(player->Gold >= 30000000)
			{
				if(cAP2 < 199)
				{
					SendClientMsg(ClientID,"Você precisa de mais pontos da linhagem.");
					return 0;
				}
				if(learn2 == 127)
				{
					player->Gold -= 30000000;
					player->bStatus.Defense += 300;//todas oitava recebe isso
					player->bStatus.Defense += 500;//função da skill passiva
					SendALL(ClientID);
					SendStats(ClientID);
					SendEquip(ClientID);
					SaveChar(1,ClientID);
					LogForAll(ClientID,"Aprendeu oitava skill.");
					return 1;
				}
				else
				{
					SendClientMsg(ClientID,"É necessário aprender as skill's anteriores.");
					return 0;
				}

			}
			else
			{SendClientMsg(ClientID,"É necessário 30 milhões");
			return 0;}
		}
		if(IDSkill == 5023)
		{
			if(player->Gold >= 30000000)
			{
				if(cAP3 <= 198)
				{
					SendClientMsg(ClientID,"Você precisa de mais pontos da linhagem.");
					return 0;
				}
				if(learn3 == 127)
				{
					player->Gold -= 30000000;
					player->bStatus.Defense += 300;
					SendALL(ClientID);
					SendStats(ClientID);
					SendEquip(ClientID);
					SaveChar(1,ClientID);
					LogForAll(ClientID,"Aprendeu oitava skill.");
					return 1;
				}
				else
				{
					SendClientMsg(ClientID,"É necessário aprender as skill's anteriores.");
					return 0;
				}

			}
			else
			{SendClientMsg(ClientID,"É necessário 30 milhões");
			return 0;}
		}
		else
		{
			SendClientMsg(ClientID,"Não é possivel aprender skill's de outras classes.");
			return 0;
		}
		}
		else
		{
			SendClientMsg(ClientID,"Não é possivel aprender skill's de outras classes.");
			return 0;
		}
	}
	else if(cMyFace == 11 || cMyFace == 7 || cMyFace == 17 || cMyFace == 27 || cMyFace == 37) // FM
	{
		if(IDSkill >= 5024 && IDSkill <= 5047)
		{
		if(IDSkill >= 5024 && IDSkill <= 5030)
			return 1;
		if(IDSkill >= 5032 && IDSkill <= 5038)
			return 1;
		if(IDSkill >= 5040 && IDSkill <= 5046)
			return 1;
		if(learn1 == 255 || learn2 == 255 || learn3 == 255)
		{
			SendClientMsg(ClientID,"Você já aprendeu uma oitava skill.");
			return 0;
		}
		if(IDSkill == 5031)
		{
			if(player->Gold >= 30000000)
			{
				if(cAP1 <= 198)
				{
					SendClientMsg(ClientID,"Você precisa de mais pontos da linhagem.");
					return 0;
				}
				if(learn1 == 127)
				{
					player->Gold -= 30000000;
					player->bStatus.Defense += 300;
					SendALL(ClientID);
					SendStats(ClientID);
					SendEquip(ClientID);
					SaveChar(1,ClientID);
					LogForAll(ClientID,"Aprendeu oitava skill.");
					return 1;
				}
				else
				{
					SendClientMsg(ClientID,"É necessário aprender as skill's anteriores.");
					return 0;
				}

			}
			else
			{SendClientMsg(ClientID,"É necessário 30 milhões.");
			return 0;}
		}
		if(IDSkill == 5039)
		{
			if(player->Gold >= 30000000)
			{
				if(cAP2 <= 198)
				{
					SendClientMsg(ClientID,"Você precisa de mais pontos da linhagem.");
					return 0;
				}
				if(learn2 == 127)
				{
					player->Gold -= 30000000;
					player->bStatus.Defense += 300;
					SendALL(ClientID);
					SendStats(ClientID);
					SendEquip(ClientID);
					SaveChar(1,ClientID);
					LogForAll(ClientID,"Aprendeu oitava skill.");
					return 1;
				}
				else
				{
					SendClientMsg(ClientID,"É necessário aprender as skill's anteriores.");
					return 0;
				}

			}
			else
			{SendClientMsg(ClientID,"É necessário 30 milhões");
			return 0;}
		}
		if(IDSkill == 5047)
		{
			if(player->Gold >= 30000000)
			{
				if(cAP3 <= 198)
				{
					SendClientMsg(ClientID,"Você precisa de mais pontos da linhagem.");
					return 0;
				}
				if(learn3 == 127)
				{
					player->Gold -= 30000000;
					player->bStatus.Defense += 300;
					SendALL(ClientID);
					SendStats(ClientID);
					SendEquip(ClientID);
					SaveChar(1,ClientID);
					LogForAll(ClientID,"Aprendeu oitava skill.");
					return 1;
				}
				else
				{
					SendClientMsg(ClientID,"É necessário aprender as skill's anteriores.");
					return 0;
				}

			}
			else
			{SendClientMsg(ClientID,"É necessário 30 milhões");
			return 0;}
		}
		else
		{
			SendClientMsg(ClientID,"Não é possivel aprender skill's de outras classes.");
			return 0;
		}
		}
		else
		{
			SendClientMsg(ClientID,"Não é possivel aprender skill's de outras classes.");
			return 0;
		}
	}
	else if(cMyFace == 31 || cMyFace == 9 || cMyFace == 19 || cMyFace == 29 || cMyFace == 39) // HT
	{
		if(IDSkill >= 5072 && IDSkill <= 5095)
		{
		if(IDSkill >= 5072 && IDSkill <= 5078)
			return 1;
		if(IDSkill >= 5080 && IDSkill <= 5086)
			return 1;
		if(IDSkill >= 5088 && IDSkill <= 5094)
			return 1;
		if(learn1 == 255 || learn2 == 255 || learn3 == 255)
		{
			SendClientMsg(ClientID,"Você já aprendeu uma oitava skill.");
			return 0;
		}
		if(IDSkill == 5079)
		{
			if(player->Gold >= 30000000)
			{
				if(cAP1 <= 198)
				{
					SendClientMsg(ClientID,"Você precisa de mais pontos da linhagem.");
					return 0;
				}
				if(learn1 == 127)
				{
					player->Gold -= 30000000;
					player->bStatus.Defense += 300;
					SendALL(ClientID);
					SendStats(ClientID);
					SendEquip(ClientID);
					SaveChar(1,ClientID);
					LogForAll(ClientID,"Aprendeu oitava skill.");
					return 1;
				}
				else
				{
					SendClientMsg(ClientID,"É necessário aprender as skill's anteriores.");
					return 0;
				}

			}
			else
			{SendClientMsg(ClientID,"É necessário 30 milhões");
			return 0;}
		}
		if(IDSkill == 5087)
		{
			if(player->Gold >= 30000000)
			{
				if(cAP2 <= 198)
				{
					SendClientMsg(ClientID,"Você precisa de mais pontos da linhagem.");
					return 0;
				}
				if(learn2 == 127)
				{
					player->Gold -= 30000000;
					player->bStatus.Defense += 300;
					SendALL(ClientID);
					SendStats(ClientID);
					SendEquip(ClientID);
					SaveChar(1,ClientID);
					LogForAll(ClientID,"Aprendeu oitava skill.");
					return 1;
				}
				else
				{
					SendClientMsg(ClientID,"É necessário aprender as skill's anteriores.");
					return 0;
				}

			}
			else
			{SendClientMsg(ClientID,"É necessário 50 milhões ou 200 pontos de linhagem.");
			return 0;}
		}
		if(IDSkill == 5095)
		{
			if(player->Gold >= 30000000)
			{
				if(cAP3 <= 198)
				{
					SendClientMsg(ClientID,"Você precisa de mais pontos da linhagem.");
					return 0;
				}
				if(learn3 == 127)
				{
					player->Gold -= 30000000;
					player->bStatus.Defense += 300;
					SendALL(ClientID);
					SendStats(ClientID);
					SendEquip(ClientID);
					SaveChar(1,ClientID);
					LogForAll(ClientID,"Aprendeu oitava skill.");
					return 1;
				}
				else
				{
					SendClientMsg(ClientID,"É necessário aprender as skill's anteriores.");
					return 0;
				}

			}
			else
			{SendClientMsg(ClientID,"É necessário 30 milhões");
			return 0;}
		}
		else
		{
			SendClientMsg(ClientID,"Não é possivel aprender skill's de outras classes.");
			return 0;
		}
		}
		else
		{
			SendClientMsg(ClientID,"Não é possivel aprender skill's de outras classes.");
			return 0;
		}
	}
	else if((cMyFace >= 21 && cMyFace <= 25) || cMyFace == 8 || cMyFace == 18 || cMyFace == 28 || cMyFace == 38 || cMyFace == 32) // BM
	{
		if(IDSkill >= 5048 && IDSkill <= 5071)
		{
			if(IDSkill >= 5048 && IDSkill <= 5054)
				return 1;
			if(IDSkill >= 5056 && IDSkill <= 5062)
				return 1;
			if(IDSkill >= 5064 && IDSkill <= 5070)
				return 1;
			if(learn1 == 255 || learn2 == 255 || learn3 == 255)
			{
				SendClientMsg(ClientID,"Você já aprendeu uma oitava skill.");
				return 0;
			}
			if(IDSkill == 5055)
			{
				if(player->Gold >= 30000000)
				{
					if(cAP1 <= 198)
					{
						SendClientMsg(ClientID,"Você precisa de mais pontos da linhagem.");
						return 0;
					}
					if(learn1 == 127)
					{
						player->Gold -= 30000000;
						player->bStatus.Defense += 300;
						SendALL(ClientID);
						SendStats(ClientID);
						SendEquip(ClientID);
						SaveChar(1,ClientID);
						LogForAll(ClientID,"Aprendeu oitava skill.");
						return 1;
					}
					else
					{
						SendClientMsg(ClientID,"É necessário aprender as skill's anteriores.");
						return 0;
					}
	
				}
				else
				{SendClientMsg(ClientID,"É necessário 30 milhões");
				return 0;}
			}
			if(IDSkill == 5063)
			{
				if(player->Gold >= 30000000)
				{
					if(cAP2 <= 198)
					{
						SendClientMsg(ClientID,"Você precisa de mais pontos da linhagem.");
						return 0;
					}
					if(learn2 == 127)
					{
						player->Gold -= 30000000;
					    player->bStatus.Defense += 300;
						SendALL(ClientID);
						SendStats(ClientID);
						SendEquip(ClientID);
						SaveChar(1,ClientID);
						LogForAll(ClientID,"Aprendeu oitava skill.");
						return 1;
					}
					else
					{
						SendClientMsg(ClientID,"É necessário aprender as skill's anteriores.");
						return 0;
					}
	
				}
				else
				{SendClientMsg(ClientID,"É necessário 30 milhões");
				return 0;}
			}
			if(IDSkill == 5071)
			{
				if(player->Gold >= 30000000)
				{
					if(cAP3 <= 198)
					{
						SendClientMsg(ClientID,"Você precisa de mais pontos da linhagem.");
						return 0;
					}
					if(learn3 == 127)
					{
						player->Gold -= 30000000;
						player->bStatus.Defense += 300;
						SendALL(ClientID);
						SendStats(ClientID);
						SendEquip(ClientID);
						SaveChar(1,ClientID);
						LogForAll(ClientID,"Aprendeu oitava skill.");
						return 1;
					}
					else
					{
						SendClientMsg(ClientID,"É necessário aprender as skill's anteriores.");
						return 0;
					}
	
				}
				else
				{SendClientMsg(ClientID,"É necessário 30 milhões");
				return 0;}
			}
			else
			{
				SendClientMsg(ClientID,"Não é possivel aprender skill's de outras classes.");
				return 0;
			}
		}
	}
	else 
		SendClientMsg(ClientID,"Não é possivel aprender skill's de outras classes.");
		return 0;
}

void soul(int ClientID)
{
	MOB *play = (MOB*)GetMobFromIndex(ClientID);
	if(play->Equip[0].EFV2 >= 3)
	{
		for(int i=0;i<16;i++)
		{
			if(mobaffectbuffer[ClientID].Affects[i].Master == 29)
			{
				if(mobaffectbuffer[ClientID].Affects[i].Time < 50)
					mobaffectbuffer[ClientID].Affects[i].Time = 51;
				break; 
			}
			if(mobaffectbuffer[ClientID].Affects[i].Index == 0)
			{
				mobaffectbuffer[ClientID].Affects[i].Index = 29;
				mobaffectbuffer[ClientID].Affects[i].Master = 3;// você tem que por o Master entre 0~15
				mobaffectbuffer[ClientID].Affects[i].Time = 51;
				mobaffectbuffer[ClientID].Affects[i].Value = 29;
				break;
			}
			else{
				SendScore(ClientID);
				return;
			}
		}

		SendScore(ClientID);
		return;
	}
	
	if(play->Equip[0].EFV2 == 1)
	{
	for(int i=0;i<16;i++)
	{
		if(mobaffectbuffer[ClientID].Affects[i].Master == 29)
		{
			if(mobaffectbuffer[ClientID].Affects[i].Time < 50)
				mobaffectbuffer[ClientID].Affects[i].Time = 51;
			break;
		}

		if(mobaffectbuffer[ClientID].Affects[i].Index == 0)
		{
			mobaffectbuffer[ClientID].Affects[i].Index = 29;
			mobaffectbuffer[ClientID].Affects[i].Master = 3;// Master tem que tar entre 0~15 para da efeito
			mobaffectbuffer[ClientID].Affects[i].Time = 51;
			mobaffectbuffer[ClientID].Affects[i].Value = 29;
			break;
		}
		else{
				SendScore(ClientID);
				return;
			}
		}
	}
	
}

void LivroRessu(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int learn = PByte(addr_bclient + 0x15c6c97);
	int HP = PInt(addr_bclient + 0x015c6a00);
	int curHP = PInt(addr_bclient + 0x015c6a04);
	srand((int)time(NULL));
	if(learn >= 8)
	{
		if(curHP == 0)
		{
			if(rand() % 100 <= 50)
			{
				SendClientMsg(ClientID,"Você foi ressucitado.");
				PInt(addr_bclient + 0x015c6a04) = HP;
				return;
			}
			DoTeleport(ClientID,1055,1717);
			PInt(addr_bclient + 0x015c6a04) = 1;
		}
	}
}

void OitavaHT1(char *Packet)
{
	short ClientID = *(short*)&Packet[6];
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	short skill = *(short*)&Packet[14];
	int addr_bclient = ClientID * 0x0410;
	int learn = PByte(addr_bclient + 0x15c6c94);
	int savelearn;
	savelearn = PByte(addr_bclient + 0x15c6c94);
	if(skill == 5079)
	{
		if(learn == 127)
		{
			if(player->Gold >= 10000000 && player->Equip[0].EFV2 == 1)
			{
				player->Gold -= 10000000;
				PByte(addr_bclient + 0x15c6c94) = 255;
				SendClientMsg(ClientID,"Oitava skill foi definida.");
			}
			else if(player->Gold >= 25000000 && player->Equip[0].EFV2 == 2)
			{
				player->Gold -= 25000000;
				PByte(addr_bclient + 0x15c6c94) = 255;
				SendClientMsg(ClientID,"Oitava skill foi definida.");
			}
			else if(player->Gold >= 50000000 && player->Equip[0].EFV2 >= 3)
			{
				player->Gold -= 50000000;
				PByte(addr_bclient + 0x15c6c94) = 255;
				SendClientMsg(ClientID,"Oitava skill foi definida.");
			}
			else
			{
				SendClientMsg(ClientID,"Gold insuficiente.");
				PByte(addr_bclient + 0x15c6c94) = savelearn;
			}
		}
		else
		{
			SendClientMsg(ClientID,"É necessário ter as skills anteriores.");
			PByte(addr_bclient + 0x15c6c94) = savelearn;
		}
	}
}
void Skill_Cancel(int clientid, BYTE *m_PacketBuffer)
{
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	for(int i = 0;i<16;i++)
	{
		if(player->Affects[i].Index == 19) // Se tiver com a skill imunidade não buffa
		{			
		ZeroMemory(m_PacketBuffer,*(short*)m_PacketBuffer);
		return;
		}
		else // Se não tiver com a skill imunidade buffa
		{
		player->Affects[i].Index = 32;
		player->Affects[i].Master = 32;
		player->Affects[i].Time = 2,1;
		player->Affects[i].Value = 32;
		return;
		}
	}
}
void eden(int ClientID)
{
	MOB *play = (MOB*)GetMobFromIndex(ClientID);
	if(play->ClassInfo != 2)
	{
		return;
	}
	for(int i=1;i<16;i++)
	{
		if(mobaffectbuffer[ClientID].Affects[i].Master == 16)
		{
			if(mobaffectbuffer[ClientID].Affects[i].Time < 50)
				mobaffectbuffer[ClientID].Affects[i].Time = 51;
				SendScore(ClientID);
				play->Equip[0].Index = 32;
				play->Equip[0].EFV1 = 9;
				SendItens(ClientID,0);
				SendStats(ClientID);
				SendScore(ClientID);
				SendEquip(ClientID);
				GetCurrentScore(ClientID);
			break;
		}
	}
	for(int i=1;i<16;i++)
	{
		if(mobaffectbuffer[ClientID].Affects[i].Index == 0)
		{
			mobaffectbuffer[ClientID].Affects[i].Index = 16;
			mobaffectbuffer[ClientID].Affects[i].Master = 16;
			mobaffectbuffer[ClientID].Affects[i].Time = 51;
			mobaffectbuffer[ClientID].Affects[i].Value = 16;
			SendScore(ClientID);
			play->Equip[0].Index = 32;
			play->Equip[0].EFV1 = 9;
			SendItens(ClientID,0);
			SendStats(ClientID);
			SendScore(ClientID);
			SendEquip(ClientID);
			GetCurrentScore(ClientID);
			break;
		}
	}
}
void VerificaEden(int ClientID)
{
       
        MOB *player = (MOB*)GetMobFromIndex(ClientID);
        int calculodano = (player->bStatus.tMaster *2) + (player->Equip[0].EFV2 *200) + 50;
        int calculodefesa = (player->bStatus.tMaster *2) + (player->Equip[0].EFV2 *150) + 50;
        int calculohp = (player->bStatus.tMaster *2) + (player->Equip[0].EFV2 *350) + 50;
       
 
                if(player->Affects[0].Index == 16 || player->Affects[1].Index == 16 || player->Affects[2].Index == 16 ||
                        player->Affects[3].Index == 16 || player->Affects[4].Index == 16)
                {
                return;
                }
 
                else
                {
                        char local[100];
                        FILE *arq;
                        sprintf(local,"DataBase\\Chars\\Eden\\%s.eden",player->Name);
                        if(file_exists(local)) // Se o arquivo existir e for carregado executa a ação
                        {
                                player->Equip[0].Index = player->Equip[0].EFV3;
                                player->Equip[0].EFV1 = 0;
                                player->bStatus.Attack -= calculodano;
                                player->bStatus.Defense -= calculodefesa;
                                player->bStatus.maxHP -= calculohp;
                                SendEquip(ClientID);
                                SendScore(ClientID);
                                SendStats(ClientID);
                                SendALL(ClientID);
                                GetCurrentScore(ClientID);
                                SendItens(ClientID,0);
                                remove(local);
                                return;
                        }
                }
}


void Renascimento(int ClientID, int alvo)
{
	MOB *thismob = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x0410;
	int addr_b = alvo * 0x0410;
	int HP = PInt(addr_bclient + 0x015c6a00);
	int curHP = PInt(addr_bclient + 0x015c6a04);
	int HP_b = PInt(addr_b + 0x015c6a00);
	int curHP_b = PInt(addr_b + 0x015c6a04);

	if(curHP_b == 0)
	{
		srand((int)time(NULL));
		int num = rand() % 4;
		if(num != 2)
		{
			PInt(addr_bclient + 0x015c6a06) = 0;
			PInt(addr_b + 0x015c6a04) = HP_b;
			return;
		}
	}
}

int SkillHack(int ClientID, int skillid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);

	int addr_bclient = ClientID * 0x0410;
	int learn = PByte(addr_bclient + 0x15c6c97);
	if(ClientID >= 1 && ClientID <= 750)
	{
		if(skillid <= 0 || skillid >= 151 && skillid <= 153)
		{
			return TRUE;
		}
		else if(skillid >= 0 && skillid <= 23)
		{
			if(player->ClassInfo == 0)
			{
				return TRUE;
			}
			return FALSE;
		}
		else if(skillid >= 24 && skillid <= 47)
		{
			if(player->ClassInfo == 1)
			{
				return TRUE;
			}
			return FALSE;
		}
		else if(skillid >= 48 && skillid <= 71)
		{
			if(player->ClassInfo == 2)
			{
				return TRUE;
			}
			return FALSE;
		}
		else if(skillid >= 72 && skillid <= 95)
		{
			if(player->ClassInfo == 3)
			{
				return TRUE;
			}
			return FALSE;
		}
		else if(skillid == 102)
		{
			if(learn >= 64)
			{
				return TRUE;
			}
			return FALSE;
		}
		else if(skillid == 99)
		{
			if(learn >= 8)
			{
				return TRUE;
			}
			return FALSE;
		}
		else if(skillid == 98)
		{
			if(learn >= 4)
			{
				return TRUE;
			}
			return FALSE;
		}
		else
		{
			return FALSE;
		}
	}
	return TRUE;
}