 #include "Stdafx.h"

void ReturnofGlory(int ClientID,int npcid)
 {
            int add_face;
            int add_class;
            int face; 
			char tmp[1024];
			MOB *thisclient = (MOB*)GetMobFromIndex(ClientID);
			CriarArch pack = *(CriarArch*)malloc(sizeof(CriarArch));
            MOB *player = (MOB*)GetMobFromIndex(ClientID);
            int addr_bclient = ClientID * 0x0410;
            int cFace = PInt( 0x015C6A14+addr_bclient);
            int cMedalha = PInt(addr_bclient + 0x015C6A64); // Imortalidade
            int Slot = CharSlotReturn(ClientID);
			char *Nome[16];
            sprintf((char*)Nome,"%s",player->Name);
            int cSephirot = PInt(0x15C6A6C + addr_bclient);
			int cCapa = PInt(addr_bclient + 0x015C6A8C);
            int cClass = PByte(addr_bclient + 0x15C69CC);
                        if(Slot == 4)
        {
                SendSay(npcid,"Não possui espaço para o novo char.");
                return;
        }
            if(cCapa == 794 || cCapa == 795 || cCapa == 796 || cCapa == 797)
            {
                if(PInt(addr_bclient + 0x15C69DC) == 199)
                {
                    if(cMedalha == 5523)
                    {
                                               
                        if(PInt(0x15C6A6C + addr_bclient) == 1760 && PByte(addr_bclient + 0x15C69CC) == 0) add_face = 6, add_class = 0;     // TK - TK
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1761 && PByte(addr_bclient + 0x15C69CC) == 0) add_face = 7, add_class = 1; // TK - FM
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1762 && PByte(addr_bclient + 0x15C69CC) == 0) add_face = 8, add_class = 2; // TK - BM
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1763 && PByte(addr_bclient + 0x15C69CC) == 0) add_face = 9, add_class = 3; // TK - HT
                        // Evoluções de Mortal FM para outra
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1760 && PByte(addr_bclient + 0x15C69CC) == 1) add_face = 16, add_class = 0; // FM - TK
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1761 && PByte(addr_bclient + 0x15C69CC) == 1) add_face = 17, add_class = 1; // FM - FM
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1762 && PByte(addr_bclient + 0x15C69CC) == 1) add_face = 18, add_class = 2; // FM - BM
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1763 && PByte(addr_bclient + 0x15C69CC) == 1) add_face = 19, add_class = 3; // FM - HT
                        // Evoluções de mortal BM para outra
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1760 && PByte(addr_bclient + 0x15C69CC) == 2) add_face = 26, add_class = 0; // BM - TK
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1761 && PByte(addr_bclient + 0x15C69CC) == 2) add_face = 27, add_class = 1; // BM - FM
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1762 && PByte(addr_bclient + 0x15C69CC) == 2) add_face = 28, add_class = 2; // BM - BM
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1763 && PByte(addr_bclient + 0x15C69CC) == 2) add_face = 29, add_class = 3; // BM - HT
                        // Evoluções de Mortal HT para outra
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1760 && PByte(addr_bclient + 0x15C69CC) == 3) add_face = 36, add_class = 0; // HT - TK
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1761 && PByte(addr_bclient + 0x15C69CC) == 3) add_face = 37, add_class = 1; // HT - FM
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1762 && PByte(addr_bclient + 0x15C69CC) == 3) add_face = 38, add_class = 2; // HT - BM
                        else if(PInt(0x15C6A6C+ addr_bclient) == 1763 && PByte(addr_bclient + 0x15C69CC) == 3) add_face = 39, add_class = 3; // HT - HT
                            else
                            { // ABRE O ELSE
                           SendClientMsg(ClientID, "Você precisa da sephiroth.");
                            return;
                            }// FECHA O ELSE
                                               
                            {                                                  
                                                                                       
                                PInt(addr_bclient + 0x15C6A6C) = 0; // Zera Item no Slot do Sephirot
                                PInt(addr_bclient + 0x15C6A64) = 0; // Zera Item no Slot da Irmotalidade	
                                CreateChar(ClientID,add_class,add_face/*all*/,Slot,(char*)player->Name);
								LogForAll(ClientID,"Criação de Return Of Glory sucedida");
								SendClientSignalParm(ClientID, ClientID, 0x3B4,Slot);
								 sprintf(tmp,"[%s] Agora é Return Of Glory. ",thisclient->Name);
                                SendCharList(ClientID);
                                 return;
                            }
                   
                                        }
                    else
                                        {
                    SendClientMsg(ClientID, "Você precisa da  Pedra_do_DOH!");
                    return;
                                        }
                }
                else
                                {
               SendClientMsg(ClientID, "Level inadequado!");
                return;
                                }
 
            }
            else
                        {
            SendClientMsg(ClientID, "Apenas personagens com Capas Negras");
            return;
                        }
        }
 