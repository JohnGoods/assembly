// 003_�Ĵ���EAX��AX,AH,AL��ϵ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	DWORD iEax;
	WORD  iAx;
	BYTE  iAh, iAl;
	printf("\n");
	__asm
	{
		mov eax, 0x87654321
			mov iEax, eax
			mov iAx, ax
			mov iAh, ah
			mov iAl, al

	}
	printf("EAX=%x,AX=%x,AH=%x,AL=%x \n", iEax, iAx, iAh, iAl);
	getchar();
	return 0;
}

