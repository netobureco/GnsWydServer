#include "Stdafx.h"


void DesbugFaceBM(int clientId)
{
	int cDesbugADD = PByte(clientId + 0x061);
	int cDesbugADD2 = PByte(clientId + 0x063);
	int cDesbug = PInt(clientId + 0x05C);
	int cClass = PInt(clientId + 0x014);
	if(cDesbugADD <= 1)
	{
		cDesbug = 21;
		PInt(clientId + 0x05C) = cDesbug;
		return;
	}
	else if(cDesbugADD >= 2)
	{
		if(cDesbugADD2 == 8)
		{
			cDesbug = 8;
			PInt(clientId + 0x05C) = cDesbug;
			return;
		}
		else if(cDesbugADD2 == 18)
		{
			cDesbug = 18;
			PInt(clientId + 0x05C) = cDesbug;
			return;
		}
		else if(cDesbugADD2 == 28)
		{
			cDesbug = 28;
			PInt(clientId + 0x05C) = cDesbug;
			return;
		}
		else if(cDesbugADD2 == 38)
		{
			cDesbug = 38;
			PInt(clientId + 0x05C) = cDesbug;
			return;
		}
		else
		{
			SendClientMessage(clientId,"Entre em contato conosco explicando sobre o ocorrido.");
		}
	}
	return;
}



