#include <iostream>
#include <fstream>
using namespace std;
#include <cstdio>
#include "Functions.h"
//Завдання 1
//Дано текстовий файл.Підрахувати кількість слів, що починаються з символу, який задає користувач.
//
//Завдання 2
//Дано текстовий файл.Переписати в інший файл усі його рядки із заміною в них символу 0 на символ 1 і навпаки.
//
//Завдання 3
//Дано масив рядків.Записати їх у файл, розташувавши кожен елемент масиву на окремому рядку зі збереженням порядку.
//
//Завдання 4
//Дано текстовий файл.Підрахувати кількість символів у ньому.
//
//Завдання 5
//Дано текстовий файл.Підрахувати кількість рядків у ньому.

int main()
{
	setlocale(LC_ALL, "");

	int choice;
	cout << "Enter HW num (1-5): " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		firstTask();
		break;
	}
	case 2:
	{
		secondTask();
		break;
	}
	case 3:
	{
		thirdTask();
		break;
	}
	case 4:
	{
		fourthTask();
		break;
	}
	case 5:
	{
		fifthTask();
		break;
	}
	default:
	{
		break;
	}
	}

	return 0;
}