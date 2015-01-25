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
