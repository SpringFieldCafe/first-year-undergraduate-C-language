#include<iostream>
using namespace std;
inline int rank(int* b)
{
	int e, i, h;
	cin >> i;
	for (e = 0; e<10; e++)
	{
		if (i == b[e]) h = e;
		else h = -1;
	}
	return h;
}

int main()
{
	int a[10], i = 0;
	for (i = 0; i<10; i++)
	{
		cin >> a[i];
	}
	cout << find(a) << endl;
	return 0;
}