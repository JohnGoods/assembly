// 033_AND(��λ��ָ��).cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i, j, k;
	i = 0x93;
	j = 0x87;
	k = i&&j; //�߼���
	//__asm mov eax, eax
	k = i&j;   //��λ��
	return 0;
}

