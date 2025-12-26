// 实验一.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<math.h>

int main()
{
	int n{};
	double rate{};
	double capital{};
	double deposit{};
	printf("Please enter rate,year,capital:");
	scanf_s("%lf,%d,%lf", &rate, &n, &capital);
	deposit = capital * pow(1 + rate, n);
	printf("deposit=%f\n", deposit);
	return 0;
	
}

