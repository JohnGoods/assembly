// 038_字串相关指令CMPSB与REPE.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char *s1 = "abcde21";
	char *s2 = "abcde1";
	__asm
	{
		//mov al,0
		xor al, al//eax=0
			mov edi, s1//
			mov ecx, -1 //0xFFFF FFFF
			repnz scasb;
		not ecx // '\0' 计算s1字串长度，指定repz循环次数
			mov edi, s1
			mov esi, s2
			repz cmpsb // edi,esi
			//ZF=1 && ECX=0 字串相等
	}
	return 0;
}

