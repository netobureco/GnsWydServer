#include "stdafx.h"


/*
void UseSkill(WORD clientid, WORD skillid, BYTE *m_PacketBuffer)
{

	char msg[100];
	p613_SendAffect *p613 = (p613_SendAffect*)m_PacketBuffer;
	MOB *player = (MOB*)GetMobFromIndex(clientid);
	MOB *affected = (MOB*)GetMobFromIndex(p613->AffectedMobId);
    int calculodano = (player->bStatus.tMaster *2) + (player->Equip[0].EFV2 *200) + 50;
    int calculodefesa = (player->bStatus.tMaster *2) + (player->Equip[0].EFV2 *150) + 50;
    int calculohp = (player->bStatus.tMaster *2) + (player->Equip[0].EFV2 *350) + 50;
	switch(skillid)
	{
		case 47: // Cancelamento
			Skill_Cancel(p613->AffectedMobId,m_PacketBuffer);
			break;
		
		case 71:
			SendClientMsg(clientid, "Skill Está desativada no momento !");
			ZeroMemory(m_PacketBuffer,*(short*)m_PacketBuffer);
			break;

			
	}
	return;
}
*/