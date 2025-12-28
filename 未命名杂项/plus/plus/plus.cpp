// plus.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int m = 0, n = 0, t = 5;
	m = t++;
	cout << m << "  " << t << endl;
	n = ++t;
	cout << n << "  " << t << endl;
	return 0;
}

