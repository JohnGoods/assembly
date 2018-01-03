// 011_JG JNLE(大于转移)指令+.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin\n");
	int a = 4;
	if (a<=3)
	if (!(a>3))
	 
	{
		printf("小于等于");
	}//大于时跳转//不小于等于跳转
	printf("next");
	__asm
	{
		cmp a, 3
			JNLE end //JG end
	}
	printf("do this\n");
	printf("小于等于");
end:
	printf("end");
	return 0;
}

