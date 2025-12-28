// 级数求和.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	double S = 0.0, i = 0.0, k = 0.0;
	int n = 1;
	scanf_s("%lf", &k);

	while (1)
	{
		i = ((double)1.0) / ((double)n);
		S += i;
		if (S>k)
			break;
		n++;
	}
	printf("n值为%d\n", n);;
	
	return 0;
}

