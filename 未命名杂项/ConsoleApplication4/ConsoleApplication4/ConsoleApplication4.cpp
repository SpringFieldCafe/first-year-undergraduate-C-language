// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
template<typename T, typename N>
struct tuple
{
	T value;
	N next;
	tuple(T const &v, N const &n) :value(v), next(n) {
	}
};

template<typename T, typename N>
tuple<T, N>push(T const &v, N const &n)
{
	return tuple<T, N>(v, n);
}


int main()
{
	typedef tuple<int, char>tuple2;
	typedef tuple<float, tuple2> tuple3;
	typedef tuple<string, tuple3>tuple4;
	tuple4 tup4 = push(string("great"),
		push(lf,
			push(1, 'a')));

	cout << tup4.value << ','
		<< tup4.next.value << ','
		<< tup4.next.next.value << ','
		<< tup4.next.next.next << endl;
	return 0;
}