void Montarias()
{
	int Porco_DF = 0x04C92B8;
	int Porco_DM = 0x04C92BC;
	int Porco_EV = 0x04C92C0;
	int Porco_RM = 0x04C92C4;
	int Porco_VM = 0x04C92C8;
		*(unsigned short*)(Porco_DF) = 0;
		*(unsigned short*)(Porco_DM) = 0;
		*(unsigned short*)(Porco_EV) = 0;
		*(unsigned short*)(Porco_RM) = 0;
		*(unsigned short*)(Porco_VM) = 4;
	int Javali_DF = 0x04C92CC;
	int Javali_DM = 0x04C92D0;
	int Javali_EV = 0x04C92D4;
	int Javali_RM = 0x04C92D8;
	int Javali_VM = 0x04C92DC;
		*(unsigned short*)(Javali_DF) = 0;
		*(unsigned short*)(Javali_DM) = 0;
		*(unsigned short*)(Javali_EV) = 0;
		*(unsigned short*)(Javali_RM) = 0;
		*(unsigned short*)(Javali_VM) = 4;
	int Lobo_DF = 0x04C92E0;
	int Lobo_DM = 0x04C92E4;
	int Lobo_EV = 0x04C92E8;
	int Lobo_RM = 0x04C92EC;
	int Lobo_VM = 0x04C92F0;
		*(unsigned short*)(Lobo_DF) = 50;
		*(unsigned short*)(Lobo_DM) = 6;
		*(unsigned short*)(Lobo_EV) = 0;
		*(unsigned short*)(Lobo_RM) = 0;
		*(unsigned short*)(Lobo_VM) = 5;
	int Dragão_Menor_DF = 0x04C92F4;
	int Dragão_Menor_DM = 0x04C92F8;
	int Dragão_Menor_EV = 0x04C92FC;
	int Dragão_Menor_RM = 0x04C9300;
	int Dragão_Menor_VM = 0x04C9304;
		*(unsigned short*)(Dragão_Menor_DF) = 80;
		*(unsigned short*)(Dragão_Menor_DM) = 11;
		*(unsigned short*)(Dragão_Menor_EV) = 0;
		*(unsigned short*)(Dragão_Menor_RM) = 0;
		*(unsigned short*)(Dragão_Menor_VM) = 5;
	int Urso_DF = 0x04C9308;
	int Urso_DM = 0x04C930C;
	int Urso_EV = 0x04C9310;
	int Urso_RM = 0x04C9314;
	int Urso_VM = 0x04C9318;
		*(unsigned short*)(Urso_DF) = 100;
		*(unsigned short*)(Urso_DM) = 16;
		*(unsigned short*)(Urso_EV) = 0;
		*(unsigned short*)(Urso_RM) = 0;
		*(unsigned short*)(Urso_VM) = 4;
	int Dente_de_Sabre_DF = 0x04C931C;
	int Dente_de_Sabre_DM = 0x04C9320;
	int Dente_de_Sabre_EV = 0x04C9324;
	int Dente_de_Sabre_RM = 0x04C9328;
	int Dente_de_Sabre_VM = 0x04C932C;
		*(unsigned short*)(Dente_de_Sabre_DF) = 150;
		*(unsigned short*)(Dente_de_Sabre_DM) = 21;
		*(unsigned short*)(Dente_de_Sabre_EV) = 0;
		*(unsigned short*)(Dente_de_Sabre_RM) = 0;
		*(unsigned short*)(Dente_de_Sabre_VM) = 5;
	int Cavalo_sSela_N_DF = 0x04C9330;
	int Cavalo_sSela_N_DM = 0x04C9334;
	int Cavalo_sSela_N_EV = 0x04C9338;
	int Cavalo_sSela_N_RM = 0x04C933C;
	int Cavalo_sSela_N_VM = 0x04C9340;
		*(unsigned short*)(Cavalo_sSela_N_DF) = 250;
		*(unsigned short*)(Cavalo_sSela_N_DM) = 41;
		*(unsigned short*)(Cavalo_sSela_N_EV) = 14;
		*(unsigned short*)(Cavalo_sSela_N_RM) = 0;
		*(unsigned short*)(Cavalo_sSela_N_VM) = 6;
	int Cavalo_Fantasm_N_DF = 0x04C9344;
	int Cavalo_Fantasm_N_DM = 0x04C9348;
	int Cavalo_Fantasm_N_EV = 0x04C934C;
	int Cavalo_Fantasm_N_RM = 0x04C9350;
	int Cavalo_Fantasm_N_VM = 0x04C9354;
		*(unsigned short*)(Cavalo_Fantasm_N_DF) = 300;
		*(unsigned short*)(Cavalo_Fantasm_N_DM) = 46;
		*(unsigned short*)(Cavalo_Fantasm_N_EV) = 18;
		*(unsigned short*)(Cavalo_Fantasm_N_RM) = 0;
		*(unsigned short*)(Cavalo_Fantasm_N_VM) = 6;
	int Cavalo_Leve_N_DF = 0x04C9358;
	int Cavalo_Leve_N_DM = 0x04C935C;
	int Cavalo_Leve_N_EV = 0x04C9360;
	int Cavalo_Leve_N_RM = 0x04C9364;
	int Cavalo_Leve_N_VM = 0x04C9368;
		*(unsigned short*)(Cavalo_Leve_N_DF) = 350;
		*(unsigned short*)(Cavalo_Leve_N_DM) = 51;
		*(unsigned short*)(Cavalo_Leve_N_EV) = 21;
		*(unsigned short*)(Cavalo_Leve_N_RM) = 0;
		*(unsigned short*)(Cavalo_Leve_N_VM) = 6;
	int Cavalo_Equip_N_DF = 0x04C936C;
	int Cavalo_Equip_N_DM = 0x04C9370;
	int Cavalo_Equip_N_EV = 0x04C9374;
	int Cavalo_Equip_N_RM = 0x04C9378;
	int Cavalo_Equip_N_VM = 0x04C937C;
		*(unsigned short*)(Cavalo_Equip_N_DF) = 400;
		*(unsigned short*)(Cavalo_Equip_N_DM) = 56;
		*(unsigned short*)(Cavalo_Equip_N_EV) = 25;
		*(unsigned short*)(Cavalo_Equip_N_RM) = 0;
		*(unsigned short*)(Cavalo_Equip_N_VM) = 6;
	int Cavalo_Andaluz_N_DF = 0x04C9380;
	int Cavalo_Andaluz_N_DM = 0x04C9384;
	int Cavalo_Andaluz_N_EV = 0x04C9388;
	int Cavalo_Andaluz_N_RM = 0x04C938C;
	int Cavalo_Andaluz_N_VM = 0x04C9390;
		*(unsigned short*)(Cavalo_Andaluz_N_DF) = 500;
		*(unsigned short*)(Cavalo_Andaluz_N_DM) = 66;
		*(unsigned short*)(Cavalo_Andaluz_N_EV) = 28;
		*(unsigned short*)(Cavalo_Andaluz_N_RM) = 0;
		*(unsigned short*)(Cavalo_Andaluz_N_VM) = 6;
	int Cavalo_sSela_B_DF = 0x04C9394;
	int Cavalo_sSela_B_DM = 0x04C9398;
	int Cavalo_sSela_B_EV = 0x04C939C;
	int Cavalo_sSela_B_RM = 0x04C93A0;
	int Cavalo_sSela_B_VM = 0x04C93A4;
		*(unsigned short*)(Cavalo_sSela_B_DF) = 250;
		*(unsigned short*)(Cavalo_sSela_B_DM) = 41;
		*(unsigned short*)(Cavalo_sSela_B_EV) = 0;
		*(unsigned short*)(Cavalo_sSela_B_RM) = 16;
		*(unsigned short*)(Cavalo_sSela_B_VM) = 6;
	int Cavalo_Fantasm_B_DF = 0x04C93A8;
	int Cavalo_Fantasm_B_DM = 0x04C93AC;
	int Cavalo_Fantasm_B_EV = 0x04C93B0;
	int Cavalo_Fantasm_B_RM = 0x04C93B4;
	int Cavalo_Fantasm_B_VM = 0x04C93B8;
		*(unsigned short*)(Cavalo_Fantasm_B_DF) = 300;
		*(unsigned short*)(Cavalo_Fantasm_B_DM) = 46;
		*(unsigned short*)(Cavalo_Fantasm_B_EV) = 0;
		*(unsigned short*)(Cavalo_Fantasm_B_RM) = 20;
		*(unsigned short*)(Cavalo_Fantasm_B_VM) = 6;
	int Cavalo_Leve_B_DF = 0x04C93BC;
	int Cavalo_Leve_B_DM = 0x04C93C0;
	int Cavalo_Leve_B_EV = 0x04C93C4;
	int Cavalo_Leve_B_RM = 0x04C93C8;
	int Cavalo_Leve_B_VM = 0x04C93CC;
		*(unsigned short*)(Cavalo_Leve_B_DF) = 350;
		*(unsigned short*)(Cavalo_Leve_B_DM) = 51;
		*(unsigned short*)(Cavalo_Leve_B_EV) = 0;
		*(unsigned short*)(Cavalo_Leve_B_RM) = 24;
		*(unsigned short*)(Cavalo_Leve_B_VM) = 6;
	int Cavalo_Equip_B_DF = 0x04C93D0;
	int Cavalo_Equip_B_DM = 0x04C93D4;
	int Cavalo_Equip_B_EV = 0x04C93D8;
	int Cavalo_Equip_B_RM = 0x04C93DC;
	int Cavalo_Equip_B_VM = 0x04C93E0;
		*(unsigned short*)(Cavalo_Equip_B_DF) = 400;
		*(unsigned short*)(Cavalo_Equip_B_DM) = 56;
		*(unsigned short*)(Cavalo_Equip_B_EV) = 0;
		*(unsigned short*)(Cavalo_Equip_B_RM) = 28;
		*(unsigned short*)(Cavalo_Equip_B_VM) = 6;
	int Cavalo_Andaluz_B_DF = 0x04C93E4;
	int Cavalo_Andaluz_B_DM = 0x04C93E8;
	int Cavalo_Andaluz_B_EV = 0x04C93EC;
	int Cavalo_Andaluz_B_RM = 0x04C93F0;
	int Cavalo_Andaluz_B_VM = 0x04C93F4;
		*(unsigned short*)(Cavalo_Andaluz_B_DF) = 500;
		*(unsigned short*)(Cavalo_Andaluz_B_DM) = 66;
		*(unsigned short*)(Cavalo_Andaluz_B_EV) = 0;
		*(unsigned short*)(Cavalo_Andaluz_B_RM) = 32;
		*(unsigned short*)(Cavalo_Andaluz_B_VM) = 6;
	int Fenrir_DF = 0x04C93F8;
	int Fenrir_DM = 0x04C93FC;
	int Fenrir_EV = 0x04C9400;
	int Fenrir_RM = 0x04C9404;
	int Fenrir_VM = 0x04C9408;
		*(unsigned short*)(Fenrir_DF) = 550;
		*(unsigned short*)(Fenrir_DM) = 71;
		*(unsigned short*)(Fenrir_EV) = 0;
		*(unsigned short*)(Fenrir_RM) = 0;
		*(unsigned short*)(Fenrir_VM) = 6;
	int Dragão_DF = 0x04C940C;
	int Dragão_DM = 0x04C9410;
	int Dragão_EV = 0x04C9414;
	int Dragão_RM = 0x04C9418;
	int Dragão_VM = 0x04C941C;
		*(unsigned short*)(Dragão_DF) = 600;
		*(unsigned short*)(Dragão_DM) = 71;
		*(unsigned short*)(Dragão_EV) = 0;
		*(unsigned short*)(Dragão_RM) = 0;
		*(unsigned short*)(Dragão_VM) = 6;
	int Fenrir_das_Sombras_DF = 0x04C9420;
	int Fenrir_das_Sombras_DM = 0x04C9424;
	int Fenrir_das_Sombras_EV = 0x04C9428;
	int Fenrir_das_Sombras_RM = 0x04C942C;
	int Fenrir_das_Sombras_VM = 0x04C9430;
		*(unsigned short*)(Fenrir_das_Sombras_DF) = 550;
		*(unsigned short*)(Fenrir_das_Sombras_DM) = 71;
		*(unsigned short*)(Fenrir_das_Sombras_EV) = 0;
		*(unsigned short*)(Fenrir_das_Sombras_RM) = 20;
		*(unsigned short*)(Fenrir_das_Sombras_VM) = 6;
	int Tigre_de_Fogo_DF = 0x04C9434;
	int Tigre_de_Fogo_DM = 0x04C9438;
	int Tigre_de_Fogo_EV = 0x04C943C;
	int Tigre_de_Fogo_RM = 0x04C9440;
	int Tigre_de_Fogo_VM = 0x04C9444;
		*(unsigned short*)(Tigre_de_Fogo_DF) = 650;
		*(unsigned short*)(Tigre_de_Fogo_DM) = 81;
		*(unsigned short*)(Tigre_de_Fogo_EV) = 21;
		*(unsigned short*)(Tigre_de_Fogo_RM) = 28;
		*(unsigned short*)(Tigre_de_Fogo_VM) = 6;
	int Dragão_Vermelho_DF = 0x04C9448;
	int Dragão_Vermelho_DM = 0x04C944C;
	int Dragão_Vermelho_EV = 0x04C9450;
	int Dragão_Vermelho_RM = 0x04C9454;
	int Dragão_Vermelho_VM = 0x04C9458;
		*(unsigned short*)(Dragão_Vermelho_DF) = 700;
		*(unsigned short*)(Dragão_Vermelho_DM) = 86;
		*(unsigned short*)(Dragão_Vermelho_EV) = 28;
		*(unsigned short*)(Dragão_Vermelho_RM) = 32;
		*(unsigned short*)(Dragão_Vermelho_VM) = 6;
	int Unicórnio_DF = 0x04C945C;
	int Unicórnio_DM = 0x04C9460;
	int Unicórnio_EV = 0x04C9464;
	int Unicórnio_RM = 0x04C9468;
	int Unicórnio_VM = 0x04C946C;
		*(unsigned short*)(Unicórnio_DF) = 570;
		*(unsigned short*)(Unicórnio_DM) = 71;
		*(unsigned short*)(Unicórnio_EV) = 7;
		*(unsigned short*)(Unicórnio_RM) = 16;
		*(unsigned short*)(Unicórnio_VM) = 6;
	int Pegasus_DF = 0x04C9470;
	int Pegasus_DM = 0x04C9474;
	int Pegasus_EV = 0x04C9478;
	int Pegasus_RM = 0x04C947C;
	int Pegasus_VM = 0x04C9480;
		*(unsigned short*)(Pegasus_DF) = 570;
		*(unsigned short*)(Pegasus_DM) = 71;
		*(unsigned short*)(Pegasus_EV) = 11;
		*(unsigned short*)(Pegasus_RM) = 8;
		*(unsigned short*)(Pegasus_VM) = 6;
	int Unisus_DF = 0x04C9484;
	int Unisus_DM = 0x04C9488;
	int Unisus_EV = 0x04C948C;
	int Unisus_RM = 0x04C9490;
	int Unisus_VM = 0x04C9494;
		*(unsigned short*)(Unisus_DF) = 570;
		*(unsigned short*)(Unisus_DM) = 71;
		*(unsigned short*)(Unisus_EV) = 14;
		*(unsigned short*)(Unisus_RM) = 12;
		*(unsigned short*)(Unisus_VM) = 6;
	int Grifo_DF = 0x04C9498;
	int Grifo_DM = 0x04C949C;
	int Grifo_EV = 0x04C94A0;
	int Grifo_RM = 0x04C94A4;
	int Grifo_VM = 0x04C94A8;
		*(unsigned short*)(Grifo_DF) = 590;
		*(unsigned short*)(Grifo_DM) = 76;
		*(unsigned short*)(Grifo_EV) = 11;
		*(unsigned short*)(Grifo_RM) = 20;
		*(unsigned short*)(Grifo_VM) = 6;
	int Hipogrifo_DF = 0x04C94AC;
	int Hipogrifo_DM = 0x04C94B0;
	int Hipogrifo_EV = 0x04C94B4;
	int Hipogrifo_RM = 0x04C94B8;
	int Hipogrifo_VM = 0x04C94BC;
		*(unsigned short*)(Hipogrifo_DF) = 600;
		*(unsigned short*)(Hipogrifo_DM) = 76;
		*(unsigned short*)(Hipogrifo_EV) = 14;
		*(unsigned short*)(Hipogrifo_RM) = 16;
		*(unsigned short*)(Hipogrifo_VM) = 6;
	int Grifo_Sangrento_DF = 0x04C94C0;
	int Grifo_Sangrento_DM = 0x04C94C4;
	int Grifo_Sangrento_EV = 0x04C94C8;
	int Grifo_Sangrento_RM = 0x04C94CC;
	int Grifo_Sangrento_VM = 0x04C94D0;
		*(unsigned short*)(Grifo_Sangrento_DF) = 600;
		*(unsigned short*)(Grifo_Sangrento_DM) = 76;
		*(unsigned short*)(Grifo_Sangrento_EV) = 18;
		*(unsigned short*)(Grifo_Sangrento_RM) = 16;
		*(unsigned short*)(Grifo_Sangrento_VM) = 6;
	int Svadilfari_DF = 0x04C94D4;
	int Svadilfari_DM = 0x04C94D8;
	int Svadilfari_EV = 0x04C94DC;
	int Svadilfari_RM = 0x04C94E0;
	int Svadilfari_VM = 0x04C94E4;
		*(unsigned short*)(Svadilfari_DF) = 600;
		*(unsigned short*)(Svadilfari_DM) = 31;
		*(unsigned short*)(Svadilfari_EV) = 21;
		*(unsigned short*)(Svadilfari_RM) = 28;
		*(unsigned short*)(Svadilfari_VM) = 6;
	int Sleipnir_DF = 0x04C94E8;
	int Sleipnir_DM = 0x04C94EC;
	int Sleipnir_EV = 0x04C94F0;
	int Sleipnir_RM = 0x04C94F4;
	int Sleipnir_VM = 0x04C94F8;
		*(unsigned short*)(Sleipnir_DF) = 300;
		*(unsigned short*)(Sleipnir_DM) = 76;
		*(unsigned short*)(Sleipnir_EV) = 21;
		*(unsigned short*)(Sleipnir_RM) = 28;
		*(unsigned short*)(Sleipnir_VM) = 6;
	int Pantera_Negra_DF = 0x04C94FC;
	int Pantera_Negra_DM = 0x04C9500;
	int Pantera_Negra_EV = 0x04C9504;
	int Pantera_Negra_RM = 0x04C9508;
	int Pantera_Negra_VM = 0x04C950C;
		*(unsigned short*)(Pantera_Negra_DF) = 150;
		*(unsigned short*)(Pantera_Negra_DM) = 21;
		*(unsigned short*)(Pantera_Negra_EV) = 0;
		*(unsigned short*)(Pantera_Negra_RM) = 20;
		*(unsigned short*)(Pantera_Negra_VM) = 5;
}

