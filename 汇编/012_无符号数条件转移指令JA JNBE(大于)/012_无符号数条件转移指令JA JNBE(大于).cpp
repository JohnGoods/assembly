// 012_无符号数条件转移指令JA JNBE(大于).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin\n");
	int a = 3, b = -5;
	unsigned int a2 = a, b2 = b;	//定义了无符号
	if (a2 <= b2)//ja{
	{
		if (a <= b) //jg
		{
			printf("do this");
		}
	}
	printf("end");
	return 0;
}

