#include "stdafx.h"
#include <iostream>
#include <clocale>
#include "MyAdd.h"
using namespace std;

double request();


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
					cout << MyAdd(request(),request()) << endl;
					system("pause");
					system("cls");
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

double request()
{
	double num;
	cout << "Введите число: ";
	cin >> num;
	return(num);
}