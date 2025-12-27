// 实验二身高实验版.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double faHeight = 0.0, moHeight = 0.0, height = 0.0;
	char sex, sports, diet;
	printf("moHeight\n");
	std::cin>>moHeight;
	printf("faHeight\n");
	std::cin>>faHeight;
	printf("sex\n");
	std::cin>>sex;
	printf("sports\n");
	std::cin>>sports;

	printf("diet\n");

	std::cin>>diet;
	switch (sex)
	{
	case 'F':
		height = (faHeight*0.923 + moHeight) / 2;
		break;
	case 'M':
		height = (faHeight + moHeight)*0.54;
	default:
		printf("error!\n");
	}
	switch (sports)
	{
	case 'Y':
		height = height*1.02;
		break;
	case 'N':
		height = height;
	default:
		printf("error!\n");
	}
	switch (diet)
	{
	case 'Y':
		height = height*1.015;
		break;
	case 'N':
		height = height;
	default:
		printf("error!\n");
	}
	printf("%lf", height);


	return 0;
}
	
	
