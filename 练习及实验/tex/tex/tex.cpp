// tex.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	char ch;
	char left = '“';
	char right = '”';
	int judegement=1;
	while ((ch=getchar() ) != EOF) {
		if (ch == '"') { judegement ? cout << left  : cout << right ; judegement = !judegement; }
		else cout << ch;
}
	return 0;
}