void BANACCOUNT(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cMes = PInt(0x00A5EA420); //0 Janeiro, 1 Fev
	int cDia = PInt(0x00A5EA41c);
	int cAno = PInt(0x00A5EA424);//2011 = 111
	char tmp[1024];
	FILE *arquivo;
	char fama[100];
	char line[100];
	int famaplayer = 0, famee = 0;
	int dia,mes,ano,anotm,mestm;
	sprintf(fama,"config/ban/ban_de_[%s].txt", vLogin(ClientID));
	if(file_exists(fama))
	{
		arquivo = fopen(fama, "r");
		while ((fscanf(arquivo, "%[^\n]", line)) != EOF)
		{
			fgetc(arquivo);
			sscanf(line, "%d/%d/%d", &dia,&mes,&ano);
			{
				mestm = mes - 1;
					anotm = ano - 1900;
					if(cAno == anotm)
					{
						if(mestm == cMes)
						{
							if(cDia <= dia)
							{
								sprintf(tmp,"Conta banida até %d/%d/%d.",dia,mes,ano);
								SendSay(ClientID,tmp);
								SendClientMsg(ClientID,tmp);
								SendCharList(ClientID);
								//PByte(0x07b318e8 + (0x0C4C * ClientID)) = 0;
								fclose(arquivo);
								return;
							}
							return;
						}
						else if(mestm > cMes)
						{
							sprintf(tmp,"Conta banida até %d/%d/%d.",dia,mes,ano);
							SendSay(ClientID,tmp);
							SendClientMsg(ClientID,tmp);
							SendCharList(ClientID);
							//PByte(0x07b318e8 + (0x0C4C * ClientID)) = 0;
							fclose(arquivo);
							return;
						}
						return;
					}
					else if(cAno <= anotm)
					{
						sprintf(tmp,"Conta banida até %d/%d/%d.",dia,mes,ano);
						SendSay(ClientID,tmp);
						SendClientMsg(ClientID,tmp);
						SendCharList(ClientID);
						//PByte(0x07b318e8 + (0x0C4C * ClientID)) = 0;
						fclose(arquivo);
						return;
					}
					return;
                }
				return;
			}
		}	
	}

