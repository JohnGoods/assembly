// 034_按位取反(NOT)与汇编指令 SETZ(SETE)SETNZ(SETNE).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i, j;
	i = 0x8877;
	j = !i;
	printf("----------");
	j = ~i;
	return 0;
}

