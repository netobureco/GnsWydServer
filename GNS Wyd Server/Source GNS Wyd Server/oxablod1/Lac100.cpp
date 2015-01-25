#include "Stdafx.h"

void Lac100(st_Item *Lac,st_Item *Equip)
{
 if(Equip->EFV1 >= 1 && Equip->EFV1 <= 8)
 {
  Equip->EFV1 += 1;
  return;
 }
 else if(Equip->EF1 == 0 && Equip->EFV1 == 0)
 {
  Equip->EF1 = 43;
  Equip->EFV1 = 1;
  return;
 }
 else if(Equip->EFV1 >= 230 && Equip->EFV1 <= 233)
 {
  switch(Equip->EFV1)
  {
   case 230: 
    Equip->EFV1 = 234;
    break;
   case 231: 
    Equip->EFV1 = 235;
    break;
   case 232: 
    Equip->EFV1 = 236;
    break;
   case 233: 
    Equip->EFV1 = 237;
    break;
    
  }
 }
}