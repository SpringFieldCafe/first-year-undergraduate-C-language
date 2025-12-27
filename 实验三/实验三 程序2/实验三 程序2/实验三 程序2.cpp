// 实验三 程序2.cpp : 定义控制台应用程序的入口点。
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
	} while (b != a);
	printf("你猜对了，用了%d次", counter);
	return 0;
}

