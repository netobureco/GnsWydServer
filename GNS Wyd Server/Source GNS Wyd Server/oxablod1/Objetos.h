
#ifndef __OBJETOS_H__
#define __OBJETOS_H__

void Qizzz();
extern BOOL cLogPacket;
//int addr_bclient = (addr_bclient * 0x0410);
void Tab(int clientid,int cmd_addr);
void CloseUser1(int clientid);
void LoginRequest_SERVER(BYTE *m_PacketBuffer);
extern int WarNoatumType;
static int eventonovo;
extern char BufferLoop[2048];
void SpawnChar(int clientid,char *tab);
void DesbugaFaceBM(int clientid,int cmd_addr);
void SaveLog(BYTE *m_PacketBuffer,BYTE *pHeader);
void TrocaClasse(int ClientID,int npcid);
void PerzenN(int clientid,int npcid);
void PerzenM(int clientid,int npcid);
void PerzenA(int clientid,int npcid);
//void NewSkillBuffer();
//void p_D1D(int ClientID,int cmd_addr);
int GetNumberOnline();
/*
void SavePlayerLevel(int clientid); 
void DeletarPlayer1(int clientid); 
void DeletarPlayer2(int clientid); 
void DeletarPlayer3(int clientid); 
void Ranking(int clientid);
*/
void vereficaSkillBM(WORD clientid,int cmd_addr);
void __stdcall GetCurrentScoreAffect(int clientid); //Eden
static void Itens_com_add(BYTE *m_PacketBuffer); 
void Agatha(unsigned char* szBuffer);
void pausar(int ClientID);
void TimeTeleport(int ClientID);
void GetAll(int clientid);
int verfama(int ClientID);
void menosfama(int ClientID, int valorcash);
void maisfama(int ClientID, int valorcash);
void ExpParty(int ClientID,int exp);
void NasceRvR1(int ClientID);
void buffe(int ClientID);
bool isvip(int clientid);
void SendClientMsE(LPVOID ClientID,const char * _Format,...);
void NPCDonate(BYTE *m_PacketBuffer);
void CashNPC(int ClientID,int npcid);
void NPCNovaLoja(BYTE *m_PacketBuffer); //Novo sitema de loja
void Novo_Gold1(int clientid,st_Item *ItemSend); // Quantidade de Gold 1
void Novo_Gold5(int clientid,st_Item *ItemSend); // Quantidade de Gold 5
void Novo_Gold10(int clientid,st_Item *ItemSend); // Quantidade de Gold 10
void Novo_Gold15(int clientid,st_Item *ItemSend); // Quantidade de Gold 15
void Novo_Gold20(int clientid,st_Item *ItemSend); // Quantidade de Gold 20
void Novo_Gold30(int clientid,st_Item *ItemSend); // Quantidade de Gold 30
void Novo_Gold40(int clientid,st_Item *ItemSend); // Quantidade de Gold 40
void Novo_Gold50(int clientid,st_Item *ItemSend); // Quantidade de Gold 50
void Novo_Gold60(int clientid,st_Item *ItemSend); // Quantidade de Gold 60
void Novo_Gold100(int clientid,st_Item *ItemSend); // Quantidade de Gold 100
void Novo_Gold1000(int clientid,st_Item *ItemSend); // Quantidade de Gold 100
void QntdeGold(int clientid,int npcid);
void Poeira_de_Ori(int clientid, int SrcSlot, int DstSlot);
void Elime(int ClientID,st_Item *ItemSend,int SrcSlot);
void Sylphed(int ClientID,st_Item *ItemSend,int SrcSlot);
void Thelion(int ClientID,st_Item *ItemSend,int SrcSlot);
void Noas(int ClientID,st_Item *ItemSend,int SrcSlot);
void LogForHelp(int ClientID, char *frase);
void Tinye(unsigned char* szBuffer);//unsigned char* szBuffer
//void Sugyro(unsigned char* szBuffer); // NCP +11
//void BuyItem(WORD ClientID,BYTE *pak);
//void Tinye(char *Packet);//unsigned char* szBuffer
void SalveMOB(int clientid, char *pasta); // Sub Celestial
void LoadMOB(int clientid, char *pasta); // Sub Celestial
void Pedra_Misteriosa(int clientid);    // Sub celestial
void CharLogin_SERVER(int clientid);
void Noticia(int ClientID,int cmd_addr);
//void kick(int clientid,int cmd_addr);
void level(int ClientID,int cmd_addr);
void Send(int ClientID,int cmd_addr);
void MOD(int ClientID,int cmd_addr);
void SaveBuffs(int clientid);
void LoadBuffs(int clientid);
void Alquimia(BYTE *m_PacketBuffer);
void Volatiles(int ClientID,char *Packet);
void NPCFunc(int ClientID, int npcid);
int NPCFunc2(int ClientID, int npcid);
//level up
void AddExp(int ClientID);
void CheckQuarterByLevel(int clientid, int earned);
void ExpControl(int clientid,long* exp);
int BauExp(int clientid);
//end level up

