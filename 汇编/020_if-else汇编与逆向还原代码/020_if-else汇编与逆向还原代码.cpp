// 020_if-else���������ԭ����.cpp : �������̨Ӧ�ó������ڵ㡣
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