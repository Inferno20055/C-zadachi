#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
	cout << "zadanie 1";
	int l;//инициализоровал переменную
	const float p = 3.14;//число р
	cout << "Введите длину окружности:";//сообщение для пользователя
	cin >> l;// введения переменной
	cout << "S=" << (l * l) / (4 * p) << "\n";//формула вычесления
}

