

#include "Stdafx.h"
#include <stdio.h>

int AddrMED[] = { 0x15C6CAC, 0x15C6CAE, 0x15C6CB0, 0x15C6CB2, 0x15C6CB4, 0x15C6CB6, 0x15C6CB8, 0x15C6CBA, 0x15C6CBC, 0x15C6CBE, 0x15C6CC0, 0x15C6CC2, 0x15C6CC4, 0x15C6CC6, 0x15C6CC8, 0x15C6CCA, 0x15C6CCC };
Beast_Bonus Bonus[5];
void SetDefaultConstants()
{
	
	SetMobIndex();
	SetSkillIndex();
	SetEncDec();
	SetVersion();
	SetSockAddrPorts();
	SetPacketSize();
	SetSkillDataString();

	ChangeLimitBuffsStructPointer();
	ChangeItemlistStructPointer();
	SetMaxLevel_TrainningCamp();
}

void ChangeLimitBuffsStructPointer()
{
	ClearBuffer();
	for(DWORD i = 0x401000, addrBase = 0x15C6CAC, addrFinal = 0x15C6CCC; i < 0x4C0000; i++)
	{
		
		for(int x = 1; x <= 16; x++)
		{
			if(*(DWORD*)i == addrBase)
			{
				*(DWORD*)i = (DWORD)&mobaffectbuffer->Affects[0];
			}
			else if(*(DWORD*)i == AddrMED[x])
			{
				*(DWORD*)i = (DWORD)&mobaffectbuffer->Affects[0] + (x * 2);
			}
		}
		if(*(DWORD*)i >= addrBase && *(DWORD*)i <= addrFinal)
		{
			int diff = *(DWORD*)i - addrBase;

			*(DWORD*)i = (int)&mobaffectbuffer->Affects[0] + diff;

			i += 3;
		}
	}

	*(BYTE*)0x041AB1D = 16;
	*(BYTE*)0x0406FB6 = 16;
	*(BYTE*)0x041AB55 = 16;
	*(BYTE*)0x0461CEB = 16;
	*(BYTE*)0x0461FCA = 16;
	*(BYTE*)0x046226A = 16;
}

void ChangeBeastBonus()
{
        for(DWORD i = 0x401000, addrBase = 0x4CAD50, addrFinal = 0x4CAE60; i < 0x4C0000; i++)
        {
                if(*(DWORD*)i >= addrBase && *(DWORD*)i <= addrFinal)
                {
                        int diff = *(DWORD*)i - addrBase;
                        *(DWORD*)i = (DWORD)&Bonus[0] + diff;
                }
        }
        //Copia para a nova struct
        //os valores já existentes afim de não bugar nada :D
        memcpy(&Bonus[0],(char*)0x4CAD50, (sizeof(Beast_Bonus)*4));
        Bonus[4].damage = 200;
        Bonus[4].def = 200;
        for(short i=0;i<14;i++){
                Bonus[4].unkn[i] = 1;//evita zerar o hp eu axo
        }
}
void ChangeItemlistStructPointer()
{
	//8E4C00
	// Altera os endereços estáticos da estrutura do mob (STRUCT_MOB) para o buffer da dll.
	for(DWORD i = 0x401000, addrBase = 0x8E4C00, addrFinal = 0x8E4C8C; i < 0x4C0000; i++)
	{
		if(*(DWORD*)i >= addrBase && *(DWORD*)i <= addrFinal)
		{
			int diff = *(DWORD*)i - addrBase;
			*(DWORD*)i = (DWORD)GetItemlistBuffer() + diff;
		}
	}

	// Modifica todas as checagens de índices do itemlist
	// para poder adicionar novos itens no servidor
	*(DWORD*)0x0401C7A = 6500;
	*(DWORD*)0x0403021 = 6500;
	*(DWORD*)0x0403731 = 6500;
	*(DWORD*)0x0404041 = 6500;
	*(DWORD*)0x0404793 = 6500;
	*(DWORD*)0x0404B03 = 6500;
	*(DWORD*)0x04053DB = 6500;
	*(DWORD*)0x04055DD = 6500;
	*(DWORD*)0x0405603 = 6500;
	*(DWORD*)0x0406730 = 6500;
	*(DWORD*)0x0406ECB = 6500;
	*(DWORD*)0x0407D39 = 6500;
	*(DWORD*)0x0408FDF = 6500;
	*(DWORD*)0x040907E = 6500;
	*(DWORD*)0x040AEBA = 6500;
	*(DWORD*)0x04126AE = 6500;
	*(DWORD*)0x0412719 = 6500;
	*(DWORD*)0x04127C5 = 6500;
	*(DWORD*)0x041A501 = 6500;
	*(DWORD*)0x041A854 = 6500;
	*(DWORD*)0x041A86A = 6500;
	*(DWORD*)0x041A8E4 = 6500;
	*(DWORD*)0x0424C39 = 6500;
	*(DWORD*)0x0429221 = 6500;
	*(DWORD*)0x04293C7 = 6500;
	*(DWORD*)0x042CC5F = 6500;
	*(DWORD*)0x042D82F = 6500;
	*(DWORD*)0x0430707 = 6500;
	*(DWORD*)0x0432174 = 6500;
	*(DWORD*)0x0436C65 = 6500;
	*(DWORD*)0x0437DF7 = 6500;
	*(DWORD*)0x04499D5 = 6500;
	*(DWORD*)0x044D033 = 6500;
	*(DWORD*)0x044D739 = 6500;
	*(DWORD*)0x044D845 = 6500;
	*(DWORD*)0x0455E21 = 6500;
	*(DWORD*)0x0456E0D = 6500;
	*(DWORD*)0x0456F83 = 6500;
	*(DWORD*)0x04572EC = 6500;
	*(DWORD*)0x0457467 = 6500;
	*(DWORD*)0x045819B = 6500;
	*(DWORD*)0x045B92C = 6500;
	*(DWORD*)0x045BC02 = 6500;
	*(DWORD*)0x045DC21 = 6500;
	*(DWORD*)0x045EEA9 = 6500;
	*(DWORD*)0x04065F1 = sizeof(st_ItemList);
    *(DWORD*)0x0406649 = sizeof(st_ItemList);
}

