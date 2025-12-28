// 自由输入年利率计算.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
int main()
{
	int n = 0,m=0;
	float capital = 0,rate=0;
	printf("输入存款期与本金与利率\n");
	scanf_s("%d %f %f", &n, &capital,&rate);
	m = n;
	while (n > 0) {
		n--;
		capital = capital*(1+rate);
	}
	printf("%d年后本利之和为%f",m, capital);
	return 0;
}

