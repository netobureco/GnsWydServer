#include "Stdafx.h"

BYTE *PacketControlASM(PacketHeader *packetHeader, BYTE PACKET_SIDE)
{
	BYTE *m_PacketBuffer;
	do
	{
		m_PacketBuffer = (BYTE*)realloc(NULL, packetHeader->Size);
	} while(m_PacketBuffer == NULL);

	if(m_PacketBuffer == NULL)
	{
		//MessageBox(NULL, "PackeControl: frist memcpy", "Error : realloc", MB_OK);
		m_PacketBuffer = (BYTE*)packetHeader;
	}

	__try
	{
		memcpy(m_PacketBuffer, (BYTE*)packetHeader, packetHeader->Size);
	}
	__except(1)
	{
		//MessageBox(NULL, "PackeControl: frist memcpy", "Error : __except__", MB_OK);
	}
	
	MOB *thisclient = (MOB*)GetMobFromIndex(packetHeader->ClientID);
	MOB *npcii = (MOB*)GetMobFromIndex(*(short*)&m_PacketBuffer[12]);
	Packt_Atack *a = (Packt_Atack*)m_PacketBuffer;
	switch(packetHeader->PacketId)
	{
	case 0x114:
		memset(&m_PacketBuffer[788], 0x0, 1245 - 788);
		break;
		case 27:
		*(DWORD*)&m_PacketBuffer[12] = 0x0;
		break;

		case 29: 
		*(DWORD*)&m_PacketBuffer[12] = 0x0;
		break;
	case 0x165:
		MobEventDead2(m_PacketBuffer);  
		break;
	case 0x1C6: // Quiz
		
		break;
		
	case 0x336:
		if(packetHeader->ClientID < 1000)
			FixSendScore_SERVER((BYTE*)m_PacketBuffer, (BYTE*)packetHeader);
		if(packetHeader->ClientID < 1000)
			SendAffects(packetHeader->ClientID);
		//if((short)&m_PacketBuffer[6] > 127)ZeroMemory(&m_PacketBuffer[0], 16);
		break;

	case 0x337:
		FixSendEtc_SERVER((BYTE*)m_PacketBuffer, (BYTE*)packetHeader);
		//SendAffects(packetHeader->ClientID);
		break;

	case 0x338:
		FixSendExp_SERVER((BYTE*)m_PacketBuffer, (BYTE*)packetHeader);
		break;
   

	case 0x363:
		FixGetCreateMobTrade_SERVER((BYTE*)m_PacketBuffer, (BYTE*)packetHeader);
		break;

	case 0x364:
		FixGetCreateMob_SERVER((BYTE*)m_PacketBuffer, (BYTE*)packetHeader);
		//SendAffects(m_PacketBuffer[16]);
		break;
	
	case 0x37E:
		(PACKET_SIDE == SERVER_SIDE)
			? FixExitParty_SERVER((BYTE*)m_PacketBuffer, (BYTE*)packetHeader)
			: FixExitParty_CLIENT((BYTE*)m_PacketBuffer, (BYTE*)packetHeader);
		break;

	case 0x383:
		(PACKET_SIDE == SERVER_SIDE)
			? FixSendTrade_SERVER((BYTE*)m_PacketBuffer, (BYTE*)packetHeader)
			: FixSendTrade_CLIENT((BYTE*)m_PacketBuffer, (BYTE*)packetHeader);
		break;

	case 0x2E4://Apaga itens 7.55
			Dell(m_PacketBuffer[6],m_PacketBuffer[12]);
    break;
	case 0x39D:
		
		criticalHack(packetHeader->ClientID,m_PacketBuffer);
			(PACKET_SIDE == SERVER_SIDE)
				? FixSendAffect_SERVER((BYTE*)m_PacketBuffer, (BYTE*)packetHeader)
				: FixSendAffect_CLIENT((BYTE*)m_PacketBuffer, (BYTE*)packetHeader);
			// UseSkill(m_PacketBuffer[6],m_PacketBuffer[24],(BYTE*)m_PacketBuffer);
			 
			break;

	case 0x39E://Packet de Atk enviado pela HT com a skill Lamina Aérea
		criticalHack(packetHeader->ClientID,m_PacketBuffer);
			(PACKET_SIDE == SERVER_SIDE)
				? FixSendAffect_SERVER((BYTE*)m_PacketBuffer, (BYTE*)packetHeader)
				: FixSendAffect_CLIENT((BYTE*)m_PacketBuffer, (BYTE*)packetHeader);
			break;

	case 0x36C:
		(PACKET_SIDE == SERVER_SIDE)
			? FixSendAffect_SERVER((BYTE*)m_PacketBuffer, (BYTE*)packetHeader)
			: FixSendAffect_CLIENT((BYTE*)m_PacketBuffer, (BYTE*)packetHeader);
		break;
	
	case 0x36B:
		FixSendMyAffect((BYTE*)m_PacketBuffer, (BYTE*)packetHeader,packetHeader->ClientID);
		break;

	case 0x379://Compra de itens
		
		/*
		if(npcii->bStatus.Level == 700){
			Level700Itens((char*)m_PacketBuffer);}
		if(npcii->bStatus.Level == 701){
			Level701Itens((char*)m_PacketBuffer);}
		if(npcii->bStatus.Level == 704){
			Level702Itens((char*)m_PacketBuffer);}
		if(npcii->bStatus.Level == 705){
			Sell_5((char*)m_PacketBuffer);}
		if(npcii->bStatus.Level == 706){
			SELL2((char*)m_PacketBuffer);}
		if(npcii->bStatus.Level == 707){
			SELL4((char*)m_PacketBuffer);}
		if(npcii->bStatus.Level == 709){
		  BuyItem(packetHeader->ClientID,(BYTE*)m_PacketBuffer);}*/
			NPCDonate((BYTE*)m_PacketBuffer);
			NPCNovaLoja((BYTE*)m_PacketBuffer);
			//pNpcPremium(m_PacketBuffer[6], (BYTE*)m_PacketBuffer);
			
		break;

	case 0x374://Correção do BUG de portões OK
		if(*(BYTE*)&m_PacketBuffer[14] != 0x0)
			*(BYTE*)&m_PacketBuffer[14] = 0x0;
		if(*(BYTE*)&m_PacketBuffer[15] != 0x0)
			*(BYTE*)&m_PacketBuffer[15] = 0x0;
		if(*(BYTE*)&m_PacketBuffer[16] != 0x01)
			*(BYTE*)&m_PacketBuffer[16] = 0x01;
		if(*(BYTE*)&m_PacketBuffer[17] != 0x0)
			*(BYTE*)&m_PacketBuffer[17] = 0x0;
		if(*(BYTE*)&m_PacketBuffer[18] != 0x0)
			*(BYTE*)&m_PacketBuffer[18] = 0x0;
		if(*(BYTE*)&m_PacketBuffer[19] != 0x0)
			*(BYTE*)&m_PacketBuffer[19] = 0x0;
		break;


	case 0x40B:
		SalveBuffsInFile(packetHeader->ClientID);
		if(*(BYTE*)&m_PacketBuffer[8] != 0xE2)
			*(BYTE*)&m_PacketBuffer[8] = 0xBB;
		if(*(BYTE*)&m_PacketBuffer[9] != 0x20)
			*(BYTE*)&m_PacketBuffer[9] = 0xB9;
		if(*(BYTE*)&m_PacketBuffer[10] != 0x62)
			*(BYTE*)&m_PacketBuffer[10] = 0xC8;
		break;

	

	case 0x80C:
		memset(&m_PacketBuffer[12], 0x0, 2);
		memset(&m_PacketBuffer[20], 0x0, 2);
		break;

	case 0x3AE:
		SalveBuffsInFile(packetHeader->ClientID);
		if(*(short*)&m_PacketBuffer[12] == 0)
		{
			if(packetHeader->ClientID < 100)
				memset(&mobaffectbuffer[packetHeader->ClientID].Affects[0], 0x00, (16 * 8));
		}
		SaveBuffs(m_PacketBuffer[6]);
		//Server2((BYTE*)m_PacketBuffer);
		//Ranking(m_PacketBuffer[6]);
		break;

	
	default:
		if(PACKET_SIDE == SERVER_SIDE)
		{
		switch(packetHeader->PacketId)
		{
			case 0xE0E:
				break;
			case 0x3AD:
				break;
			case 0x3BA:
				break;
				case 0x2E1: // Alquimia
					Alquimia((BYTE*)m_PacketBuffer);
				 break;
			case 0x181:
				break;
			case 0xD1D:
				break;
			case 0xFDF:
				break;
			case 0x193:
				break;
			case 0x3AC:
				break;
			case 0x18D:
				break;
			case 0x19C:
				break;
			case 0xE12:
				break;
			case 0x3B4:
				break;
			case 0x39B:
				break;
			case 0x3A7:
				break;
			case 0x3A1:
				break;
			case 0x116:
				break;
			case 0x196:
				break;
			case 0x292:
				break;
			case 0x18B:
				break;
			case 0x339:
				break;
			case 0x806:
				break;
			case 0x80C:
				break;
			case 0x3A2:
				break;
			case 0x175:
				break;
			case 0x171:
				break;
			case 0x16F:
				break;
			case 0x18A:
				break;
			case 0x185:
				break;
			case 0x3AF:
				break;
			case 0x182:
				break;
			case 0x17C:
				break;
			case 0x3A8:
				break;
			case 0x26E:
				break;
			case 0x37D:
				break;
			case 0x367:
				break;
			case 0x3B9:
				break;
			case 0x20D:
				break;
			case 0x807:
				break;
			case 0x165:
				break;
			case 0x804:
				break;
			case 0x101:
				break;
			case 0x80D:
				break;
			case 0x11D:
				break;
			case 0x805:
				break;
			case 0x3B5:
				break;
			case 0x37A:
				break;
			case 0x3AE:
				break;
			case 0x366:
				break;
			case 0x373:
				break;
			case 0xAD9: //Mestre Grifo
				//MestreGrifo(m_PacketBuffer[6],m_PacketBuffer[12],m_PacketBuffer[16]);
				break;
			case 0x333:
				//if(PACKET_SIDE ==CLIENT_SIDE)Command2((BYTE*)m_PacketBuffer, packetHeader->ClientID);
				break;
				case 0x2d4:
				SkillExtracao((BYTE*)m_PacketBuffer);
				break;
			case 0x334:
				break;
			case 0x272:
				 ZeroMemory(m_PacketBuffer, *(short*)m_PacketBuffer);
				break;
			case 0x28B:
				break;
			case 0x379:
				break;
			case 0x376:
				
				break;
			case 0x802:
				break;
			case 0x809:
				break;
			case 0x290:
				break;
			case 0x277: // pts status
				break;
			case 0x3A6: // Compositor
				break;
			case 0x10E: //Packet Enviado pela DB (aproveitado para chamar a função LogIn)
				break;
			case 0x2BE:
				break;
			case 0xFDE:
				break;
			case 0x803:
				break;
			case 0x3A0:
				break;
			case 0x3AB:
				break;
			case 0x20F:
				break;
			case 0x27B:
				break;
			case 0x28E:// NPCS guerra
				NPCGuerras((BYTE*)m_PacketBuffer);
				break;
			case 0x28F:
				break;
			case 0x36A:
				break;
			case 0x39A:
				break;
			case 0x39F:
				break;
			case 0x40A:
				break;
			case 0x41D:
				break;
			case 0x41E:
				break;
			case 0x58B:
				break;
			case 0x215:
				break;
			case 0x211:
				break;
			case 0x213:
				memset(&m_PacketBuffer[20], 0x0, 36 - 20);
				break;
			case 0x224:
				break;
			case 0x270:
				break;
			case 0x289:
				break;
			case 0x291:
				LoadBuffs(m_PacketBuffer[6]);
				//Server((BYTE*)m_PacketBuffer);
				break;
			case 0x368:
				break;
			case 0x369:
				break;
			case 0x378:
				break;
			case 0x384:
				break;
			case 0x387:
				break;
			case 0x388:
				break;
			case 0x397:
				break;
			case 0x398:
				break;
			case 0x399:
				break;
			case 0x416:
				break;
			case 0x417:
				break;
			case 0x418:
				break;
			case 0x419:
				break;
			case 0x420:
				break;
			case 0x421:
				break;
			case 0x422:
				break;
			case 0x423:
				break;
			case 0x427:
				break;
			case 0x37F://Grupo 
				break;
			case 0x28C: //obs nesse 
				break;
			case 0x110:
				break;
			case 0x11A:
				break;
			case 0x11B://provavel packet pra apagar char
				break;
			case 0x3A4:
				break;
			case 0x386:
				break;
			case 0x112:
				break;
			case 0x80A:
				break;
			case 0x3B0://3B0
				break;
			case 0x80F:// arch new slot
				break;

			

			default:
				printf("Packet bloqueado: %X .",packetHeader->PacketId);
				FILE *fp;
				fp = fopen("PacketsBloqueados.txt", "at");//%X - %d.txt", Header->PacketId,Header->Size
				if(fp != NULL)
				{
					fprintf(fp, "%X ",packetHeader->PacketId);
					fprintf(fp, "%\n");
					fclose(fp);
				}

				ZeroMemory(m_PacketBuffer, *(short*)m_PacketBuffer);
				return m_PacketBuffer;

			}
		}
		
	}
	
typedef enum {
BLACK,BLUE,GREEN,CYAN,RED,MAGENTA,BROWN,LIGHTGRAY,DARKGRAY, 
LIGHTBLUE,LIGHTGREEN,LIGHTCYAN,LIGHTRED,LIGHTMAGENTA,
} 
COLORS; 
 
 //Pequena exibição dos packest trabalhados pela TM
 if(PACKET_SIDE == CLIENT_SIDE)
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN );
  printf(" Send -> Packet: %x Size : %d ClientId: %d\n",packetHeader->PacketId,packetHeader->Size,packetHeader->ClientID);
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTGRAY );
 }
 else if(PACKET_SIDE == SERVER_SIDE)
 {
  printf(" Recv -> Packet: %x Size : %d ClientId: %d\n",packetHeader->PacketId,packetHeader->Size,packetHeader->ClientID);
 }
 
 return m_PacketBuffer;
 
}


