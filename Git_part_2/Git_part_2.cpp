// Git_part_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <clocale>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	bool choice = true;
	setlocale(LC_ALL, "rus");
	while (choice == true)
	{
		char key;
		cout << "+ - ��������" << endl << "- -��������� " << endl << "* - ���������" << endl << "/ - �������" << endl << "��� ������ ������� quit" << endl;
		cin >> key;
		switch (key)
		{
		case '+':
		{
					system("cls");
					cout << "������� �������� � ����������" << endl;
		}
			break;

		case '-':
		{
					system("cls");
					cout << "������� ��������� � ����������" << endl;
		}
			break;

		case '*':
		{
					system("cls");
					cout << "������� ��������� � ����������" << endl;
		}
			break;

		case '/':
		{
					system("cls");
					cout << "������� ������� � ����������" << endl;

		}
			break;

		case 'q':
			choice = false;
			break;

		default:
			system("cls");
			break;
		}
	}
	
	system("pause");
	return 0;
}

