// 019_��������Լ��_fastcall��CALL����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int __cdecl add1(int a, int b)
{
	return a + b;
}
int __stdcall add2(int a, int b)
{
	return a + b;
}
int __fastcall add3(int a, int b)
{
	return a + b;
}
int __fastcall add3(int a, int b, int c, int d, int e)
{
	return a + b + c + d + e;
}
int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin\n");
	add1(1, 2);
	add2(1, 2);
	add3(1, 2);
	add3(1, 2, 3, 4, 5);
	return 0;
}

