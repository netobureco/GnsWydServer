#include "Stdafx.h"




/*void Guild_Recrutar_Membro(char *Packet)
 {
	 int MyIndex = *(short*)&Packet[6];
	 int MemberIndex = *(short*)&Packet[12];

	 MOB *player = (MOB*)GetMobFromIndex(MyIndex);
	 MOB *member = (MOB*)GetMobFromIndex(MemberIndex);
	 st_Guild Guild[2000];
	 char msg[255];

	 if(member->Equip[12].Index != 0)
	 {
		 SendClientMsg(MyIndex,"Jogador Já Participa de Uma Guild");
		 return;
	 }
	 if(player->Equip[12].Index != 509 || (player->Equip[12].Index < 526 && player->Equip[12].Index > 528))
	 {
		 SendClientMsg(MyIndex,"Você Não Tem Permição");
		 return;
	 }
	 if(player->Gold < 4000000)
	 {
		 SendClientMsg(MyIndex,"Necessário 4 Milhões de Gold");
		 return;
	 }
	 member->Equip[12].Index = 508;
	 member->Equip[12].EF1 = 56;
	 member->Equip[12].EFV1 = 0;
	 member->Equip[12].EF2 = 57;
	 member->Equip[12].EFV2 = player->Equip[12].EFV2;
	 member->Equip[12].EF3 = 85;
	 member->Equip[12].EFV3 = 0;
	 member->GuildIndex = player->Equip[12].EFV2;

	 player->Gold -= 4000000;

	 SendALL(MyIndex);
	 SendALL(MemberIndex);
	 SendItens(MemberIndex,12);
	 sprintf(msg, "Recrutando pela guild [%s]",Guild[player->Equip[12].EFV2].Name);
	SendClientMsg(MemberIndex,msg);
 }*/