// 036_�ִ����ָ��SCASB��REPNE,REPNZ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char *s1 = "s12345678";
	__asm
	{    mov al, 0  //'\0'
		mov edi, s1;
		mov ecx, -1;//0xFFFF FFFF
		repnz scasb;// repnz SCAS BYTE PTR ES:[EDI]
		not ecx //�õ��ִ�����
		//0xFF-ECX
		//mov eax,0xFF
		//sub eax,ecx //eax�����ִ�����
	}

	__asm
	{
		mov eax, eax
		mov al, 0x33//'3'  //'\0'
		mov edi, s1;
		mov ecx, -1;//0xFFFF FFFF
		repnz scasb;// repnz SCAS BYTE PTR ES:[EDI]
		not ecx //�õ��ִ�����
			//0xFF-ECX
			//mov eax,0xFF
			//sub eax,ecx //eax�����ִ�����
	}
	return 0;
}

