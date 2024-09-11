#include <iostream>
using namespace std;
int main()
{ setlocale(LC_ALL, "Ru");
cout << "zadanie 3\n";
int a;//инициализировал переменную
cout << "Введите число:";//подсказка для пользователя
cin >> a;//команда для ввендения переменной
double a2 = a * a;//1 часть формулы а^4
double a4 = a2 * a2;//2 часть формулы a^4
cout << "а4= " << a4 << endl;//ответ и окончание формулы

}
