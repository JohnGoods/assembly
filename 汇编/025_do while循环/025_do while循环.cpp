// 025_do while循环.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("while begin\n");
	int j=10,i=0;
	do 
	{
		i++;
		printf("do while \n");
	} while (i<j);;

	printf("for begin\n");

	for (i=0;i<=j;i++)
	{
		printf("do for");
	}
	return 0;
}

