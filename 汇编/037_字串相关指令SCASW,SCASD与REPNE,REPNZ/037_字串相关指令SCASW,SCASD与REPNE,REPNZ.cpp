// 037_�ִ����ָ��SCASW,SCASD��REPNE,REPNZ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	wchar_t *s1 = L"12345678";
	__asm
	{
		/*scasb; //char
		scasw;*/ //WCHAR 2
		//scasd; //edi=edi+4;
		mov ax, L'7'
			mov edi, s1;
		mov ecx, -1;
		repnz scasw;//cmp word ptr [edi],ax //ecx!=0;ZF=0;
		not ecx //ȡ�ַ�����λ��
	}

	return 0;
}

