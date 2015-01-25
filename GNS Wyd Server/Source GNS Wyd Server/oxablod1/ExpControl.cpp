#include "Stdafx.h"

int BauExp(int clientid)
{
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	
	int ver = 1;

	for(int i = 0;i <= 16;i++)
	{
		if(mobaffectbuffer[clientid].Affects[i].Index == 39)
		{
			ver++;
			break;
		}
	}

	return ver;
}

void CheckQuarterByLevel(int ClientID, int earned) 
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int exp = 0, next_exp = 0;
	if(player->Equip[0].EFV2 <= 2) 
		exp = player->Exp, next_exp = exp_Mortal_Arch[player->bStatus.Level] - exp_Mortal_Arch[player->bStatus.Level-1];
	else 
		exp = player->Exp, next_exp = exp_Mortal_Arch[player->bStatus.Level] - exp_Mortal_Arch[player->bStatus.Level-1];
	next_exp /= 4;
	if(player->Equip[0].EFV2 <= 2)
	{
		if((player->Exp < exp_Mortal_Arch[player->bStatus.Level-1]+next_exp)) 
		{
			if(player->Exp + earned >= exp_Mortal_Arch[player->bStatus.Level-1]+next_exp)
			{
				SendClientMsg(ClientID, "Adquiriu 1/4 de bônus");
				goto Level;
			}
		}
		else if((player->Exp < exp_Mortal_Arch[player->bStatus.Level-1]+next_exp)) 
		{
			if(player->Exp + earned >= exp_Mortal_Arch[player->bStatus.Level - 1]+next_exp) 
			{
				SendClientMsg(ClientID, "Adquiriu 2/4 de bônus");
				goto Level;
			}
		} 
		else if((player->Exp < exp_Mortal_Arch[player->bStatus.Level-1]+next_exp)) 
		{
			if(player->Exp + earned >= exp_Mortal_Arch[player->bStatus.Level - 1]+next_exp) 
			{
				SendClientMsg(ClientID, "Adquiriu 3/4 de bônus");
				goto Level;
			}
		}
	}
	else 
	{
		if((player->Exp < exp_Cele_Sub[player->bStatus.Level-1]+next_exp)) 
		{
			if(player->Exp + earned >= exp_Cele_Sub[player->bStatus.Level-1]+next_exp)
			{
				SendClientMsg(ClientID, "Adquiriu 3/4 de bônus");
				goto Level;
			}
		} 
		else if((player->Exp < exp_Cele_Sub[player->bStatus.Level-1]+next_exp)) 
		{
			if(player->Exp + earned >= exp_Cele_Sub[player->bStatus.Level - 1]+next_exp*1) 
			{
				SendClientMsg(ClientID, "Adquiriu 2/4 de bônus");
				goto Level;
			}
		} 
		else if((player->Exp < exp_Cele_Sub[player->bStatus.Level-1]+next_exp))
		{
			if(player->Exp + earned >= exp_Cele_Sub[player->bStatus.Level - 1]+next_exp) 
			{
				SendClientMsg(ClientID, "Adquiriu 1/4 de bônus");
				goto Level;
			}
		}
	}
Level:
	player->Status.curHP = player->Status.maxHP;
	player->Status.curMP = player->Status.maxMP;
	SendScore(ClientID); SendStats(ClientID); GetCurrentScore(ClientID);
}

