// 018_����Լ��cdecl,stcall��CALL.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int  __cdecl  add1(int a, int b)
{
	return a + b;
}
int __stdcall add2(int a, int b)
{
	return a + b;
}


int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin");

	add1(1, 2);
	add2(3, 4);
	return 0;
}
