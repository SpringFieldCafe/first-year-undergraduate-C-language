// 习题6.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int x = 1, find = 0;
	while (find != 1)
	{
		x++;
		if (1 == x % 2 && 2 == x % 3 && 4 == x % 5 && 5 == x % 6 && 0 == x % 7)
		{
			printf("x=%d\n", x);
			find = 1;
		}

	}
	
	return 0;
}

