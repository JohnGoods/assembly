// 025_do whileѭ��.cpp : �������̨Ӧ�ó������ڵ㡣
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

