// 032_OR����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i, j, k;

	i = 0x33; //0110011
	j = 0x66; //1100110
	k = i || j;//�߼��� 0,1
	if (k == true){
		printf("i||j==1");
	}
	return 0;
}

