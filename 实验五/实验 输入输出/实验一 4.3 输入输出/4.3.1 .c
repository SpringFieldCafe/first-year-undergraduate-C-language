#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	char a, b;
	int c;
	int d;
	scanf("%c,%c,%d", &a, &b, &c);
	printf("%c,%c,%d\n", a, b, c);
	return 0;
}
//输入1234
//第七行改为printf("%-2c%-2c%d\n", a, b, c); 输出为1 2 34       原题为 printf("%c,%c,%d\n", a, b, c);
//第六句子修改为scanf("%c,%c,%d",&a,&b,&c);                     原题为scanf("%c%c%d", &a, &b, &c);
//输出为'1','2',34              第七句改为printf("\'%c\',\'%c\',%d\n",a,b,c);  原题为 printf("%c,%c,%d\n", a, b, c);
//修改为scanf("%c%*c%c%*c%d",&a,&b,&c);                          原题为scanf("%c%c%d", &a, &b, &c);
