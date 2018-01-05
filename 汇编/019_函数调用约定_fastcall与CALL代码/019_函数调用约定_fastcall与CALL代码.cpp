// 019_函数调用约定_fastcall与CALL代码.cpp : 定义控制台应用程序的入口点。
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

