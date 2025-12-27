// 实验三 程序3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a = (rand() % 100) + 1;
	int counter = 0, b = 1;
	printf("我已经想好了一个数\n");
	do {
		printf("开始猜吧\n");
		scanf_s("%d", &b);
		counter++;
		if (b > a) {
			printf("wrong,too high!\n");
		}
		else if (b < a) {
			printf("wrong,too low!\n");
		}
		if (counter > 10)
		{
			printf("你猜错次数过多,用了%d次\n", counter);
			break;
		}
	} while (b != a);
	if (counter <= 10)
	{
		printf("right，用了%d次\n", counter);
	}
	return 0;
}

