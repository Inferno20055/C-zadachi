#include <iostream>
#include <random>
#include <cmath>
using namespace std;
void plus1(float x1, float y1) {
	cout << "ответ" << x1 + y1;
}
int main() {
	setlocale(LC_ALL, "Ru");
	//int a;
	//float x, y;
	//ar z;
	//ut << "введите символ\n";
	//cin >> a;
	//cout << "введите число";
	//cin >> x;
	//cout << "Введите число";
	//cin >> y;
	//cin >> z;
//	cout << "hello world  " << a," \n";



	//switch(z)
	//{
	//case'+':
		//plus1(x, y);
		//break;
	//}
	float a, b;// инециализировал данные
	cout << "введите число:";
	cin >> a;//введения первого числа
	cout << "введите число:";
	cin >> b;//введение второго числа
	cout << "ответ" << a - b << "\n";//вычитания двух чисел
	cout << "ответ" << a * b << "\n";//умножения двух чисел
	cout << "ответ" << a + b << "\n";//сложение двух чисел
	cout << "ответ" << a / b << "\n";//деление двух чисел
	cout << "zadanie 1";
	int l;//
	const float p = 3.14;//
	cout << "Введите длину окружности:";//введите число
	cin >> l;//
	cout << "S=" << (l * l) / (4 * p) << "\n";//
	cout << "zadanie 2";
	int a1, b1;
	float x,y,z;
	cout << "Введите число х:";
	cin >> x;
	cout << "Введите число у:";
	cin >> y;
	cout << "Введите число z:";
	cin >> z;
	b = x - (x * x) / (1 * 2 * 3) + (x * x * x * x * x) / (1 * 2 * 3 * 4 * 5);
	cout << "zadanie 3";
	int c;
	cout << "Введите число:";
	cin >> c;
	double c2 = c * c;
	double c4 = c2 * c2;
	cout << "а4= " << c4 << endl;









	return 0;
}
