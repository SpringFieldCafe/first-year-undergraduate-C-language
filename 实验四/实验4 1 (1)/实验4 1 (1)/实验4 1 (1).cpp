// 实验4 1 (1).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"



int main()
{
	int studentID[31];
	double score[31];
	int numberofstudent,numberoffailer1=0,factnumberofstudent, numberoffailer2=0;
	double average = 0,sum=0;
	int theoryphrase = 5, facttheoryphrase = 0;
	int phrase[6] ;
    for (numberofstudent = 1; numberofstudent <= 30; numberofstudent++)
	{
		studentID[numberofstudent] = numberofstudent;
		scanf_s("%lf", &score[numberofstudent]);
		if (score[numberofstudent] < 0)
		{
			break;
		}
		factnumberofstudent = numberofstudent;
	}
	for (numberofstudent = 1; numberofstudent <= factnumberofstudent; numberofstudent++)
	{
		sum = sum + score[numberofstudent];
	}
	average = sum / factnumberofstudent;
	printf("平均分为%lf\n ", average);
	printf("低于平均分的学号为");
	for (numberofstudent = 1; numberofstudent <= factnumberofstudent; numberofstudent++)
	{
		if (score[numberofstudent] < average)
		{
			numberoffailer1++;
			printf("[%d]  ", studentID[numberofstudent]);
		}
	}
	printf("\n");
	printf("低于平均分的人数为%d\n不及格的学号为", numberoffailer1);
	for (numberofstudent = 1; numberofstudent <= factnumberofstudent; numberofstudent++)
	{
		if (score[numberofstudent] < 60)
		{
			numberoffailer2++;
			printf("[%d]  ", studentID[numberofstudent]);
		}
	}
	printf("\n不及格的人数为%d\n", numberoffailer2);
	for (facttheoryphrase = 0; facttheoryphrase <= theoryphrase; facttheoryphrase++)
	{
		phrase[facttheoryphrase] = 0;
	}
	for (numberofstudent = 1; numberofstudent <= factnumberofstudent; numberofstudent++)
	{
		if (score[numberofstudent]<60)
		{
			phrase[0]++;
		}
		if(((score[numberofstudent]-50)/10) ==1)
		{
			phrase[1]++;
		}
		if (((score[numberofstudent] - 50) / 10) == 2)
		{
			phrase[2]++;
		}
		if (((score[numberofstudent] - 50) / 10) == 3)
		{
			phrase[3]++;
		}
		if (((score[numberofstudent] - 50) / 10) == 4)
		{
			phrase[4]++;
		}
		if (((score[numberofstudent] - 50) / 10) == 5)
		{
			phrase[5]++;
		}
	}
	for (facttheoryphrase = 0; facttheoryphrase <= theoryphrase; facttheoryphrase++)
	{
		printf("第%d段的人数为%d\n", facttheoryphrase, phrase[facttheoryphrase]);
	}
	return 0;
}

