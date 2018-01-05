// 018_函数约定cdecl,stcall与CALL.cpp : 定义控制台应用程序的入口点。
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
