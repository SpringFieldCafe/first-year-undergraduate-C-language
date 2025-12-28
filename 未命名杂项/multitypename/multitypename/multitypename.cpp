// multitypename.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
template<typename T0=float, typename T1, typename T2=float, typename T3, typename T4>
T0 f(T1 v1, T3 v3, T4 v4);




int main()
{
	double sv2;
	sv2 = f<double, int, int>(1, 2, 3);  /*cout<<"  sv2=  "<<(sv2=f<double,int,int>(1,2,3))<<endl;*/
	cout << "  sv2=  " << sv2 << endl;
	sv2 = f<double, int, int>(1, 2, 3);
	cout << "  sv2=  " << sv2 << endl;
	sv2 = f<double, int, int>(1, 'ab', 0.1);
	cout << "  sv2=  " << sv2 << endl;
	sv2 = f<double, int, int>(0.1, 0.1, 0.1);
	cout << "  sv2=  " << sv2 << endl;
	return 0;
}

template<typename T0, typename T1, typename T2, typename T3, typename T4>
T0 f(T1 v1, T3 v3, T4 v4)
{
	T2 static sv0 = T2(0);
	T0 static sv2 = T2(0);
	cout << " v1: " << v1 << " v3: " << v3 << " v4: " << v4 << "     sv0:  " << sv0;
	T2 v2 = sv2;
	sv0 -= 1;
	sv2 -= 1;
	return v2;
}