void DllInit();
void Commando(int ClientID, int cmd_addr);
void Gate(int ClientID);
void PONTOS_FIX(int ClientID);
void DesbugFaceBM(int ClientID);
int FixMestreSkill(int ClientID,int IDSkill);
void Guild_Recrutar_Membro(char *Packet);
void FraseAoLogar(char *Packet);
void FraseConnect(int ClientID, int ClientID1);
void BANACCOUNT(int ClientID);
void MountSRACAO(int ClientID);
void Amount(int ClientID,st_Item *ItemSend);
void VerifShire(int ClientID);
void Mod_Dead(char *Packet);
void Uxmal(int clientid, int npcid);
void MobEventDead(char *Packet);//ModEvent
void ModEvent(char *Packet);//
void Evento(int ClientID);
int BloqueiaDrop(int item);
void MoveMob(int ClientID);
void FixWinNoatum();
int morte(int ClientID);
void PremioLv(int ClientID);
void Montarias();
void ModeQuest(int ClientID);
void GetBonusScore(int ClientID);
void LogForAll(int ClientID, char *frase);
void Delete(int ClientID, int slot);
int GetItemADDInventory(int clientid, int slot, int add);
void SendSlot(int clientid, int slot);
//Premios
void Iten_0(int ClientID);
void Iten_1(int ClientID);
void Iten_2(int ClientID);
void Iten_3(int ClientID);
void Iten_4(int ClientID);
void Iten_5(int ClientID);
void Iten_6(int ClientID);
void Iten_7(int ClientID);
void Iten_8(int ClientID);
void Iten_9(int ClientID);
void Iten_10(int ClientID);
void Iten_11(int ClientID);
void Iten_12(int ClientID);
void Iten_13(int ClientID);
void Iten_14(int ClientID);
void Iten_15(int ClientID);
void Iten_16(int ClientID);
void Iten_17(int ClientID);
void Iten_18(int ClientID);

/**************Skill's******************/
void eden(int ClientID);
void LivroRessu(int ClientID);
void Skills(char *Packet);
void soul(int ClientID);
void Skill_Cancel(int clientid, BYTE *m_PacketBuffer);
void Renascimento(int ClientID, int alvo);
int verifeden(int ClientID);
void VerificaEden(int ClientID);
void Skill_Cancel(int clientid, BYTE *m_PacketBuffer);
//void SkillExtracao(BYTE *m_PacketBuffer);
void __stdcall GetCurrentScoreAffect(int clientid);
/**************end Skill******************/

/**************NKD******************/
void Sub2Off();
void FixMantleBlue();
void FixMantleRed();
void FixMountDead();
void Control_Level();
void NKD_NPCFunc();
void NKD_Command();
void NKD_Gate();
void NKD_Vol();
void DoDirection();
void NKD_DropInv();
//ahack
void Recv();
void CloseUser();
void AcceptUser();
void EXP();
void Hook();
void BMDesb();
void Update_func_Level();
void NKD_FixMestreSkill();
void NKD_FixUpgrade();
void NKD_FixCheckNivClasse();
void NKD_FixHPBOSS();
void NKD_FixHPBOSS2();
void NKD_FixHPBOSS3();
void NKD_FixHPBOSS4();
void NKD_FixDanoAtack();
void NKD_PACKETS();
//void MobEvent();
void FixImortal();
void Connect();
void Logo();
void RangeKefra();
void WARNOATUN();
void BlockDrop();
void MestreHab();
void NKD_FixLimitePlayer();
void NKD_WarNoatum();
void NKD_WarNoatum2();
void NKD_WarNoatum3();
void Jeffi();
void exp(); void expdefin(int exp);
int Loja(int ClientID, int vendedor, int item, unsigned long preco);
void NKD_EXP();
void FixPointSkillCele();
void FixPartyLv1();
void FixPartyLv2();
void MaxAprend();
void ShamanFix1();
void ShamanFix2();
void NKD_Merchante15();
void NKD_PremioLv();
void NKD_Merchante10();

