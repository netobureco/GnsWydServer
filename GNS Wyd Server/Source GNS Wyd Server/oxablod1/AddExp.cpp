#include "Stdafx.h"

void AddExp(int clientid)
{
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	int addr_bclient = clientid * 0x0410;
	int caos = PByte(clientid * 0x410 + 0x15c6c8e);
	FILE *fs = NULL;
    char name[100];
	char Classe;
	char Level;
	Classe = player->Equip[0].EFV2;
	Level = player->bStatus.Level;
	PremioLv(clientid);
	
	if(player->Equip[0].EFV2 >= 3)
	{
		if(player->bStatus.Level >= 5)
		{
			if(player->Exp < exp_Cele_Sub[player->bStatus.Level - 2])
			{
				player->Exp = exp_Cele_Sub[player->bStatus.Level - 1];
			}
		
		}
	}
	
	
	if(player->Equip[0].EFV2 == 1)
	{	
		if(player->bStatus.Level < 255)
		{
			if(player->Exp >= exp_Mortal_Arch[player->bStatus.Level])
			{
				player->StatusPoint += 5;
				player->MasterPoint += 3;
				player->SkillPoint += 3;
				player->bStatus.Level += 1;
				player->bStatus.Attack += 1;
				player->bStatus.Defense  += 2;
				if(caos <= 148)
				{
					PByte(clientid * 0x410 + 0x15c6c8e) += 3;
					RespawCreatMob(clientid);
					SendCreateMob(clientid,clientid,1);
				}
				PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
				player->bStatus.curHP = player->bStatus.maxMP;
				player->Status.curHP = player->bStatus.maxHP; 
				player->Status.curMP = player->bStatus.maxMP;
				GetCurrentScore(clientid);
				SendScore(clientid);
				SendStats(clientid);
				SendSetHpMp(clientid);
				SendClientMsg(clientid, "+ + + LEVEL UP + + +");
				SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
				return;
			}
		}
		else if(player->bStatus.Level < 300)
		{
			if(player->Exp >= exp_Mortal_Arch[player->bStatus.Level])
			{
				player->StatusPoint += 10;
				player->MasterPoint += 3;
				player->SkillPoint += 3;
				player->bStatus.Level += 1;
				player->bStatus.Attack += 1;
				player->bStatus.Defense  += 2;
				if(caos <= 148)
				{
					PByte(clientid * 0x410 + 0x15c6c8e) += 3;
					RespawCreatMob(clientid);
					SendCreateMob(clientid,clientid,1);
				}
				PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
				player->bStatus.curHP = player->bStatus.maxMP;
				player->Status.curHP = player->bStatus.maxHP; 
				player->Status.curMP = player->bStatus.maxMP;
				GetCurrentScore(clientid);
				SendScore(clientid);
				SendStats(clientid);
				SendSetHpMp(clientid);
				SendClientMsg(clientid, "+ + + LEVEL UP + + +");
				SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
				return;
			}
		}
		else if(player->bStatus.Level < 394)
		{
			if(player->Exp >= exp_Mortal_Arch[player->bStatus.Level])
			{
				player->StatusPoint += 15;
				player->MasterPoint += 3;
				player->SkillPoint += 3;
				player->bStatus.Level += 1;
				player->bStatus.Attack += 1;
				player->bStatus.Defense  += 2;
				if(caos <= 148)
				{
					PByte(clientid * 0x410 + 0x15c6c8e) += 3;
					RespawCreatMob(clientid);
					SendCreateMob(clientid,clientid,1);
				}
				PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
				player->bStatus.curHP = player->bStatus.maxMP;
				player->Status.curHP = player->bStatus.maxHP; 
				player->Status.curMP = player->bStatus.maxMP;
				GetCurrentScore(clientid);
				SendScore(clientid);
				SendStats(clientid);
				SendSetHpMp(clientid);
				SendClientMsg(clientid, "+ + + LEVEL UP + + +");
				SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
				return;
			}
		}
		else if(player->bStatus.Level < 399)
		{
			if(player->Exp >= exp_Mortal_Arch[player->bStatus.Level])
			{
				player->StatusPoint += 15;
				player->MasterPoint += 3;
				player->SkillPoint += 3;
				player->bStatus.Level += 1;
				player->bStatus.Attack += 1;
				player->bStatus.Defense  += 2;
				if(caos <= 148)
				{
					PByte(clientid * 0x410 + 0x15c6c8e) += 3;
					RespawCreatMob(clientid);
					SendCreateMob(clientid,clientid,1);
				}
				PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
				player->bStatus.curHP = player->bStatus.maxMP;
				player->Status.curHP = player->bStatus.maxHP; 
				player->Status.curMP = player->bStatus.maxMP;
				GetCurrentScore(clientid);
				SendScore(clientid);
				SendStats(clientid);
				SendSetHpMp(clientid);
				SendClientMsg(clientid, "+ + + LEVEL UP + + +");
				SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
				return;
			}
		}
		return;
	}
	else if(player->Equip[0].EFV2 == 2)
	{
		if(player->bStatus.Level == 350)
		{
			if(player->Exp >= exp_Mortal_Arch[player->bStatus.Level+4])
			{
				player->StatusPoint += 10;
				player->MasterPoint += 3;
				player->SkillPoint += 3;
				player->bStatus.Level += 1;
				player->bStatus.Attack += 2;
				player->bStatus.Defense += 3;
				PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
				player->bStatus.curHP = player->bStatus.maxMP;
				player->Status.curHP = player->bStatus.maxHP; 
				player->Status.curMP = player->bStatus.maxMP;
				GetCurrentScore(clientid);
				SendScore(clientid);
				SendStats(clientid);
				SendSetHpMp(clientid);
				SendClientMsg(clientid, "+ + + LEVEL UP + + +");
				SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
   				return;
			}
		}
		else if(player->bStatus.Level > 351 && player->bStatus.Level < 353)
		{
			player->StatusPoint += 13;
			player->MasterPoint += 3;
			player->SkillPoint += 3;
   			player->bStatus.Level += 1;
			player->bStatus.Attack += 1;
			player->bStatus.Defense  += 2;
			if(caos <= 148)
			{
				PByte(clientid * 0x410 + 0x15c6c8e) += 3;
				RespawCreatMob(clientid);
				SendCreateMob(clientid,clientid,1);
			}
			PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
			player->bStatus.curHP = player->bStatus.maxMP;
			player->Status.curHP = player->bStatus.maxHP; 
			player->Status.curMP = player->bStatus.maxMP;
			GetCurrentScore(clientid);
			SendScore(clientid);
			SendStats(clientid);
			SendSetHpMp(clientid);
			SendClientMsg(clientid, "+ + + LEVEL UP + + +");
			SendEffect(3, 0xE, clientid);
			    /*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
			return;
  		}
		else if(player->bStatus.Level < 370)
		{
			if(player->Exp >= exp_Mortal_Arch[player->bStatus.Level])
			{
				//if(player->QuestInfo == 1)
				{
					player->StatusPoint += 12;
					player->MasterPoint += 4;
					player->SkillPoint += 3;
					player->bStatus.Level += 1;
					player->bStatus.Attack += 1;
					player->bStatus.Defense  += 2;
					if(caos <= 148)
					{
						PByte(clientid * 0x410 + 0x15c6c8e) += 3;
						RespawCreatMob(clientid);
						SendCreateMob(clientid,clientid,1);
					}
					PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
					player->bStatus.curHP = player->bStatus.maxMP;
					player->Status.curHP = player->bStatus.maxHP; 
					player->Status.curMP = player->bStatus.maxMP;
					GetCurrentScore(clientid);
					SendScore(clientid);
					SendStats(clientid);
					SendSetHpMp(clientid);
					SendClientMsg(clientid, "+ + + LEVEL UP + + +");
					SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
					return;
				}
			}
		}
		else if(player->bStatus.Level < 399)
		{
			if(player->Exp >= exp_Mortal_Arch[player->bStatus.Level])
			{
				//if(player->QuestInfo == 2)
				{
					player->StatusPoint += 12;
					player->MasterPoint += 4;
					player->SkillPoint += 3;
					player->bStatus.Level += 1;
					player->bStatus.Attack += 1;
					player->bStatus.Defense  += 2;
					if(caos <= 148)
					{
						PByte(clientid * 0x410 + 0x15c6c8e) += 3;
						RespawCreatMob(clientid);
						SendCreateMob(clientid,clientid,1);
					}
					PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
					player->bStatus.curHP = player->bStatus.maxMP;
					player->Status.curHP = player->bStatus.maxHP; 
					player->Status.curMP = player->bStatus.maxMP;
					GetCurrentScore(clientid);
					SendScore(clientid);
					SendStats(clientid);
					SendSetHpMp(clientid);
					SendClientMsg(clientid, "+ + + LEVEL UP + + +");
					SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
					return;
				}
			}
		}
		return;
	}
	else if(player->Equip[0].EFV2 == 3)
	{
		if(player->bStatus.Level < 40)
		{
			if(player->Exp >= exp_Cele_Sub[player->bStatus.Level])
			{
				printf("\n %s evoluiu para level %d \n.",player->Name,player->bStatus.Level +2);
				player->StatusPoint += 5;
				player->MasterPoint += 4;
				player->SkillPoint += 3;
				player->bStatus.Attack  += 1;
				player->bStatus.Defense  += 3;	
				player->bStatus.Level += 1;
				if(caos <= 148)
				{
					PByte(clientid * 0x410 + 0x15c6c8e) += 3;
					RespawCreatMob(clientid);
					SendCreateMob(clientid,clientid,1);
				}
				PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
				player->bStatus.curHP = player->bStatus.maxMP;
				player->Status.curHP = player->bStatus.maxHP; 
				player->Status.curMP = player->bStatus.maxMP;
				GetCurrentScore(clientid);
				SendScore(clientid);
				SendStats(clientid);
				SendSetHpMp(clientid);
				SendClientMsg(clientid, "+ + + LEVEL UP + + +");
				SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
				return;
			}
		}
		else if(player->bStatus.Level < 90)
		{
			if(player->Exp >= exp_Cele_Sub[player->bStatus.Level])
			{
				//if(player->QuestInfo == 1)
				//{
					printf("\n %s evoluiu para level %d \n.",player->Name,player->bStatus.Level +2);
					player->StatusPoint += 10;
					player->MasterPoint += 4;
					player->SkillPoint += 3;
					player->bStatus.Level += 1;
					player->bStatus.Attack  += 1;
					player->bStatus.Defense  += 3;
					if(caos <= 148)
					{
						PByte(clientid * 0x410 + 0x15c6c8e) += 3;
						RespawCreatMob(clientid);
						SendCreateMob(clientid,clientid,1);
					}
					PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
					player->bStatus.curHP = player->bStatus.maxMP;
					player->Status.curHP = player->bStatus.maxHP; 
					player->Status.curMP = player->bStatus.maxMP;
					GetCurrentScore(clientid);
					SendScore(clientid);
					SendStats(clientid);
					SendSetHpMp(clientid);
					SendClientMsg(clientid, "+ + + LEVEL UP + + +");
					SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
					return;
				//}
			}
		}
		else if(player->bStatus.Level < 399)
		{
			if(player->Exp >= exp_Cele_Sub[player->bStatus.Level])
			{
				//if(player->QuestInfo == 2)
				//{
					printf("\n %s evoluiu para level %d \n.",player->Name,player->bStatus.Level +2);
					player->StatusPoint += 15;
					player->MasterPoint += 4;
					player->SkillPoint += 3;
					player->bStatus.Level += 1;
					player->bStatus.Attack  += 1;
					player->bStatus.Defense  += 4;
					if(caos <= 148)
					{
						PByte(clientid * 0x410 + 0x15c6c8e) += 3;
						RespawCreatMob(clientid);
						SendCreateMob(clientid,clientid,1);
					}
					PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
					player->bStatus.curHP = player->bStatus.maxMP;
					player->Status.curHP = player->bStatus.maxHP; 
					player->Status.curMP = player->bStatus.maxMP;
					GetCurrentScore(clientid);
					SendScore(clientid);
					SendStats(clientid);
					SendSetHpMp(clientid);
					SendClientMsg(clientid, "+ + + LEVEL UP + + +");
					SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
					return;
				//}
			}
		}
	}
	else if(player->Equip[0].EFV2 == 4)
	{
		if(player->bStatus.Level < 40)
		{
			if(player->Exp >= exp_Cele_Sub[player->bStatus.Level])
			{
				printf("\n %s evoluiu para level %d \n.",player->Name,player->bStatus.Level +2);
				player->StatusPoint += 5;
				player->MasterPoint += 4;
				player->SkillPoint += 3;
				player->bStatus.Level += 1;
				player->bStatus.Attack  += 1;
				player->bStatus.Defense  += 3;
				if(caos <= 148)
				{
					PByte(clientid * 0x410 + 0x15c6c8e) += 3;
					RespawCreatMob(clientid);
					SendCreateMob(clientid,clientid,1);
				}
				PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
				player->bStatus.curHP = player->bStatus.maxMP;
				player->Status.curHP = player->bStatus.maxHP; 
				player->Status.curMP = player->bStatus.maxMP;
				GetCurrentScore(clientid);
				SendScore(clientid);
				SendStats(clientid);
				SendSetHpMp(clientid);
				SendClientMsg(clientid, "+ + + LEVEL UP + + +");
				SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
				return;
			}
		}
		else if(player->bStatus.Level < 90)
		{
			if(player->Exp >= exp_Cele_Sub[player->bStatus.Level])
			{
				//if(player->QuestInfo == 1)
				//{
					printf("\n %s evoluiu para level %d \n.",player->Name,player->bStatus.Level +2);
					player->StatusPoint += 10;
					player->MasterPoint += 4;
					player->SkillPoint += 3;
					player->bStatus.Level += 1;
					player->bStatus.Attack  += 1;
					player->bStatus.Defense  += 3;
					if(caos <= 148)
					{
						PByte(clientid * 0x410 + 0x15c6c8e) += 3;
						RespawCreatMob(clientid);
						SendCreateMob(clientid,clientid,1);
					}
					PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
					player->bStatus.curHP = player->bStatus.maxMP;
					player->Status.curHP = player->bStatus.maxHP; 
					player->Status.curMP = player->bStatus.maxMP;
					GetCurrentScore(clientid);
					SendScore(clientid);
					SendStats(clientid);
					SendSetHpMp(clientid);
					SendClientMsg(clientid, "+ + + LEVEL UP + + +");
					SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
					return;
				//}
			}
		}
		else if(player->bStatus.Level < 399)
		{
			if(player->Exp >= exp_Cele_Sub[player->bStatus.Level])
			{
				//if(player->QuestInfo == 2)
				//{
					printf("\n %s evoluiu para level %d \n.",player->Name,player->bStatus.Level +2);
					player->StatusPoint += 15;
					player->MasterPoint += 4;
					player->SkillPoint += 3;
					player->bStatus.Level += 1;
					player->bStatus.Attack  += 1;
					player->bStatus.Defense  += 4;
					if(caos <= 148)
					{
						PByte(clientid * 0x410 + 0x15c6c8e) += 3;
						RespawCreatMob(clientid);
						SendCreateMob(clientid,clientid,1);
					}
					PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
					player->bStatus.curHP = player->bStatus.maxMP;
					player->Status.curHP = player->bStatus.maxHP; 
					player->Status.curMP = player->bStatus.maxMP;
					GetCurrentScore(clientid);
					SendScore(clientid);
					SendStats(clientid);
					SendSetHpMp(clientid);
					SendClientMsg(clientid, "+ + + LEVEL UP + + +");
					SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
					//
					return;
				//}
			}
		}
	}
	else if(player->Equip[0].EFV2 == 5)
	{
		if(player->bStatus.Level < 40)
		{
			if(player->Exp >= exp_Cele_Sub[player->bStatus.Level])
			{
				printf("\n %s evoluiu para level %d \n.",player->Name,player->bStatus.Level +2);
				player->StatusPoint += 5;
				player->MasterPoint += 4;
				player->SkillPoint += 3;
				player->bStatus.Level += 1;
				player->bStatus.Attack  += 1;
				player->bStatus.Defense  += 3;
				if(caos <= 148)
				{
					PByte(clientid * 0x410 + 0x15c6c8e) += 3;
					RespawCreatMob(clientid);
					SendCreateMob(clientid,clientid,1);
				}
				PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
				player->bStatus.curHP = player->bStatus.maxMP;
				player->Status.curHP = player->bStatus.maxHP; 
				player->Status.curMP = player->bStatus.maxMP;
				GetCurrentScore(clientid);
				SendScore(clientid);
				SendStats(clientid);
				SendSetHpMp(clientid);
				SendClientMsg(clientid, "+ + + LEVEL UP + + +");
				SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
				//
				return;
			}
		}
		else if(player->bStatus.Level < 90)
		{
			if(player->Exp >= exp_Cele_Sub[player->bStatus.Level])
			{
				//if(player->QuestInfo == 1)
				//{
					printf("\n %s evoluiu para level %d \n.",player->Name,player->bStatus.Level +2);
					player->StatusPoint += 10;
					player->MasterPoint += 4;
					player->SkillPoint += 3;
					player->bStatus.Level += 1;
					player->bStatus.Attack  += 1;
					player->bStatus.Defense  += 3;
					if(caos <= 148)
					{
						PByte(clientid * 0x410 + 0x15c6c8e) += 3;
						RespawCreatMob(clientid);
						SendCreateMob(clientid,clientid,1);
					}
					PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
					player->bStatus.curHP = player->bStatus.maxMP;
					player->Status.curHP = player->bStatus.maxHP; 
					player->Status.curMP = player->bStatus.maxMP;
					GetCurrentScore(clientid);
					SendScore(clientid);
					SendStats(clientid);
					SendSetHpMp(clientid);
					SendClientMsg(clientid, "+ + + LEVEL UP + + +");
					SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
					//
					return;
				//}
			}
		}
		else if(player->bStatus.Level < 399)
		{
			if(player->Exp >= exp_Cele_Sub[player->bStatus.Level])
			{
				//if(player->QuestInfo == 2)
				//{
					printf("\n %s evoluiu para level %d \n.",player->Name,player->bStatus.Level +2);
					player->StatusPoint += 15;
					player->MasterPoint += 4;
					player->SkillPoint += 3;
					player->bStatus.Level += 1;
					player->bStatus.Attack  += 1;
					player->bStatus.Defense  += 4;
					if(caos <= 148)
					{
						PByte(clientid * 0x410 + 0x15c6c8e) += 3;
						RespawCreatMob(clientid);
						SendCreateMob(clientid,clientid,1);
					}
					PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
					player->bStatus.curHP = player->bStatus.maxMP;
					player->Status.curHP = player->bStatus.maxHP; 
					player->Status.curMP = player->bStatus.maxMP;
					GetCurrentScore(clientid);
					SendScore(clientid);
					SendStats(clientid);
					SendSetHpMp(clientid);
					SendClientMsg(clientid, "+ + + LEVEL UP + + +");
					SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
					//
					return;
				//}

			}

		}


	}
	else if(player->Equip[0].EFV2 == 6)
	{
		if(player->bStatus.Level < 40)
		{
			if(player->Exp >= exp_Cele_Sub[player->bStatus.Level])
			{
				printf("\n %s evoluiu para level %d \n.",player->Name,player->bStatus.Level +2);
				player->StatusPoint += 7;
				player->MasterPoint += 4;
				player->SkillPoint += 3;
				player->bStatus.Level += 1;
				player->bStatus.Attack  += 1;
				player->bStatus.Defense  += 3;
				if(caos <= 148)
				{
					PByte(clientid * 0x410 + 0x15c6c8e) += 3;
					RespawCreatMob(clientid);
					SendCreateMob(clientid,clientid,1);
				}
				PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
				player->bStatus.curHP = player->bStatus.maxMP;
				player->Status.curHP = player->bStatus.maxHP; 
				player->Status.curMP = player->bStatus.maxMP;
				GetCurrentScore(clientid);
				SendScore(clientid);
				SendStats(clientid);
				SendSetHpMp(clientid);
				SendClientMsg(clientid, "+ + + LEVEL UP + + +");
				SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
				//
				return;
			}
		}
		else if(player->bStatus.Level < 90)
		{
			if(player->Exp >= exp_Cele_Sub[player->bStatus.Level])
			{
				//if(player->QuestInfo == 1)
				//{
					printf("\n %s evoluiu para level %d \n.",player->Name,player->bStatus.Level +2);
					player->StatusPoint += 10;
					player->MasterPoint += 4;
					player->SkillPoint += 3;
					player->bStatus.Level += 1;
					player->bStatus.Attack  += 1;
					player->bStatus.Defense  += 4;
					if(caos <= 148)
					{
						PByte(clientid * 0x410 + 0x15c6c8e) += 3;
						RespawCreatMob(clientid);
						SendCreateMob(clientid,clientid,1);
					}
					PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
					player->bStatus.curHP = player->bStatus.maxMP;
					player->Status.curHP = player->bStatus.maxHP; 
					player->Status.curMP = player->bStatus.maxMP;
					GetCurrentScore(clientid);
					SendScore(clientid);
					SendStats(clientid);
					SendSetHpMp(clientid);
					SendClientMsg(clientid, "+ + + LEVEL UP + + +");
					SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
					return;
				//}
			}
		}
		else if(player->bStatus.Level < 399)
		{
			if(player->Exp >= exp_Cele_Sub[player->bStatus.Level])
			{
				//if(player->QuestInfo == 2)
				//{
					printf("\n %s evoluiu para level %d \n.",player->Name,player->bStatus.Level +2);
					player->StatusPoint += 15;
					player->MasterPoint += 4;
					player->SkillPoint += 3;
					player->bStatus.Level += 1;
					player->bStatus.Attack  += 1;
					player->bStatus.Defense  += 6;
					if(caos <= 148)
					{
						PByte(clientid * 0x410 + 0x15c6c8e) += 3;
						RespawCreatMob(clientid);
						SendCreateMob(clientid,clientid,1);
					}
					PInt(addr_bclient + 0x015C6A04) = PInt(addr_bclient + 0x015C6A00);
					player->bStatus.curHP = player->bStatus.maxMP;
					player->Status.curHP = player->bStatus.maxHP; 
					player->Status.curMP = player->bStatus.maxMP;
					GetCurrentScore(clientid);
					SendScore(clientid);
					SendStats(clientid);
					SendSetHpMp(clientid);
					SendClientMsg(clientid, "+ + + LEVEL UP + + +");
					SendEffect(3, 0xE, clientid);
				/*Ranking(clientid);
				DeletarPlayer1(clientid);
				DeletarPlayer2(clientid);
				DeletarPlayer3(clientid);*/
					return;
				//}

			}

		}

	}
	


	
}


