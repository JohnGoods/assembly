// 009_��������תָ��jmp.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin\n");
	goto end;//jmp 3333;
	__asm
	{
		mov eax, end;
		jmp eax;

	}
	printf("do this\n");
	printf("do2");
end:
	printf("end\n");

	//start:
	//	printf("wihile 1\n");
	//	__asm jmp start
	return 0;
}

