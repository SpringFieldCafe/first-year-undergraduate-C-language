// 实验4 打印菱形 奇数.cpp : 定义控制台应用程序的入口点。
//
#define _CRT_SECURE_NO_WARNINGS 
#include "stdafx.h"


int main()
{
	int inputline= 0,factsign=1,factspace=0,therospace=0,therosign=1,factline=1;
	int theroupline = 0, factupline = 0;
	int therodownline = 0, factdownline = 0;
	printf("输入不超过30的奇数\n");
	scanf_s("%d", &inputline);
	if (inputline<=0||inputline>=30)
	{ 
		printf("error!请输入不超过30的奇数\n");
		return 0;
	}
	else if (inputline % 2 == 0)
	{
		printf("error!请输入不超过30的奇数\n");
		return 0;
	}
	else 
	{
		theroupline = ((inputline - 1) / 2)+1;
		for (factupline = 1; factupline <= theroupline; factupline++)
		{
			therospace = (((theroupline - 1) * 2 + 1) - factsign) / 2;
			for (factspace = 1; factspace <= therospace; factspace++)
			{
				printf(" ");
			}
			for (factsign = 1; factsign <= therosign; factsign++)
			{
				printf("*");
			}
			therosign += 2;
			printf("\n");
		}
		therodownline = inputline-theroupline;
		therosign = inputline - 2;
		for (factdownline = 1; factdownline <= therodownline; factdownline++)
		{
			therospace = factdownline;
			for (factspace = 1; factspace <= therospace; factspace++)
			{
				printf(" ");
			}
			for (factsign = 1; factsign <= therosign; factsign++)
			{
				printf("*");
			}
			therosign -= 2;
			printf("\n");
		}
				return 0;
	}
}

