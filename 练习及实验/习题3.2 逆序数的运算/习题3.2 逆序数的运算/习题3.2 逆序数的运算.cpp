// 习题3.2 逆序数的运算.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <math.h>

int main()
{
	int x = 0;
	printf("输入任意三位整数\n");
	scanf_s("%d", &x);
	x = abs(x);
	if (x > 999) {
		printf("您输入的整数不是三位整数\n");
	}
	else if (x<100) {
		printf("您输入的整数不是三位整数\n");
	}
	else {
		int a = 0, b = 0, c = 0;
		a = x / 100;
		b = (x / 10) - (a * 10);
		c = x % 10;
		printf("该数的逆序数为%d\n", (c * 100) + (b * 10) + a);

	}
    return 0;
}

