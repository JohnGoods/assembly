// 039_LOOP LOOPDָ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 100;
	char *s = "%d,";
	__asm mov ecx, i
start :
	__asm
	{
		push ecx //����ecx��ֵ
		push ecx  //printf �ڶ�����
		mov eax, s //ָ��s ������ǵ�ַ
		push eax //printf��һ������ ��ʽ���ִ�
		call dword ptr[printf]
		add esp, 8 //call ��ջƽ��
		pop ecx //�ָ�ecx��ֵ
		mov eax, eax
		loop start //loopd 
	}
	getchar();
	return 0;
}