void MountExpira(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cAno = PInt(0x00A5EA424);
	int cMes = PInt(0x00A5EA420);
	int cDia = PInt(0x00A5EA41c);
	if(player->Equip[14].Index >= 3980 && player->Equip[14].Index <= 3992)
	{
		int soma = cMes + cDia + cAno;
		int soma2 = player->Equip[14].EFV1 + player->Equip[14].EFV2 + player->Equip[14].EFV3;
		if(soma > soma2)
		{
			player->Equip[14].Index = 0;
			player->Equip[14].EF1 = 0;
			player->Equip[14].EFV1 = 0;
			player->Equip[14].EF2 = 0;
			player->Equip[14].EFV2 = 0;
			player->Equip[14].EF3 = 0;
			player->Equip[14].EFV3 = 0;
			SendItens(ClientID,14);
			SendClientMsg(ClientID,"Montaria expirou.");
		}
	}
}

void MountSRACAO(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int cAno = PInt(0x00A5EA424); 
	int cMes = PInt(0x00A5EA420); 
	int cDia = PInt(0x00A5EA41c);
	if(player->Equip[14].Index >= 3986 && player->Equip[14].Index <= 3989)
	{
		if(player->Equip[14].EF1 == 0 && player->Equip[14].EFV1 == 0)
		{
			if(cMes == 11)
			{
				player->Equip[14].EF1 = 106;
				player->Equip[14].EFV1 = cDia;
				player->Equip[14].EF2 = 110;
				player->Equip[14].EFV2 = 1;
				player->Equip[14].EF3 = 109;
				player->Equip[14].EFV3 = cAno;
				SendItens(ClientID,14);
			}
			else
			{
				player->Equip[14].EF1 = 106;
				player->Equip[14].EFV1 = cDia;
				player->Equip[14].EF2 = 110;
				player->Equip[14].EFV2 = cMes + 1;
				player->Equip[14].EF3 = 109;
				player->Equip[14].EFV3 = cAno;
				SendItens(ClientID,14);
			}
		}
	}
	else if(player->Equip[14].Index >= 3980 && player->Equip[14].Index <= 3982)
	{
		if(player->Equip[14].EF1 == 0 && player->Equip[14].EFV1 == 0)
		{
			if(cDia >= 27)
			{
				player->Equip[14].EF1 = 106;
				player->Equip[14].EFV1 = 2;
				player->Equip[14].EF2 = 110;
				player->Equip[14].EFV2 = cMes + 1;
				player->Equip[14].EF3 = 109;
				player->Equip[14].EFV3 = cAno;
				SendItens(ClientID,14);
			}
			else
			{
				player->Equip[14].EF1 = 106;
				player->Equip[14].EFV1 = cDia + 3;
				player->Equip[14].EF2 = 110;
				player->Equip[14].EFV2 = cMes;
				player->Equip[14].EF3 = 109;
				player->Equip[14].EFV3 = cAno;
				SendItens(ClientID,14);
			}
		}
	}
	else if(player->Equip[14].Index >= 3983 && player->Equip[14].Index <= 3985)
	{
		if(player->Equip[14].EF1 == 0 && player->Equip[14].EFV1 == 0)
		{
			if(cDia >= 16)
			{
				player->Equip[14].EF1 = 106;
				player->Equip[14].EFV1 = cDia + 15 - 30;
				player->Equip[14].EF2 = 110;
				player->Equip[14].EFV2 = cMes + 1;
				player->Equip[14].EF3 = 109;
				player->Equip[14].EFV3 = cAno;
				SendItens(ClientID,14);
			}
			else if(cDia <= 15)
			{
				player->Equip[14].EF1 = 106;
				player->Equip[14].EFV1 = cDia + 15;
				player->Equip[14].EF2 = 110;
				player->Equip[14].EFV2 = cMes;
				player->Equip[14].EF3 = 109;
				player->Equip[14].EFV3 = cAno;
				SendItens(ClientID,14);
			}
		}
	}
}

