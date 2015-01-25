
struct pFDE{
	PacketHeader Header;
	char Numeric[6];
	char Unknown[10];
	int ChangeNumeric;
};


struct p20D
{
	PacketHeader Header;
	char Login[16];
	char Password[12];
	INT32 Version;
	INT32 Unknows;
	char Keys[16];
};

class Hooks{
	public:
		static void __stdcall CloseUser(INT32 ClientID);
		static signed int __stdcall AcceptUser(INT32 FixClientID,char* szIPAddress);
		static void __stdcall PacketControlFix(unsigned char* szBuffer, INT32 FixClientID);

};


class Functions{
	public:
		Functions();
		~Functions();
		void (*CloseUser)(INT32 ClientID);
		void (*SendClientMSG)(INT32 ClientID, const char* szMessage);
		void __stdcall Numeric754(unsigned char* szBuffer);
		void __stdcall SendPacket(INT32 ClientID, unsigned char* szBuffer, INT32 SizeOfPacket);

};

class CLogin
{
public:
	BOOL Login(int conn,unsigned char *Msg);
	BOOL LimitedConection(int conn,unsigned char *Msg);
};

extern char Numeric[2][101];
extern char szClientIP[128][16];

char* __stdcall GetIPFromClient(INT32 ClientID);


