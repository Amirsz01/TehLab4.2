#pragma once
#include <iostream>
using namespace std;

template <typename T>
class many
{
	T* data;
	int size;
public:
	void show();
	T* getData();
	many();
	many(int size);
	~many();
	many<T>& operator*(const many<T>& op1);
	many<T>& operator+(const many<T>& op1);
	bool operator<(const many<T>& op2);
};

#include "/Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд4/many.cpp"