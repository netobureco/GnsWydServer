//#include "Login_DBSrv.h"
#include <stdio.h>
#include "stdafx.h"
 
void LoginRequest_SERVER(BYTE *m_PacketBuffer)
{
        p803 *p = (p803*)m_PacketBuffer;
        if(p->Name == 0 || p->Keys == 0 || p->Pass == 0) ZeroMemory(m_PacketBuffer, p->Header.Size);
 
        int cAno = *(unsigned short*)(0x00A5EA424) + 1900;
        int cMes = *(unsigned short*)(0x00A5EA420) + 1; //0 Janeiro, 1 Fev
        int cDia = *(unsigned short*)(0x00A5EA41c);
        int cHor = *(unsigned short*)(0x00A5EA418);
        int cMin = *(unsigned short*)(0x00A5EA414);
 
        FILE *fs = NULL;
    char line[120],arqui[100],*name;
    int dia, mes, ano, hor, min;
 
//      if(strcmp((char*)p->Name, "admin") == 0)
//      {
//              SendClientMsg(*(WORD*)&m_PacketBuffer[6], "Não foi possível realizar login.");
//              ZeroMemory(m_PacketBuffer, *(short*)m_PacketBuffer);
//              return;
//      }
 
    sprintf(arqui,"DataBase\\Accounts\\Bans\\%s.ban", p->Name);
    fs = fopen(arqui,"rt+");
 
    if(fs != NULL)
    {
        while((fscanf(fs, "%[^\n]", line)) != EOF)
        {
            fgetc(fs);
            sscanf(line, "%d,%d,%d",&dia ,&mes, &ano);
           
                        if(cDia >= dia && cMes >= mes && cAno >= ano)
                        {
                                remove(arqui);
                                fclose(fs);
                                return;
                        }
 
                        else
                        {
                                SendClientMsg(p->Header.ClientID, "Conta bloqueada, contate o suporte para mais informações!");
                                ZeroMemory(m_PacketBuffer, p->Header.Size);
                                fclose(fs);
                                return;
                        }
 
        }
        fclose(fs);
    }
       
        sprintf(arqui,"DataBase\\Accounts\\TempBan\\%s.ban", p->Name);
    fs = fopen(arqui,"rt+");
 
    if(fs != NULL)
    {
        while((fscanf(fs, "%[^\n]", line)) != EOF)
        {
            fgetc(fs);
            sscanf(line, "%d,%d,%d,%d,%d",&dia ,&mes, &ano, &hor, &min);
           
                        if(cDia >= dia && cMes >= mes && cAno >= ano && cHor >= hor && cMin >= min)
                        {
                                remove(arqui);
                                fclose(fs);
                                return;
                        }
 
                        else
                        {
                                SendClientMsg(p->Header.ClientID, "Conta bloqueada por 3 horas devido ao uso de programas ilegais.");
                                ZeroMemory(m_PacketBuffer, p->Header.Size);
                                fclose(fs);
                                return;
                        }
 
        }
        fclose(fs);
    }
 
        if(fs == NULL) return;
 
        fclose(fs);
    return;
}
 
 