void Controle_Exp(int clientid,long exp)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	int masterIndex = clientid * 0x410;
	int cX = PInt(masterIndex + 0x015C6CEC);
	int cY = PInt(masterIndex + 0x015C6CF0);

	int Bau = 1,Tot;

	for(int i=0;i<16;i++)
	{
		if(mobaffectbuffer[clientid].Affects[i].Master == 39)
		{
			Bau = 2;
			break;
		}
	}

		static int FadasExp16[] = {3900, 3903, 3906, 3911, 3912, 3913, 3914};
		for(short i = 0; i < 6; i++)
		{
			if(thisclient->Equip[13].Index == FadasExp16[i])		
				exp *= 1.16;
		}

		static int FadasExp32[] = {3902, 3905, 3908};
		for(short i = 0; i < 3; i++)
		{
			if(thisclient->Equip[13].Index == FadasExp32[i])		
				exp *= 1.32;
		}

		if(thisclient->Equip[13].Index == 3915)		
			exp *= 1.18;

	if(thisclient->Equip[0].EFV2 == 1)
	{
		if(thisclient->bStatus.Level > 399)
		{
			thisclient->Exp += 0;
		}
		Tot = (exp / 1) * Bau;
		thisclient->Exp += Tot;
		if(cX >= 1100 && cY >= 100 && cX <= 1300 && cY <= 255)
		{
			ExpAreaPesa(clientid,Tot);
	
		}
		return;
	}
	else if(thisclient->Equip[0].EFV2 == 2)
	{
		if(thisclient->bStatus.Level > 399)
		{
			thisclient->Exp += 0;
		}
		Tot = (exp / 2) * Bau;
		thisclient->Exp += Tot;
		if(cX >= 1100 && cY >= 100 && cX <= 1300 && cY <= 255)
		{
			ExpAreaPesa(clientid,Tot);
	
		}
		return;
	}
	else if(thisclient->Equip[0].EFV2 == 3)
	{
		if(thisclient->bStatus.Level > 199)
		{
			thisclient->Exp += 0;
		}
		else
		{
			Tot = (exp / 3) * Bau;
			thisclient->Exp += Tot;
			if(cX >= 1100 && cY >= 100 && cX <= 1300 && cY <= 255)
			{
				ExpAreaPesa(clientid,Tot);
			}
		}
		return;
	}
	else if(thisclient->Equip[0].EFV2 == 4)
	{
		if(thisclient->bStatus.Level > 199)
		{
			thisclient->Exp += 0;
		}
		else
		{
			Tot = (exp / 4) * Bau;
			thisclient->Exp += Tot;
			if(cX >= 1100 && cY >= 100 && cX <= 1300 && cY <= 255)
			{
				ExpAreaPesa(clientid,Tot);
			}
		}
		return;
	}
	else
	{
		if(thisclient->bStatus.Level >= 399)
		{
			thisclient->Exp = 1;
		}
	}
	
}


void ExpAreaPesa(int ClientID,int exp)
{
	int cPartys = PInt(ClientID*0x0410 + 0x015C6CD0);

	int cXPar = PInt(cPartys * 0x410 + 0x015C6CEC);
	int cYPar = PInt(cPartys * 0x410 + 0x015C6CF0);

	if(cPartys == 0)
	{
		for(int i = 0; i < 12; i++)
		{
			int masterIndex = ClientID * 0x410;
			int memberId = *(WORD*)(masterIndex + 0x15C6D86 + (i * 2));
			int cXthi = PInt(memberId * 0x410 + 0x015C6CEC);
			int cYthi = PInt(memberId * 0x410 + 0x015C6CF0);
			if(memberId != ClientID)
			{
				if(memberId >= 1 && memberId <= 800)
				{
					MOB *thisclient = (MOB*)GetMobFromIndex(memberId);
					if(*(DWORD*)(memberId * 0xC4C + 0x7B318E0) == 0x16)
					{
						if(cXthi >= 1100 && cYthi >= 100 && cXthi <= 1300 && cYthi <= 255)//player->Exp += exp;
							thisclient->Exp += exp;
					}
				}
			}
        }
		return; 
	}
	else
	{
		MOB *lider = (MOB*)GetMobFromIndex(cPartys);
		if(cXPar >= 1100 && cYPar >= 100 && cXPar <= 1300 && cYPar <= 255)
			lider->Exp += exp;
		for(int i = 0; i < 12; i++)
		{
			int masterIndex = cPartys * 0x410;
			int memberId = *(WORD*)(masterIndex + 0x15C6D86 + (i * 2));
			int cXthi2 = PInt(memberId * 0x410 + 0x015C6CEC);
			int cYthi2 = PInt(memberId * 0x410 + 0x015C6CF0);
			if(memberId != ClientID)
			{
				if(memberId >= 1 && memberId <= 800)
				{
					MOB *thisclient = (MOB*)GetMobFromIndex(memberId);
					if(*(DWORD*)(memberId * 0xC4C + 0x7B318E0) == 0x16)
					{
						if(cXthi2 >= 1100 && cYthi2 >= 100 && cXthi2 <= 1300 && cYthi2 <= 255)
							thisclient->Exp += exp;
					}
				}
			}
		}
	}
				
}