// 008_JNEָ�����־λ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin\n");
	int a = 4;
	if (a==3) //ZF=0
	{
		printf("δ��תZF==1\n");
	}
	printf("ZF==0��ת\n");

	__asm
	{
		mov eax, 3
			sub eax, a //3-4
			jz end; //ZF=1

	}
	printf("δ��ת\n");
end:
	printf("��ת\n");
	printf("end\n");
	getchar();
	return 0;
}

