// 阶乘分之一累加.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <math.h>

int main()
{
	double e = 1.0, fac = 1.0, term = 0.0;
	int n=1;
	while(abs(term <= 0.000001))
  {
	
		fac = (float)fac*n;
		term = 1.0 / fac;
		e = e + term;
		n++;
	}
	printf("%lf", e);
	return 0;
}

