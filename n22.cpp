// n22.cpp : Defines the entry point for the console application.
//

//Do you like watching cartoons? Probably you do! 

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
	char *ar = new char;
	int *ch = new int;
	int k = 0; int s;
	while(getline(text, str))
	{ 
		int n = str.length();
		for (int i = 0; i < n; i++)
		{
			s = 0;
			for (int j = 0; j < k; j++)
				if (ar[j] == str[i])
				{	s++; break; }
			if (s == 0)
			{
				ar[k] = str[i];
				ch[k] = 1;
				if (i < n-1)
					for (int j = i+1; j < n; j++)
					{
						if (ar[k] == str[j])
							ch[k]++;
					}
				k++;
			}
	
		}
    }

	text.close();

	for (int i = 0; i < k; i++)
	{	cout << "'" << ar[i] << "' = " << ch[k] << endl;
	}

	system("pause");
	return 0;
}