void VerifShire(int ClientID)
{
	return;
}

int BloqueiaDrop(int item)
{
	if(item == 446)
	{
		return 1;
	}
	else if(item == 3303)
	{
		return 1;
	}
	else if(item >= 4152 && item <= 4166)
	{
		return 1;
	}
	else if(item >= 3900 && item <= 3994)
	{
		return 1;
	}
	else if(item >= 3503 && item <= 3507)
	{
		return 1;
	}
	else if(item == 769)
	{
		return 1;
	}
	else if(item >= 3182 && item <= 3182 + 8)
	{
		return 1;
	}
	else if(item >= 777 && item <= 777 + 8)
	{
		return 1;
	}
	else if(item >= 3173 && item <= 3173 + 8)
	{
		return 1;
	}
	else
		return 0;
}

void FixWinNoatum()
{
	int i;
	for(i = 0; i < 4; i++)
		if(*(DWORD*)(0x4C7BC0 + i) == *(DWORD*)(0x4C7D00))
			break;
	if(i == 4)
	{
		*(DWORD*)0x4C7D00 = 0;
		*(DWORD*)0x4C7D4C = 0;
	}
}

void msgmorte(int ClientID)
{
	int cHor = PInt(0x00A5EA418);
	int cMin = PInt(0x00A5EA414);
	int cSeg = PInt(0x00A5EA410);
	sprintf(BufferLoop,"!Você foi morto ás %d:%d:%d.",cHor,cMin,cSeg);
	//p_334(ClientID,ClientID,"~ ~ Automatico ~ ~",BufferLoop);
}

