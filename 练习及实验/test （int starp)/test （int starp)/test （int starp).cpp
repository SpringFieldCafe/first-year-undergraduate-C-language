// test （int starp).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class A
{
private:
	int i;
public:
	A():i(10) {}
	~A(){}
	int j=5;
};
A::A()
{
	cout << "i=" << i <<"   j=" <<j<<endl;
}




int main()
{
	A a;
	a.~A;
	cout << "i=" << i << "   j=" << j << endl;
	return 0;
}

