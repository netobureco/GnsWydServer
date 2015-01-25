//*****
// By TheHouse
//*****

#include "Stdafx.h"
#include "Envoc.h"


int WarNoatumType;
#define NAKE __declspec(naked) void
#define playon 127

void SetJMP(INT32 dwOLD, INT32 dwNEW, INT32 Size)
{
	DWORD OldProt = PAGE_EXECUTE_READWRITE;
	VirtualProtect((void*)(dwOLD), Size, OldProt, &OldProt);
	memset((void*)(dwOLD), 0x90, Size);
	*(BYTE*)(dwOLD) = 0xE9;
	*(DWORD*)(dwOLD + 1) = dwNEW - dwOLD - 5;
	VirtualProtect((void*)(dwOLD), Size, OldProt, &OldProt);
}
int jmp_address;
st_NewBuffs NewSkillBuffer[30000];

__declspec(naked) void NKD_Buff3() // 0x410EF7 nop 5
{ 
static int SkillID; 
static int clientid;
SkillID = NewSkillBuffer[clientid].Affects[0].Index;
__asm MOV ECX, SkillID
__asm MOV jmp_address, 0x410F01
__asm JMP jmp_address
}


NAKE NKD_Pontos()
{
	_asm
	{
		MOV EAX,0x04020c9
		JMP EAX
	}
}
static int olay = 0;
int Notice()
{
	int cMin = PInt(0x00A5EA414);
	int cHor = PInt(0x00A5EA418);
	if(cMin == 0 || cMin == 1)
	{
		if(olay == 0 && cHor == 21)
		{
			SendNotice("O Coliseu terá inicio em 5 minutos.");
			olay = 1;
			return 1;
		}
	}
	else if(cMin >= 30)
	{
		olay = 0;
	}
	return 0;
}
NAKE ColiseuAbre()
{
	int continua, func;
	_asm
	{
		MOV continua, 0x458278
		MOV func, 0x458283
		MOV EDX,DWORD PTR SS:[EBP-0x1C]
		CMP EDX,10
		JE opa
		CMP EDX,14
		JE opa
		CMP EDX,16
		JE opa
		CMP EDX,18
		JE opa
		CMP EDX,21
		JE opa
		JMP continua
opa:
		CALL Notice
		JMP func
	}
}
NAKE ExpLevel()
{
	__asm
	{
		PUSH [EBP + 0x8]
		CALL AddExp
		ADD ESP, 4

		MOV EAX, 0x438d57
		JMP EAX
	}
}

