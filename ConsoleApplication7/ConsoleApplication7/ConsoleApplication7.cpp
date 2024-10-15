#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
	/*for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << i <<"*"<<j<<"=" << i * j<<"\t";
		}
		cout << endl;
	}
	cout << endl;*/
	/*int n = 21;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 10 - i; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "[===]";
		}
		cout << endl;
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 10; j++) {
			cout << "[###]";
		}
	cout << endl;
	}
	cout << endl;*/
	//cout << "Простые числа в диапазоне от 2 до 1000:\n";

	//// Проход по всем числам в диапазоне от 2 до 1000
	//for (int i = 2; i <= 1000; ++i) {
	//	// Флаг, указывающий, является ли число простым
	//	bool isPrime = true;

	//	// Проверка делимости на числа от 2 до корня из i
	//	for (int j = 2; j * j <= i; ++j) {
	//		if (i % j == 0) {
	//			isPrime = false;
	//			break;
	//		}
	//	}

	//	// Вывод числа, если оно простое
	//	if (isPrime) {
	//		cout << i << " ";
	//	}
	//}

	//cout << endl;
	//return 0;
	/*cout << "zadanie 1.";
	int A = 10, B = 15;
	for (int i = A; i <= B; ++i) {
		cout << "Делители для числа " << i << ": ";
		int count = 0;
		for (int j = 1; j <= i; ++j) {
			if (i % j == 0) {
				cout << j << " ";
				++count;
			}
		}
		cout << "(Всего " << count << " делителей)" << endl;
	}

	return 0;*/
	//for (int i = 2; i <= 1000; ++i) {
	//	// Флаг, указывающий, является ли число простым
	//	bool isPrime = true;

	//	// Цикл перебирает все числа от 2 до корня из i
	//	for (int j = 2; j * j <= i; ++j) {
	//		// Если i делится на j без остатка, то i не является простым
	//		if (i % j == 0) {
	//			isPrime = false;
	//			break; // Выходим из внутреннего цикла
	//		}
	//	}

	//	// Если isPrime = true, то i - простое число
	//	if (isPrime) {
	//		cout << i << " ";
	//	}
	//}

	//cout << endl;
	//return 0;
	for (int i = 2; i <= 1000; i++)
	{
		bool isPrime = true;
		for (int j = 2; j*j<=i; j++)
		{
			if (i % j == 0) {
				isPrime = false;
				break;
			}
			
		}
		if (isPrime)
		{
			cout << i << " ";
		}
	}
	return 0;
	/*int a;

	cout << "Введите размер ёлки: ";
	cin >> a;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i <= a / 2; i++) {
		for (int j = 1; j <= a - 2; j++) {
			cout << " ";
		}
		cout << "***" << endl;
	}

	return 0;*/

}
