// 习题6.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int main()
{ 

	int  k=4,n;
	for (n=0; n<k; n++)
	{
		if (n % 2 == 0) break;
		k--;
	}

	printf("%d %d\n",k,n);




	return 0;
}