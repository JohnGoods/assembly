// 006_����ָ��SUB���Ա�־�Ĵ���PSW��Ӱ��.cpp : �������̨Ӧ�ó������ڵ㡣
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