void DoTeleport(int ClientID, int x, int y);
void GetCurrentScore(int ClientID);
void GetCurrentScore2(int ClientID);
void SendClientMsg(int ClientID,const char * _Format,...);
void SendEffect(int value1, int effectid, int ClientID);
void SendStats(int ClientID);
void SendEquip(int ClientID);
void SendScore(int ClientID);
void SendCharList(int ClientID);
void SaveChar(int gg, int ClientID);
void SendALL(char *Data);//int ClientID
void SendALL(int ClientID);//int ClientID
void SendALL2(int ClientID, int slot);
void SendSay(int npcid, char *msg,...);
void SendNotice(char *msg,...);
bool banest(char *login, int CID);

int GetFirstSlot(int ClientID, int item, int add1, int val1, int add2, int val2, int add3, int val3, int slotPlace);
int GetFirstSlotIgnore(int ClientID, int item, int add1, int val1, int add2, int val2, int add3, int val3, int slotPlace, int ignore);
int GetFirstSlotSADD(int ClientID, int item, int slotPlace);
void SendNoticeArea(int x, int y,  int x2, int y2, char *msg);
void ClearArea(int x, int y,  int x2, int y2);
void DoTeleportArea(int destx, int desty, int x, int y, int x2, int y2);
void GenerateSummon(int ClientID, int summon_id);
void SendItens(int ClientID, int slot);
void SendInv(int ClientID, int slot);
void SetItemSanc(int clientid, int item, int value);
int GetUserInArea(int x1, int y1, int x2, int y2, char *nick);
void GenerateSpawn(int generID);
void Buff(int ClientID, int time1, int time2, int skill);
void ClearAreaLevel(int x, int y, int x1, int y1, int lvmax, int lvmin);
int PTeleport(int ClientID, int PointX, int PointY);
void EffectArea(int effect, int xmax, int ymax, int xmin, int ymin);
void GetHPMP(int ClientID);
void GetHPMP2(int ClientID);
void GetinXp(int ClientID, int exp, char *msg);
void GetinSlot(int ClientID,int item, int entrega);
int GetUserByName(char *nick);
int GetQuantidadeItem(int ClientID, int itens);
void DeleteUnidade(int ClientID, int itens);
void GetRemoItem(int ClientID, int itens, int quatidade);
int GetUnidadeItem(int ClientID, int itens);
void EmpacotarPl(int ClientID, int item2, int vola, int pac);
void fada_vale(int ClientID);
void PartyXp(int ClientID, int exp, char *msg, int masterCID);
int IDmap(int ClientID, int x, int y, int x2, int y2);
void IDmapItem(int ClientID, int x, int y, int x2, int y2, int pede, int devolve);
void BuffKefra(char *msg, int tempo1, int tempo2, int skill);
void Mob(int ClientID, int mob);
void MobTime(int ClientID, int mob, int min1, int min2, int min3, int min4, int min5, int seg1, int seg2);
void Pesas(int ClientID);
void GetinItem(int ClientID, int level, int item, int add, int valor, int add2, int valor2, int add3, int valor3, char *msg);
void CampoTreino(int ClientID);
void IDmapPlayer(int ClientID, int x, int y, int x2, int y2);
void evento(int ClientID, int numero, int x, int y);
int SendToCargo(int ClientID, int item, int add1, int value1, int add2, int value2, int add3, int value3);
int CheckCargo(int ClientID, int item);
int IDmob(int ClientID, int x, int y, int x2, int y2);
void SendLevel(int ClientID);

void SendPacket(char *bufr, int ClientID);
void CreateMOB(char *Name,int LocX,int LocY,char *Caminho);
int file_exists(const char *filename);
int GreenTimeMap(int x2, int y2, int x, int y, int tempo);
void gameconfig();
void itemlist();
void skilldata();
void WarNoatun();
void DeadArea(int x, int y, int x1, int y1);
int PlayerInArea(int x, int y, int x1, int y1);
int ContOnline();
int MobInArea(int x, int y, int x1, int y1);
void LeftMob(int ClientID,int mobs);
void Controle_Exp(int ClientID,long exp);
void SalveBuffsInFile(int ClientID);
void LoadBau(int ClientID);
void LoadFrango(int ClientID);
void LoadSephira(int ClientID);
void LoadSaude(int ClientID);

