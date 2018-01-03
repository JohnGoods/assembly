// 008_JNE指令与标志位.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin\n");
	int a = 4;
	if (a==3) //ZF=0
	{
		printf("未跳转ZF==1\n");
	}
	printf("ZF==0跳转\n");

	__asm
	{
		mov eax, 3
			sub eax, a //3-4
			jz end; //ZF=1

	}
	printf("未跳转\n");
end:
	printf("跳转\n");
	printf("end\n");
	getchar();
	return 0;
}

