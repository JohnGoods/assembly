// 004_汇编指令MOVSX与MOVZX.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0x88887777;
	char ic = -0x33;//0xcd;
	printf("");
	i = ic;
	i = (unsigned char)ic;

	_asm
	{
		mov eax, -0x3008
			movsx ecx, ah
			movzx ebx, al
	}
	printf("%x\n", i);
	getchar();
	//char 0 - FF  //FF/2
	//DWORD 0 - 0xFFF 8F8F
	//如何判断负号 取得最大字节>8就是负数
	//MOVSX符号扩展传送
	//MOVZX零扩展传送
	return 0;
}

