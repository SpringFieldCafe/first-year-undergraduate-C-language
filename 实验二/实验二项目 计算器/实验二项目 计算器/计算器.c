
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	char con = 'Y';
	while (1)
	{
		double i = 0, j = 0, k = 0;
		char op;

		printf("输入表达式：\n");
		scanf("%lf", &i);
		scanf("%c", &op);
		scanf("%lf", &j);
		switch (op)
		{
		case '+':
			k = i + j;
			printf("结果为：%lf\n", k);
			break;
		case '-':
			k = i - j;
			printf("结果为：%lf\n", k);
			break;
		case '*':
			k = i*j;
			printf("结果为：%lf\n", k);
			break;
		case '/':

			if (j == 0)
				printf("error!\n");
			else
			{
				k = i / j;
				printf("结果为：%lf\n", k);
			}
			break;
		default:
			printf("invaild error!\n");
		}

		printf("do you want to continue？\n");
		getchar();
		scanf("%c", &con);
		if (con == 'N')
			break;



	}


	return 0;
}