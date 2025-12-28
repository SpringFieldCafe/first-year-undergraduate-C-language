// 水仙花数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int x = 0,a=0,b=0,c=0,d=0;
		scanf_s("%d", &x);
		a = x / 100;
		b = (x / 10) - (a * 10);
		c = x % 10;
		d = a*a*a + b*b*b + c*c*c;
		if (x == d) {
			printf("这是水仙花数\n");

	}
		else printf("这不是水仙花数\n");
	return 0;
}

