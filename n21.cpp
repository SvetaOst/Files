// n21.cpp : Defines the entry point for the console application.
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
		 
	string pstr;
	cin >> pstr;
	int m = pstr.length();

	string str;
	ifstream text("text.txt");
	while(getline(text, str))
	{ 
		int n = str.length();
		int j = 0;
		for (int i = 0; i < n; i++)
		{
			char mas = str[i];
			
			if (mas == pstr[j])
			{
				j++;
			}
			else if (j != m)
				{
					j = 0;
				}
				else 
				{
					cout << str << endl;
					break;
				}
		}
    

    }
	text.close();

	system("pause");
	return 0;
}

