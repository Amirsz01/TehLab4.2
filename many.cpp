#ifndef PARAM_MASS_CPP
#define PARAM_MASS_CPP

#include "/Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд4/many.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

template <typename T>
void many<T>::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}

template <typename T>
many<T>::many()
{
	data = NULL;
	size = 0;
}

template <typename T>
many<T>::many(int size)
{
	srand(time(NULL));
	try
	{
		if (size <= 0)
		{
			string s = "Ошибка! Размер 0 или Отрицательный";
			throw s;
		}
		this->data = new T[size];
		this->size = size;
		for (int i = 0; i < size; i++) {
			data[i] = rand() % 50 + 50 - size;
		}
	}
	catch (string s)
	{
		cout << s << endl;
		system("pause");
		exit(1);
	}
}

template <typename T>
many<T>::~many()
{
	delete[] this->data;
}

template <typename T>
many<T>& many<T>::operator+(const many<T>& op1)
{
	int newSize = this->size + op1.size;
	T* temp = new T[newSize];
	for (int i = 0; i < this->size; i++)
	{
		temp[i] = this->data[i];
	}
	for (int i = 0; i < op1.size; i++)
	{
		temp[i + size] = op1.data[i];
	}
	this->size = newSize;
	delete[] this->data;
	this->data = temp;
	return *this;
}

template <typename T>
many<T>& many<T>::operator*(const many<T>& op1)
{
	int sizeAdd = 0;
	bool flag = false;
	for (int i = 0; i < op1.size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (op1.data[i] == data[j])
			{
				sizeAdd++;
				break;
			}
				
		}
	}
	T* temp = new T[size + op1.size - sizeAdd];
	for (int i = 0; i < this->size; i++)
	{
		temp[i] = this->data[i];
	}
	int g_I = size;
	for (int i = 0; i < op1.size; i++)
	{
		flag = false;
		for (int j = 0; j < size; j++)
		{
			if (op1.data[i] == data[j])
			{
				flag = true;
			}
		}
		if (!flag)
		{
			temp[g_I++] = op1.data[i];
		}
	}
	this->size = size + op1.size - sizeAdd;
	delete[] this->data;
	this->data = temp;
	return *this;
}

template <typename T>
bool many<T>::operator<(const many<T>& op2)
{
	bool flag = false;
	for (int i = 0; i < op2.size; i++)
	{
		flag = false;
		for (int j = 0; j < size; j++)
		{
			if (op2.data[i] == data[j])
			{
				flag = true;
			}
		}
		if (!flag)
		{
			cout << "Множества различны" << endl;
			return false;
		}
	}
	cout << "Множество является подмножеством другого" << endl;
	return true;
}
#endif