int morte(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	int addr_bclient = ClientID * 0x410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	int itenslot = GetFirstSlotSADD(ClientID,3463,64);
	int oie = player->Inventory[itenslot].EFV1;
	int cHor = PInt(0x00A5EA418);
	int cDiaDaSem = PInt(0x00a5ea428);
	char mgg[50];
	if(player->Equip[15].Index == 769)
	{
		if(player->Equip[15].EFV1 == 0)
		{
			player->Equip[15].Index = 0;
			SendSay(ClientID,"");
		}
		else
		{
			player->Equip[15].EFV1 -= 1;
			sprintf(mgg,".",player->Equip[15].EFV1);
			SendSay(ClientID,mgg);
		}
		SendItens(ClientID,15);
		return 2;
	}
	if(player->Equip[13].Index == 769)
	{
		if(cX <= 2148 && cY <= 2157 && cX >= 2122 && cY >= 2138)
		{
			SendClientMsg(ClientID,"_");
			return 0;
		}
		if(cHor >= 18 && cHor <= 19)
		{
			return 0;
		}
		if(player->Equip[13].EFV1 == 0)
		{
			player->Equip[13].Index = 0;
		}
		else
		{
			player->Equip[13].EFV1 -= 1;
		}
		SendItens(ClientID,13);
		return 2;
	}
	if(player->Equip[1].Index == 3506)
	{
		if(player->Equip[1].EFV1 == 0)
		{
			return 0;
		}
		else
		{
			player->Equip[1].EFV1 -= 1;
			sprintf(mgg,".",player->Equip[15].EFV1);
			SendSay(ClientID,mgg);
			SendItens(ClientID,1);
			return 2;
		}		
	}
	else if(player->bStatus.Level >= 1000)
	{
		return 2;
	}
	else if(itenslot != -1)
	{
		DoTeleport(ClientID,cX,cY);
		player->Inventory[itenslot].Index = 0;
		SendALL2(ClientID,itenslot);
		SendEffect(1,0xe ,ClientID);
		msgmorte(ClientID);
		return 2;
		if(player->Inventory[itenslot].EF1 == 61)
		{
			if(player->Inventory[itenslot].EFV1 >= 2)
			{
				DoTeleport(ClientID,cX,cY);
				player->Inventory[itenslot].EFV1 -= 1;
				SendALL2(ClientID,itenslot);
				SendEffect(1,0xe ,ClientID);
				msgmorte(ClientID);
			}
			else
			{
				DoTeleport(ClientID,cX,cY);
				player->Inventory[itenslot].Index = 0;
				SendALL2(ClientID,itenslot);
				SendEffect(1,0xe ,ClientID);
				msgmorte(ClientID);
				return 2;
			}
		}
		else if(player->Inventory[itenslot].EF2 == 61)
		{
			if(player->Inventory[itenslot].EFV2 >= 2)
			{
				player->Inventory[itenslot].EFV2 -= 1;
				SendALL2(ClientID,itenslot);
				SendEffect(1,0xe ,ClientID);
				msgmorte(ClientID);
			}
			else
			{
				player->Inventory[itenslot].Index = 0;
				SendALL2(ClientID,itenslot);//
				SendEffect(1,0xe ,ClientID);
				msgmorte(ClientID);
				return 2;
			}
		}
		else
		{
			player->Inventory[itenslot].Index = 0;
			SendALL2(ClientID,itenslot);
			SendEffect(1,0xe ,ClientID);
			msgmorte(ClientID);
			return 2;
		}
	}
	return 0;
}

