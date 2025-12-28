// 冒泡法.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void myscan(double* group);
void myrank(double* group);
void myprint(double* group);
int main()
{
	double group[20] = {};
	myscan(group);
	myrank(group);
	myprint(group);
	return 0;
}

void myscan(double* group) 
{
	int i;
	for (i = 0; i < 5 ;i++)
	{
		scanf_s("%lf", &group[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%lf    ", group[i]);
	}
	printf("\n\n");
}

void myrank(double* group)
{
	int i,t, c;
	for (t = 0; t < 5; t++)
	{
		for (i = 0; i < 4; i++)
		{
			if (group[i] > group[i + 1])
			{
				c = group[i + 1];
				group[i + 1] = group[i];
				group[i] = c;
			}
		}
	}
}

void myprint(double* group)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%f    ", group[i]);
	}
}