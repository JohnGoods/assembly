// 040_stosb,stosw,stosd,串存储指令.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a[0x22];//={0}; memset;
	a[0]=0x1122;
	a[0x21]=0x3388;
//004113AC    8DBD B0FEFFFF   LEA EDI,DWORD PTR SS:[EBP-150]
//004113B2    B9 54000000     MOV ECX,54
//004113B7    B8 CCCCCCCC     MOV EAX,CCCCCCCC
//004113BC    F3:AB           REP STOS DWORD PTR ES:[EDI]              ; stosb,stosw,stosd //scasb,scasw,scasd
//004113BE    C785 74FFFFFF 2>MOV DWORD PTR SS:[EBP-8C],1122           ; a[0]=0x1122;
//004113C8    C745 F8 8833000>MOV DWORD PTR SS:[EBP-8],3388            ; a[0x21]=0x3388
//
  __asm
  { 
	  mov ecx,0x22*4
	  xor eax,eax
	  mov al,0x88
	  lea edi, a
	  rep stosb //AL 
	//  rep stosw //AX
	//  rep stosd //EAX

  }
	return 0;
}

