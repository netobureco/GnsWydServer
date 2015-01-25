
#include "Stdafx.h"


void GetAffect(int bOffset, st_affect *uSkill, char *bufPak, int ClientID)
{
    short *pServer = (short*)&bufPak[bOffset];
	int addr_base = 0x410 * ClientID;
	for(unsigned int x = 0; x < 16; x++)
	{
        int Time = uSkill[x].Time;
		if(Time > 255)
			Time = 255;

        pServer[x] = (((BYTE)uSkill[x].Index << 8) + Time);
	}
}

void FixSendScore_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer)
{
	p754_SendScore *new_SendScore = (p754_SendScore*)m_PacketBuffer;
	p613_SendScore *def_SendScore = (p613_SendScore*)packetBuffer;
	st_Mob*_mob = (st_Mob*)GetMobFromIndex(new_SendScore->Header.ClientID);
	short clientid; memcpy(&clientid, &new_SendScore->Header.ClientID, 2);

	memcpy(&new_SendScore->Affect[0], &def_SendScore->Affect[0], 8);
	memset(&new_SendScore->Affect[4], 0x0, 24);
	
	memcpy(&new_SendScore->GuildMemberType, &def_SendScore->GuildMemberType, 18);
	new_SendScore->CurrHP = _mob->Status.curHP;
	new_SendScore->CurrMP = _mob->Status.curMP;
	new_SendScore->Resist1 = _mob->Resist1;		
	new_SendScore->Resist2 = _mob->Resist2;
	new_SendScore->Resist3 = _mob->Resist3;
	new_SendScore->Resist4 = _mob->Resist4;
	new_SendScore->MagicIncrement = _mob->MagicIncrement;
	new_SendScore->MagicIncrement = GetMobAbility(_mob, EF_MAGIC) / 2;
	new_SendScore->Critical = ((GetMobAbility(_mob, 42) / 10) * 2.5F) + (GetMobAbility(_mob, 71) / 10 * 2.5F);
	
	 for(int i = 0; i < 16; i ++)
	 {
	  new_SendScore->Affect[i].Index = (BYTE)mobaffectbuffer[clientid].Affects[i].Index;
	  new_SendScore->Affect[i].Time = (BYTE)mobaffectbuffer[clientid].Affects[i].Time;
		
	}
	
}
