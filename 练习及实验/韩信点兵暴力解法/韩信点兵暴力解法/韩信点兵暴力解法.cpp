// 韩信点兵暴力解法.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a = 0, b = 0, c = 0;
	int x = 0, y = 0, z = 0,i=0;
	int p = 0, q = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	while (i<=100)
	{
		x = i % 3;
		y = i % 5;
		z = i % 7;

		if (x == a&&y == b&&z == c)
		{
			q = i;
			p = 1;
			break;
		}
		else {
			p = 0;
		
		
		
		i++;
	
		}
		
	}
	if (p == 1) {
		printf("%d\n", q);
	}
	else printf("error!\n");
	return 0;
}

