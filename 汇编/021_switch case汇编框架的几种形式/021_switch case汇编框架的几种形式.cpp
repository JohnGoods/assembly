// 021_switch case汇编框架的几种形式.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin\n");
	int a=3;
	switch (a)
	{
	case 1:
		printf("111");
		break;
	case 2:
		printf("111");
		break;
	case 10:
		printf("111");
		break;
	default:
		printf("default");
		break;
	}
	
	printf("next");

	printf("begin\n");
	a = 0x20;
	switch (a)
	{
	case 3:
		printf("1");
		break;
	case 5:
		printf("2");
		break;
	case 4:
		printf("0x10");
		break;
	default:
		printf("default");
		break;
	}
	system("pause");
	return 0;
}

