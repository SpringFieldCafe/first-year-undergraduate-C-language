// n数列求和.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int i=1, n, sum=0;
	printf("input n:\n");
	scanf_s("%d", &n);
	
	while (i <= n)
	{
		sum = sum + i;
		i++;
	}

	printf("sum=%d\n", sum);	
	
	
	
	
	
	return 0;
}

