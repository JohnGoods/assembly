// 016_EBP,ESP��CALL.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

void fun1(void)
{
	//0401000  /$  55            PUSH EBP //����ջ���� ���߽б���EBPָ��
	//0401001  |.  8BEC          MOV EBP,ESP
	//0401003  |.  5D            POP EBP //�ָ�EBPָ�� 
	//0401004  \.  C3            RETN

}
void fun2(void)
{
	int a = 3; //4
	int b = 5; //4 
	char c = 1;//����4�ֽ�
	char s[17];  //12+17 36-29
	/*00401013  |.  83EC 08       SUB ESP,8
	00401016  |.  C745 FC 03000>MOV DWORD PTR SS:[EBP-4],3
	0040101D  |.  C745 F8 05000>MOV DWORD PTR SS:[EBP-8],5*/


}
void fun3(void)
{
	fun2();
}
int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin\n");
	fun1();
	fun3();
	printf("end\n");
	return 0;
}

