// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#define SetMem(destino,source,sizee) (memcpy(destino,source,sizee))
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
//#include "UseSkill.cpp"
#include "BaseStruct.h"
#include "Player.h"
#include "Ahack.h"
#include "Objetos.h"
#include "Define.h"
#include "BaseExp.h"
#include "PE_HOOK.h"


static BYTE* (*GetMobFromIndex)(unsigned int) = (BYTE* (__cdecl *)(unsigned int)) 0x00401483; // Lib: Server.obj Class : (null)
static BYTE* (*GetMobFromIndexE)(LPVOID) = (BYTE* (__cdecl *)(LPVOID)) 0x00401483; // Lib: Server.obj Class : (null)
static void (*SendClientMessage)(int, char*) = (void (__cdecl *)(int,char *)) 0x004010FF; // Lib: SendFunc.obj Class : (null)
static void (*SendClientSignalParm)(int,int,unsigned short,int) = (void (__cdecl *)(int,int,unsigned short,int)) 0x0040141A; // Lib: SendFunc.obj Class : (null)
static void (*SendCreateMob)(int,int,int) = (void (__cdecl *)(int,int,int)) 0x40160E;
static int (*GetMobAbility)(st_Mob *, unsigned char) = (int (__cdecl *)(st_Mob *, unsigned char)) 0x00405420;
static void (*SendItem)(int,int,int,st_Item *) = (void (__cdecl *)(int,int,int,st_Item *)) 0x0440FC0;
static void (*SendCarry)(int) = (void (__cdecl *)(int)) 0x4424f0;//SendCarry(ClientID);
static  int  (*GetEmptyAffect)(int, int) = (int (__cdecl *)(int,int))0x41AAF0;
static void (*SendSetHpMp)(int) = (void (__cdecl *)(int)) 0x442780;
static void (*SendEtc)(int) = (void (__cdecl *)(int)) 0x004012C1;
void NKD_Refines();



static void SendDBPacket(BYTE *Buffer, int tamanho)
{
        static int clientid = Buffer[6];
        static int calleu = 0x4012B7;
        static int trem = 0x7B318E0;
        static int tremm = 0x0A16990;

        __asm
        {
                MOV ECX,clientid
                IMUL ECX,ECX,0xC4C
                MOV [ECX+trem],0xD
 
                PUSH tamanho
                PUSH Buffer
                MOV ECX,tremm
                CALL calleu
        }
}



static void AddMessage(int clientId, char *Packet, int pSize)
{
	static DWORD func_addr = 0x4198C0;
	__asm
	{
		MOV ECX, clientId
		IMUL ECX, ECX, 0xC4C
		ADD ECX, 0x7B318E8

		PUSH pSize
		PUSH Packet
		CALL func_addr
	}
}
static void SendPacket(char *bufr, int clientid, int size)
{
	int sizes = size;
	int func_addr = 0x4198C0;
	
	__asm
	{
		MOV ECX, clientid
		IMUL ECX, ECX, 0xC4C
		ADD ECX, 0x7B318E8
  

		PUSH sizes
		PUSH bufr
		CALL func_addr
	}
}


class Function{
	public:
		Function();
		~Function();

		void (*CloseUser)(INT32 ClientID);
};

#define f_ptr (__cdecl *)
static int (*Rand)() = (int f_ptr())0x4633E0;

