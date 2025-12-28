// parter.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	int i;
	void f();
};
void A::f()
{
	i = 20;
	cout << i << "\n";
}
int main()
{
	A a;
	a.i = 10;
	cout << a.i << "\n";
	a.f();
	
	
	
	
	return 0;
}

