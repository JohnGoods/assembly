// 010_������תJL JNGE(SFС��).cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin\n");
	//>=
	int a = 0xA;
	int b = 0x20;
	if (a>=b) //jl
	{
		printf("do this");
	}
	printf("next\n");
	__asm
	{
		mov ebx, b
			sub a, ebx
			jnge end
			mov ebx, ebx
			jl  end
	}
	//<
end:
	printf("end\n");
	return 0;
}

