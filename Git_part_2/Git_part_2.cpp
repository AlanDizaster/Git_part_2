#include "stdafx.h"
#include <iostream>
#include <clocale>
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
					cout << std::fixed << MyAdd(request('a'), request(1)) << endl;
					system("pause");
					system("cls");
		}
			break;

		case '-':
		{
					system("cls");
					cout << std::fixed << MySub(request('a'), request(1)) << endl;
					system("pause");
					system("cls");
		}
			break;

		case '*':
		{
					system("cls");
					cout << std::fixed << MyMult(request('a'), request(1)) << endl;
					system("pause");
					system("cls");
		}
			break;

		case '/':
		{
					system("cls");
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
	return(num);
}

double request(char a)
{
	double num;
	cout << "Введите второе число: ";
	cin >> num;
	return(num);
}