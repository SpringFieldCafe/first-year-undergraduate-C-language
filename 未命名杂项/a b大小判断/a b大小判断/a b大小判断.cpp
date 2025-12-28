// a b大小判断.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cstdio>
using namespace std;
class A 
{
public:
	A(int i = 10) { cout << "A::A i=" << i << endl; }
	virtual void f(int& a, int& b);
	
private:
	int i;
};
 void A::f(int& a, int& b)
{
	int t = a;
	if (a > b)
	{
		a = b; b = t;
	}
}
int main()
{
	A c;
	int a, b;
	cin >> a >> b;
	c.f(a, b);
	cout << a << " " << b << endl;
	return 0;
}