void SetMobIndex()
{
	// Altera as constantes de ínicialização dos índices dos mobs para se adequarem ao client 754
	*(DWORD*)0x4CBBE4 = 1000;
	*(DWORD*)0x04591FA = 1000;
	*(DWORD*)0x045923C = 1000;
	*(DWORD*)0x0459201 = 29000;
}

void SetSkillIndex()
{
	// Modifica o indice base das skill que ficam a venda.
	*(DWORD*)0x04366DF = 5000;
	*(DWORD*)0x04366FC = 5000;
	*(DWORD*)0x043672C = 5000;
	*(DWORD*)0x043673E = 5150;

	// Modifica o merchant que é usado para venda de skills para coincidir com o merchant do client.
	*(BYTE*)0x0437A3B = 19;
}

void SetSkillDataString()
{
	// Modifica a string de formatação do SkillData.csv para não ler a informação Act123_2
	strcpy((char*)0x4C059E, "%*s %d %d %d %d %d %d %d");
}

void SetEncDec()
{
	// Altera a 'keys hash table' para a versão atual do client.
	memcpy((BYTE*)0x4CB920, &keys[0], 512);

	// Altera as 'Enc Keys'
	*(BYTE*)0x419BFE = 0x5;
	*(BYTE*)0x419B52 = 0x51;
	*(BYTE*)0x419BC5 = 0x91;
	
	// Altera as 'Dec Keys'
	*(WORD*)0x419530 = 0xE1D1;
	*(BYTE*)0x419532 = 0x90;
	*(BYTE*)0x41959E = 0x5;
}

void SetVersion()
{
	// Altera o 'CliVer'
	*(DWORD*)0x422C18 = 754;
}

void SetSockAddrPorts()
{
	// Modifica as portas de comunicação via tcp com a database e o client.
	*(DWORD*)0x44A48C = 8281;
	*(DWORD*)0x44A1FE = 7514;
}

void SetPacketSize()
{
	/* Default CliVer : 7.54 */

	//Heap Stable
	*(WORD*)0x471FD6 = 16384;

	// Altera o tamanho de montagem e checagem do packet GoToWorld (0x114). Padrão: 788
	*(WORD*)0x44E147 = 1245;
	*(DWORD*)0x40F98B = 1245;

	// Altera o tamanho de montagem e checagem do packet SendScore (0x336). Padrão: 64
	*(WORD*)0x4413A6 = 92;
	*(BYTE*)0x40FAFF = 92;

	// Altera o tamanho de montagem e checagem do packet SendEtc (0x337). Padrão : 32
	*(WORD*)0x441607 = 36;
	*(BYTE*)0x40FB23 = 36;

	// Altera o tamanho de montagem e checagem do packet AddExp (0x338). Padrão : 20
	*(WORD*)0x45AF0E = 24;

	// Altera o tamanho de montagem do packet de AutoTrade (0x363). Padrão : 132
	*(WORD*)0x41CBA1 = 200;

	// Altera o tamanho de montagem do packet de CreateMob (0x364). Padrão: 108
	*(WORD*)0x41C62D = 176;

	// Altera o tamanho de montagem do packet de NormalAtack (0x39D). Padrão : 44
	*(WORD*)0x41D280 = 48;

	// Altera o tamanho de checagem do packet unnamed (0x803). Padrão : 64
	*(BYTE*)0x4105FA = 116;

	// Altera o tamanho de montagem do packet de Efeito 0x36B Padrão : 0x2C
	*(BYTE*)0x4410C2 = 0x3C;

	// Evita verificação do cliver, liberando assim qualquer versão de client se conectar ao servidor (0x20D).
	//*(BYTE*)0x422C40 = 0xEB;
	//*(WORD*)0x422C32 = 0x9090;
}

void SetMaxLevel_TrainningCamp()
{
	*(BYTE*)0x423D43 = 60;
}