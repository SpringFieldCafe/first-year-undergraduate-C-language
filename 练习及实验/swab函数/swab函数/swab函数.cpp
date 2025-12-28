// swab函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
void myscan(int* swab);
void myprint(int* swab);
void myswab(int *swab);
int main()
{
	int swab[2] = {};
	myscan(swab);
	myswab(swab);
	myprint(swab);
	return 0;
}

void myscan(int* swab)
{
	int i;
	for (i = 0; i < 2; i++)
	{
		scanf_s("%d", &swab[i]);
	}
}

void myswab(int* swab)
{
	int a = 0;
	a = swab[1];
	swab[1] = swab[0];
	swab[0] = a;
}

void myprint(int* swab)
{
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("%d\t", swab[i]);
	}
}