// 022_switch Case�����뻹ԭΪC++����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin");
	int a = 0x20;
	switch (a)
	{
	case 11:
		printf("aaa");
		break;
	case 15:
		printf("aaaa");
		break;
	case 17:
		printf("bbbb");
		break;
	case 9:
		printf("xxxx");
		break;
	default:
		printf("3333");
		break;
	}
	system("pause");
	return 0;
}