int jmp_addr = 0x0404D55;
NAKE Refines() //0x404D55 
{ 
__asm 
{ 
// 230 
CMP DWORD PTR SS:[EBP - 0x8], 0xE6 
JNE Refine231 
MOV DWORD PTR SS:[EBP - 0x8], 0xA 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 231 
Refine231: 
CMP DWORD PTR SS:[EBP - 0x8], 0xE7 
JNE Refine232 
MOV DWORD PTR SS:[EBP - 0x8], 0xA 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 232 
Refine232: 
CMP DWORD PTR SS:[EBP - 0x8], 0xE8 
JNE Refine233 
MOV DWORD PTR SS:[EBP - 0x8], 0xA 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 233 
Refine233: 
CMP DWORD PTR SS:[EBP - 0x8], 0xE9 
JNE Refine234 
MOV DWORD PTR SS:[EBP - 0x8], 0xA 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 234 
Refine234: 
CMP DWORD PTR SS:[EBP - 0x8], 0xEA 
JNE Refine235 
MOV DWORD PTR SS:[EBP - 0x8], 0xB 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 235 
Refine235: 
CMP DWORD PTR SS:[EBP - 0x8], 0xEB 
JNE Refine236 
MOV DWORD PTR SS:[EBP - 0x8], 0xB 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 236 
Refine236: 
CMP DWORD PTR SS:[EBP - 0x8], 0xEC 
JNE Refine237 
MOV DWORD PTR SS:[EBP - 0x8], 0xB 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 237 
Refine237: 
CMP DWORD PTR SS:[EBP - 0x8], 0xED 
JNE Refine238 
MOV DWORD PTR SS:[EBP - 0x8], 0xB 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 238 
Refine238: 
CMP DWORD PTR SS:[EBP - 0x8], 0xEE 
JNE Refine239 
MOV DWORD PTR SS:[EBP - 0x8], 0xC 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 239 
Refine239: 
CMP DWORD PTR SS:[EBP - 0x8], 0xEF 
JNE Refine240 
MOV DWORD PTR SS:[EBP - 0x8], 0xC 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 240 
Refine240: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF0 
JNE Refine241 
MOV DWORD PTR SS:[EBP - 0x8], 0xC 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 241 
Refine241: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF1 
JNE Refine242 
MOV DWORD PTR SS:[EBP - 0x8], 0xC 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 242 
Refine242: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF2 
JNE Refine243 
MOV DWORD PTR SS:[EBP - 0x8], 0xD 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 243 
Refine243: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF3 
JNE Refine244 
MOV DWORD PTR SS:[EBP - 0x8], 0xD 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 244 
Refine244: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF4 
JNE Refine245 
MOV DWORD PTR SS:[EBP - 0x8], 0xD
 MOV jmp_addr, 0x404DCF 
 JMP jmp_addr 
// 245 
Refine245: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF5 
JNE Refine246 
MOV DWORD PTR SS:[EBP - 0x8], 0xD 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 246 
Refine246: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF6 
JNE Refine247 
MOV DWORD PTR SS:[EBP - 0x8], 0xE 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 247 
Refine247: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF7 
JNE Refine248 
MOV DWORD PTR SS:[EBP - 0x8], 0xE 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 248 
Refine248: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF8 
JNE Refine249 
MOV DWORD PTR SS:[EBP - 0x8], 0xE 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 249 
Refine249: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF9 
JNE Refine250 
MOV DWORD PTR SS:[EBP - 0x8], 0xE 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 250 
Refine250: 
CMP DWORD PTR SS:[EBP - 0x8], 0xFA 
JNE Refine251 
MOV DWORD PTR SS:[EBP - 0x8], 0xF 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 251 
Refine251: 
CMP DWORD PTR SS:[EBP - 0x8], 0xFB 
JNE Refine252 
MOV DWORD PTR SS:[EBP - 0x8], 0xF 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 252 
Refine252: 
CMP DWORD PTR SS:[EBP - 0x8], 0xFC 
JNE Refine253 
MOV DWORD PTR SS:[EBP - 0x8], 0xF 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 253 
Refine253: 
CMP DWORD PTR SS:[EBP - 0x8], 0xFD 
JNE Last 
MOV DWORD PTR SS:[EBP - 0x8], 0xF 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
/* 
// 254 
Refine254: 
CMP DWORD PTR SS:[EBP - 0x8], 0xFE 
JNE Refine255 
MOV DWORD PTR SS:[EBP - 0x8], 0x10 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 255 
Refine255: 
CMP DWORD PTR SS:[EBP - 0x8], 0xFF 
JNE Last
MOV DWORD PTR SS:[EBP - 0x8], 0x10 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr*/ 
Last: 
MOV jmp_addr, 0x404DC1 
JMP jmp_addr 
} 
}
NAKE Refines2()
{
        _asm
        {
        MOV BYTE PTR SS:[EBP-0x4],0
        MOV ECX,DWORD PTR SS:[EBP+0x8]
        MOVSX EDX,BYTE PTR DS:[ECX+0x2]
        CMP EDX,0x2B
        JE refi2
        CMP EDX,116
        JE refi2
        CMP EDX,117
        JE refi2
        CMP EDX,118
        JE refi2
        CMP EDX,119
        JE refi2
        CMP EDX,120
        JE refi2
        CMP EDX,121
        JE refi2
        CMP EDX,122
        JE refi2
        CMP EDX,123
        JE refi2
        CMP EDX,124
        JE refi2
        CMP EDX,125
        JE refi2
        MOV EAX,DWORD PTR SS:[EBP+0x8]
        MOVSX ECX,BYTE PTR DS:[EAX+0x4]
        CMP ECX,0x2B
        JE refi2
        CMP ECX,116
        JE refi2
        CMP ECX,117
        JE refi2
        CMP ECX,118
        JE refi2
        CMP ECX,119
        JE refi2
        CMP ECX,120
        JE refi2
        CMP ECX,121
        JE refi2
        CMP ECX,122
        JE refi2
        CMP ECX,123
        JE refi2
        CMP ECX,124
        JE refi2
        CMP ECX,125
        JE refi2
        MOV EDX,DWORD PTR SS:[EBP+0x8]
        MOVSX EAX,BYTE PTR DS:[EDX+0x6]
        CMP EAX,0x2B
        JNE refi7
        CMP EAX,116
        JNE refi7
        CMP EAX,117
        JNE refi7
        CMP EAX,118
        JNE refi7
        CMP EAX,119
        JNE refi7
        CMP EAX,120
        JNE refi7
        CMP EAX,121
        JNE refi7
        CMP EAX,122
        JNE refi7
        CMP EAX,123
        JNE refi7
        CMP EAX,124
        JNE refi7
        CMP EAX,125
        JNE refi7
refi2:
        MOV ECX,DWORD PTR SS:[EBP+0x8]
        MOVSX EDX,BYTE PTR DS:[ECX+0x2]
        CMP EDX,0x2B
        JNE refi3
        CMP EDX,116
        JNE refi3
        CMP EDX,117
        JNE refi3
        CMP EDX,118
        JNE refi3
        CMP EDX,119
        JNE refi3
        CMP EDX,120
        JNE refi3
        CMP EDX,121
        JNE refi3
        CMP EDX,122
        JNE refi3
        CMP EDX,123
        JNE refi3
        CMP EDX,124
        JNE refi3
        CMP EDX,125
        JNE refi3
refi3:
        MOV EAX,DWORD PTR SS:[EBP+0x8]
        MOV CL,BYTE PTR DS:[EAX+0x3]
        MOV BYTE PTR SS:[EBP-0x4],CL
        JMP refi7
        MOV EDX,DWORD PTR SS:[EBP+0x8]
        MOVSX EAX,BYTE PTR DS:[EDX+0x4]
        CMP EAX,0x2B
        JNE refi6
        CMP EAX,116
        JNE refi6
        CMP EAX,117
        JNE refi6
        CMP EAX,118
        JNE refi6
        CMP EAX,119
        JNE refi6
        CMP EAX,120
        JNE refi6
        CMP EAX,121
        JNE refi6
        CMP EAX,122
        JNE refi6
        CMP EAX,123
        JNE refi6
        CMP EAX,124
        JNE refi6
        CMP EAX,125
        JNE refi6
        MOV ECX,DWORD PTR SS:[EBP+0x8]
        MOV DL,BYTE PTR DS:[ECX+0x5]
        MOV BYTE PTR SS:[EBP-0x4],DL
        JMP refi7

refi6:
        MOV EAX,DWORD PTR SS:[EBP+0x8]
        MOV CL,BYTE PTR DS:[EAX+0x7]
        MOV BYTE PTR SS:[EBP-0x4],CL
        JMP refi7
refi7:
        MOV EDX,DWORD PTR SS:[EBP-0x4]
        AND EDX,0xFF
        MOV DWORD PTR SS:[EBP-0x8],EDX
        CMP DWORD PTR SS:[EBP - 0x8], 0xE6
        JNE Refine231
        MOV DWORD PTR SS:[EBP - 0x8], 0xA
        MOV EAX, 0x404DCF
        JMP EAX
// 230 
CMP DWORD PTR SS:[EBP - 0x8], 0xE6 
JNE Refine231 
MOV DWORD PTR SS:[EBP - 0x8], 0xA 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 231 
Refine231: 
CMP DWORD PTR SS:[EBP - 0x8], 0xE7 
JNE Refine232 
MOV DWORD PTR SS:[EBP - 0x8], 0xA 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 232 
Refine232: 
CMP DWORD PTR SS:[EBP - 0x8], 0xE8 
JNE Refine233 
MOV DWORD PTR SS:[EBP - 0x8], 0xA 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 233 
Refine233: 
CMP DWORD PTR SS:[EBP - 0x8], 0xE9 
JNE Refine234 
MOV DWORD PTR SS:[EBP - 0x8], 0xA 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 234 
Refine234: 
CMP DWORD PTR SS:[EBP - 0x8], 0xEA 
JNE Refine235 
MOV DWORD PTR SS:[EBP - 0x8], 0xB 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 235 
Refine235: 
CMP DWORD PTR SS:[EBP - 0x8], 0xEB 
JNE Refine236 
MOV DWORD PTR SS:[EBP - 0x8], 0xB 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 236 
Refine236: 
CMP DWORD PTR SS:[EBP - 0x8], 0xEC 
JNE Refine237 
MOV DWORD PTR SS:[EBP - 0x8], 0xB 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 237 
Refine237: 
CMP DWORD PTR SS:[EBP - 0x8], 0xED 
JNE Refine238 
MOV DWORD PTR SS:[EBP - 0x8], 0xB 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 238 
Refine238: 
CMP DWORD PTR SS:[EBP - 0x8], 0xEE 
JNE Refine239 
MOV DWORD PTR SS:[EBP - 0x8], 0xC 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 239 
Refine239: 
CMP DWORD PTR SS:[EBP - 0x8], 0xEF 
JNE Refine240 
MOV DWORD PTR SS:[EBP - 0x8], 0xC 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 240 
Refine240: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF0 
JNE Refine241 
MOV DWORD PTR SS:[EBP - 0x8], 0xC 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 241 
Refine241: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF1 
JNE Refine242 
MOV DWORD PTR SS:[EBP - 0x8], 0xC 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 242 
Refine242: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF2 
JNE Refine243 
MOV DWORD PTR SS:[EBP - 0x8], 0xD 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 243 
Refine243: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF3 
JNE Refine244 
MOV DWORD PTR SS:[EBP - 0x8], 0xD 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 244 
Refine244: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF4 
JNE Refine245 
MOV DWORD PTR SS:[EBP - 0x8], 0xD
 MOV jmp_addr, 0x404DCF 
 JMP jmp_addr 
// 245 
Refine245: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF5 
JNE Refine246 
MOV DWORD PTR SS:[EBP - 0x8], 0xD 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 246 
Refine246: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF6 
JNE Refine247 
MOV DWORD PTR SS:[EBP - 0x8], 0xE 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 247 
Refine247: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF7 
JNE Refine248 
MOV DWORD PTR SS:[EBP - 0x8], 0xE 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 248 
Refine248: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF8 
JNE Refine249 
MOV DWORD PTR SS:[EBP - 0x8], 0xE 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 249 
Refine249: 
CMP DWORD PTR SS:[EBP - 0x8], 0xF9 
JNE Refine250 
MOV DWORD PTR SS:[EBP - 0x8], 0xE 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 250 
Refine250: 
CMP DWORD PTR SS:[EBP - 0x8], 0xFA 
JNE Refine251 
MOV DWORD PTR SS:[EBP - 0x8], 0xF 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 251 
Refine251: 
CMP DWORD PTR SS:[EBP - 0x8], 0xFB 
JNE Refine252 
MOV DWORD PTR SS:[EBP - 0x8], 0xF 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 252 
Refine252: 
CMP DWORD PTR SS:[EBP - 0x8], 0xFC 
JNE Refine253 
MOV DWORD PTR SS:[EBP - 0x8], 0xF 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 253 
Refine253: 
CMP DWORD PTR SS:[EBP - 0x8], 0xFD 
JNE Last 
MOV DWORD PTR SS:[EBP - 0x8], 0xF 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
/* 
// 254 
Refine254: 
CMP DWORD PTR SS:[EBP - 0x8], 0xFE 
JNE Refine255 
MOV DWORD PTR SS:[EBP - 0x8], 0x10 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr 
// 255 
Refine255: 
CMP DWORD PTR SS:[EBP - 0x8], 0xFF 
JNE Last
MOV DWORD PTR SS:[EBP - 0x8], 0x10 
MOV jmp_addr, 0x404DCF 
JMP jmp_addr*/ 
Last:
                MOV EAX, 0x404DC1
                JMP EAX
        }
}
NAKE guerra2()
{
	int volta;
	_asm
	{
		//MOV volta,0x457aed
		MOV volta,0x457ac1
		JMP volta
	}
}
NAKE DIFER1()
{
	int volta;
	_asm
	{
		MOV volta, 0x4387BD
		JMP volta
	}
}
NAKE DIFER2()
{
	int volta;
	_asm
	{
		MOV volta, 0x438ac1
		JMP volta
	}
}
NAKE ptdebug()
{
	int volta;
	_asm
	{
		MOV volta, 0x438913
		JMP volta
	}
}
NAKE Refines3()
{
        _asm
        {
                MOV BYTE PTR SS:[EBP-0x04],0
                MOV ECX,DWORD PTR SS:[EBP+0x08]
                MOVSX EDX,BYTE PTR DS:[ECX+0x02]
                CMP EDX,0x02B
                JE vai1
                CMP EDX,116
                JE vai1
                CMP EDX,117
                JE vai1
                CMP EDX,118
                JE vai1
                CMP EDX,119
                JE vai1
                CMP EDX,120
                JE vai1
                CMP EDX,121
                JE vai1
                CMP EDX,122
                JE vai1
                CMP EDX,123
                JE vai1
                CMP EDX,124
                JE vai1
                CMP EDX,125
                JE vai1
                MOV EAX,DWORD PTR SS:[EBP+0x08]
                MOVSX ECX,BYTE PTR DS:[EAX+0x04]
                CMP ECX,0x02B
                JE vai1
                CMP EDX,116
                JE vai1
                CMP EDX,117
                JE vai1
                CMP EDX,118
                JE vai1
                CMP EDX,119
                JE vai1
                CMP EDX,120
                JE vai1
                CMP EDX,121
                JE vai1
                CMP EDX,122
                JE vai1
                CMP EDX,123
                JE vai1
                CMP EDX,124
                JE vai1
                CMP EDX,125
                JE vai1
                MOV EDX,DWORD PTR SS:[EBP+0x08]
                MOVSX EAX,BYTE PTR DS:[EDX+0x06]
                CMP EAX,0x02B
                JNE vai4
                CMP EDX,116
                JNE vai4
                CMP EDX,117
                JNE vai4
                CMP EDX,118
                JNE vai4
                CMP EDX,119
                JNE vai4
                CMP EDX,120
                JNE vai4
                CMP EDX,121
                JNE vai4
                CMP EDX,122
                JNE vai4
                CMP EDX,123
                JNE vai4
                CMP EDX,124
                JNE vai4
                CMP EDX,125
                JNE vai4
                JMP vai1
vai1:
                MOV ECX,DWORD PTR SS:[EBP+0x08]
                MOVSX EDX,BYTE PTR DS:[ECX+0x02]
                CMP EDX,0x02B
                JNE vai2
                CMP EDX,116
                JNE vai2
                CMP EDX,117
                JNE vai2
                CMP EDX,118
                JNE vai2
                CMP EDX,119
                JNE vai2
                CMP EDX,120
                JNE vai2
                CMP EDX,121
                JNE vai2
                CMP EDX,122
                JNE vai2
                CMP EDX,123
                JNE vai2
                CMP EDX,124
                JNE vai2
                CMP EDX,125
                JNE vai2
                MOV EAX,DWORD PTR SS:[EBP+0x08]
                MOV CL,BYTE PTR DS:[EAX+0x03]
                MOV BYTE PTR SS:[EBP-0x04],CL
                JMP vai4
                JMP vai2
vai2:
                MOV EDX,DWORD PTR SS:[EBP+0x08]
                MOVSX EAX,BYTE PTR DS:[EDX+0x04]
                CMP EAX,0x02B
                JNE vai3
                CMP EDX,116
                JNE vai3
                CMP EDX,117
                JNE vai3
                CMP EDX,118
                JNE vai3
                CMP EDX,119
                JNE vai3
                CMP EDX,120
                JNE vai3
                CMP EDX,121
                JNE vai3
                CMP EDX,122
                JNE vai3
                CMP EDX,123
                JNE vai3
                CMP EDX,124
                JNE vai3
                CMP EDX,125
                JNE vai3
                MOV ECX,DWORD PTR SS:[EBP+0x08]
                MOV DL,BYTE PTR DS:[ECX+0x05]
                MOV BYTE PTR SS:[EBP-4],DL
                JMP vai4
vai3:
                MOV EAX,DWORD PTR SS:[EBP+0x08]
                MOV CL,BYTE PTR DS:[EAX+0x07]
                MOV BYTE PTR SS:[EBP-0x04],CL
                JE vai4
                JMP vai4
vai4:
                MOV EDX,DWORD PTR SS:[EBP-0x04]
                AND EDX,0x0FF
                MOV DWORD PTR SS:[EBP-0x08],EDX
                MOV EAX, 0x404ED2
                JMP EAX
        }
}
int BuySkillCele(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(player->Equip[0].EFV2 >= 3)
	{
		return 1;
	}
	return 0;
}
NAKE SkillLvCele()
{
	int volta, vai, adr, adr2;
	_asm
	{
		MOV volta, 0x438d57
		MOV vai, 0x4368c2
		MOV adr, 0x7d3cd8
		MOV adr2, 0x4010ff
		PUSH [EBP + 0x8]
		CALL BuySkillCele
		ADD ESP,4
		CMP EAX,1
		JE succ
		PUSH adr
		MOV EAX,DWORD PTR SS:[EBP+8]
		PUSH EAX
		CALL adr2
		ADD ESP,8
		JMP volta
succ:
		JMP vai
	}
}


