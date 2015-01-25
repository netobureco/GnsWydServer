// ---
// by ptr0x & Super
// ---

#ifndef __BASE_STRUCT_H__
#define __BASE_STRUCT_H__

#include <Windows.h>


// packet header 
typedef struct
{
	WORD Size;

	BYTE Key;
	BYTE CheckSum;

	WORD PacketId;
	WORD ClientID;

	DWORD TimeStamp;

} PacketHeader;

struct sTrade

{
char Name[24];
int Item[12];
BYTE Slot[12];
int Gold[12];
short Unknown;
short Index;
};
struct Beast_Bonus
{
        DWORD damage;//4
        DWORD unk;//8
        DWORD def;//12
        DWORD unkn[14];
};


typedef struct // Buy iTem
{
PacketHeader Header;
short MobID;
short SellSlot;
short InvSlot;
short Unknown1;
int Unknown2;
} p379;

typedef struct //Request Move Item
{
    PacketHeader Header;
    BYTE DstType;
    BYTE DstSlot;
    BYTE SrcType;
    BYTE SrcSlot;
    int Unknown;
}p376;
/*
typedef struct  // CreateItem (Drop mob)
{
	PacketHeader Header;
	short invType;
	short invSlot;
	st_Item itemlist;
}p182;*/
struct p333 
{ 
	PacketHeader Header;
	char eChat[96]; 
};



typedef struct  // Quiz
{ 
	PacketHeader Header;
	char Title[96]; 
	char Asw1[32]; 
	char Asw2[32]; 
	char Asw3[32];
	char Asw4[32]; 
}p_1C6;


//Command
typedef struct 
{
   PacketHeader Header;
   char eCommand[16];
   char eValue[100];
}p_334;
//Mob Dead
typedef struct 
{       
	PacketHeader Header;
	int Hold;
    short killed;
	short killer;
	int   Exp;
}p338;


typedef struct
{
	WORD X;
	WORD Y;
} st_Position;

typedef struct
{
	WORD Index;

	BYTE EF1, EFV1;
	BYTE EF2, EFV2;
	BYTE EF3, EFV3;
} st_Item;

typedef struct
{
	WORD Level;
	WORD Defense;
	WORD Attack;

    BYTE Merchant;
    BYTE ChaosRate;

	WORD maxHP, maxMP;
	WORD curHP, curMP;

	WORD STR, INT;
	WORD DEX, CON;

	BYTE wMaster;
	BYTE fMaster;
	BYTE sMaster;
	BYTE tMaster;
} st_Status;

typedef struct
{
	BYTE Name[16];
    BYTE CapeInfo;
	BYTE Merchant;
    WORD GuildIndex;
    BYTE ClassInfo;

    struct
    {
        BYTE SlowMov : 1;
        BYTE DrainHP : 1;
        BYTE VisionDrop : 1;
        BYTE Evasion : 1;
        BYTE Snoop : 1;
        BYTE SpeedMov : 1;
        BYTE SkillDelay : 1;
        BYTE Resist : 1;
    } AffectInfo;

    WORD QuestInfo;
    DWORD Gold;
    DWORD Exp;

    st_Position LastPosition;

    st_Status bStatus;
	st_Status Status;

    st_Item Equip[16];
	st_Item Inventory[64];

    DWORD Learn;

    WORD StatusPoint,
		 MasterPoint,
		 SkillPoint;// 749

	BYTE Critical;
    BYTE SaveMana;

    BYTE SkillBar[4];

    BYTE GuildMemberType;
    BYTE MagicIncrement;

    BYTE RegenHP,
		 RegenMP;

	BYTE Resist1,
		 Resist2,
		 Resist3,
		 Resist4;

	struct
	{
		WORD Index;
		WORD Master;
		WORD Value;
		WORD Time;
	} Affects[4];

	 BYTE SkillBar2[16];


     //Last Action
     DWORD srcX,srcY;
     int TimeStamp;
     WORD speed;
     WORD type;
     DWORD dstX,dstY;
     BYTE zeros[12];
     char command[24];


     BYTE Unknow2[150];//176
     char tab[26];
} MOB;

