// 利率.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	double rate;
	int n;
	double capital;
	double deposit;
	printf("请输入银行定期存款的年利率：");
	scanf_s("%lf", &rate);
	printf("请输入存款期（年）：");
	scanf_s("%d", &n);
	printf("请输入存款本金：");
	scanf_s("%lf", &capital);
	deposit = capital * (1 + rate * n);
	printf("%.2lf年后的本利之和%.2lf\n", n, deposit);
	return 0;
}

