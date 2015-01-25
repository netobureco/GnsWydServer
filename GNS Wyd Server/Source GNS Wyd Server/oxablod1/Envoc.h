#ifndef __LIMITEDEBUFFS_H__
#define __LIMITEDEBUFFS_H__

#include "Stdafx.h"

#define MAX_AFFECT 16 // limite de buffs, para usarem mais de 16 devem modificar o cliente tbm

//struct dos novos buffs
struct st_NewBuffs
{
	struct
	{
		WORD Index;
		WORD Master;
		WORD Value;
		WORD Time;
	} Affects[MAX_AFFECT];
};

extern st_NewBuffs NewSkillBuffer[30000];
void InitSkills();

void NKD_Buff1();
void NKD_Buff2();
void NKD_Buff3();
void NKD_Buff4();

#endif // */