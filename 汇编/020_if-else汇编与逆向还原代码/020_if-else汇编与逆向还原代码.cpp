// 020_if-else汇编与逆向还原代码.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c;
	printf("begin");
	a = 1, b = 2, c = 3;
	if (a > b)
	{
		printf("a>b");
	}
	else
	{
		printf("b>=a");
	}
	if (c > b)
	{
		if (c > a)
		{
			printf("%d>%d,%d>%d", c, b, c, a);
		}
		else
		{
			printf("%d>%d,%d<=%d", c, b, c, a);
		}
	}
}