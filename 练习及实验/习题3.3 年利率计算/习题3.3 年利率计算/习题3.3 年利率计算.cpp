// 习题3.3 年利率计算.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"


int main()
{
	int n = 0;
	float capital = 0;
	printf("输入存款期与本金\n");
	scanf_s("%d %f", &n,&capital);
	
	while (n > 0) {
		n--;
		capital = capital*1.0225;
	
	}
	printf("%f", capital);
	return 0;
	

}

