// c++2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 100 + 10;
int A[maxn];
int main()
{
	long long a, b;
	while(cin>>a>>b)
	{
		cout << min(a, b) << "\n";
	}
	return 0;
}

