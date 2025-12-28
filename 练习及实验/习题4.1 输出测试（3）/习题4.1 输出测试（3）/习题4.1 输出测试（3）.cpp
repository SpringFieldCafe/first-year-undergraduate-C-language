// 习题4.1 输出测试（3）.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a, b;
	scanf_s("%2d%*2a%2d", &a, &b);

	printf("%d,%d\n", a, b);
	
	return 0;
}