void ExpAreaPesa(int ClientID,int exp);
int CharSlotReturn(int ClientID);
void ExpQuest(int ClientID,int exp);
void msglogon(int ClientID);
/***********************Packet******************/
void SendMsgPT(int ClientID,char *Text);
void MsgSimples(int ClientID, char *Text);
void SendMsgGreen(int ClientID, char *Text);
void TempoVerde(int ClientID, int tempo);
void Quiz(int ClientID,char *title, char *msg);

void FixSendExp_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer);
void FixExitParty_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer);
void FixExitParty_CLIENT(BYTE *m_PacketBuffer, BYTE *packetBuffer);
void CreateChar(int ClientID, int classe,int face,int slot, char *name); //arch new slot

int GetAnctCode(st_Item *item);
int GetItemIDAndEffect(st_Item *Item, int mnt);
void FixGetCreateMob_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer);
void FixGetCreateMobTrade_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer);
void FixSend39E_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer);
void FixSend39E_CLIENT(BYTE *m_PacketBuffer, BYTE *packetBuffer);
void FixSendAffect_CLIENT(BYTE *m_PacketBuffer, BYTE *packetBuffer);
void FixSendAffect_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer);
void FixSendMyAffect(BYTE *m_PacketBuffer,BYTE *packetBuffer,int ClientID);
void SendAffects(int ClientID);
void FixSendEtc_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer);
void GetAffect(int bOffset, st_affect *uSkill, char *bufPak, int ClientID);
void FixSendScore_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer);
void FixSendTrade_SERVER(BYTE *m_PacketBuffer, BYTE *packetBuffer);
void FixSendTrade_CLIENT(BYTE *m_PacketBuffer, BYTE *packetBuffer);
bool CheckTrade(BYTE *m_PacketBuffer);
extern st_Mob_754 mobaffectbuffer[0x7530];
st_ItemList *GetItemlistBuffer();
st_Mob_754 *GetAffectMobBuffer();
 
void ClearBuffer();
DWORD RetnAffect(int ClientID);
void Hook(DWORD Function, DWORD Hook, int Size);
void ChangeMobStaticSize();
void HKD_MobKilled_DropGold(int index, int gold);
void SetDefaultConstants();
void SetVersion();
void SetEncDec();
void SetSkillDataString();
void SetSkillIndex();
void SetMobIndex();
void SetSockAddrPorts();
void SetPacketSize();
void SetMaxLevel_TrainningCamp();
void ChangeItemlistStructPointer();
void ChangeLimitBuffsStructPointer();
void PedrasArch(int clientid, int DstSlot, int random);
void DoBan(char *Packet);
void CPSockIndirections();
void NKD_LIMITESIZE();
void NKD_AddMessage();
void NKD_ReadMessage();
void NKD_AddMessage_EncKey_1();
void NKD_ReadMessage_DecKey_1();
void NKD_ReadMessage_DecKey_2();
void NKD_ProcessClientMessage_ReadCommand();
void NKD_CheckPacket_GetCreateMobSize();
void NKD_CheckPacket_SendTradeSize();
void NKD_MobKilled_DropGold();
void TranslateBaseNPCFiles();
void NKD_GetDoubleCritical_SetNewCriticalRate();
void NKD_GetGetCurrentScore_FixCriticalRate();

/*
void Level700Itens(char *Data);
void Level701Itens(char *Data);
void Level702Itens(char *Data);
void Sell_5(char *Data);
void SELL2(char *Data);
void SELL4(char *Data);
*/
int PontosADC(char *Data);
int GetDistance(int x, int y, int x2, int y2);
void RangeHack(int ClientID, char *Data);
void MoveHack(unsigned char* szBuffer);
int file_existso(const char *filename);
void DoBan(char *Packet);
void FixLvCele(int ClientID);
int SkillHack(int ClientID, int skillid);
void criticalHack(int ClientID, BYTE *packetBuffer);
void moveHack(int ClientID, char *Data);
void MobEventDead2(BYTE *packetBuffer);
void HangerHack(int ClientID, char *Data);
int archequip(char *Packet);
DWORD *HKD_AddMessage(BYTE *packetBuffer, DWORD packetSize);
//int __stdcall HKD_AddMessage(BYTE *packetBuffer, DWORD packetSize);
BYTE *HKD_ReadMessage(BYTE *packetBuffer, DWORD packetSize);
BYTE *PacketControlASM(PacketHeader *packetHeader, BYTE PACKET_SIDE);
void PacketControl(char *Packet, int Type);
/***********************EndPacket******************/

