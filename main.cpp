#include <iostream>
#include "Functions.h"
#include </Users/Amirsz/source/repos/�������������/�������������4/many.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int callback;
	int calltype;
	string s = "abc";
	while (true)
	{
		system("cls");
		cout << "�������� ����� : " << endl
			<< "1. ����������� ��������" << endl
			<< "2. ����������� ��������" << endl
			<< "3. ��������� ��������" << endl
			<< "0. �����" << endl;
		cin >> callback;
		if (!callback)
			return 0;
		system("cls");
		cout << "���� ������ ���� ��������� �������:" << endl
			<< "1. int" << endl
			<< "2. char" << endl
			<< "3. float" << endl
			<< "4. double" << endl
			<< "5. string" << endl;
		cin >> calltype;
		switch (calltype) {
		case 1: 
			worker(callback, 1);
			break;
		case 2: 
			worker(callback, 'c');
			break;
		case 3: 
			worker(callback, 1.0f);
			break;
		case 4: 
			worker(callback, 1.0);
			break;
		case 5: 
			worker(callback, s);
			break;
		}
		system("pause");
	}
}
