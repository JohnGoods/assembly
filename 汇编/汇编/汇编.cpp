// 汇编.cpp : 定义控制台应用程序的入口点。

#include "stdafx.h"
#include <Windows.h>

int add(int a,int b){
	return a + b;
}

int bbb = 1;
int _tmain(int argc, _TCHAR* argv[])
{
	MessageBoxW(0, NULL, NULL, MB_OK);
	bbb = 0x889977;	
	//00E21016  |.  C705 6C33E200 77998800 
	//mov dword ptr ds:[aaa],0x889977 
	__asm MOV DWORD PTR DS : [bbb], 0x889977 //不安全的写法
	__asm mov bbb, 0x889977;//安全的写法
	bbb = add(bbb, 0x88);
	MessageBoxW(0, NULL, NULL, MB_OK);
	return 0;
}