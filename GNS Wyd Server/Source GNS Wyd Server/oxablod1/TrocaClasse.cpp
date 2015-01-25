#include "stdafx.h"
/*
void TrocaClasse(int ClientID,int npcid)
{
			int addr_bclient = ClientID * 0x0410;
			int addr_skill5r_10 = ClientID * 0x0C4C;
			 int cFace = PInt (addr_bclient + 0x015C6A14);
			int cLevel = PInt(addr_bclient + 0x015C69DC);
			int cElmo = PInt(addr_bclient + 0x015C6A1C);
			int cJoia = PInt(addr_bclient + 0x015C6A6C);
			int cClass = PByte(addr_bclient + 0x15C69CC);
			 MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
            if(cLevel >= 0) 
            {
                if((cJoia == 1760) && (cFace ==6 )|(cFace ==7 )|(cFace ==8 )|(cFace ==6 )|(cFace ==16 )|(cFace ==17 )|(cFace ==18 )|(cFace ==19 )|(cFace ==26 )|(cFace ==27 )|(cFace ==28 )|(cFace ==29 )|(cFace ==36 )|(cFace ==37 ) | (cFace ==38 )|(cFace ==39 )) 
                {

                    PInt(addr_bclient + 0x15C6A6C) = 0;
                    PInt(addr_bclient + 0x15C6A14) = 6;
                    PByte(addr_bclient + 0x15C69CC) = 0;
                     SendClientMsg(ClientID, "Voce Virou TK Parabens.");
                    
                   SendALL(ClientID);
				     SendCharList(ClientID);
                    return;
                }
 
                if((cJoia == 1761) && (cFace ==6 )|(cFace ==7 )|(cFace ==8 )|(cFace ==6 )|(cFace ==16 )|(cFace ==17 )|(cFace ==18 )|(cFace ==19 )|(cFace ==26 )|(cFace ==27 )|(cFace ==28 )|(cFace ==29 )|(cFace ==36 )|(cFace ==37 ) | (cFace ==38 )|(cFace ==39 )) 
                {

                    PInt(addr_bclient + 0x15C6A6C) = 0;
                    PInt(addr_bclient + 0x15C6A14) = 16;
                    PByte(addr_bclient + 0x15C69CC) = 1;
                    SendClientMsg(ClientID, "Voce Virou FM Parabens.");
                   
                   SendALL(ClientID);
				     SendCharList(ClientID);
                    return;
                }
 
                if((cJoia == 1762) && (cFace ==6 )|(cFace ==7 )|(cFace ==8 )|(cFace ==6 )|(cFace ==16 )|(cFace ==17 )|(cFace ==18 )|(cFace ==19 )|(cFace ==26 )|(cFace ==27 )|(cFace ==28 )|(cFace ==29 )|(cFace ==36 )|(cFace ==37 ) | (cFace ==38 )|(cFace ==39 )) 
                {

                    PInt(addr_bclient + 0x15C6A6C) = 0;
                    PInt(addr_bclient + 0x15C6A14) = 28;
                    PByte(addr_bclient + 0x15C69CC) = 2;
                    SendClientMsg(ClientID, "Voce Virou BM Parabens.");
                   
                  SendALL(ClientID);
				     SendCharList(ClientID);
                    return;
                }
 
                if((cJoia == 1763) && (cFace ==6 )|(cFace ==7 )|(cFace ==8 )|(cFace ==6 )|(cFace ==16 )|(cFace ==17 )|(cFace ==18 )|(cFace ==19 )|(cFace ==26 )|(cFace ==27 )|(cFace ==28 )|(cFace ==29 )|(cFace ==36 )|(cFace ==37 ) | (cFace ==38 )|(cFace ==39 )) 
                {

                    PInt(addr_bclient + 0x15C6A6C) = 0;
                    PInt(addr_bclient + 0x15C6A14) = 36;
                    PByte(addr_bclient + 0x15C69CC) = 3;
                   SendClientMsg(ClientID, "Voce Virou HT Parabens.");
                   SendALL(ClientID);
				     SendCharList(ClientID);
                    return;
                }
            }
           
           
			if((cFace !=6 )&&(cFace !=7 )&&(cFace !=8 )&&(cFace !=6 )&&(cFace !=16 )&&(cFace !=17 )&&(cFace !=18 )&&(cFace !=19 )&&(cFace !=26 )&&(cFace !=27 )&&(cFace !=28 )&&(cFace !=29 )&&(cFace !=36 )&&(cFace !=37 )&&(cFace !=38 )&&(cFace !=39 ))
                {
					 SendSay(npcid,"Somente Arch,Celestial,Sub Celestial, Hard Core e Sub Hard Core podem trocar de classe.");
                    return;
                }

            if(cJoia == 0 )
                {
					SendSay(npcid,"Cade o sephirot da classe desejada?");
                    
                    return;
                }
            return;
        }*/