/* *********************Volatiles********************/
void Feijoes(st_Item *Feijao,st_Item *Equip);


void PergaA1(int ClientID,st_Item *ItemSend);
void Lac100(st_Item *Lac,st_Item *Equip);
void PergaA2(int ClientID,st_Item *ItemSend);
void PergaA3(int ClientID,st_Item *ItemSend);
void PergaA4(int ClientID,st_Item *ItemSend);
void PergaA5(int ClientID,st_Item *ItemSend);
void PergaA6(int ClientID,st_Item *ItemSend);
void PergaA7(int ClientID,st_Item *ItemSend);
void PergaA8(int ClientID,st_Item *ItemSend);
void NesesA(int ClientID,st_Item *ItemSend);
void PergaM1(int ClientID,st_Item *ItemSend);
void PergaM2(int ClientID,st_Item *ItemSend);
void PergaM3(int ClientID,st_Item *ItemSend);
void PergaM4(int ClientID,st_Item *ItemSend);
void PergaM5(int ClientID,st_Item *ItemSend);
void PergaM6(int ClientID,st_Item *ItemSend);
void PergaM7(int ClientID,st_Item *ItemSend);
void PergaM8(int ClientID,st_Item *ItemSend);
void NesesM(int ClientID,st_Item *ItemSend);
void CartaN(int ClientID,st_Item *ItemSend);
void CartaM(int ClientID,st_Item *ItemSend);
void CartaA(int ClientID,st_Item *ItemSend);
void GemaDiamante(st_Item *Gema,st_Item *Equip);
void GemaEsmeralda(st_Item *Gema,st_Item *Equip);
void GemaCoral(st_Item *Gema,st_Item *Equip);
void GemaGarnet(st_Item *Gema,st_Item *Equip);
void CaçaArmia(int ClientID,int teleport);
void CaçaDung(int ClientID,int teleport);
void CaçaSubM(int ClientID,int teleport);
void CaçaKult(int ClientID,int teleport);
void CaçaKefra(int ClientID,int teleport);
void CaçaNiple(int ClientID,int teleport);
void ClasseA(int ClientID,st_Item *ItemSend,st_Item *Equip);
void Classe_E(int clientid,int SrcSlot,int DstSlot);
void Classe_D(int clientid,int SrcSlot,int DstSlot);
void PacoteMagoMais11(int ClientID,st_Item *ItemSend);
void PacoteMagoMais12(int ClientID,st_Item *ItemSend);
void PacoteMagoMais13(int ClientID,st_Item *ItemSend);
void PacoteMagoMais14(int ClientID,st_Item *ItemSend);
void PacoteMagoMais15(int ClientID,st_Item *ItemSend);
void PacoteDanoMais11(int ClientID,st_Item *ItemSend);
void PacoteDanoMais12(int ClientID,st_Item *ItemSend);
void PacoteDanoMais13(int ClientID,st_Item *ItemSend);
void PacoteDanoMais14(int ClientID,st_Item *ItemSend);
void PacoteDanoMais15(int ClientID,st_Item *ItemSend);
void Pacote_TK(int ClientID,st_Item *ItemSend);
void Pacote_FM(int ClientID,st_Item *ItemSend);
void Pacote_BM(int ClientID,st_Item *ItemSend);
void Pacote_HT(int ClientID,st_Item *ItemSend);
void Kit_DOH_1(int ClientID,st_Item *ItemSend);
void Kit_DOH_2(int ClientID,st_Item *ItemSend);
void Kit_DOH_3(int ClientID,st_Item *ItemSend);
void Kit_DOH_4(int ClientID,st_Item *ItemSend);
void Kit_DOH_5(int ClientID,st_Item *ItemSend);
void Kit_DOH_6(int ClientID,st_Item *ItemSend);
void Kit_DOH_7(int ClientID,st_Item *ItemSend);
void Kit_DOH_8(int ClientID,st_Item *ItemSend);
void Kit_DOH_9(int ClientID,st_Item *ItemSend);
void Kit_DOH_10(int ClientID,st_Item *ItemSend);
void Kit_DOH_11(int ClientID,st_Item *ItemSend);
void Kit_DOH_12(int ClientID,st_Item *ItemSend);
void Kit_DOH_13(int ClientID,st_Item *ItemSend);
void Kit_DOH_14(int ClientID,st_Item *ItemSend);
void Kit_DOH_15(int ClientID,st_Item *ItemSend);
void Kit_DOH_16(int ClientID,st_Item *ItemSend);
void Tab(int ClientID,int cmd_addr);
//void Server(BYTE *m_PacketBuffer);
//void Server2(BYTE *m_PacketBuffer);
void Dell(int clientid , int SrcSlot);

