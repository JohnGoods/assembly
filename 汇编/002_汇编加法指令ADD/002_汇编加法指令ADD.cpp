// 002_汇编加法指令ADD.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;
	printf("");
	i = i + 0x100;
	i = i + 0x111;
	printf("");
	int *p = &i;
	__asm
	{
		mov eax, 0x222
			mov ebx, 0x100
			add ebx, eax //ebx322
			mov ebx, p
			add[ebx], 0x111 //00401048  |.  8003 11       ADD BYTE PTR DS:[EBX],11                 ;  i=i+11
			add i, 0x111     //DWORD WORD
	}
	printf("");
	return 0;
}