typedef struct
{
	BYTE Name[16];
    BYTE CapeInfo;
	BYTE Merchant;
    WORD GuildIndex;
    BYTE ClassInfo;

    struct
    {
        BYTE SlowMov : 1;
        BYTE DrainHP : 1;
        BYTE VisionDrop : 1;
        BYTE Evasion : 1;
        BYTE Snoop : 1;
        BYTE SpeedMov : 1;
        BYTE SkillDelay : 1;
        BYTE Resist : 1;
    } AffectInfo;

    WORD QuestInfo;
    DWORD Gold;
    DWORD Exp;

    st_Position LastPosition;

    st_Status bStatus;
	st_Status Status;

    st_Item Equip[16];
	st_Item Inventory[64];

    DWORD Learn;

    WORD StatusPoint,
		 MasterPoint,
		 SkillPoint;

	BYTE Critical;
    BYTE SaveMana;

    BYTE SkillBar[4];

    BYTE GuildMemberType;
    BYTE MagicIncrement;

    BYTE RegenHP,
		 RegenMP;

	BYTE Resist1,
		 Resist2,
		 Resist3,
		 Resist4;

	struct
	{
		WORD Index;
		WORD Master;
		WORD Value;
		WORD Time;
	} Affects[16];

	 BYTE SkillBar2[16];


     //Last Action
     DWORD srcX,srcY;// DWORD srCxA,srCyA;
     int TimeStamp;
     WORD speed;
     WORD type;
     DWORD dstX,dstY;
     BYTE zeros[12];
     char command[24];


     BYTE Unknow2[54];//176
     char tab[26];
} st_Mob_754;
typedef struct
{
	char Name[16];			// 0 a 15

	char CapeInfo;					// 16
	char Merchant;					// 17

	unsigned short GuildIndex;		// 18 a 19
	unsigned char ClassInfo;		// 20
	unsigned char AffectInfo;		// 21
	unsigned short QuestInfo;		// 22 a 23

	int Gold;						// 24 a 27
	unsigned int Exp;				// 28 a 31

	st_Position LastPosition;		// 32 a 35
	st_Status bStatus;				// 36 a 63
	st_Status Status;				// 64 a 91

	st_Item Equip[16];		// 92 a 219
	st_Item Inventory[64];	// 220 a 731

	unsigned int Learn;				// 732 a 735
	unsigned short StatusPoint;		// 736 a 737
	unsigned short MasterPoint;		// 738 a 739
	unsigned short SkillPoint;		// 740 a 741
	unsigned char Critical;			// 742
	unsigned char SaveMana;			// 743

	char SkillBar[4];				// 744 a 747
	char GuildMemberType;			// 748

	unsigned char MagicIncrement;	// 749

	unsigned char RegenHP;			// 750
	unsigned char RegenMP;			// 751

	char Resist1;					// 752
	char Resist2;					// 753
	char Resist3;					// 754
	char Resist4;					// 755
} stMOB754;


typedef struct
{
	PacketHeader Header;	

	st_Position Position;
	WORD ClientID;
	char Name[12];

	BYTE ChaosPoints;
    BYTE CurrentKill;
    WORD TotalKill;

	WORD Item_Refine[16];

	struct // Buffs
	{
    	BYTE Time;
    	BYTE Index;
	} Affect[4];
	
	WORD GuildIndex;

	st_Status Status;

	struct
	{
    	BYTE Type;
    	BYTE MemberType;
		char Tab[26];
	} Spawn;

	BYTE Unknow[2];
} p613_GetCreateMob;

typedef struct
{
	BYTE Name[16];
    BYTE CapeInfo;
	BYTE Merchant;
    WORD GuildIndex;
    BYTE ClassInfo;

    struct
    {
        BYTE SlowMov : 1;
        BYTE DrainHP : 1;
        BYTE VisionDrop : 1;
        BYTE Evasion : 1;
        BYTE Snoop : 1;
        BYTE SpeedMov : 1;
        BYTE SkillDelay : 1;
        BYTE Resist : 1;
    } AffectInfo;

    WORD QuestInfo;
    DWORD Gold;
    DWORD Exp;

    st_Position LastPosition;

    st_Status bStatus;
	st_Status Status;

    st_Item Equip[16];
	st_Item Inventory[64];

    DWORD Learn;

    WORD StatusPoint,
		 MasterPoint,
		 SkillPoint;// 749

	BYTE Critical;
    BYTE SaveMana;

    BYTE SkillBar[4];

    BYTE GuildMemberType;
    BYTE MagicIncrement;

    BYTE RegenHP,
		 RegenMP;
	     

	BYTE Resist1,
		 Resist2,
		 Resist3,
		 Resist4;

	struct
	{
		WORD Index;
		WORD Master;
		WORD Value;
		WORD Time;
	} Affects[4];

	 BYTE SkillBar2[16];


     //Last Action
     DWORD srcX,srcY;
     int TimeStamp;
     WORD speed;
     WORD type;
     DWORD dstX,dstY;
     BYTE zeros[12];
     char command[24];


     //BYTE Unknow2[150];//176
	 BYTE Unknow[252];
     char tab[26];
} st_Mob;