void mi100(int ClientID,st_Item *ItemSend);
void bi1(int ClientID,st_Item *ItemSend);
void mi1(int ClientID,st_Item *ItemSend);
void mi5(int ClientID,st_Item *ItemSend);
void mi10(int ClientID,st_Item *ItemSend);
void mi50(int ClientID,st_Item *ItemSend);
void PacLac(int ClientID,st_Item *ItemSend);
void PacOri(int ClientID,st_Item *ItemSend);
void EscrtLac(int ClientID,st_Item *ItemSend);
void EscrtOri(int ClientID,st_Item *ItemSend);
void GemaEstrelar(int ClientID,st_Item *ItemSend);
void Restaurad1(int ClientID,st_Item *ItemSend);
void Restaurad2(int ClientID,st_Item *ItemSend);
void Restaurad3(int ClientID,st_Item *ItemSend);
void Restaurad4(int ClientID,st_Item *ItemSend);
void Restaurad5(int ClientID,st_Item *ItemSend);
void Restaurad6(int ClientID,st_Item *ItemSend);
void Restaurad7(int ClientID,st_Item *ItemSend);
void Catalis1(int ClientID,st_Item *ItemSend);
void Catalis2(int ClientID,st_Item *ItemSend);
void Catalis3(int ClientID,st_Item *ItemSend);
void Catalis4(int ClientID,st_Item *ItemSend);
void Catalis5(int ClientID,st_Item *ItemSend);
void Catalis6(int ClientID,st_Item *ItemSend);
void Catalis7(int ClientID,st_Item *ItemSend);
void CuraMont(int ClientID,st_Item *ItemSend);
void ExtracaoElmo(int ClientID,st_Item *ItemSend);
void ExtracaoPeito(int ClientID,st_Item *ItemSend);
void ExtracaoCalca(int ClientID,st_Item *ItemSend);
void ExtracaoLuva(int ClientID,st_Item *ItemSend);
void ExtracaoBota(int ClientID,st_Item *ItemSend);
void ExtracaoArma(int ClientID,st_Item *ItemSend);
void BarMythDano(int ClientID,st_Item *ItemSend,st_Item *Equip);
void BarMythMag(int ClientID,st_Item *ItemSend,st_Item *Equip);
void BarMythDef(int ClientID,st_Item *ItemSend,st_Item *Equip);
void BarMythCrit(int ClientID,st_Item *ItemSend,st_Item *Equip);
void PesadeloA(int ClientID,st_Item *ItemSend);
void PesadeloM(int ClientID,st_Item *ItemSend);
void PesadeloN(int ClientID,st_Item *ItemSend);
void QuestHC(int ClientID,st_Item *ItemSend);
void AguaFadas(int ClientID,st_Item *ItemSend,st_Item *Equip);
void PergaN1(int ClientID,st_Item *ItemSend);
void PergaN2(int ClientID,st_Item *ItemSend);
void PergaN3(int ClientID,st_Item *ItemSend);
void PergaN4(int ClientID,st_Item *ItemSend);
void PergaN5(int ClientID,st_Item *ItemSend);
void PergaN6(int ClientID,st_Item *ItemSend);
void PergaN7(int ClientID,st_Item *ItemSend);
void PergaN8(int ClientID,st_Item *ItemSend);
void NesesN(int ClientID,st_Item *ItemSend);
void BauDeExperiencia(int ClientID,st_Item *ItemSend);
void ItensExpQuest(int ClientID, Volatile *v);
void FogosArtif(int ClientID,st_Item *ItemSend);
int racoes(int ClientID,int slot);

