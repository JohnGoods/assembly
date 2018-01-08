// 032_OR运算.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i, j, k;

	i = 0x33; //0110011
	j = 0x66; //1100110
	k = i || j;//逻辑或 0,1
	if (k == true){
		printf("i||j==1");
	}
	return 0;
}

