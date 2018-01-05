// 017_PUSH_POP.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int add(int a, int b) //cdecl
{
	return a + b; //EAX返回值
}

int _tmain(int argc, _TCHAR* argv[])
{
	//int 
	printf("begin\n");
	int a = add(3, 6);//mov [ebp-4],eax
	printf("end\n");
	return 0;
}