//poçoes
void sephira(int conn, int itemSlot);
void saude(int conn, int itemSlot);
void Frango(int ClientID,st_Item *ItemSend);
void VIP_30_Dias(int ClientID, int SrcSlot, int DstSlot, int warp);
void Frango_P(int ClientID,st_Item *ItemSend);
/* *********************EndVolatiles********************/

/******************** NpcFunc*************************/
void MestreGrifo(int ClientID, int npcid);
void ArchRei(int ClientID, int npcid);
void Quest_Cemiterio(int ClientID, int npcid);
void Quest_Jardim(int ClientID, int npcid);
void Quest_Kaizen(int ClientID, int npcid);
void Quest_Hidra(int ClientID, int npcid);
void Quest_Elfo(int ClientID, int npcid);
void Refinacao10(char *Packet);
void NPC_Sephirot(char *dwBuffer);
void NpcJanela(char *Packet);
void DestravaArch(char *Packet);
void OitavaHT1(char *Packet);
void MountExpira(int ClientID);
void M_Hab(int ClientID, int npcid);
void Juli(int ClientID, int npcid);
void Juli2(int ClientID, int npcid);
void Capaverde(int ClientID, int npcid);
void KingdomBroker(int ClientID, int npcid);
void Quest_CapaVerde(int ClientID, int npcid);
void LiderAprend(int ClientID, int npcid);
void Jeffie(int ClientID, int npcid);
void TrocaArmas(int ClientID, int npcid);
void Kibita(int ClientID, int npcid);
void Ehre(unsigned char* szBuffer);
void RefinacaoAbencoada(unsigned char* m_PacketBuffer );
void npcmais11(unsigned char* m_PacketBuffer);
void Shaman(int ClientID, int npcid);
void GodGover(int ClientID, int npcid);
void LanHouseA(int ClientID, int SrcSlot);
void LanHouseM(int ClientID, int SrcSlot);
void LanHouseN(int ClientID, int SrcSlot);
//void UseSkill(WORD clientid, WORD skillid, BYTE *m_PacketBuffer); // desbugando Skills
void VerificaEden(int clientid);
void Item(int ClientID,int cmd_addr); // comando item
void Arch(int ClientID,int npcid);
void ReturnofGlory(int ClientID,int npcid);
void Blue_Cape(int ClientID, int npcid); //capas azuis
void Red_Cape(int ClientID, int npcid); //Capas red
void Capas(int ClientID,int npcid); // todas capas
void NPCGuerras(BYTE *m_PacketBuffer); // NPCs guerra
int  Banacc(char acc[15],int clientid); // ban na conta
void MoveItem1(unsigned char* szBuffer); // Equipando itens
void LevaKaiz(int ClientID, int npcid);
void LevaHid(int ClientID, int npcid);
void JuntaImortalidade(int ClientID, int npcid);
void MestreHabilidade(int clientid,int npcid);
void AlqOdin(BYTE *m_PacketBuffer);
void ResetStatus(int ClientID, int npcid);
void Merchant42(int ClientID, int npcid);
void NPCI(int clientid, int npcid);
void NPCII(int clientid, int npcid);
void NPCIII(int clientid, int npcid);
void NPCIV(int clientid, int npcid);
void NPCV(int clientid, int npcid);
void NPCVI(int clientid, int npcid);
void TrocaMedalhas(int clientid, int npcid);
void EventoSemanal(int clientid, int npcid);
void EventoSemanal1(int clientid, int npcid);
void EventoSemanal2(int clientid, int npcid);
void EventoSemanal3(int clientid, int npcid);
void EventoSemanal4(int clientid, int npcid);
void pNpcPremium(int clientid, BYTE *m_PacketBuffer);
/******************** Func Guild*************************/

bool ler_guild();
bool GuildExist(char *Name);
void CriarGuilda(char *Name, int ClientID);
bool SalveNewGuild();
void SairGuild(int ClientID);
void GuildTeste(char *Name,int ClientID);
void UnicodeTranslate();
int GetGuildID(int clientid);


/******************** NpcFuncEnd*************************/



