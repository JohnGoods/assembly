// 005_ȡ��ַָ��LEA.cpp : �������̨Ӧ�ó������ڵ㡣
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

