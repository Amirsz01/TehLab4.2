#include <iostream>
#include </Users/Amirsz/source/repos/�������������/�������������4/many.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int callback;
	many <double> Many(10);
	many <double> Many2(5);
	while (true)
	{
		system("cls");
		cout << "�������� ����� : " << endl
			<< "1. ����������� ��������" << endl
			<< "2. ����������� ��������" << endl
			<< "3. ��������� ��������" << endl
			<< "4. �������� ���������" << endl
			<< "0. �����" << endl;
		cin >> callback;
		switch (callback)
		{
		case 1:
			cout << "����: " << endl;
			Many.show();
			Many + Many2;
			cout << "�����: " << endl;
			Many.show();
			break;
		case 2:
			cout << "����: " << endl;
			Many.show();
			Many * Many2;
			cout << "�����: " << endl;
			Many.show();
			break;
		case 3:
			Many < Many2;
			break;
		case 4:
			cout << "������ ���������: " << endl;
			Many.show();
			cout << "������ ���������: " << endl;
			Many2.show();
			break;
		case 0:
			return 0;
		default:
			break;
		}
		system("pause");
	}
}
