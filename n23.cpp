// n23.cpp : Defines the entry point for the console application.
//

//работает
#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale (LC_ALL, "Russian");
	string str;
	ifstream text("text.txt");
	int j = 0; int max = 0;
	int *a = new int;
	while(getline(text, str))
	{ 
		int n = str.length();
		if (max < n) max = n;
		a[j] = n; j++;
    }
	int k = 0; int n;
	while(k <= max)
	{ 
		n = 0;
		for (int i = 0; i < j; i++)
			if (k == a[i])
				n++;

		cout << "Количество " << k << "-символьных строк " << n << endl;
		k++;
    }
	text.close();
	system("pause");
	return 0;
}

