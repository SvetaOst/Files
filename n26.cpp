// n26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale (LC_ALL, "Russian");
	string str;
	ifstream text1("text1.txt");
	ifstream text2("text2.txt");
	ofstream text("text.txt");
	
	while(getline(text1, str))
	{ 
		text << str;
		text << endl;
	}
	
	while(getline(text2, str))
	{ 
		text << str;
		text << endl;
    }
		
	text1.close(); text2.close(); text.close();
	system("pause");
	return 0;
}

