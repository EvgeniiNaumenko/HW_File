#include <iostream>
#include <fstream>
using namespace std;
#include <cstdio>
#include "Functions.h"
//�������� 1
//���� ��������� ����.ϳ��������� ������� ���, �� ����������� � �������, ���� ���� ����������.
//
//�������� 2
//���� ��������� ����.���������� � ����� ���� �� ���� ����� �� ������ � ��� ������� 0 �� ������ 1 � �������.
//
//�������� 3
//���� ����� �����.�������� �� � ����, ������������ ����� ������� ������ �� �������� ����� � ����������� �������.
//
//�������� 4
//���� ��������� ����.ϳ��������� ������� ������� � �����.
//
//�������� 5
//���� ��������� ����.ϳ��������� ������� ����� � �����.

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