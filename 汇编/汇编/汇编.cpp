// 汇编.cpp : 定义控制台应用程序的入口点。

#include "stdafx.h"
#include <Windows.h>
int aaa;
int _tmain(int argc, _TCHAR* argv[])
{
	MessageBoxW(0, NULL, NULL, MB_OK);
	aaa = 0x889977;	
	//00E21016  |.  C705 6C33E200 77998800 
	//mov dword ptr ds:[aaa],0x889977 
	MessageBoxW(0, NULL, NULL, MB_OK);
	return 0;
}