void __declspec(naked) Recv(){
	static const DWORD dwContinue = 0x0044AF71;
	__asm{
		MOV EAX, DWORD PTR SS:[EBP-54h]
		MOV DWORD PTR SS:[EBP-58h], EAX
		PUSH DWORD PTR SS:[EBP-40h]
		PUSH DWORD PTR DS:[EBP-54h]
		CALL Hooks::PacketControlFix
		JMP dwContinue
	}
}
__declspec(naked) void NKD_PACKETS()
{
	static int Calleu = 0x4012D5;
	static int JE1 = 0x44AFC0;
	static int JMP1 = 0x44af87;
	__asm
	{
	PUSH EAX
	
	ADD ESP,4
	MOV ECX,DWORD PTR SS:[EBP-0x58]
	PUSH ECX
	CALL Calleu
	ADD ESP,4
	TEST EAX,EAX
	JE JE2
	JMP JMP1
JE2:
	JMP JE1
	}
}
void __declspec(naked) CloseUser(){
	static const DWORD dwContinue = 0x0045946C;
	__asm{
		PUSH DWORD PTR SS:[EBP+08h]
		CALL Hooks::CloseUser
		MOV DWORD PTR SS:[EBP-08h], 00h
		JMP dwContinue
	}
}

void __declspec(naked) EXP(){ 
	static const DWORD dwContinue = 0x0045C536;
	__asm
	{
		LEA ECX, DWORD PTR SS:[EBP-220h]
		PUSH ECX
		PUSH DWORD PTR SS:[EBP-20Ch]
		//CALL ExpControl
		//CALL Controle_Exp
		MOV EAX, DWORD PTR SS:[EBP-20Ch]
		IMUL EAX, EAX, 410h
		MOV ECX, DWORD PTR SS:[EBP-220h]
		ADD DWORD PTR DS:[EAX+015C69D4h], ECX
		JMP dwContinue
	}
}
NAKE NKD_EXP()
{
	int volta;
	_asm
	{
		MOV volta, 0x045C536
		PUSH [EBP-0x220]
		PUSH [EBP-0x20C]
		CALL Controle_Exp
        ADD ESP,0x08
		JMP volta;
	}
}
NAKE AcceptUser()
{
	static const DWORD dwContinue[2] = {0x0041A3EF, 0x0041A411};
	
	__asm
	{
		MOV DWORD PTR SS:[EBP-20h], EAX
		PUSH EAX
		MOV EAX, DWORD PTR SS:[EBP-04h]
		SUB EAX, 07B318C8h
		MOV ECX, 0C4Ch
		XOR EDX, EDX
		IDIV ECX
		PUSH EAX
		CALL Hooks::AcceptUser
		CMP EAX, 01h
		JE Banned
		MOV EAX, DWORD PTR SS:[EBP-04h]
		JMP dwContinue
	
Banned:
		XOR EAX, EAX
		JMP dwContinue + 04h
	}
}

