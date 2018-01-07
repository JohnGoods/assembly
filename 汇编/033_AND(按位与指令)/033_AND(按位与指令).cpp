// 033_AND(按位与指令).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i, j, k;
	i = 0x93;
	j = 0x87;
	k = i&&j; //逻辑与
	//__asm mov eax, eax
	k = i&j;   //按位与
	return 0;
}

