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
void printCard(int rank, int suit) {
	// Определить масть карты
	string suitName;
	switch (suit) {
	case 0: suitName = "Треф"; break;
	case 1: suitName = "Бубен"; break;
	case 2: suitName = "Червей"; break;
	case 3: suitName = "Пик"; break;
	}
	// Определить ранг карты
	string rankName;
	switch (rank) {
	case 0: rankName = "2"; break;
	case 1: rankName = "3"; break;
	case 2: rankName = "4"; break;
	case 3: rankName = "5"; break;
	case 4: rankName = "6"; break;
	case 5: rankName = "7"; break;
	case 6: rankName = "8"; break;
	case 7: rankName = "9"; break;
	case 8: rankName = "10"; break;
	case 9: rankName = "Валет"; break;
	case 10: rankName = "Дама"; break;
	case 11: rankName = "Король"; break;
	case 12: rankName = "Туз"; break;
	}

	// Вывести карту на экран
	cout << rankName << " " << suitName << endl;
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
	printCard(12, 9);
	return 0;






}