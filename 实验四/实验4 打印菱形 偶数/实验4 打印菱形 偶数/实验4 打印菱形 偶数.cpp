// 实验4 打印菱形 偶数.cpp : 定义控制台应用程序的入口点。
//

#define _CRT_SECURE_NO_WARNINGS 
#include "stdafx.h"


int main()
{
	int inputline = 0, factsign = 1, factspace = 0, theoryspace = 0, theorysign = 1;
	int theoryupline = 0, factupline = 0;
	int theorydownline = 0, factdownline = 0;
	int factmidline=1,theorymidsign,factmidsign;
	printf("输入不超过30的偶数\n");
	scanf_s("%d", &inputline);
	if (inputline <= 2 || inputline >30)
	{
		printf("error!请输入不超过30的偶数\n");
		return 0;
	}
	else if (inputline % 2 == 1)
	{
		printf("error!请输入不超过30的偶数\n");
		return 0;
	}
	else
	{
		theoryupline = (inputline / 2) - 1;
		theoryspace = theoryupline ;
		for (factupline=1; factupline <= theoryupline; factupline++)
		{
			for (factspace = 1; factspace <= theoryspace; factspace++)
			{
				printf(" ");
			}
			for (factsign = 1; factsign <= theorysign; factsign++)
			{
				printf("*");
			}
			theorysign += 2;
			printf("\n");
			theoryspace = theoryspace - 1;
		}
		theorymidsign = inputline;
		for (factmidline = 1; factmidline <= 2; factmidline++)
		{
			for (factmidsign = 1; factmidsign <= theorymidsign; factmidsign++) 
			{
				printf("*");
			}
			printf("\n");
		}
		theorydownline = theoryupline;
		theorysign = inputline - 3;
		for (factdownline = 1; factdownline <= theorydownline; factdownline++)
		{
			theoryspace = factdownline;
			for (factspace = 1; factspace <= theoryspace; factspace++)
			{
				printf(" ");
			}
			for (factsign = 1; factsign <= theorysign; factsign++)
			{
				printf("*");
			}
			theorysign -= 2;
			printf("\n");
		}













		return 0;
	}
}
