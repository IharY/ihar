// lesson5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h" 
#include <iostream>

using namespace std;

// ����� for

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	cout<<"������ �����\n";
	int n;
	cin>> n;
	cout<<" �� ����� ����� "<<n<<"\n";
	system("pause");

	for(int i = 0; i < 5 ; i++ )
	{
	//	cout<<i;
		cout<<"�������� i= "<<i<<"\n"; // ��� ������
	}
	system("pause");
	return 0;
}

