// ConsoleApplication5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<vector>
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int i,j;
	vector<int> arr;
			arr.push_back(5);
			arr.push_back(2);
			arr.clear();
			cout << arr.empty() << endl;
			arr.push_back(6);
			arr.push_back(8);
			arr.push_back(9);
			arr.push_back(54);
			arr.push_back(6);
	for (auto &ele :arr) {
		cout << ele << "\t";
	}
	cout <<endl<<arr.size()<< endl;
	arr.pop_back();
	arr.pop_back();
	cout << arr.size() << endl;
	arr.pop_back();
	arr.push_back(41);
	for (auto &ele : arr)
		cout << ele << "\t";
	cout << arr.size() << endl;
	arr.push_back(99);
	arr.pop_back();
	arr.push_back(99);
	cout << arr.size() << endl;
	cout << endl << endl << endl;
	sort(arr.begin(), arr.end());
	for (auto &ele : arr)
		cout << ele << "\t";
	cout << endl << (i=lower_bound(arr.begin(), arr.end(), 8)-arr.begin()+1)<< endl;
	return 0;
}