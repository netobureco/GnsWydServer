/*
#include "stdafx.h"
#include "windows.h";
#include "stdio.h";

unsigned long __stdcall AntiWPEPro( void* pVoid )
{
bool bHooked = false;
unsigned char szBuffer[ 8 ];

// First 6 bytes of of Send/Recv
unsigned char bOriginal[ ] = // PUSH EBP
&quot;\x8B\xEC\x83&quot; // MOV EBP, ESP
&quot;\xEC\x10&quot;; // SUB ESP, 10

int i;

unsigned long dwRecvCall = (unsigned long)GetProcAddress( GetModuleHandle( WS2_32.dll ), &quot;recv&quot; );
unsigned long dwSendCall = (unsigned long)GetProcAddress( GetModuleHandle( WS2_32.dll ), &quot;send&quot; );

while( true )
{
ReadProcessMemory( GetCurrentProcess( ), (void *)dwRecvCall, szBuffer, 6, 0 );

for( i = 0; i ; 6; i++ )
{
// If we find one part missing, write the original bytes back and break the loop
if( bOriginal[ i ] != szBuffer[ i ] )
{
WriteProcessMemory( GetCurrentProcess( ), (void *)dwRecvCall, bOriginal, 6, 0 );
break;
} 
}

ReadProcessMemory( GetCurrentProcess( ), (void *)dwSendCall, szBuffer, 6, 0 );

for( i = 0; i ; 6; i++ )
{
// Send + Recvs first 6 bytes are the same, we can use the same buffer
if( bOriginal[ i ] != szBuffer[ i ] )
{
WriteProcessMemory( GetCurrentProcess( ), (void *)dwSendCall, bOriginal, 6, 0 );
break;
}
}

Sleep( 500 );
}

return 0;
};

int main( )
{
LoadLibrary(WS2_32.dll);
CreateThread( 0, 0, AntiWPEPro, 0, 0, 0 );

getchar( );
system( PAUSE );

return 0;
}; 

*/