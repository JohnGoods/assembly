// ���.cpp : �������̨Ӧ�ó������ڵ㡣

#include "stdafx.h"
#include <Windows.h>

int add(int a,int b){
	return a + b;
}

int bbb = 1;
int _tmain(int argc, _TCHAR* argv[])
{
	MessageBoxW(0, NULL, NULL, MB_OK);
	bbb = 0x889977;	
	//00E21016  |.  C705 6C33E200 77998800 
	//mov dword ptr ds:[aaa],0x889977 
	__asm MOV DWORD PTR DS : [bbb], 0x889977 //����ȫ��д��
	__asm mov bbb, 0x889977;//��ȫ��д��
	bbb = add(bbb, 0x88);
	MessageBoxW(0, NULL, NULL, MB_OK);
	return 0;
}