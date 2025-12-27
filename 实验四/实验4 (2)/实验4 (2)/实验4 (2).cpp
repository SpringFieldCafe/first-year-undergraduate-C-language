// 实验4 (2).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
int InputData(int* iNum, double* fScore)
{
	int j = 1;
	while (j <= 30)
	{
		iNum[j]=j;
		printf("输入成绩:\n");
		scanf_s("%lf",&fScore[j]);
		if (fScore[j] < 0.0)
			break;
		j++;
	}
	j--;
	return j;
}

int iFlunk(int* iNum, double* fScore, int iPeople)
{
	printf("不及格的学员学号为");
	int i = 0;
	for (int j = 1; j<=iPeople; j++)
	{
		if (fScore[j] < 60.0)
		{
			i++;
			printf( "%d  " ,iNum[j]);
		}
	}
	printf("\n");
	return i;
}

void myPrint(float Avg, int* iNum, double* fScore, int iPeple)
{
	int i = 1,counter=0;
	printf("平均分为%lf\n", Avg);
	printf("高于平均成绩的同学为");
	for (; i <= iPeple; i++)
	{
		if (fScore[i] > Avg)
		{
			counter++;			
			printf("%d  ", iNum[i]);
		}
	}
	printf("\n高于平均成绩的人数为%d\n",counter);
}

float Avg(double* fScore, int iPeple)
{
	float iSum = 0.0,average=0.0;
	int i = 1;
	for (i = 1; i <= iPeple; i++)
	{
		iSum += fScore[i];
	}
	average=iSum/ iPeple;
	return average;
}

void phrase(int* istu,double* fScore, int iPeple)
{
	int i = 0;
	for (i = 1; i <= iPeple; i++)
	{
		if ( fScore[i]<60)
		{
			istu[0]++;
		}
		if (((fScore[i] - 50) / 10) == 1)
		{
			istu[1]++;
		}
		if (((fScore[i] - 50) / 10) == 2)
		{
			istu[2]++;
		}
		if (((fScore[i] - 50) / 10) == 3)
		{
			istu[3]++;
		}
		if (((fScore[i] - 50) / 10) == 4)
		{
			istu[4]++;
		}
		if (((fScore[i] - 50) / 10) == 5)
		{
			istu[5]++;
		}
	}
	for (i = 0; i <= 5; i++)
	{
		printf("第%d段的人数为%d\n", i, istu[i]);
	}
}
int main()
{
	int numberofstudent = 1;
	int num[31], stu[6] = { 0,0,0,0,0,0 };
	double score[31];
    int NumOfPeople = InputData(num, score);
	int count = iFlunk(num, score, NumOfPeople);
	printf("不及格的人数为：%d\n" ,count);
    float myAvg = Avg(score, NumOfPeople);
	myPrint(myAvg, num, score, NumOfPeople);
	phrase(stu, score, NumOfPeople);
	return 0;
}