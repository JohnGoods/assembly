// ���.cpp : �������̨Ӧ�ó������ڵ㡣

#include "stdafx.h"
#include <Windows.h>

int add(int a,int b){
	return a + b;
}

int bbb = 1;
int a[0x10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xA, 0xB, 0xC, 0xd, 0xe, 0xF };//4�ֽ�
int _tmain(int argc, _TCHAR* argv[])
{
	MessageBoxW(0, NULL, NULL, MB_OK);
	bbb = 0x889977;	
	//00E21016  |.  C705 6C33E200 77998800 
	//mov dword ptr ds:[aaa],0x889977 
	__asm MOV DWORD PTR DS : [bbb], 0x889977 //����ȫ��д��
	__asm mov bbb, 0x889977;//��ȫ��д��
	bbb = add(bbb, 0x88);
	//����Ѱַ����
	int *da = a;//
	//��ʾ ������������ dd ��ַ���ʽ ������DWORD  4�ֽڸ�ʽ��ʾָ����ַ������
	__asm
	{
		mov eax, 0x1111
			mov ebx, eax
			mov ebx, bbb //ȫ�ֱ���bbb
			mov ebx, da //ȡ�����ַ
			mov eax, [da + 4]//���д�� ���벻�����
			mov eax, [ebx + 4]
	}
	MessageBoxW(0, NULL, NULL, MB_OK);
	return 0;
}