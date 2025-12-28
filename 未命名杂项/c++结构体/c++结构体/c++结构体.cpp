// c++结构体.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct Point {
	int x, y;
	Point(int x=1,int y=1):
		x(x), y(y) {}
};

Point operator + (const Point& A, const Point& B) {
	return Point(A.x + B.x, A.y + B.y);
}

ostream& operator <<(ostream &out, const Point& p) {
	out << "(" << p.x << "," << p.y << ")";
	return out;
}


int main()
{
	Point a,b;
	a.x=7;
	cout << a + b << "\n";
	return 0;
}

