// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string.h>
void invert(char str[])
{
	int i, k, j = strlen(str);
	for (i = 0; i < (j + 1);i++)
	{
		k = str[i];
		str[i] = str[i + 1];
		str[i+1 ] = k;
	}
}

int main()
{
	int i = 0;
	char str[] = { "hello" };
	invert(str);
	for (i = 0; i <6;i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}