NAKE Sub2Off()
{
	int continua;
	_asm
	{
		MOV continua, 0x41b755
		JMP continua
	}
}
NAKE NKD_Merchante10()
{
	int volta,fim;
	_asm
	{
		MOV volta, 0x42a729
		MOV fim, 0x438d57
		PUSH [EBP-0x830]
		PUSH [EBP+0x8]
		CALL NPCFunc2
		ADD ESP,8
		CMP EAX, 1
		JE pula
		MOV EAX,DWORD PTR SS:[EBP+8]
		IMUL EAX,EAX,0x410
		MOV ECX,DWORD PTR SS:[EBP-0xC00]
		JMP volta
pula:
		JMP fim
	}
}
NAKE NKD_PremioLv()
{
	int volta;
	_asm
	{
		MOV volta, 0x428440
		PUSH [EBP + 0x8]
		//CALL PremioLv
		ADD ESP, 4
		JMP volta

	}
}
NAKE NKD_Merchante15()
{
	static int saida = 0x42b607;
	__asm
	{
		PUSH [EBP-0x830]
		PUSH [EBP+0x8]
		ADD ESP,4
		CMP EAX,0
		JE sucess
		MOV EDX,DWORD PTR SS:[EBP-0x830]
		IMUL EDX,EDX,0x410
		MOVSX EAX,BYTE PTR DS:[EDX+0x15C69C8]
		MOV DWORD PTR SS:[EBP-0xC74],EAX
		JMP saida
sucess:
		RETN

	}
}
NAKE ShamanFix1()
{
	int continua;
	_asm
	{
		MOV continua, 0x42b2d8
		PUSH [EBP+8]
		CALL Shaman
		ADD ESP,4
		MOV EAX,DWORD PTR SS:[EBP-0xC60]
		SUB EAX,0x2B5
		MOV DWORD PTR SS:[EBP-0xC60],EAX
		MOV DWORD PTR SS:[EBP-0xC64],2
		JMP continua
	}
}
NAKE ShamanFix2()
{
	int continua, _je;
	_asm
	{
		MOV continua, 0x42B247
		MOV _je, 0x42b260
		PUSH [EBP+8]
		CALL Shaman
		ADD ESP,4
		MOV ECX,DWORD PTR SS:[EBP+8]
		IMUL ECX,ECX,0x410
		XOR EDX,EDX
		MOV DX,WORD PTR DS:[ECX+0x15C69CE]
		MOV EAX,DWORD PTR SS:[EBP-0x840]
		AND EAX,EDX
		TEST EAX,EAX
		JE vai
		JMP continua
vai:
		JMP _je


	}
}
NAKE FixPointSkillCele()
{
	int msg, ocall, retorno, continua;
	_asm
	{
		MOV continua, 0x043682D
		MOV msg, 0x07D3BD8
		MOV ocall, 0x04010ff
		MOV ECX,DWORD PTR SS:[EBP+8]
		IMUL ECX,ECX,0x0410
		CMP BYTE PTR SS:[ECX+0x015C6A19],3
		JAE forvai
		PUSH msg
		MOV EDX,DWORD PTR SS:[EBP+8]
		PUSH EDX
		CALL ocall
		ADD ESP,8
		MOV retorno, 0x04633bf
		JMP retorno
forvai:
		JMP continua
	}
}
NAKE FixPartyLv1()
{
	int volta,vai1;
	_asm
	{
		MOV volta, 0x0438787
		MOV vai1, 0x043878F
		MOV DWORD PTR SS:[EBP-0x0203C],EDX
		MOV EAX,DWORD PTR SS:[EBP-0x0203C]
		SUB EAX,300
		CMP DWORD PTR SS:[EBP-0x02038],EAX
		JL kk
		MOV ECX,DWORD PTR SS:[EBP-0x0203C]
		ADD ECX,300
		JMP volta
kk:
		JMP vai1


	}
}
NAKE FixPartyLv2()
{
	int volta, vai1;
	_asm
	{
		MOV volta, 0x0438a8b
		MOV vai1, 0x0438A93
		MOV DWORD PTR SS:[EBP-0x02060],EDX
		MOV EAX,DWORD PTR SS:[EBP-0x02060]
		SUB EAX,300
		CMP DWORD PTR SS:[EBP-0x0205C],EAX
		JL kk
		MOV ECX,DWORD PTR SS:[EBP-0x02060]
		ADD ECX,300
		JMP volta
kk:
		JMP vai1

	}
}
NAKE MaxAprend()
{
	int volta, vai;
	_asm
	{
		MOV volta, 0x0436604
		MOV vai, 0x043661a
		MOV DL,BYTE PTR DS:[ECX+EAX+0x015C69F4]
		CMP EDX,255
		JL maxaprend
		JMP volta
maxaprend:
		JMP vai
	}
}

