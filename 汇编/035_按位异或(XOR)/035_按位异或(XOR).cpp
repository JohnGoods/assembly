// 035_按位异或(XOR).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	unsigned char i, j, k;
	i = 0x33;//00110011
	j = 0x7A;//01111010
	//01001001
	k = i^j;// k=i异或j
	return 0;
}

