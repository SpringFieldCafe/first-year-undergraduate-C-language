// global parameter.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
extern int m;

struct A 
{
private:
	int i;
	
public:
	int j;
	virtual void f();
};
void A::f() {
	i = 10;
	j = 15;
	
	cout << i <<" "<<j<< endl;
}
void print(A*p)
{
	cout << p->j << endl;
}
int main()
{
	A a;
	A* c = &a;
	int t = 1;
	double e = 2.3;
	int*q =(int*) &t;
	int p =(int)q;
	int *w = (int*)&e;
	cout << p << endl;
	cout << c << endl;
	cout << t << endl;
	return 0;
}

