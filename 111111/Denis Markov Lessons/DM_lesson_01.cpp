// ����1 ����� �� �++.1 ����.��� ������� ���������?
// C++ ������ ������� https://www.youtube.com/watch?v=MOpF5lk3cLY&list=PLbmlzoDQrXVFC13GjpPrJxl6mzTiX65gs

/*//////////////////////////////
Author : Victor Yanushkevich ///
Name: output console 		 ///
*///////////////////////////////

/*
��� ���������� �������������
�����������
*/


#include <conio.h>
#include <iostream>

using std::cout; //��������� ������������ ����, ������ cout ����� ������������ std::cout
using std::endl;

// � ������ ������ ���������� ���� � ���������

int main()
{
	cout << "Hello World" << endl; //cout - �������� ������ � �����. endl - ������ �� ����� ������
	cout << "Name: \tIhar\n";
	cout << "Name: \tYanushkevich\n";

	_getch(); //�������� ������� ���� ����� �������

	return 0; //���������� ��������� (��������� ������ ���-�� �������, � ������ ������ ���������� 0
}