#include "stdafx.h"
/*
int Banacc(char acc[15],int clientid)
{
	MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
	
    #define DATA 11
	FILE *stream;
	char line[80];
    char data[DATA],dia[10],mes[10],ano[10],diafim[10],mesfim[10],anofim[10],teste[100],nome[15],oi[15];
			 int i,a,b,diaf,mesf,anof;
		     time_t rawtime;
			 struct tm *local;
			 time(&rawtime);
			 local = localtime(&rawtime);
			 strftime(data, 11, "%d/%m/%Y", local);
			 dia[0]=data[0];
             dia[1]=data[1];
             mes[0]=data[3];
             mes[1]=data[4];
             ano[0]=data[6];
             ano[1]=data[7];
             ano[2]=data[8];
             ano[3]=data[9];
             i=atoi(ano);
             a=atoi(dia);
             b=atoi(mes);
			 stream = fopen("DataBase\\Ban\\banacc.txt","r");
			 while ((fscanf(stream, "%[^\n]", line)) != EOF)
                    {
                    fgetc(stream);
                    char datafim[15];
                    sscanf(line,"%d/%d/%d,%s",&diaf,&mesf,&anof,&datafim);
					if (strcmp(acc,datafim) == 0)
					{
                    int data2 = anof*10000+mesf*100+diaf;
					int data1 = i*10000+b*100+a;
					if(data1 > data2)
					{
					fclose(stream);
					}
					else if(data2 > data1)
					{
				    fclose(stream);
					Disconect(clientid);
                    break;
                    }
					else if(data2 == data1)
					{                    
                    fclose(stream);
					Disconect(clientid);
                    break; 
                    }
				    else
					{ 
					SendClientMsg(clientid,"Erro , contate a administração.");
                    fclose(stream);
					Disconect(clientid);
					break;
					}
					}
					
			 }
			 return 1;
}
*/