NAKE exp()
{
	int volta;
	_asm
	{
		MOV volta, 0x45c71d
		MOV EAX,DWORD PTR SS:[EBP-0x20C]
		IMUL EAX,EAX,0x410
		MOV ECX,DWORD PTR DS:[EAX+0x15C69D4]
		ADD ECX,DWORD PTR SS:[EBP-0x220]
		PUSH ECX
		CALL expdefin
		ADD ESP,4
		JMP volta
	}
}
NAKE Jeffi()
{
	__asm
	{
		PUSH [EBP-0x0830]
		PUSH [EBP+8]
		CALL Jeffie
		MOV EAX ,0x04633bf
		JMP EAX
	}
}
NAKE NKD_WarNoatum3()
{
	__asm
	{
		CALL FixWinNoatum
		MOV EAX ,0x04011EA
		CALL EAX
		MOV EAX ,0x0401131
		CALL EAX
		MOV EAX ,0x044F4FA
		JMP EAX
	}
}
NAKE NKD_WarNoatum2()
{
	__asm
	{
		CMP DWORD PTR SS:[EBP-34],6
		JE SucessWar
		CMP WarNoatumType,0
		JNZ SucessWar
		MOV EAX,0x455C6D
		JMP EAX
SucessWar:
		MOV EAX,0x455C3C
		JMP EAX
	}
}
NAKE NKD_WarNoatum()
{
	__asm
	{
		MOV DWORD PTR SS:[EBP-0x2C],0
		MOV EAX,WarNoatumType
		CMP EAX,0
		JE SegNormal
		CMP EAX,1
		JE SegWar1
		CMP EAX,2
		JE SegWar2
		CMP EAX,3
		JE SegWar3
		CMP EAX,4
		JE SegWar4

		MOV EAX,0x0457A69
		JMP EAX

SegNormal:
		MOV EAX,0x0457A69
		JMP EAX
SegWar1:
		MOV DWORD PTR SS:[EBP-0x1C],0x12
		MOV DWORD PTR SS:[EBP-0x20],0x0
		MOV EAX,0x0457A69
		JMP EAX
SegWar2:
		MOV DWORD PTR SS:[EBP-0x1C],0x12
		MOV DWORD PTR SS:[EBP-0x20],0x06
		MOV EAX,0x0457A69
		JMP EAX
SegWar3:
		MOV DWORD PTR SS:[EBP-0x1C],0x12
		MOV DWORD PTR SS:[EBP-0x20],0x33
		MOV EAX,0x0457A69
		JMP EAX
SegWar4:
		MOV DWORD PTR SS:[EBP-0x1C],0x12
		MOV DWORD PTR SS:[EBP-0x20],0x38
		MOV DWORD PTR SS:[WarNoatumType],0
		MOV EAX,0x0457A69
		JMP EAX
	}
}
NAKE NKD_FixLimitePlayer()
{
	__asm
	{
		TEST EAX,EAX
		JNZ FAILLog
		CALL ContOnline
		CMP EAX,95
		JA FAILLog

		MOV EAX, 0x044CF27
		JMP EAX

FAILLog:
		PUSH 0x7D46D8
		MOV EAX, 0x44CEF6
		JMP EAX
	}
}
NAKE NKD_FixHPBOSS()// feito
{
	__asm
	{
		CMP EAX,786
		JE Vezes2
		CMP EAX,1936
		JE Vezes10
		CMP EAX,1937
		JE Vezes20
		MOV EAX,0x0427E51
		JMP EAX

Vezes2:
		MOV ECX,DWORD PTR SS:[EBP-0x2CC]
		IMUL ECX,ECX,0x410
		ADD ECX,0x15C6A7C
		PUSH ECX
		MOV EAX,0x401393
		CALL EAX
		ADD ESP,4
		MOV DWORD PTR SS:[EBP-0x558],EAX
		MOV EAX,0x0427DC9
		JMP EAX
Vezes10:
		MOV ECX,DWORD PTR SS:[EBP-0x2CC]
		IMUL ECX,ECX,0x410
		ADD ECX,0x15C6A7C
		PUSH ECX
		MOV EAX,0x401393
		CALL EAX
		ADD ESP,4
		IMUL EAX,EAX,10
		MOV DWORD PTR SS:[EBP-0x558],EAX
		MOV EAX,0x0427DC9
		JMP EAX
Vezes20:
		MOV ECX,DWORD PTR SS:[EBP-0x2CC]
		IMUL ECX,ECX,0x410
		ADD ECX,0x15C6A7C
		PUSH ECX
		MOV EAX,0x401393
		CALL EAX
		ADD ESP,4
		IMUL EAX,EAX,40
		MOV DWORD PTR SS:[EBP-0x558],EAX
		MOV EAX,0x0427DC9
		JMP EAX
	}
}
NAKE NKD_FixHPBOSS2() // feito
{
	__asm
	{
		CMP EAX,786
		JE Vezes2
		CMP EAX,1936
		JE Vezes10
		CMP EAX,1937
		JE Vezes20
		MOV EAX,0x0425EB7
		JMP EAX

Vezes2:
		MOV EDX,DWORD PTR SS:[EBP-0x2CC]
		IMUL EDX,EDX,0x410
		ADD EDX,0x15C6A7C
		PUSH EDX
		MOV EAX,0x401393
		CALL EAX
		ADD ESP,4
		MOV DWORD PTR SS:[EBP-0x344],EAX
		MOV EAX,0x0425E6D
		JMP EAX
Vezes10:
		MOV EDX,DWORD PTR SS:[EBP-0x2CC]
		IMUL EDX,EDX,0x410
		ADD EDX,0x15C6A7C
		PUSH EDX
		MOV EAX,0x401393
		CALL EAX
		ADD ESP,4
		IMUL EAX,EAX,10
		MOV DWORD PTR SS:[EBP-0x344],EAX
		MOV EAX,0x0425E6D
		JMP EAX
Vezes20:
		MOV EDX,DWORD PTR SS:[EBP-0x2CC]
		IMUL EDX,EDX,0x410
		ADD EDX,0x15C6A7C
		PUSH EDX
		MOV EAX,0x401393
		CALL EAX
		ADD ESP,4
		IMUL EAX,EAX,40
		MOV DWORD PTR SS:[EBP-0x344],EAX
		MOV EAX,0x0425E6D
		JMP EAX
	}
}
NAKE NKD_FixHPBOSS3() //feito
{
	__asm
	{
		CMP EDX,786
		JE Vezes2
		CMP EDX,1936
		JE Vezes10
		CMP EDX,1937
		JE Vezes20
		MOV EAX,0x045194F
		JMP EAX

Vezes2:
		MOV EAX,DWORD PTR SS:[EBP-0x18C]
		IMUL EAX,EAX,0x410
		ADD EAX,0x15C6A7C
		PUSH EAX
		MOV EAX,0x401393
		CALL EAX
		ADD ESP,4
		MOV DWORD PTR SS:[EBP-0x1AC],EAX
		MOV EAX,0x0451904
		JMP EAX
Vezes10:
		MOV EAX,DWORD PTR SS:[EBP-0x18C]
		IMUL EAX,EAX,0x410
		ADD EAX,0x15C6A7C
		PUSH EAX
		MOV EAX,0x401393
		CALL EAX
		ADD ESP,4
		IMUL EAX,EAX,10
		MOV DWORD PTR SS:[EBP-0x1AC],EAX
		MOV EAX,0x0451904
		JMP EAX
Vezes20:
		MOV EAX,DWORD PTR SS:[EBP-0x18C]
		IMUL EAX,EAX,0x410
		ADD EAX,0x15C6A7C
		PUSH EAX
		MOV EAX,0x401393
		CALL EAX
		ADD ESP,4
		IMUL EAX,EAX,40
		MOV DWORD PTR SS:[EBP-0x1AC],EAX
		MOV EAX,0x0451904
		JMP EAX
	}
}
NAKE NKD_FixHPBOSS4() // feito
{
	__asm
	{
		CMP EAX,786
		JE Vezes2
		CMP EAX,1936
		JE Vezes10
		CMP EAX,1937
		JE Vezes20
		MOV EAX,0x0454E1D
		JMP EAX

Vezes2:
		MOV EAX,DWORD PTR SS:[EBP-0x290]
		IMUL EAX,EAX,0x410
		ADD EAX,0x15C6A7C
		PUSH EAX
		MOV EAX,0x401393
		CALL EAX
		ADD ESP,4
		MOV DWORD PTR SS:[EBP-0x308],EAX
		MOV EAX,0x0454DD2
		JMP EAX
Vezes10:
		MOV EAX,DWORD PTR SS:[EBP-0x290]
		IMUL EAX,EAX,0x410
		ADD EAX,0x15C6A7C
		PUSH EAX
		MOV EAX,0x401393
		CALL EAX
		ADD ESP,4
		IMUL EAX,EAX,10
		MOV DWORD PTR SS:[EBP-0x308],EAX
		MOV EAX,0x0454DD2
		JMP EAX
Vezes20:
		MOV EAX,DWORD PTR SS:[EBP-0x290]
		IMUL EAX,EAX,0x410
		ADD EAX,0x15C6A7C
		PUSH EAX
		MOV EAX,0x401393
		CALL EAX
		ADD ESP,4
		IMUL EAX,EAX,40
		MOV DWORD PTR SS:[EBP-0x308],EAX
		MOV EAX,0x0454DD2
		JMP EAX
	}
}
NAKE MestreHab()
{
	int fim;
	_asm
	{
		MOV fim, 0x04633bf
		PUSH [EBP-0x0830]
		PUSH [EBP+8]
		CALL M_Hab
		ADD ESP,8
		JMP fim
	}
}
NAKE Logo()
{
	int fim;
	_asm
	{
		MOV fim, 0x04633bf
		PUSH [EBP+8]
		CALL msglogon
		ADD ESP,4
		JMP fim
	}
}
NAKE NKD_FixDanoAtack()
{
	int local;
	__asm
	{
		MOV local,0x0427A94
		MOV WORD PTR DS:[EAX+EDX*4+0x2A],CX
		JMP local
	}
}
/*

		MOV CX,WORD PTR SS:[EBP-0x2D0]
		CMP CX,32000
		JBE menorigual
		MOV WORD PTR DS:[EAX+EDX*4+0x2A],32000
		JMP local
menorigual:
		MOV WORD PTR DS:[EAX+EDX*4+0x2A],CX
		JMP local

		*/
