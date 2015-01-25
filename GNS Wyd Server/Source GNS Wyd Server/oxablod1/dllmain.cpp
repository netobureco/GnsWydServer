// dllmain.cpp : Defines the entry point for the DLL application.
#include "Stdafx.h"


CConta CCont[PLAYER];

BOOL WINAPI DllMain(HINSTANCE hInstDLL, DWORD catchReason, LPVOID lpResrv)
{
    switch (catchReason)
    {
        case DLL_PROCESS_ATTACH:
		{
			DllInit();
			DoDirection();
			ler_guild();
			//Init(VerificaSkills);
			
			
			break;
		}
        case DLL_PROCESS_DETACH:
		{
			FreeLibrary(hInstDLL);
			break;
		}
    }

    return TRUE;
}