typedef struct
{
    int SkillPoint;
    int TargetType;
    int ManaSpent;
    int Delay;
    int Range;
    int InstanceType;
    int InstanceValue;
    int TickType;
    int TickValue;
    int AffectType;
    int AffectValue;
    int AffectTime;
    char Act_1[8];
    //char Act_2[8]; - só p/ 7xx
    int InstanceAttribute;
    int TickAttribute;
    int Aggressive;
    int Maxtarget;
    int PartyCheck;
    int AffectResist;
    int Passive_Check;
} st_AffectData;

typedef struct
{
	DWORD AtaqFisico;
	DWORD AtaqMagico;
	DWORD Unknow;
	DWORD Resistencia;
	DWORD Evasao;
} st_MountData;

/* v750 */
typedef struct
{
	//# Index,Name,Mesh-Texture,REQ_SIDC,Unique,EF_PRICE,EF_POS,Extreme,Grade,N0,V0,N1,V1,N2,V2,N3,V3,N4,V4,N5,V5,N6,V6,N7,V7,N8,V8,N9,V9,N10,V10,N11,V11//
	//"%d,%64s,%d.%d,%d.%d.%d.%d.%d,%d,%d,%d,%d,%d,
	//"%d,%64s,%d.%d,%d.%d.%d.%d.%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d"
    char Name[64];
	
    short mesh1;
	short mesh2;

	short unknow;

    short Level;
    short STR;
    short INT;
    short DEX;
    short CON;

    struct {
        short index;
        short value;
    } Effect[12];

    int Price;
    short Unique;
    WORD Pos;

    short Extreme;
    short Grade;
} st_ItemList;

typedef struct
{
	char tab[40];
} st_tab;

typedef struct
{
		WORD Index;
		WORD Master;
		WORD Value;
		WORD Time;
} st_affect;

typedef struct
{
	PacketHeader Header;

	st_Position Position;
	WORD ClientId;
	char Name[12];

	BYTE ChaosPoints;
    BYTE CurrentKill;
    WORD TotalKill;

	struct // Item equip
	{
    	BYTE ItemID;
    	BYTE Sanc;
	} ItemEff[16];

	struct // Buffs
	{
    	BYTE Time;
    	BYTE Index;
	} Affect[16];
	
	WORD GuildIndex;

	st_Status Status;

	struct
	{
    	BYTE Type;
    	BYTE MemberType;
	} Spawn;

	BYTE AnctCode[16];
	char Tab[26];

	BYTE Unknow[4];
} p754_GetCreateMob;

// Request Refresh Itens
typedef struct
{
    PacketHeader Header;

    struct
    {
        unsigned short ItemID : 12;
        unsigned short Sanc : 4;
    } ItemEff[16];

    char pAnctCode[16];
} pCL_36Bh;

// Request Refresh Inventory
typedef struct
{
    PacketHeader Header;
	st_Item Inventory[64];
    int gold;
} pCL_185h;


typedef struct
{
	PacketHeader Header;

	st_Position Position;
	WORD ClientID;
	char Name[12];

	BYTE ChaosPoints;
    BYTE CurrentKill;
    WORD TotalKill;

	struct // Item equip
	{
    	BYTE ItemID;
    	BYTE Sanc;
	} ItemEff[16];

	struct // Buffs
	{
    	BYTE Time;
    	BYTE Index;
	} Affect[16];
	
	WORD GuildIndex;

	st_Status Status;

	struct
	{
    	BYTE Type;
    	BYTE MemberType;
	} Spawn;

	BYTE AnctCode[16];
	char Tab[26];

	BYTE Unknow[4];
} Spawn;

struct CriarArch //arch new slot1
{
PacketHeader Header; // Offset 00
int Slot; // Offset 12
char NewCharName[16]; // Offset 16
int Class; // Offset 32
st_Mob nArch;
};


struct MSG_DBCreateArch // oficiial arch new slot
{
PacketHeader Header;

int charSlot;
st_Mob Mob;
};

