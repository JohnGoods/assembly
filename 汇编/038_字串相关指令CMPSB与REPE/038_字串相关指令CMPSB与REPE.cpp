// 038_�ִ����ָ��CMPSB��REPE.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char *s1 = "abcde21";
	char *s2 = "abcde1";
	__asm
	{
		//mov al,0
		xor al, al//eax=0
			mov edi, s1//
			mov ecx, -1 //0xFFFF FFFF
			repnz scasb;
		not ecx // '\0' ����s1�ִ����ȣ�ָ��repzѭ������
			mov edi, s1
			mov esi, s2
			repz cmpsb // edi,esi
			//ZF=1 && ECX=0 �ִ����
	}
	return 0;
}

