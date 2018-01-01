// 005_取地址指令LEA.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("");
	char i = 0x778899AA;
	char *p = &i;
	__asm
	{
		mov i, 0;
		lea ebx, i 
		mov[ebx], 0x1111222a
	}
	printf("");
	return 0;
}

