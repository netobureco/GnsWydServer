#include "stdafx.h"

DWORD WINAPI Avisos()
{
    time_t start,end;
    time (&start);

    while(1)
    {
        time(&end);
        if(((difftime (end,start))/60) >= 10)
        {
			SendNotice("Bem vindo ao GNS-WSv.");
			Sleep(5000);
			SendNotice("Estamos trabalhando para melhoria do servidor.");
			Sleep(5000);
			SendNotice("Faça sua doação para o servidor evoluir!");
			Sleep(5000);
			SendNotice("Nosso site é : www.gnomudos.com.br");
			Sleep(5000);
			SendNotice("Equipe: ADM LUAN,COTOCO,ISAQUE PROGRAMADOR: GNS MALEIRO.");
			Sleep(5000);
			SendNotice("Qualquer problema relate via site ou skype:htfulltop!");
			Sleep(5000);
			SendNotice("Servidor Gnomudos Wyd Server.");
			Sleep(5000);
			SendNotice("Nossa equipe agradece a sua preferencia Bom jogo!");
            time (&start);
        }
        Sleep(7000); // pausa pra n sobrecarregar cpu
    }
    return 0;
}

