// 初试数组.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int x;
	double sum = 0;
	int cnt = 0, i = 0;
	scanf_s("%d", &i);
	int number[i];
	for (cnt = 0; cnt <= 9; cnt++)
	{
		scanf_s("%d", &x);
		number[cnt] = x;
	}
	for (cnt = 0; cnt <= 9; cnt++)
	{
		printf("%d\n", number[cnt]);
	}
	return 0;
}

