// 习题4.3 输入输出.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	char a, b;
	int c;
	scanf_s("%c%c%d", &a, &b, &c);
	printf("%-2c%-2c%d\n", a, b, c);
    return 0;
}



//输入1234

//第七行改为printf("%-2c%-2c%d\n", a, b, c); 输出为1 2 34  printf("%c,%c,%d\n", a, b, c);

//第六句子修改为scanf("%c,%c,%d",&a,&b,&c);
 
//输出为'1','2',34

//修改为scanf("%c%*c%c%*c%d",&a,&b,&c);