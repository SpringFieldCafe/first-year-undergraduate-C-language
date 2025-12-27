// 实验三 程序一.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>


int main()
{
	
		srand(time(0));
		int a = (rand() % 100) + 1;
		int b = 0;
		printf("我已经想好了一个数\n");
		printf("开始猜吧\n");
		printf("%d\n", a);
		scanf_s("%d", &b);
		if (b > a) {
			printf("wrong,too high!\n");
		}
		else if (b < a) {
			printf("wrong,too low!\n");
		}
		else {
			printf("right！\n");
		}
		return 0;

	}
