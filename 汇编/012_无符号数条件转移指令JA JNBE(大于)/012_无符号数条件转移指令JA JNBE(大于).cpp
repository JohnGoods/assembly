// 012_�޷���������ת��ָ��JA JNBE(����).cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin\n");
	int a = 3, b = -5;
	unsigned int a2 = a, b2 = b;	//�������޷���
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

