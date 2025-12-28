// n的捷成.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int  n, p = 1;
	printf("input n:\n");
	scanf_s("%d", &n);

	while (n>0)
	{
		p = p*n;
		n--;
	}

	printf("p=%d\n", p);

	
	
	
	
	return 0;
}

