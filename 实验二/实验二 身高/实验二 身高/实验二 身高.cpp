// 实验二 身高.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
int main()
{
	double faHeight = 0.0,moHeight=0.0,height=0.0;
	char sex,sports,diet;
	printf("moHeight\n");
	scanf_s("%lf", &moHeight);
	printf("\n");
	printf("faHeight\n");
	scanf_s("%lf",  &faHeight);
	printf("\n");
	printf("sex\n");
	getchar();
	scanf_s("%c", &sex);
	
	switch (sex)
	{
	case 'F':
		height = (faHeight*0.923 + moHeight) / 2;
	break;
	case 'M':
		height = (faHeight + moHeight)*0.54;
		break;
	}
	
	printf("sports\n");
	getchar();
	scanf_s("%c", &sports);
	printf("\n");
	printf("diet\n");
	getchar();
	scanf_s("%c", &diet);
	printf("\n");
	
	switch (sports)
	{
	case 'Y':
		height = height*1.02;
		break;
	case 'N':
		height = height;
		break;
	}
	switch (diet)
	{
	case 'Y':
		height = height*1.015;
		break;
	case 'N':
		height = height;
		break;
	}
	printf("%lf", height);
	
	
	return 0;
}