NAKE NKD_FixMestreSkill()
{
	int Failcl,Suscl;
	__asm
	{
		MOV Failcl,0x0438d57
		MOV Suscl,0x04367E1
		PUSH ECX
		PUSH [EBP+0x8]
		CALL FixMestreSkill
		ADD ESP, 8
		CMP EAX,1
		JE Susses
		JMP Failcl
Susses:
		JMP Suscl

	}
}
NAKE NKD_FixCheckNivClasse()
{
	__asm
	{
		CMP DWORD PTR SS:[EBP-0x19F0],0
		JNZ Succcess
		//Remoção desta função
		MOV EAX,0x4340CF
		JMP EAX

		MOV ECX,DWORD PTR SS:[EBP+8]
		IMUL ECX,ECX,0x0410
		CMP BYTE PTR SS:[ECX+0x015C6A19],2
		JAE Succcess
		MOV EAX,0x4340CF
		JMP EAX
Succcess:
		MOV EAX,0x0434102
		JMP EAX
	}
}

NAKE NKD_FixUpgrade()
{
	__asm
	{
		MOV EAX,DWORD PTR SS:[EBP-0xE80]
		CMP BYTE PTR DS:[EAX+3],9
		JNB Fail
		MOV EAX,0x42E24E
		JMP EAX
Fail:
		MOV EAX,0X042E273
		JMP EAX
	}
}

NAKE NKD_Vol()
{
__asm
	{
		PUSH [EBP + 0xC]
		PUSH [EBP + 0x8]
		CALL Volatiles
		ADD ESP, 8

		MOV EAX, 0x042F919
		JMP EAX
	}
}
NAKE NKD_Gate()
{
__asm
	{
		PUSH [EBP+8]
		CALL Gate
		ADD ESP,4
		MOV EAX, 0x0438D57
		JMP EAX
	}
}
NAKE NKD_Command()
{
	int bal_esp;
	__asm
	{
		MOV bal_esp, 0x0438D57
		PUSH [EBP - 0x1A1C]
		PUSH [EBP + 0x8]
		CALL Commando
		ADD ESP, 8
		CMP EAX,0
		JE Errado
		JMP Certo
Certo:
	JMP bal_esp
Errado:
	MOV ECX,0x0435223
	JMP ECX
	}
}
NAKE NKD_NPCFunc()
{
__asm
	{

		PUSH [EBP-0x830]
		PUSH [EBP+0x8]
		CALL NPCFunc
		ADD ESP, 8

		MOV EAX, 0x438d57
		JMP EAX
	}
}
int FixDrop(int ClientID,int itemid)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	if(itemid == 4121)
		return 1001;

	return ClientID;
}
NAKE NKD_DropInv()
{
	int _jmp, drop1, drop3;
	_asm
	{
		MOV _jmp, 0x45dcf2
		MOV drop1, 0x04633E0
		MOV drop3, 0x04439A0
		XOR EAX,EAX
		CALL drop1
		AND EAX,0x080000003
		JNS addr
		DEC EAX
		OR EAX,0x0FFFFFFFC
		INC EAX
		MOV ECX,DWORD PTR SS:[EBP-0x033C]
		PUSH ECX
		PUSH DWORD PTR SS:[EBP+0x0C]
		CALL drop3
		ADD ESP,0x08
		XOR EDX,EDX
		XOR EDX,EDX
		XOR EDX,EDX
		XOR EDX,EDX
		XOR EDX,EDX
		XOR EDX,EDX
		JMP _jmp
addr:
		MOV ECX,DWORD PTR SS:[EBP-0x033C]
		PUSH ECX
		PUSH DWORD PTR SS:[EBP+0x0C]
		CALL drop3
		ADD ESP,0x08
		XOR EDX,EDX
		XOR EDX,EDX
		XOR EDX,EDX
		XOR EDX,EDX
		XOR EDX,EDX
		XOR EDX,EDX
		JMP _jmp
	}
}
__declspec(naked) void NKD_BASE_GetCurrentScore_FixArchBM()
{
	int fim;
	_asm
	{
		MOV fim, 0x0406f8c
		MOV ECX,DWORD PTR SS:[EBP+8]
		CMP WORD PTR DS:[ECX+0x014],2
		JNZ fail
		PUSH [EBP+8]
        CALL DesbugFaceBM
        ADD ESP,0x04
		NOP
		JMP fim
fail:
		JMP fim
	}
}
NAKE Update_func_Level()
{
	int retorno_l;
	_asm
	{
		MOV ECX,DWORD PTR SS:[EBP-4]
		PUSH ECX
		//CALL PONTOS_FIX
		ADD ESP,0x04
		MOV retorno_l, 0x0413662
		JMP retorno_l
	}
}

NAKE FixMantleBlue()
{
	int sucess, fail;
	_asm
	{
		MOV sucess, 0x0406e1f
		MOV fail, 0x0406e26
		CMP DWORD PTR SS:[EBP-0x038],543
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],545
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],3191
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],3194
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],3197
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],797
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],794
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],795
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],796
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],798
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],3228
		JE vai1
		JMP fail
vai1:
		JMP sucess
	}
}
NAKE FixMantleRed()
{
	int sucess, fail;
	_asm
	{
		MOV sucess, 0x0406e44
		MOV fail, 0x0406e4b
		CMP DWORD PTR SS:[EBP-0x038],544
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],546
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],3192
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],3195
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],3198
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],797
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],794
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],795
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],796
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],798
		JE vai1
		CMP DWORD PTR SS:[EBP-0x038],3228
		JE vai1
		JMP fail
vai1:
		JMP sucess
	}
}

/*NAKE MobEvent()
{
	int volta;
	_asm
	{
		MOV volta, 0x045d057
		PUSH [EBP - 0x0238]
		PUSH [EBP + 0x0C]
		CALL MobEventDead
		ADD ESP,0x08
		JMP volta
	}
}*/
NAKE FixImortal()
{
	int vai, volta, voltasuc, func;
	_asm
	{
		MOV vai, 0x045ab8c
		MOV volta, 0x045ac7c
		MOV voltasuc, 0x045ac2b
		MOV func, 0x0401393
		PUSH [EBP+8]
		CALL morte
		CMP EAX,1
		JE kk
		CMP EAX,2
		JE kkk
		MOV ECX,DWORD PTR SS:[EBP-4]
		PUSH ECX
		CALL func
		ADD ESP,4
		JMP volta
kk:
		JMP vai
kkk:
		JMP voltasuc
	}
}
NAKE BlockDrop()
{
	int bloqueia, continua;
	_asm
	{
		MOV bloqueia, 0x042D8AF
		MOV continua, 0x042D89E
		PUSH EDX
		CALL BloqueiaDrop
		ADD ESP,0x4
		CMP EAX,1
		JE bloque
		JMP continua

bloque:
		JMP bloqueia
	}
}
NAKE WARNOATUN()
{
	int volta, erro;
	_asm
	{
		MOV erro,0x0457da0
		MOV volta,0x0457ad1
		CMP DWORD PTR SS:[0x0a5ea428],0
		JNZ kk
		CMP DWORD PTR SS:[0x0A5EA418],18
		JNZ kk
		MOV DWORD PTR DS:[0x08BF18A0],0
		JMP volta
kk:
		JMP erro

	}
}

void UnicodeTranslate()
{
	TranslateBaseNPCFiles();
}

void TranslateBaseNPCFiles()

