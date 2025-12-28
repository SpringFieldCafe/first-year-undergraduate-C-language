// 加法.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a, b, c;
	while (scanf_s("%d %d %d", &a, &b, &c) == 3) {
		printf("%d\n", a + b + c);
	}
	return 0;
}