/******************************************/
void Command2(unsigned char* szBuffer);
#define GetOffset(offset) (m_PacketBuffer[offset])
int GetItemSanc(int ClientID, int slot, int item);
int GetAdd(int ClientID, int slot, int add,int val);
int PegaRef(int ClientID, int slot);
int ContadorDeRef(int ClientID, int item1, int item2, int item3, int item4);
int MaisChance1215(int ClientID, int returncounter, int RefDaRef1, int RefDaRef2, int RefDaRef3, int RefDaRef4);
int ChanceDeSucesso(int ClientID, int RefItem, int returnchance1215);
int RefinarItemMais(int ClientID,int slot, int item, int addref);
int RefinarItemMenos(int ClientID,int slot, int item, int addref);
void DeleteItemCompleto(int ClientID,int item);
void DeleteItem(int ClientID,int slot);
void Atualizar(int ClientID, int type, int slot);
void Attinv(int ClientID);
int GetItemType(int ClientID, int id);
int GetItemType2(int SlotID);
int ReturnChance(int ClientID, int slot, int refatual);

int CheckIp(char *IP);
void CloseAllSockets();
void CloseSocketsIp(char *IP);
void Disconect(int ClientID);


//Dragon NPC VIP

void Premium_UP(int ClientID, int npcid);
void Free_UP(int ClientID, int npcid);

//xGustavo ^^
int GetItemNpcJanela(int clientid, int nSlot, BYTE *slot, int ItemID);
int CompositionValidt(int clientid, int nSlot, BYTE *slot, int *Itens);
//int GetDistance(int x, int y, int x2, int y2);


void Odin(char *Packet);
void PistaRunas(int clientid, BYTE slot[7]);
void SecretaSol(int clientid, BYTE slot[7]);
void SecretaTerra(int clientid, BYTE slot[7]);
void SecretaAgua(int clientid, BYTE slot[7]);
void SecretaVento(int clientid, BYTE slot[7]);
void RefiCapa(int clientid, BYTE slot[7]);
void DesbloqLvL40(int clientid, BYTE slot[7]);
void DesbloqLvL90(int clientid, BYTE slot[7]);

//pista
static int pista0 = FALSE;
static int pista1 = FALSE;


void Mod_Dead(char *Packet);
void Mod_Event(int killer, int killed);
void PesaAMobs(int clientid, char *MobName);
void PesaMMobs(int clientid, char *MobName);
void PesaNMobs(int clientid, char *MobName);
bool Pista0_0(int clientid);
void Pista0_1(int clientid, char *MobName);
void Pista0_2(int clientid, char *MobName);
void Pista0_clock();
void Pista0_clock1();
void Pista0_clock2();
bool Pista1_0(int clientid);
void Pista1_1(int clientid, char *MobName);
void Pista1_clock();
void BigCubo(int clientid);
void Selo_do_guerreiro(int clientid);
void PergaCP(int clientid);


//Classes
int DonatePar(int clientid);
void Arch(int clientid,int npcid);
void Cele(int clientid);
void SubCeletial(int clientid);
void HardCore(int clientid);
void Sub_Casse_CLasse(int clientid);
void Nova_Classe(int clientid);
void Sol(int clientid);
void Terra (int clientid);
void Vento (int clientid);
void Agua (int clientid);
void ComporIdeal(int ClientID,int npcid);
void Ordem_Vento(int ClientID,int npcid); // Composição Item para nova Classe
void Ordem_Terra(int ClientID,int npcid); // Composição Item para nova Classe
void Ordem_Agua(int ClientID,int npcid);  // Composição Item para nova Classe
void Ordem_Sol(int ClientID,int npcid);   // Composição Item para nova Classe
void Compor_Pedra_ReturnofGlory(int ClientID,int npcid); // Composição Item para nova Classe
//new Func
void DeleteMob(int mobid, int reason);
void pD1D(int clientid, int id, char *msg);
void pFDF(int clientid);
//void Login(char *Packet);//1234
void SendCharListe(char *Packet);
void RespawCreatMob(int clientid);
// Skill Extração
void SkillExtracao(BYTE *m_PacketBuffer);

//sistema de cash 
void saldo(int clientid,int npcid);
int vercash(int clientid);
void menoscash(int clientid, int valorcash);
void maiscash(int clientid, int valorcash);
void LogForAllCash(int clientid, char *frase);

BOOL ProcessClientMessage(int clientId, unsigned char *Msg);

#endif 