{
	static const int npc_address[36] = {
        0x0413F49, 0x0413F94, 0x0413FF1, 0x041404E,
        0x04140AA, 0x0414107, 0x0414164, 0x04141C0,
        0x041421D, 0x041427A, 0x04142D6, 0x0414333,
        0x0414390, 0x04143EC, 0x0414449, 0x04144A6,
        0x0414502, 0x041455F, 0x04145BC, 0x0414618,
        0x0414675, 0x04146D2, 0x041472E, 0x041478B,
        0x04147E8, 0x0414844, 0x04148AE, 0x041490A,
        0x0414967, 0x04149C4, 0x0414A20, 0x0414A7D,
        0x0414ADA, 0x0414B36, 0x0414B93, 0x0414BF0
    };

    static const char* npc_name[37] = {
        "Condor", "Javali", "Lobo", "Urso", "Tigre",
        "Gorila", "Dragao_Negro", "Succubus", "Porco",
        "Javali_", "Lobo_", "Dragao_Menor", "Urso_",
        "Dente_de_Sabre", "Sem_Sela", "Fantasma", "Leve",
        "Equipado", "Andaluz", "Sem_Sela_", "Fantasma_",
        "Leve_", "Equipado_", "Andaluz_", "Fenrir", "Dragao",
        "Grande_Fenrir", "Tigre_de_Fogo", "Dragao_Vermelho",
        "Unicornio", "Pegasus", "Unisus", "Grifo", "Hippo_Grifo",
        "Grifo_Sangrento", "Sleipnir", "Svadilfari"
    };




	// Escreve o nome dos arquivos que possuem as
	// informações sobre as montarias e as crias.
	for(int i = 0; i < 36; i++)
		*(int*)(npc_address[i] + 1) = (int)npc_name[i];
	// Modifica a string da pasta das montarias
	strcpy((char*)0x4C0C64, "npc_base");

}

__declspec(naked) void NKD_LIMITESIZE()
{
	__asm
	{
		MOV EDX,DWORD PTR SS:[EBP+8]
		PUSH EDX
		CALL RetnAffect
		ADD ESP,4
		PUSH EAX
		MOV ECX, 0x41254D
		JMP ECX
	}
}

__declspec(naked) void NKD_MobKilled_DropGold()
{
	__asm
	{
		PUSH EAX
		PUSH [EBP + 0xC]
		CALL HKD_MobKilled_DropGold
		ADD ESP, 8

		MOV EAX, 0x45D646
		JMP EAX
	}
}

__declspec(naked) void NKD_CheckPacket_SendTradeSize()
{
	__asm
	{
		CMP EAX, 156
		JE Correct_Size

		RETN

Correct_Size:
		MOV jmp_addr, 0x40FFA1
		JMP jmp_addr
	}
}

__declspec(naked) void NKD_CheckPacket_GetCreateMobSize()
{
	__asm
	{
		CMP ECX, 176
		JE Correct_Size

		RETN

Correct_Size:
		MOV jmp_addr, 0x40FB77
		JMP jmp_addr
	}
}

__declspec(naked) void NKD_AddMessage()
{
	__asm
	{
		PUSH [EBP + 0xC]
		PUSH [EBP + 0x8]
		CALL HKD_AddMessage
		ADD ESP, 0x8

		PUSH EAX

		MOV EAX, 0x4633E0
		CALL EAX

		POP EAX

		MOV DWORD PTR SS:[EBP + 0x8], EAX
		MOV DWORD PTR SS:[EBP - 0x108], EAX

		RETN
	}
}

__declspec(naked) void NKD_ReadMessage()
{
	__asm
	{

		PUSH EAX
		PUSH [EBP - 0x28]
		CALL HKD_ReadMessage
		ADD ESP, 0x8

		MOV DWORD PTR SS:[EBP - 0x28], EAX

		MOV jmp_addr, 0x4195C4
		JMP jmp_addr
	}
}

__declspec(naked) void NKD_AddMessage_EncKey_1()
{
	__asm
	{
		SAR ECX, 0x3
		SUB EAX, ECX
		MOV EDX,DWORD PTR SS:[EBP - 0x4]

		MOV jmp_addr, 0x419B90
		JMP jmp_addr
	}
}

__declspec(naked) void NKD_ReadMessage_DecKey_1()
{
	__asm
	{
		SAR EDX, 0x3
		ADD ECX, EDX
		MOV EAX, DWORD PTR SS:[EBP - 0x28]

		MOV jmp_addr, 0x41955C
		JMP jmp_addr
	}
}

__declspec(naked) void NKD_ReadMessage_DecKey_2()
{
	__asm
	{
		SHL EAX, 0x2
		SUB EDX, EAX
		MOV ECX, DWORD PTR SS:[EBP - 0x28]

		MOV jmp_addr, 0x41957F
		JMP jmp_addr
	}
}

__declspec(naked) void NKD_ProcessClientMessage_ReadCommand()
{
	static char *msgCmd = "day";
	static char *msgSend = "!#11  2";
	__asm
	{
		PUSH msgCmd

		MOV EAX, DWORD PTR SS:[EBP - 0x1A1C]
		ADD EAX, 0xC
		PUSH EAX

		MOV EAX, 0x464450
		CALL EAX
		ADD ESP, 8

		TEST EAX, EAX
		JNZ Exit_1

		PUSH msgSend
		PUSH DWORD PTR SS:[EBP + 8]
		CALL SendClientMessage
		ADD ESP, 8

		MOV jmp_addr, 0x438D57
		JMP jmp_addr

		RETN

Exit_1:
		MOV jmp_addr, 0x43480B
		JMP jmp_addr
	}
}

_declspec(naked) void NKD_GetDoubleCritical_SetNewCriticalRate() 
{
	__asm
	{
		CALL Rand
		CDQ
		
		MOV ECX, 250
		
		IDIV ECX
		MOV ECX, EDX
		RETN
	}
}