struct MSG_DeleteCharacter // delete char
{
PacketHeader Header;

int Slot;

char MobName[16]; 
char Password[12];
};




//// STRUCT CHAR BASE [stmob- affects] não mostra mensagem Nome ja existente - arch new slot
typedef struct {
char Name[16]; // 0 a 15

char CapeInfo; // 16
char Merchant; // 17

unsigned short GuildIndex; // 18 a 19
unsigned char ClassInfo; // 20
unsigned char AffectInfo; // 21
unsigned short QuestInfo; // 22 a 23

int Gold; // 24 a 27
unsigned int Exp; // 28 a 31

st_Position LastPosition; // 32 a 35
st_Status bStatus; // 36 a 63
st_Status Status; // 64 a 91

st_Item Equip[16]; // 92 a 219
st_Item Inv[64]; // 220 a 731

unsigned int Learn; // 732 a 735
unsigned short StatusPoint; // 736 a 737
unsigned short MasterPoint; // 738 a 739
unsigned short SkillPoint; // 740 a 741
unsigned char Critical; // 742
unsigned char SaveMana; // 743

char SkillBar[4]; // 744 a 747
char GuildMemberType; // 748

unsigned char MagicIncrement; // 749

unsigned char RegenHP; // 750
unsigned char RegenMP; // 751

char Resist1; // 752
char Resist2; // 753
char Resist3; // 754
char Resist4; // 755


} st_CharBase;



typedef struct //Use Item
{
   PacketHeader Header;
   DWORD SrcType;
   DWORD SrcSlot;
   DWORD DstType;
   DWORD DstSlot;
   WORD PosX;
   WORD PosY;
   int unk;
}Volatile;

struct Ailyn//opcode 2D2
{
 PacketHeader Header;

 struct
 {
  WORD Index;
  BYTE EF1;
  BYTE EFV1;
  BYTE EF2;
  BYTE EFV2;
  BYTE EF3;
  BYTE EFV3;
 }Itens[7];

 BYTE unknown[16];

};
typedef struct
{
 PacketHeader Header;

 st_Item Item[7];

 BYTE unknown_[8];
 BYTE slot[7];
 BYTE unk;

} sOdin;//Odin [0x02D2]

struct Tiny//opcode 3c0
{
 PacketHeader Header;

 struct
 {
  WORD Index;
  BYTE EF1;
  BYTE EFV1;
  BYTE EF2;
  BYTE EFV2;
  BYTE EF3;
  BYTE EFV3;
 }Itens[2];
};




struct Agathas//opcode 3c0
{
 PacketHeader Header;

 struct
 {
  WORD Index;
  BYTE EF1;
  BYTE EFV1;
  BYTE EF2;
  BYTE EFV2;
  BYTE EF3;
  BYTE EFV3;
 }Itens[6];

 BYTE unknown[24];
};


typedef struct
{
	int GuildCode;
	int GuildCode2;
	int Guild;
	char Name[16];
	char Sub[3][16];
} st_Guild;

typedef struct
{
	int total;
	int uID;
} C_Guild;

typedef struct
{
	PacketHeader Header;

	st_Position Position;

	WORD ClientID; // precisa confirmar

	char CharName[12];

	BYTE Unknow[4];

	struct
	{
		WORD ItemId : 12;
		WORD Sanc : 4;
	}Equips[16];

	BYTE _Unknow[10];

	st_Status Status;

	WORD ___Unknow;

	char StoreName[26];
} p613_GetCreateMobTrade;

typedef struct
{
	PacketHeader Header;

	st_Position Position;

	WORD ClientID; // precisa confirmar

	char CharName[12];

	DWORD Unknow;

	struct
	{
		WORD ItemId : 12;
		WORD Sanc : 4;
	}Equips[16];

	BYTE _Unknow[34];

	st_Status Status;

	BYTE ___Unknow[45];

	char StoreName[27];
} p754_GetCreateMobTrade;

typedef struct
{
	PacketHeader Header;

	WORD ClientID;
	WORD AtackCount;

	st_Position PositionInitial;	
	st_Position PositionFinal;

	WORD SkillId; // SkillId

	WORD Offset_26; // Unknow
	WORD a2;

	BYTE Offset_29[10]; // 0x0...

	WORD AffectedMobId;

	WORD AffectInfo;
} p613_SendAffect;

