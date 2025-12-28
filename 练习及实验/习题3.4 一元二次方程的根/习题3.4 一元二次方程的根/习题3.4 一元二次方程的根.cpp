// 习题3.4 一元二次方程的根.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <math.h>

int main()
{
	float a = 0.0, b = 0.0, c = 0.0, d = 0.0, x1 = 0.0, x2 = 0.0;
	printf("请输入一元二次方程系数，如1 2 3\n");
	scanf_s("%f %f %f", &a, &b, &c);
	printf("您输入的方程为%fx^2+(%fx)+(%f)=0\n", a, b, c);
	(float)d = (b*b - 4 * a*c);
	if (d < 0) {
		printf("该方程没有实根\n");
	}
	else if (d == 0) {
		x1 = -b / (2 * a);
		printf("该方程有两个相等实根x1=%f\n", x1);

	}
	else{
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) + sqrt(d)) / (2 * a);
		printf("两个实数根:x1=%f  x2=%f\n", x1, x2);
	}
	
	
	
	
	
	return 0;
}

