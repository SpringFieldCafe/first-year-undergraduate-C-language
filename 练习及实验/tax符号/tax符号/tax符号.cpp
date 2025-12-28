// tax符号.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int p = 1,sig;
	while ((sig = getchar()) != EOF)
	{
		if (sig == '"')
		{
			printf("%s", p ? "“" : "”", p = !p);
		}
		else 
		{
			printf("%c", sig);
		}
	}
	return 0;
}

