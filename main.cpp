#include <iostream>
#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд4/many.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int callback;
	many <double> Many(10);
	many <double> Many2(5);
	while (true)
	{
		system("cls");
		cout << "Выберите пункт : " << endl
			<< "1. Объединение множеств" << endl
			<< "2. Пересечение множеств" << endl
			<< "3. Сравнение множеств" << endl
			<< "4. Показать множества" << endl
			<< "0. Выход" << endl;
		cin >> callback;
		switch (callback)
		{
		case 1:
			cout << "Было: " << endl;
			Many.show();
			Many + Many2;
			cout << "Стало: " << endl;
			Many.show();
			break;
		case 2:
			cout << "Было: " << endl;
			Many.show();
			Many * Many2;
			cout << "Стало: " << endl;
			Many.show();
			break;
		case 3:
			Many < Many2;
			break;
		case 4:
			cout << "Первое множество: " << endl;
			Many.show();
			cout << "Второе множество: " << endl;
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
