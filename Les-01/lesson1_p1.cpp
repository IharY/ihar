
#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	cout<<"Введие число\n";
	int n;
	cin>> n;

	for(int i = 0; i < n ; i++ )
	{
		cout<<"привет!\n";
	}
	system("pause");
	return 0;
}
