// 输出测试 习题3.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int x = 32, y = 81,p,q;
	p=x++;
	q = --y;
		printf("%d %d\n", p,q);
	printf("%d %d\n", x,y);
	
	return 0;
}

