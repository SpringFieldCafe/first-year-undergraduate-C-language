// 习题6.2.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	long i;
	long term, sum = 0;
	for (i = 1; i <=99; i = i + 2)
	{

		term = i*(i + 1)*(i + 2);
			sum = sum + term;
	}
	printf("sum=%ld", sum);
	
	return 0;
}

