#include "stdafx.h"
#include <iostream>
#include <clocale>
#include <typeinfo>
#include "windows.h"
#include "MyAdd.h"
#include "MyMult.h"
#include "MySub.h"
#include "MyDiv.h"

using namespace std;

double request(char);
double request(int);

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
					while (cin.peek() != '\n') cin.get();
					cout << std::fixed << MyAdd(request('a'), request(1)) << endl;
					system("pause");
					system("cls");
		}
			break;

		case '-':
		{
					system("cls");
					while (cin.peek() != '\n') cin.get();
					cout << std::fixed << MySub(request('a'), request(1)) << endl;
					system("pause");
					system("cls");
		}
			break;

		case '*':
		{
					system("cls");
					while (cin.peek() != '\n') cin.get();
					cout << std::fixed << MyMult(request('a'), request(1)) << endl;
					system("pause");
					system("cls");
		}
			break;

		case '/':
		{
					system("cls");
					while (cin.peek() != '\n') cin.get();
					cout << std::fixed << MyDiv(request('a'), request(1)) << endl;
					system("pause");
					system("cls");

		}
			break;

		case 'q':
			choice = false;
			break;

		default:
			system("cls");
			while (cin.peek() != '\n') cin.get();
			break;
		}
	}
	
	system("pause");
	return 0;
}


//Внимание!!! Костыли и ненужные перегрузы
double request(int a)
{
	double num;
	cout << "Введите первое число: ";
	cin >> num;
	if (cin.fail())
	{
		cout << "Внимание! Неверный ввод! Ваш компьютер будет уничтожен через:" << endl;
		for (int i = 10; i != 0; i--)
		{
			cout << i << endl;
			Sleep(1000);
		}
		exit(1);
	}
	return(num);
}

double request(char a)
{
	double num;
	cout << "Введите второе число: ";
	cin >> num;
	if (cin.fail() )
	{
		cout << "Внимание! Неверный ввод! Ваш компьютер будет уничтожен через:" << endl;
		for (int i = 10; i != 0; i--)
		{
			cout << i << endl;
			Sleep(1000);
		}
		exit(1);
	}
	return(num);
}