// 习题3.5 球的表面积与体积.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	const float PI = 3.141592;
		float square = 0, volume = 0,r=0;
		printf("请输入球的半径\n");
		scanf_s("%f", &r);
	 volume = (4 * PI*r*r*r) / 3;
	square = 4 * PI*r*r;
	printf("球的面积是%f,体积是%f\n",square,volume);


	
	
	
	return 0;
}

