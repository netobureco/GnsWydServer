#include "stdafx.h"

void Dell(int clientid , int SrcSlot)
{

        MOB *thisclient = (MOB*)GetMobFromIndex(clientid);
{
thisclient->Inventory[SrcSlot].Index = 0;
thisclient->Inventory[SrcSlot].EF1 = 0;
thisclient->Inventory[SrcSlot].EFV1 = 0;
thisclient->Inventory[SrcSlot].EF2 = 0;
thisclient->Inventory[SrcSlot].EFV2 = 0;
thisclient->Inventory[SrcSlot].EF3 = 0;
thisclient->Inventory[SrcSlot].EFV3 = 0;
SendItens(clientid,SrcSlot);
}
}
