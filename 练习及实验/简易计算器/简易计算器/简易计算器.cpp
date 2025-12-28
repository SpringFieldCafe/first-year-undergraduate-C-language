// 简易计算器.cpp : 定义控制台应用程序的入口点。
//

#define _CRT_SECURE_NO_WARNINGS

#include "stdafx.h"

int main()
{
	char con = 'Y';
	while (1) 
	{
		double i = 0, j = 0, k = 0;
		char op;

		printf("输入表达式：\n");
		scanf_s("%lf", &i);
		
		scanf_s("%c", &op);
		scanf_s("%lf", &j);
		
	
		
		
		
		switch (op)
		{
		case '+':
			k = i + j;
			printf("结果为：%lf\n", k);
			break;
		case '-':
			k = i - j;
			printf("结果为：%lf\n", k);
			break;
		case '*':
			k = i*j;
			printf("结果为：%lf\n", k);
			break;
		case '/':
			if (j == 0)
			{
				printf("error!\n");
			}
			else
			{
				k = i / j;
				printf("结果为：%lf\n", k);
			}
			break;
		default:
			printf("invaild error!\n");
		}

		printf("do you want to continue？\n");
		getchar();
		scanf_s("%c", &con);
		

		if (con == 'Y')
			continue;
		else break;
	
	
	} 


	return 0;
}


/*#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
char con = 'Y';
while (1)
{
	double i = 0, j = 0, k = 0;
	char op;

	printf("输入表达式：\n");
	cin >> i;
	cin >> op;
	cin >> j;
	switch (op)
	{
	case '+':
		k = i + j;
		printf("结果为：%lf\n", k);
		break;
	case '-':
		k = i - j;
		printf("结果为：%lf\n", k);
		break;
	case '*':
		k = i*j;
		printf("结果为：%lf\n", k);
		break;
	case '/':

		if (j == 0)
			printf("error!\n");
		else
			k = i / j;
		printf("结果为：%lf\n", k);
		break;
	default:
		printf("invaild error!\n");
	}

	printf("do you want to continue？\n");
	cin >> con;
	if (con == 'N')
		break;
}


return 0;
}*/