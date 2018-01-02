// 006_减法指令SUB及对标志寄存器PSW的影响.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin \n");
	int a, b;
	a = 0x109;
	b = 8;
	//a=a-b;
	__asm
	{
		// mov eax,a ;sub eax,b;mov b,eax
		mov eax, b
			sub a, eax
			sub ecx, ecx
			mov eax, 1
			sub eax, 1 //1
			sub eax, 2 //0
	}
	printf("end \n");
	return 0;
}

