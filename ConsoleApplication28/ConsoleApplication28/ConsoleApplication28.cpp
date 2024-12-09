#include <iostream>
using namespace std;
int Power(int a, int b) {
	if (b==0)
	{
		return 1;
	}
	else if (b<0)
	{
		return 1 / Power(a, -b);
	}
	else
	{
		return a * Power(a, b - 1);
	}
}
int SumRange(int a, int b) {
	if (a > b) {
		return 0;
	}
	return a + SumRange(a + 1, b);
}
void PrintStars(int n) {
	if (n <= 0) {
		return;
	}
	cout << "* ";	
	PrintStars(n - 1);
}

int main()
{
    setlocale(LC_ALL, "Ru");
	//zadanie 2
	int a, b;
	cout << "Введите число: ";
	cin >> a;
	cout << "Введите степень: ";
	cin >> b;
	int res = Power(a, b);
	cout << "Число: " << a << " в степени " << b << " = " << res<<endl;
	cout << endl;
	//zadanie 4
	int a1, b1;
	cout << "Введите первое число: ";
	cin >> a1;
	cout << "Введите второе число: ";
	cin >> b1;
	int result = SumRange(a1, b1);
	cout << "Сумма чисел от " << a1 << " до " << b1 << " = " << result << endl;

	cout << endl;
	PrintStars(5);
	return 0;
}
