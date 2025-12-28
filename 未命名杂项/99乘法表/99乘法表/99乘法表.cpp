// 99乘法表.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a = 1, b = 1,c=0;
	for (a = 1; a <= 9; a++) {
		printf("\n");
		for (b = 1; b<= a; b++) {
			c = a*b;
			printf("%d * %d = %d\t", b, a, c);
		}
	}
	return 0;
}

