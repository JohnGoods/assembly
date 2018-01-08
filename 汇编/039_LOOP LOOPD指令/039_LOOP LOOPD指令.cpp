// 039_LOOP LOOPD指令.cpp : 定义控制台应用程序的入口点。
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
		push ecx //保存ecx的值
		push ecx  //printf 第二参数
		mov eax, s //指针s 本身就是地址
		push eax //printf批一个参数 格式化字串
		call dword ptr[printf]
		add esp, 8 //call 堆栈平衡
		pop ecx //恢复ecx的值
		mov eax, eax
		loop start //loopd 
	}
	getchar();
	return 0;
}

