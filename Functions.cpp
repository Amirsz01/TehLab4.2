#ifndef FUNCTIONS_CPP
#define FUNCTIONS_CPP

#include <iostream>
#include "Functions.h"

using namespace std;

template <typename T>
void worker(int func, T)
{
	system("cls");

	int size;

	cout << "Введите размер массива: ";
	cin >> size;

	many<T> first_mass(size);
	many<T> second_mass(size);

	system("cls");

	cout << "Заполнение первого массива: " << endl;
	T* ptr = first_mass.getData();
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
	cout << endl;

	ptr = second_mass.getData();
	cout << "Заполнение второго массива: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}


	system("cls");

	cout << "Первый массив: ";
	first_mass.show();

	cout << "Второй массив: ";
	second_mass.show();
	cout << endl;
	switch (func)
	{
	case 1:
		first_mass + second_mass;
		break;
	case 2:
		first_mass* second_mass;
		break;
	case 3:
		first_mass < second_mass;
		return;
	}
	cout << "После изменений " << endl;
	cout << "Первый массив: ";
	first_mass.show();
	cout << "Второй массив: ";
	second_mass.show();
}
#endif
