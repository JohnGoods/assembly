// 011_JG JNLE(����ת��)ָ��+.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin\n");
	int a = 4;
	if (a<=3)
	if (!(a>3))
	 
	{
		printf("С�ڵ���");
	}//����ʱ��ת//��С�ڵ�����ת
	printf("next");
	__asm
	{
		cmp a, 3
			JNLE end //JG end
	}
	printf("do this\n");
	printf("С�ڵ���");
end:
	printf("end");
	return 0;
}

