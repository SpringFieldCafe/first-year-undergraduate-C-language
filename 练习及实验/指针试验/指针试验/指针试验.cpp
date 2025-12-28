// 指针试验.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	double i,j;
	double* p=NULL;
	printf("%lf\n", *p);
	*p = 0;
	printf("%lf\n", p);
	p = &j;
	printf("%lf\n", *p);
	return 0;
}