void expdefin(int exp)
{
	/*MOB *player = (MOB*)GetMobFromIndex(1);
	int exp2 = exp / 6;
	int meuexp = player->Exp;
	sprintf(BufferLoop,"exp = %d / exp2 = %d / meuexp = %d",exp,exp2,meuexp);
	SendNotice(BufferLoop);
	exp = exp2;
	GetCurrentScore2(1);*/
}

int Loja(int ClientID, int vendedor, int item, unsigned long preco)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	st_Item *Produto = (st_Item*)&item;
	int goldbau = PLong((vendedor * 0xC4C) + 0x07B31E9C) + preco;
	if(goldbau >= 2000000000)
	{
		SendClientMsg(vendedor,"Você está com muito gold no baú.");
		SendClientMsg(ClientID,"O vendedor está com muito gold no baú.");
		return 0;
	}
	if(Produto->Index >= 3980 && Produto->Index <= 3994)
	{
		SendClientMsg(vendedor,"Este item não pode ser vendido.");
		SendClientMsg(ClientID,"Este item não pode ser vendido.");
		return 0;
	}
	if(Produto->Index == 3303)
	{
		SendClientMsg(vendedor,"Este item não pode ser vendido.");
		SendClientMsg(ClientID,"Este item não pode ser vendido.");
		return 0;
	}
	if(Produto->Index >= 4152 && Produto->Index <= 4166)
	{
		SendClientMsg(vendedor,"Este item não pode ser vendido.");
		SendClientMsg(ClientID,"Este item não pode ser vendido.");
		return 0;
	}
	if(Produto->Index >= 3503 && Produto->Index <= 3507)
	{
		SendClientMsg(vendedor,"Este item não pode ser vendido.");
		SendClientMsg(ClientID,"Este item não pode ser vendido.");
		return 0;
	}
	return 1;
}

