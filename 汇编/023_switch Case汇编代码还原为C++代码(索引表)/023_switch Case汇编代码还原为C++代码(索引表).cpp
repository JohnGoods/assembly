// 023_switch Case�����뻹ԭΪC++����(������).cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin");
	int a, b;
	a = 0x16;
	b = 3;
	switch (a)
	{
	case 28:
		b = b + a;
		break;
	case 20:
		printf("20");
		break;
	case 18:
		if (b>9)
		{
			printf("18");
		}
		else
		{
			printf("else 18");
		}
		break;
	case 32:
		printf("32");
	default:
		printf("end...");
		break;
	}
	return 0;
}

