#include "stdafx.h"

void Novo_Gold1(int clientid,st_Item *ItemSend)
{
FILE *arquivo;
MOB *player = (MOB*)GetMobFromIndex(clientid);
char search[100];
char cash[100];
char cash2[100];
char line[100];
int itenslot = GetFirstSlotSADD(clientid,5499,64);
int cashh = PByte(0x04BFBA5); 
int var;
if(player->bStatus.Level >= 0)
{
sprintf(search,"DataBase/Loja_Nova/Gold/[%s].txt",vLogin(clientid));
if(file_exists(search))
{
arquivo = fopen(search, "r");
while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
fgetc(arquivo);
int cash3;
sscanf(line, "%d",&cash3);
cash3 += 1;
arquivo = fopen(search, "w");
sprintf(cash,"%d", cash3);
fputs(cash, arquivo);
sprintf(cash2,"Gerado 1 de UD", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
else
{
arquivo = fopen(search, "w");
var = 1;
sprintf(cash,"%d", var);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 1 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
}
}

void Novo_Gold5(int clientid,st_Item *ItemSend)
{
FILE *arquivo;
MOB *player = (MOB*)GetMobFromIndex(clientid);
char search[100];
char cash[100];
char cash2[100];
char line[100];
int itenslot = GetFirstSlotSADD(clientid,5499,64);
int cashh = PByte(0x04BFBA5); 
int var;
if(player->bStatus.Level >= 0)
{
sprintf(search,"DataBase/Loja_Nova/Gold/[%s].txt",vLogin(clientid));
if(file_exists(search))
{
arquivo = fopen(search, "r");
while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
fgetc(arquivo);
int cash3;
sscanf(line, "%d",&cash3);
cash3 += 5;
arquivo = fopen(search, "w");
sprintf(cash,"%d", cash3);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 5 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
else
{
arquivo = fopen(search, "w");
var = 5;
sprintf(cash,"%d", var);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 5 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
}
}

void Novo_Gold10(int clientid,st_Item *ItemSend)
{
FILE *arquivo;
MOB *player = (MOB*)GetMobFromIndex(clientid);
char search[100];
char cash[100];
char cash2[100];
char line[100];
int itenslot = GetFirstSlotSADD(clientid,5499,64);
int cashh = PByte(0x04BFBA5); 
int var;
if(player->bStatus.Level >= 0)
{
sprintf(search,"DataBase/Loja_Nova/Gold/[%s].txt",vLogin(clientid));
if(file_exists(search))
{
arquivo = fopen(search, "r");
while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
fgetc(arquivo);
int cash3;
sscanf(line, "%d",&cash3);
cash3 += 10;
arquivo = fopen(search, "w");
sprintf(cash,"%d", cash3);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 10 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
else
{
arquivo = fopen(search, "w");
var = 10;
sprintf(cash,"%d", var);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 10 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
}
}

void Novo_Gold15(int clientid,st_Item *ItemSend)
{
FILE *arquivo;
MOB *player = (MOB*)GetMobFromIndex(clientid);
char search[100];
char cash[100];
char cash2[100];
char line[100];
int itenslot = GetFirstSlotSADD(clientid,5499,64);
int cashh = PByte(0x04BFBA5); 
int var;
if(player->bStatus.Level >= 0)
{
sprintf(search,"DataBase/Loja_Nova/Gold/[%s].txt",vLogin(clientid));
if(file_exists(search))
{
arquivo = fopen(search, "r");
while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
fgetc(arquivo);
int cash3;
sscanf(line, "%d",&cash3);
cash3 += 15;
arquivo = fopen(search, "w");
sprintf(cash,"%d", cash3);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 15 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
else
{
arquivo = fopen(search, "w");
var = 15;
sprintf(cash,"%d", var);
fputs(cash, arquivo);
sprintf(cash2,"Gerado 15 de UD", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
}
}
void Novo_Gold20(int clientid,st_Item *ItemSend)
{
FILE *arquivo;
MOB *player = (MOB*)GetMobFromIndex(clientid);
char search[100];
char cash[100];
char cash2[100];
char line[100];
int itenslot = GetFirstSlotSADD(clientid,5499,64);
int cashh = PByte(0x04BFBA5); 
int var;
if(player->bStatus.Level >= 0)
{
sprintf(search,"DataBase/Loja_Nova/Gold/[%s].txt",vLogin(clientid));
if(file_exists(search))
{
arquivo = fopen(search, "r");
while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
fgetc(arquivo);
int cash3;
sscanf(line, "%d",&cash3);
cash3 += 20;
arquivo = fopen(search, "w");
sprintf(cash,"%d", cash3);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 20 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
else
{
arquivo = fopen(search, "w");
var = 20;
sprintf(cash,"%d", var);
fputs(cash, arquivo);
sprintf(cash2,"Gerado 20 de UD", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
}
}
void Novo_Gold30(int clientid,st_Item *ItemSend)
{
FILE *arquivo;
MOB *player = (MOB*)GetMobFromIndex(clientid);
char search[100];
char cash[100];
char cash2[100];
char line[100];
int itenslot = GetFirstSlotSADD(clientid,5499,64);
int cashh = PByte(0x04BFBA5); 
int var;
if(player->bStatus.Level >= 0)
{
sprintf(search,"DataBase/Loja_Nova/Gold/[%s].txt",vLogin(clientid));
if(file_exists(search))
{
arquivo = fopen(search, "r");
while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
fgetc(arquivo);
int cash3;
sscanf(line, "%d",&cash3);
cash3 += 30;
arquivo = fopen(search, "w");
sprintf(cash,"%d", cash3);
fputs(cash, arquivo);
sprintf(cash2,"Gerado 30 de UD", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
else
{
arquivo = fopen(search, "w");
var = 30;
sprintf(cash,"%d", var);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 30 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
}
}
void Novo_Gold40(int clientid,st_Item *ItemSend)
{
FILE *arquivo;
MOB *player = (MOB*)GetMobFromIndex(clientid);
char search[100];
char cash[100];
char cash2[100];
char line[100];
int itenslot = GetFirstSlotSADD(clientid,5499,64);
int cashh = PByte(0x04BFBA5); 
int var;
if(player->bStatus.Level >= 0)
{
sprintf(search,"DataBase/Loja_Nova/Gold/[%s].txt",vLogin(clientid));
if(file_exists(search))
{
arquivo = fopen(search, "r");
while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
fgetc(arquivo);
int cash3;
sscanf(line, "%d",&cash3);
cash3 += 40;
arquivo = fopen(search, "w");
sprintf(cash,"%d", cash3);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 40 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
else
{
arquivo = fopen(search, "w");
var = 40;
sprintf(cash,"%d", var);
fputs(cash, arquivo);
sprintf(cash2,"Gerado 40 de UD", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
}
}
void Novo_Gold50(int clientid,st_Item *ItemSend)
{
FILE *arquivo;
MOB *player = (MOB*)GetMobFromIndex(clientid);
char search[100];
char cash[100];
char cash2[100];
char line[100];
int itenslot = GetFirstSlotSADD(clientid,5499,64);
int cashh = PByte(0x04BFBA5); 
int var;
if(player->bStatus.Level >= 0)
{
sprintf(search,"DataBase/Loja_Nova/Gold/[%s].txt",vLogin(clientid));
if(file_exists(search))
{
arquivo = fopen(search, "r");
while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
fgetc(arquivo);
int cash3;
sscanf(line, "%d",&cash3);
cash3 += 50;
arquivo = fopen(search, "w");
sprintf(cash,"%d", cash3);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 50 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
else
{
arquivo = fopen(search, "w");
var = 50;
sprintf(cash,"%d", var);
fputs(cash, arquivo);
sprintf(cash2,"Gerado 50 de UD", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
}
}
void Novo_Gold60(int clientid,st_Item *ItemSend)
{
FILE *arquivo;
MOB *player = (MOB*)GetMobFromIndex(clientid);
char search[100];
char cash[100];
char cash2[100];
char line[100];
int itenslot = GetFirstSlotSADD(clientid,5499,64);
int cashh = PByte(0x04BFBA5); 
int var;
if(player->bStatus.Level >= 0)
{
sprintf(search,"DataBase/Loja_Nova/Gold/[%s].txt",vLogin(clientid));
if(file_exists(search))
{
arquivo = fopen(search, "r");
while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
fgetc(arquivo);
int cash3;
sscanf(line, "%d",&cash3);
cash3 += 60;
arquivo = fopen(search, "w");
sprintf(cash,"%d", cash3);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 60 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
else
{
arquivo = fopen(search, "w");
var = 60;
sprintf(cash,"%d", var);
fputs(cash, arquivo);
sprintf(cash2,"Gerado 60 de UD", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
}
}
void Novo_Gold100(int clientid,st_Item *ItemSend)
{
FILE *arquivo;
MOB *player = (MOB*)GetMobFromIndex(clientid);
char search[100];
char cash[100];
char cash2[100];
char line[100];
int itenslot = GetFirstSlotSADD(clientid,5499,64);
int cashh = PByte(0x04BFBA5); 
int var;
if(player->bStatus.Level >= 0)
{
sprintf(search,"DataBase/Loja_Nova/Gold/[%s].txt",vLogin(clientid));
if(file_exists(search))
{
arquivo = fopen(search, "r");
while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
fgetc(arquivo);
int cash3;
sscanf(line, "%d",&cash3);
cash3 += 100;
arquivo = fopen(search, "w");
sprintf(cash,"%d", cash3);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 100 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
else
{
arquivo = fopen(search, "w");
var = 100;
sprintf(cash,"%d", var);
fputs(cash, arquivo);
sprintf(cash2,"Gerado 100 de UD", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
}
}
void Novo_Gold1000(int clientid,st_Item *ItemSend)
{
FILE *arquivo;
MOB *player = (MOB*)GetMobFromIndex(clientid);
char search[100];
char cash[100];
char cash2[100];
char line[100];
int itenslot = GetFirstSlotSADD(clientid,5499,64);
int cashh = PByte(0x04BFBA5); 
int var;
if(player->bStatus.Level >= 0)
{
sprintf(search,"DataBase/Loja_Nova/Gold/[%s].txt",vLogin(clientid));
if(file_exists(search))
{
arquivo = fopen(search, "r");
while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
fgetc(arquivo);
int cash3;
sscanf(line, "%d",&cash3);
cash3 += 1000;
arquivo = fopen(search, "w");
sprintf(cash,"%d", cash3);
fputs(cash, arquivo);
sprintf(cash2,"Foi Gerado 1000 Gods Coins", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
else
{
arquivo = fopen(search, "w");
var = 1000;
sprintf(cash,"%d", var);
fputs(cash, arquivo);
sprintf(cash2,"Gerado 1000 de UD", cashh);
SendClientMsg(clientid,cash2);
fclose(arquivo);
player->Inventory[itenslot].Index = 0;
Amount(clientid,ItemSend);
SendALL(clientid);
return;
}
}
}