typedef struct
{
	PacketHeader Header;

	WORD ClientID;
	WORD AtackCount;

	st_Position PositionInitial;
	st_Position PositionFinal;

	WORD SkillId; // SkillId

	DWORD Offset_26; // Unknow

	BYTE Offset_29[10]; // 0x0...

	DWORD Hold; // Possível hold...

	WORD affectedMobId;

	WORD affectInfo;
} p754_SendAffect;

typedef struct
{
	BYTE Index;
	BYTE Master;
	WORD Value;
	DWORD Time;
} p_Affect;

typedef struct
{
	PacketHeader Header;

	p_Affect Affect[16];
} p754_GetAffect;

typedef struct 
{
	PacketHeader Header;

	DWORD Exp;
	DWORD Learn;

	WORD pStatus;
	WORD pMaster;
	WORD pSkills;
	WORD Magic; // Unknow

	DWORD Gold;
} p613_SendEtc;

typedef struct 
{
	PacketHeader Header;

	DWORD Hold;
	DWORD Exp;
	DWORD Learn;

	WORD pStatus;
	WORD pMaster;
	WORD pSkills;
	WORD Magic; // Unknow

	DWORD Gold;
} p754_SendEtc;


typedef struct
{
	PacketHeader Header;

	st_Status Status;

	BYTE Critical;
	BYTE SaveMana;

	struct
	{
		WORD Time : 8;
		WORD Index : 8;
	} Affect[4];

	BYTE GuildMemberType,
		 MagicIncrement;

	BYTE RegenHP,
		 RegenMP;

	BYTE Resist1;
	BYTE Resist2;
	BYTE Resist3;
	BYTE Resist4;

	WORD CurrHP;
	WORD CurrMP;

	BYTE Unknow[2];
} p613_SendScore;

typedef struct
{
	PacketHeader Header; // 12

	st_Status Status; // 40

	BYTE Critical;
	BYTE SaveMana;

	struct
	{
		BYTE Time;
		BYTE Index;
	} Affect[16];

	BYTE GuildMemberType,
		 GuildIndex;

	BYTE RegenHP,
		 RegenMP;

	BYTE Resist1;
	BYTE Resist2;
	BYTE Resist3;
	BYTE Resist4;

	WORD CurrHP;
	WORD CurrMP;
	
	WORD MagicIncrement;
	BYTE Unk[4];
} p754_SendScore;

typedef struct
{
	PacketHeader Header;

	st_Item TradeItem[8];
	BYTE TradeItemSlot[8];

	BYTE TradeInfo[8];
} p613_SendTrade;

typedef struct
{
	PacketHeader Header;

	st_Item TradeItem[15];
	BYTE TradeItemSlot[15];

	BYTE Unknow;

	BYTE TradeInfo[8];
} p754_SendTrade;

//NPC CLICK
typedef struct
{
	PacketHeader Header;
	WORD npcid;
	BYTE Unknow1;
	BYTE Unknow2;
	short ClickOk;
}p28B;
//outros 
//Primeira linha de itens do NPC 0 á 8
//Segunda linha de itens do NPC 27 á 35
//Terceira linha de itens do NPC 54 á 62
typedef struct
{
 PacketHeader Header;
 int type;
}p165;
typedef struct//Request Move Item
{
	PacketHeader Header;
	BYTE destType;
	BYTE destSlot;
	BYTE srcType;
	BYTE srcSlot;
	int Unknown;
}MoveItem;

struct Log //opcode login
{
	
	   PacketHeader Header;
	   char Name[16];
	   char Pwd[12];

	   int Version;
	   int unk1;

	   char Keys[16];
	   char Address[16];

};
//  Struct completa

struct p373
{
    PacketHeader *Header;

    WORD SrcType;
    WORD SrcSlot;
    WORD DstType;
    WORD DstSlot;

    WORD PosX;
    WORD PosY;
    WORD Warp;
};

struct p3A1 {
	PacketHeader Header;
	int Tempo;
};

struct p3B0 {
	PacketHeader Header;
	int Left;
};
typedef struct 
{
	PacketHeader header;
	char msg[388];
	char title[400];
}p_7b1;
// Packet 0x277 - Adicionar pontos 
//  OBS: A struct não está completa (quse certeza)
struct p277
{
   PacketHeader Header;
   short Mode;
   short Info;
   int unk;
};
#define EF_MAGIC 60
struct st_OtherItem {
	WORD Index;
	struct {
		BYTE Index; 
		BYTE Value;
	} Effects[3];
};
#endif // __BASE_STRUCT_H__