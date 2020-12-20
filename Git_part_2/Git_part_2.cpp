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
		cout << "+ - сложение" << endl << "- -вычетание " << endl << "* - умножения" << endl << "/ - деление" << endl << "Для выхода введиет quit" << endl;
		cin >> key;
		switch (key)
		{
		case '+':
		{
					system("cls");
					cout << "Функция сложения в разработке" << endl;
		}
			break;

		case '-':
		{
					system("cls");
					cout << "Функция вычитания в разработке" << endl;
		}
			break;

		case '*':
		{
					system("cls");
					cout << "Функция умножения в разработке" << endl;
		}
			break;

		case '/':
		{
					system("cls");
					cout << "Функция деления в разработке" << endl;

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

