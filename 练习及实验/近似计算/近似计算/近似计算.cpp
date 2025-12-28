// 近似计算.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	 const double PI = 3.1415926535 / 4;
	 double sum = 0.0;
	 int n = 0, i = 0, j = 0, t = -1;
	do {
		n++;
		j = n + 1;
		while (j > 0) {
			j--;
			t = t*(-1);
		}
		i = t / (2*n + 1);
		sum += i;
	} while (PI - sum < 0.00000001);
		printf("%d", n);
	
	
	return 0;
}

