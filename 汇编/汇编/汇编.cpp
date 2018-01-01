// 汇编.cpp : 定义控制台应用程序的入口点。

#include "stdafx.h"
#include <Windows.h>

int add(int a,int b){
	return a + b;
}

int bbb = 1;
int a[0x10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xA, 0xB, 0xC, 0xd, 0xe, 0xF };//4字节
int _tmain(int argc, _TCHAR* argv[])
{
	MessageBoxW(0, NULL, NULL, MB_OK);
	bbb = 0x889977;	
	//00E21016  |.  C705 6C33E200 77998800 
	//mov dword ptr ds:[aaa],0x889977 
	__asm MOV DWORD PTR DS : [bbb], 0x889977 //不安全的写法
	__asm mov bbb, 0x889977;//安全的写法
	bbb = add(bbb, 0x88);
	//测试寻址代码
	int *da = a;//
	//提示 在命令栏中用 dd 地址表达式 可以以DWORD  4字节格式显示指定地址的数据
	__asm
	{
		mov eax, 0x1111
			mov ebx, eax
			mov ebx, bbb //全局变量bbb
			mov ebx, da //取数组基址
			mov eax, [da + 4]//错的写法 编译不会出错
			mov eax, [ebx + 4]
	}
	MessageBoxW(0, NULL, NULL, MB_OK);
	return 0;
}