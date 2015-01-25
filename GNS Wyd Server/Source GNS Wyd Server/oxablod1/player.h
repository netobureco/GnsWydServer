

#ifndef __PLAYER_H__
#define __PLAYER_H__
#define PLAYER 100
#define MAX_CARACTER 16
#define MAX_USER 100
#define MAX_AFFECT





struct REQCREATECHAR
{
    PacketHeader Header;
    int SlotIndex;
    char Name[16];
    int ClassIndex;
};

typedef struct
{
   PacketHeader Header;
   char Name[16];
   char Pass[12];
   int Version;
   int Unknows;
   char Keys[16];
} p803;

typedef struct 
{
	int Delay;
	char Name[16];
	char Ip[16];

}Ip;

extern Ip vIp[100];

typedef struct  
{
	int CharId;
	int Log;

	char Name[MAX_CARACTER];

	st_Status Status;

	int Classe;
	
	int Fame;
	int selado;
	int Cristais;
	int bau;

	st_Item Manto;

	int PesaEnt;
	time_t PesaTime;

	int QuestInfo[40];

	int ArchPT;
	int Soul;
	

} sAcont;



typedef struct
{
	int CharSlot;

	char Login[16];
	char Senha[12];

	int RequestNum;
	char Numerica[6];

	char Ip[16];
	char tab[26];

	int Level[2][4];

	int Status;
	time_t BanDate;

	long int Cash;
	
	int Vipinfo;
	time_t Data;

	sAcont Acont[4];

}CConta;

extern CConta CCont[PLAYER];

//Char verde
typedef struct  
{ 
	PacketHeader Header; 
	char msg[96]; 
}p_D1D;

//MOvimento
typedef struct 
{
    PacketHeader Header;
    short xSrc, ySrc;
    int mSpeed;
    int mType;
    short xDst, yDst;
    char mCommand[24];
}p_366h;


//Ataque Recv 
typedef struct
{
 PacketHeader Header;

 WORD ClientId;
 WORD AtackCount;

 st_Position PositionInitial;
 st_Position PositionFinal;

 WORD SkillId; // SkillId

 WORD Offset_26; // Unknow
 WORD a2;

 BYTE Offset_29[10]; // 0x0...

 WORD AffectedMobId;

 WORD AffectInfo;
} SendAffect;

typedef struct 
{
	unsigned short TargetID;
	unsigned short Damage;
}STRUCT_DAM;// Struct do Damage com o Id do alvo

typedef struct
{
	PacketHeader Header;
	short AttackerID; // Id de quem Realiza o ataque
	short AttackCount;
	st_Position AttackerPos; // Posicao X e Y de quem Ataca
	st_Position TargetPos; // Posicao X e Y de quem Sofre o Ataque
	short SkillIndex; // Id da skill usada
	short CurrentMp; // Mp atual de quem Ataca
	char Motion;
	char SkillParm;
	char FlagLocal;
	char DoubleCritical; // 0 para critico Simples, 1 para critico Duplo
	int Hold;
	int CurrentExp;
	short ReqMp; // Mp necessario para usar a Skill
	short Rsv;

	STRUCT_DAM Dam[1];

} Packt_Atack;

// Request Action
typedef struct
{
    PacketHeader Header;
    short xSrc, ySrc;
    int mSpeed;
    int mType;
    short xDst, yDst;
    char mCommand[24];
} pCL_366h;
#endif