_declspec(naked) void NKD_GetGetCurrentScore_FixCriticalRate()
{
	__asm
	{
		CMP EAX, 0
		JE lbl_ContinueNormalExec
			
		CDQ
		MOV ECX, 2
		IDIV ECX

lbl_ContinueNormalExec:
		MOV DWORD PTR SS:[EBP - 0xC], EAX
		CMP DWORD PTR SS:[EBP - 0xC], 0xFF
		RETN
	}
}
__declspec(naked) void NKD_ProcessClientMessage()
{
	static int dwJump;
	__asm
	{
		MOV EDX,DWORD PTR SS:[EBP-0x4]
		XOR EAX,EAX
		MOV AX,WORD PTR DS:[EDX+0x4]
		CMP EAX,0x3A0
		JNZ Functions_ProcessClientMessage

		MOV dwJump, 0x438D57
		JMP dwJump

Functions_ProcessClientMessage:
		PUSH [EBP-4]
		PUSH [EBP+8]
		CALL ProcessClientMessage
		ADD ESP, 8
		MOV dwJump, EAX

		CMP dwJump, 1
		JE TMSRV_ProcessClientMessage
		MOV dwJump, 0x438D57
		JMP dwJump

TMSRV_ProcessClientMessage:
		MOV dwJump , 0x4221EB
		JMP dwJump
	}
}
void DoDirection()
{
	//RETIRA ATAQUE DA NY
	*(BYTE*)0x42e26d = 02;
	*(BYTE*)0x450193 = 02;
	*(BYTE*)0x4505a0 = 02;
	*(BYTE*)0x45ab76 = 02;
	//RETIRA DANO TOMADO NA MONTARIA
	*(BYTE*)0x44ba5c = 0x90;
	*(BYTE*)0x44ba5d = 0x90;
	*(BYTE*)0x44ba5e = 0x90;
	*(BYTE*)0x44ba5f = 0x90;
	*(BYTE*)0x44ba60 = 0x90;
	*(BYTE*)0x44ba61 = 0x90;
	*(BYTE*)0x44ba9d = 0x90;
	*(BYTE*)0x44ba9e = 0x90;
	*(BYTE*)0x44ba9f = 0x90;
	*(BYTE*)0x44baa0 = 0x90;
	*(BYTE*)0x44baaa = 0x90;
	*(BYTE*)0x44baab = 0x90;
	*(BYTE*)0x44baac = 0x90;
	*(BYTE*)0x44baad = 0x90;
	*(INT8*)0x00421D00 = 0xC3; // retira maliciosos
	JMP_NEAR(0x4368ac, SkillLvCele);
	JMP_NEAR(0x40149C, GetCurrentScoreAffect); //Eden
	JMP_NEAR(0x44AF77, NKD_PACKETS,1);
	UnicodeTranslate();

	// ReadMessage Indirections

	JGE_NEAR(0x4194CF, NKD_ReadMessage);
	JMP_NEAR(0x419555, NKD_ReadMessage_DecKey_1, 2);
	JMP_NEAR(0x419578, NKD_ReadMessage_DecKey_2, 2);

	// MobKilled Indirections
	JMP_NEAR(0x045D58F, NKD_MobKilled_DropGold, 1);

	// AddMessage Indirections
	CALL_NEAR(0x4199A3, NKD_AddMessage);
	//JMP_NEAR(0x401221, HKD_AddMessage);
	JMP_NEAR(0x419B89, NKD_AddMessage_EncKey_1, 2);

	// ProcessClientMessage Indirections
	JNZ_NEAR(0x4346A8, NKD_ProcessClientMessage_ReadCommand);

	// CheckPacket Indirections
	CALL_NEAR(0x40FB6B, NKD_CheckPacket_GetCreateMobSize); // Altera o tamanho de checagem do packet de CreateMob (0x364). Padrão: 108
	CALL_NEAR(0x40FF95, NKD_CheckPacket_SendTradeSize); // Altera o tamanho de checagem do packet de Trade (0x383). Padrão : 92
	JMP_NEAR(0x412543, NKD_LIMITESIZE, 5);

	// Remove logs of TMSRV
	JMP_NEAR(0x00401519, (void*)0x00458DA2);

	//correção do up
	 *(BYTE*)0x45b5db = 0xd0;
	 *(BYTE*)0x45b5dc = 0x6c;
	 *(BYTE*)0x45b5fc = 0xd0;
	 *(BYTE*)0x45b5fd = 0x6c;
	 *(BYTE*)0x45b611 = 0xd0;
	 *(BYTE*)0x45b612 = 0x6c;
	 *(BYTE*)0x45b620 = 0xd0;
	 *(BYTE*)0x45b621 = 0x6c;
	 *(BYTE*)0x45b632 = 0xd0;
	 *(BYTE*)0x45b633 = 0x6c;


	 //Zero Exp Fix
	 *(BYTE*)0x45b4b1 = 0xd0;
	 *(BYTE*)0x45b4b2 = 0x6c;
	 *(BYTE*)0x45b4c3 = 0xd0;
	 *(BYTE*)0x45b4c4 = 0x6c;
	 *(BYTE*)0x45b4dd = 0xd0;
	 *(BYTE*)0x45b4de = 0x6c;
	 *(BYTE*)0x45b4ef = 0xd0;
	 *(BYTE*)0x45b4f0 = 0x6c;
	 *(BYTE*)0x45b4fe = 0xd0;
	 *(BYTE*)0x45b4ff = 0x6c;
	 *(BYTE*)0x45b510 = 0xd0;
	 *(BYTE*)0x45b511 = 0x6c;


	JMP_NEAR(0x438aab, DIFER2);
	JMP_NEAR(0x4387a7, DIFER1);
	*(BYTE*)0x0413430 = 0xc3;
	*(BYTE*)0x04438d1 = 60;
	JMP_NEAR(0x457a9b, guerra2);
	JMP_NEAR(0x404E67, Refines3);
	JMP_NEAR(0x404CEA, Refines2);
	JMP_NEAR(0x404D55, Refines, 103);
	JMP_NEAR(0x00428369, ExpLevel);
	JMP_NEAR(0x0045826D, ColiseuAbre);

	JMP_NEAR(0x410EFA, NKD_Buff3, 5);

	//Retira somente em grupo, merch 10
	*(BYTE*)0x042a6db = 0xEB;
	*(BYTE*)0x042a769 = 0xEB;

	JMP_NEAR(0x004020C2, NKD_Pontos);//Retira correção de pontos
	JMP_NEAR(0x042961E, NKD_NPCFunc);
	JNZ_NEAR(0x434DD8, NKD_Command);
    JMP_NEAR(0x0042F824, NKD_Vol);
	JMP_NEAR(0x00428a9d, NKD_Gate);
	JMP_NEAR(0x0045DCC1, NKD_DropInv);
	JMP_NEAR(0x406f64, NKD_BASE_GetCurrentScore_FixArchBM);
	JMP_NEAR(0x04367C3, NKD_FixMestreSkill);
	JMP_NEAR(0x042E247 ,NKD_FixUpgrade);
	JMP_NEAR(0x0427D9D,NKD_FixHPBOSS);
	*(BYTE*)0x0469BD8 = 0xEB;
	//guerra erion//
	*(WORD*)0x04566AD = 0x6A17;
	*(BYTE*)0x04566B1 = 0x83;
	*(DWORD*)0x04566B3 = 0x90909000;
	*(BYTE*)0x04566B7 = 0xEB;
	// guerra gelo //
	*(DWORD*)0x04C7CF4 = 157;
	*(WORD*)0x04575B3 = 0x9090;
	//*(BYTE*)0x04575B9 = 0xEB;
	*(DWORD*)0x4C7CB8 = 3613;
	*(DWORD*)0x4C7CBC = 3122;
	*(DWORD*)0x4C7CC8 = 3606;
	*(DWORD*)0x4C7CD0 = 3631;
	*(DWORD*)0x4C7CCC = 3101;
	*(DWORD*)0x4C7CD4 = 3143;
	*(int*)0x04674C5 = 0x3000;

	//JMP_NEAR(0x0045CE87,MobEvent);
	JMP_NEAR(0x0045ab75,FixImortal);
	JMP_NEAR(0x00428B6A,Logo);
	*(BYTE*)0x044F4A0 = 0x17;//Tempo em cima do altar de thor( 8 seg = 1 ) 17hex = 23dec = 3 minutos
	JMP_NEAR(0x0042D88E,BlockDrop);
	JMP_NEAR(0x0042C4FB,MestreHab);
	JMP_NEAR(0x0042af03,Jeffi);
	JMP_NEAR(0x0425E44,NKD_FixHPBOSS2);
	JMP_NEAR(0x04518DC,NKD_FixHPBOSS3);
	JMP_NEAR(0x0454DAA,NKD_FixHPBOSS4);
	JMP_NEAR(0x004365F5,MaxAprend);
	JMP_NEAR(0x00436817,FixPointSkillCele);
	JMP_NEAR(0x0042B2A2,ShamanFix1);
	JMP_NEAR(0x0042B229,ShamanFix2);


	JMP_NEAR(0x00406E0D,FixMantleBlue);
	JMP_NEAR(0x00406E32,FixMantleRed);
	*(BYTE*)0x045C13B = 0x0EB;//Montaria não morre com o player
	JMP_NEAR(0x4340C6,NKD_FixCheckNivClasse); // retira condição de level e clase das armas,sets,equips

	*(WORD*)0x045B00E = 1000;
	*(BYTE*)0x04249ED = 0xEB; // retira condição das skill das classes
	

	JMP_NEAR(0x42b5ee,NKD_Merchante15);
	JMP_NEAR(0x42a71a,NKD_Merchante10);

	//Desativa Submundo 2º andar
	JMP_NEAR(0x041B708,Sub2Off);

	*(BYTE*)0x04277d9 = 0xEB;//Retira bloqueio de pk por CP
	//ahack
	SetJMP(0x00459465, (INT32)&CloseUser, 7);
	SetJMP(0x0044AF6B, (INT32)&Recv, 6);
	SetJMP(0x0041A3E9, (INT32)&AcceptUser, 6);
	*(DWORD*)(0x00482DE0) = (DWORD)&GetIPFromClient;





	//JMP_NEAR(0x0045C705,  EXP, 5);
	JMP_NEAR(0x45c711, NKD_EXP);
	JMP_NEAR(0x40149C, GetCurrentScoreAffect);
	strcpy((char*)0x4C067C, "C:/guilds.txt");
	strcpy((char*)0x4C3BF8, "C:/Guild_%2.2d_%2.2d.txt");
	strcpy((char*)0x4C4DEC, "C:/Chall_%2.2d_%2_2d.txt");
	CALL_NEAR(0x40C3B8, NKD_GetDoubleCritical_SetNewCriticalRate, 3);
	CALL_NEAR(0x412567, NKD_GetGetCurrentScore_FixCriticalRate, 5);
	JMP_NEAR(0x4221D6, NKD_ProcessClientMessage, 1);
}