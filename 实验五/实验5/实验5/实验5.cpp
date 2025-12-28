// 实验5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int num(float* fScore[3], int* iStudentId)
{
	int i = 1,counter;
	for (i = 1; i <= 30; i++)
	{
		printf("Please Input:\tId:\tMT:\tEN:\tPH\n");
		scanf_s("%d %f %f %f", &iStudentId[i], &fScore[i][0], &fScore[i][1], &fScore[i][2]);
		if (iStudentId[i] == -1)
		{
			i--;
			counter = i;
			break;
		}
	}
	return counter;
}
float mySum(float* fScore[3] ,float* fSum ,int counter)
{
	float Sum;
	for (int a = 1; a <= counter; a++)
	{
		Sum = ( fScore[a][0] + fScore[a][1]+ fScore[a][2]);
		fSum[a] = Sum;
	}
}

void mySort(int* pStudentId, float(*pfScore)[3], float * pSum, float *pAver, int num)
{
	int j, t = 0;
	int tStudentId;
	float tScore[3], tSum, tAver;
	for (; t<num - 1; t++)
	{
		for (j = num - 1; j>t; j--)
		{
			if (pSum[j]>pSum[j - 1])
			{
				tSum = pSum[j];
				pSum[j] = pSum[j - 1];
				pSum[j - 1] = tSum;


				tScore[0] = *(pfScore[j]);
				tScore[1] = pfScore[j][1];
				tScore[2] = *(pfScore[j] + 2);
				*pfScore[j] = *(pfScore[j - 1]);
				*(pfScore[j] + 1) = *(pfScore[j - 1] + 1);
				*(pfScore[j] + 2) = pfScore[j - 1][2];
				*(pfScore[j - 1]) = *tScore;
				*(pfScore[j - 1] + 1) = tScore[1];
				*(pfScore[j - 1] + 2) = tScore[2];

				tAver = pAver[j];
				pAver[j] = pAver[j - 1];
				pAver[j - 1] = tAver;

				tStudentId = pStudentId[j];
				pStudentId[j] = pStudentId[j - 1];
				pStudentId[j - 1] = tStudentId;
			}
		}
	}
}

int FindScore(int k, int itotal, int *pStudentId)
{
	int j = -1;
    for (int i = 0; i<itotal; i++)
	{
		if (k == (*(pStudentId + i)))
		{
			j = i;
			break;
		}
	}
	return j;
}
int main()
{
	int iStudentId[31], i, ik,counter;
	float fScore[31][3], fSum[31], fAver[31];
	counter = num(fScore, iStudentId);
    mySum(fScore ,fSum,counter);
	mySort(int* pStudentId, float(*pfScore)[3], float * pSum, float *pAver, int num);
	FindScore(k, itotal,iStudentId);
	for (int j = 0; j < i; j++)
	{
		fSum[j] = mySum(fScore[3]);
		fAver[j] = fSum[j] / 3;
	}
	mySort(iStudentId, fScore, fSum, fAver, i);
	printf("Find StudentId:");
	scanf_s("%d", &ik);
	int iT;
	if ((iT = FindScore(ik, i, iStudentId)) != -1)
	{
		printf("StudentId:\t 排名： \t 总分：%d\n", fSum[iT]);
		printf("MT: \t EN: \t PH: \n", fScore[iT][0], fScore[iT][1], fScore[iT][2]);
		printf("Aver:\n", fAver[iT]);
	}
	else
	{
		printf("查无此人");
	}
	return 0;
}



	
