// Name Reversa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name = "";

	cout << "Enter your name: " << endl;
	cin >> name;

	for (int i = name.length() - 1; i >= 0; i--)
	{
		cout << name[i] << endl;
	}

	system("pause");
	return 0;
}
