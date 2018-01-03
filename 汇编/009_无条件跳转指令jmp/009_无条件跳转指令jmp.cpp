// 009_无条件跳转指令jmp.cpp : 定义控制台应用程序的入口点。
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

