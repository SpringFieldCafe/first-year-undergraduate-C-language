// 实验5 2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
int myInput(int* Id, float* score);
void mySum(int numOfPeople, float* fScore, float* fSum);
void myAver(float* fScore, float* fAver, int numOfPeople);
void Sort(float fScore[30][3], int* iStudent, float* fAver, float* fSum, int numOfPeople);
int myFind(int k, int* iStudent, int numOfPeople);
int main()
{
	float fScore[30][3];   
	int  iNumber[30];      
	float fSum[30];        
	float fAver[30];  
	int irank[200];
	int iTotal;            
	iTotal = myInput(iNumber, &fScore[0][0]);
	mySum(iTotal, &fScore[0][0], fSum);
	myAver(&fScore[0][0], fAver, iTotal);
	Sort(fScore, iNumber, fAver, fSum, iTotal);
	int k, m;
	for (int i = 0; i<iTotal; i++)
	{
		printf("第%d名学号:%d\t总分为:%f\t数学为：%f\t英语为：%f\t物理为：%f\t平均分为%f\n",i+1, iNumber[i], fSum[i], fScore[i][0], fScore[i][1], fScore[i][2], fAver[i]);
		irank[iNumber[i]] = i + 1;
	}
	printf("输入查找学号：\n");
	scanf_s("%d",&k);
	m = myFind(k, iNumber, iTotal);
	if (m == -1)
		printf("查无此人。\n");
	else
	{
		printf_s( "此人学号%d\t总分：%f\t平均分：%f\n" ,iNumber[m],fSum[m] ,fAver[m]);
		printf("数学为：%f\t英语为：%f\t物理为：%f\n" ,fScore[m][0],fScore[m][1] ,fScore[m][2]);
		printf("此人排名：%d\t", irank[iNumber[m]]);
	}
}
int myInput(int* Id, float* score)
{
	int i = 0;
	for (; i < 30; i++)
	{
		printf("输入学号：\n");
		scanf_s("%d",&Id[i]);
		if (Id[i] == -1)
		{
			return i;
		}
		printf("数学成绩:\n");
		scanf_s("%f",&score[i * 3]);
		printf("英语成绩:\n");
		scanf_s("%f",&score[(i * 3) + 1]);
		printf("物理成绩:\n");
		scanf_s("%f",&score[(i * 3) + 2]);
	}
	return i;
}
void mySum(int numOfPeople, float* fScore, float* fSum)
{
	for (int i = 0; i < numOfPeople; i++)
	{
		fSum[i] = fScore[i * 3] + fScore[(i * 3) + 1] + fScore[(i * 3) + 2];
	}
}
void myAver(float* fScore, float* fAver, int numOfPeople)
{
	for (int i = 0; i < numOfPeople; i++)
	{
		fAver[i] = (fScore[i * 3] + fScore[(i * 3) + 1] + fScore[(i * 3) + 2]) / 3.0;

	}
}
void Sort(float fScore[30][3], int* iStudent, float* fAver, float* fSum, int numOfPeople)
{
	float Ftemp[3];
	int FStudent;
	float fTemp;
    for (int i = numOfPeople - 1; i >= 0; i--)
	{
		for (int j = 0; j < numOfPeople - 1; j++)
		{
			if (fSum[j] < fSum[j + 1])
			{
				fTemp = fSum[j];
				fSum[j] = fSum[j + 1];
				fSum[j + 1] = fTemp;
				fTemp = fAver[j];
				fAver[j] = fAver[j + 1];
				fAver[j + 1] = fTemp;
				FStudent = iStudent[j];
				iStudent[j] = iStudent[j + 1];
				iStudent[j + 1] = FStudent;
				for (int t = 0; t < 3; t++)
				{
					Ftemp[t] = fScore[j][t];
				}
				for (int t = 0; t < 3; t++)
				{
					fScore[j][t] = fScore[j + 1][t];
				}
				for (int t = 0; t < 3; t++)
				{
					fScore[j + 1][t] = Ftemp[t];
				}
			}
		}
	}
}
int myFind(int k, int* iStudent, int numOfPeople)
{
	for (int i = 0; i < numOfPeople; i++)
	{
		if (k == iStudent[i])
			return i;
	}
	return -1;

}

