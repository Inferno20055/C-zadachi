#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double Power(double base, int exponent) {
	return pow(base, exponent);
}
int SumInRange(int start, int end) {
	int sum = 0;
	for (int i = start + 1; i < end; i++) {
		sum += i;
	}
	return sum;
}
bool isPerfectNumber(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum == n;
}

void findPerfectNumbers(int start, int end) {
	cout << "Совершенные числа в интервале [" << start << ", " << end << "]: ";
	for (int i = start; i <= end; i++) {
		if (isPerfectNumber(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
}
int Carta(int car) {
	if (car == 1)
	{
		cout << "Карта буби " << endl;
		cout << "*-------*"<<endl;
		cout << "|       |"<<endl;
		cout << "|   *   |" << endl;
		cout << "|  ***  |" << endl;
		cout << "|   *   |" << endl;
		cout << "|       |" << endl;
		cout << "*-------*" << endl;
	}
	else if (car==2)
	{
		cout <<"Карта черви " << endl;
		cout << "*-------*" << endl;
		cout << "|       |" << endl;
		cout << "| ** ** |" << endl;
		cout << "|  ***  |" << endl;
		cout << "|   *   |" << endl;
		cout << "|       |" << endl;
		cout << "*-------*" << endl;
	}
	else if (car == 3)
	{
		cout << "Карта трефы " << endl;
		cout << "*-------*" << endl;
		cout << "|       |" << endl;
		cout << "|   *   |" << endl;
		cout << "|  *^*  |" << endl;
		cout << "|       |" << endl;
		cout << "|       |" << endl;
		cout << "*-------*" << endl;
	}
	else if (car == 4)
	{
		cout << "Карта пики " << endl;
		cout << "*-------*" << endl;
		cout << "|   *   |" << endl;
		cout << "| ***** |" << endl;
		cout << "|  * *  |" << endl;
		cout << "|   ^   |" << endl;
		cout << "|       |" << endl;
		cout << "*-------*" << endl;
	}


 return car;
}
bool isHappyNumber(int number) {
	if (number < 100000 || number > 999999) {
		return false;
	}

	int firstHalfSum = (number / 100000) + ((number / 10000) % 10) + ((number / 1000) % 10);
	int secondHalfSum = ((number / 100) % 10) + ((number / 10) % 10) + (number % 10);

	return firstHalfSum == secondHalfSum;
}
int main() {
	setlocale(LC_ALL, "Ru");
	/*double base;
	int exponent;
	cout << "Введите основание степени: ";
	cin >> base;
	cout << "Введите показатель степени: ";
	cin >> exponent;
	double result = Power(base, exponent);
	cout << "Результат: " << result << endl;
	return 0;*/
	/*int start, end;
	cout << "Введите начала диапозона: ";
	cin >> start;
	cout << "Введите конец диапозона: ";
	cin >> end;
	int sum = SumInRange(start, end);
	cout << "Сумма чисел в диапазоне от " << start << " до " << end << ": " << sum << endl;
	return 0;*/
	/*int start, end;
	cout << "Введите начало интервала: ";
	cin >> start;
	cout << "Введите конец интервала: ";
	cin >> end;
	findPerfectNumbers(start, end);
	return 0;*/
	/*int car;
	cout << "Введите номер карты(1-4): ";
	cin >> car;
	int res = Carta(car);
	cout << res;*/
	int number;
	cout << "Введите шестизначное число: ";
	cin >> number;
	if (isHappyNumber(number))
	{
		cout <<"Число: " << number << " счастливое.";
	}
	else
	{
		cout <<"Число: " << number << " несчастливое.";
	}
	return 0;
	





}