void msglogon(int ClientID)
{
	MOB *player = (MOB*)GetMobFromIndex(ClientID);
	char msg[60];
	//char msgg[60];
	int addr_bclient = ClientID * 0x0410;
	int cX = PInt(addr_bclient + 0x015C6CEC);
	int cY = PInt(addr_bclient + 0x015C6CF0);
	for(int i=0;i<16;i++)
	{
		if(player->Name[i] == '_') player->Name[i] = NULL;
			 SendCreateMob(ClientID,ClientID,1);
	}
	if(cX >= 2456 && cY >= 1993 && cX <= 2473 && cY <= 2013) //Erion
	{
		sprintf(msg,"Seja bem vindo ao Gnomudos Wyd Sever %s.",player->Name);
		SendClientMsg(ClientID,msg);
		LoadBau(ClientID);
		LoadFrango(ClientID);
		LoadSephira(ClientID);
		LoadSaude(ClientID);
		return;
	}
	if(cX >= 2493 && cY >= 1707 && cX <= 2522 && cY <= 1721) //Azran
	{
		sprintf(msg,"Seja bem vindo ao Gnomudos Wyd Sever   %s.",player->Name);
		SendClientMsg(ClientID,msg);
		LoadBau(ClientID);
		LoadFrango(ClientID);
		LoadSephira(ClientID);
		LoadSaude(ClientID);
		return;
	}
	if(cX >= 2084 && cY >= 2087 && cX <= 2112 && cY <= 2109) //Armia
	{
		if(player->bStatus.Level <= 20 && player->Equip[0].EFV2 == 1)
		{
			DoTeleport(ClientID,2115,2043);
			SendClientMsg(ClientID,"Pàra sair daqui pegue level 20.");
		}
		sprintf(msg,"Seja bem vindo ao Gnomudos Wyd Sever   %s.",player->Name);
		SendClientMsg(ClientID,msg);
		LoadBau(ClientID);
		LoadFrango(ClientID);
		LoadSephira(ClientID);
		LoadSaude(ClientID);
		return;
	}
	GetCurrentScoreAffect(ClientID);
	SendScore(ClientID);
	return;
}


bool banest(char *login, int clientid)
{
	FILE *arquivo;
	char selado[100];
	char selado3[100];
	char line[50];
	char tempor[60];
	int cMes = PInt(0x00A5EA420); //0 Janeiro, 1 Fev
	int cDia = PInt(0x00A5EA41c);
	int cAno = PInt(0x00A5EA424);
	int cHor = PInt(0x00A5EA418);
	sprintf(selado,"banlist/%s.txt",login);
	arquivo = fopen(selado, "r");
	if(arquivo == NULL)
	{
        return TRUE;
	}
	while(fgets(line, sizeof(line), arquivo))
	{
		int var = 0;
		fgetc(arquivo);
		int dia = 0,mes = 0,ano = 0,hora = 0,tempo = 0, tot = 0;
		short scan = sscanf(line, "%d %d %d %d %d",&dia,&mes,&ano,&hora,&tempo);
		tot = hora + tempo;
		if(dia == 0){
			fclose(arquivo);
			SendClientMessage(clientid,"Sua conta está bloqueada permanentemente.");
			return FALSE;}

		if(tot >= 24) tot -= 23;

		if(tot < cHor)
		{
			fclose(arquivo);
			//remove(selado);
			return TRUE;
		}
		else{
			sprintf(tempor,"Sua conta estará livre a partir das %d:00.",tot + 1);
			SendClientMessage(clientid,tempor);
			fclose(arquivo);
			return FALSE;}	

		return FALSE;
	}
	fclose(arquivo);
	return TRUE;
}