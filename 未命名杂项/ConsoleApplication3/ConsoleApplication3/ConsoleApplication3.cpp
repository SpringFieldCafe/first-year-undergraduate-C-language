// ConsoleApplication3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template<typename T>
T const& max_element(T *l, unsigned sz)
{
	int i;
	T  max_value(*l);
	for (int i = 1; i<sz; i++)
		if (l[i]>max_value) max_value = (l[i]);
	return max_value;
}





int main()
{
	int l[] = { 2,0,1,1,0,8,2,5 };
	char cl[] = "Augest";
	cout << max_element<int>(l, 8) << endl;
	cout << max_element<char>(cl, 6) << endl;
}

