// 习题6.2.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	long term = 1, sum = 0;
	int a, i, n;
	scanf_s("%d", &a);
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		term = term*a;
		sum = sum + term;
	}
	printf("%ld", sum);
	
	
	return 0;
}

