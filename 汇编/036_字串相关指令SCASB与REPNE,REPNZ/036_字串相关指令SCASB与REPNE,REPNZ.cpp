// 036_字串相关指令SCASB与REPNE,REPNZ.cpp : 定义控制台应用程序的入口点。
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
		not ecx //得到字串长度
		//0xFF-ECX
		//mov eax,0xFF
		//sub eax,ecx //eax就是字串长度
	}

	__asm
	{
		mov eax, eax
		mov al, 0x33//'3'  //'\0'
		mov edi, s1;
		mov ecx, -1;//0xFFFF FFFF
		repnz scasb;// repnz SCAS BYTE PTR ES:[EDI]
		not ecx //得到字串长度
			//0xFF-ECX
			//mov eax,0xFF
			//sub eax,ecx //eax就是字串长度
	}
	return 0;
}

