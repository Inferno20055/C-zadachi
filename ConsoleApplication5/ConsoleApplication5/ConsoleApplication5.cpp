#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	//zadacha 1
	//int secondsPassed = 0;

	//cout << "Введите количество секунд, прошедших с начала дня: ";
	//cin >> secondsPassed;

	//// Вычисление времени до полуночи
	//int seconds = (24 * 60 * 60) - secondsPassed; // 24 часа * 60 минут * 60 секунд
	//int hours = seconds / (60 * 60);
	//int minutes = (seconds % (60 * 60)) / 60;
	//int secondsFinal = seconds % 60;

	//cout << "До полуночи осталось:\n";
	//cout << hours << " часов\n";
	//cout << minutes << " минут\n";
	//cout << secondsFinal << " секунд\n";

	//return 0;
	////zadacha 2
	//float d,s,p;
	//const float Pi=3.14;
	//char vibor;
	//cout << "Введите деаметр окружности: ";
	//cin >> d;
	//cout << "Выбирите что посчитать площадь(s) или периметр(p): ";
	//cin >> vibor;
	//switch (vibor)
	//{
	//case 's':
	//	cout << "Формула площади окружности\n";
	//	cout << "(S=P*d^2)/4\n";
	//	s=(Pi * (d * d)) / 4;
	//	cout << "S= " << s;
	//	break;
	//case 'p':
	//	cout << "Формула периметра окружности\n";
	//	cout << "P=п*d\n";
	//	p = Pi * d;
	//	cout << "P= "<<p;
	//	break;
	//}
	//return 0;
	//задание 3
	/*int a, b,o,s ;
	float c;
	char vibor;
	cout << "Введите стоймость одной приставки, количество приставок,процент скидки(пример 10%=0.1): ";
	cin >> a >> b >> c;
	cout << "Выбирите как посчитать полную стоймость (o) или смоймость одной но со скидкой(s): ";
	cin>> vibor;
	switch (vibor)
	{
	case 'o':
		cout << "Общая стоймость товаров:\n ";
		o = (a*b*c);
		cout << "Ответ: " << o;
		break;
	case 's':
		cout << "Общая стоймость одной приставки:\n ";
		s = a * c;
		cout << "Ответ: " << s;
		break;
	}
	return 0;*/
	//
	//double fileSizeTB;  // Размер файла в терабайтах
	//double downloadSpeedBPS; // Скорость скачивания в битах в секунду
	//int timeUnit; // Единица измерения времени (секунды, минуты, часы)

	//// Ввод размера файла
	//cout << "Введите размер файла в терабайтах: ";
	//cin >> fileSizeTB;

	//// Ввод скорости скачивания
	//cout << "Введите скорость скачивания в битах в секунду: ";
	//cin >> downloadSpeedBPS;

	//// Выбор единицы измерения времени
	//cout << "Выберите единицу измерения времени:\n";
	//cout << "1 - секунды\n";
	//cout << "2 - минуты\n";
	//cout << "3 - часы\n";
	//cin >> timeUnit;

	//// Перевод размера файла в биты
	//double fileSizeBits = fileSizeTB * 1024 * 1024 * 1024 * 8;

	//// Вычисление времени скачивания
	//double downloadTime;

	//switch (timeUnit) {
	//case 1: // секунды
	//	downloadTime = fileSizeBits / downloadSpeedBPS;
	//	cout << "Время скачивания: " << downloadTime << " секунд\n";
	//	break;
	//case 2: // минуты
	//	downloadTime = fileSizeBits / (downloadSpeedBPS * 60);
	//	cout << "Время скачивания: " << downloadTime << " минут\n";
	//	break;
	//case 3: // часы
	//	downloadTime = fileSizeBits / (downloadSpeedBPS * 3600);
	//	cout << "Время скачивания: " << downloadTime << " часов\n";
	//	break;
	//default:
	//	cout << "Неверный выбор единицы измерения времени.\n";
	//}
	//return 0;
    //zadanie 5
int hours;

cout << "Введите количество часов: ";
cin >> hours;

if (hours >= 0 && hours < 6) {
	cout << "Good Night" << endl;
}
else if (hours >= 6 && hours < 13) {
	cout << "Good Morning" << endl;
}
else if (hours >= 13 && hours < 17) {
	cout << "Good Day" << endl;
}
else if (hours >= 17 || hours < 0) {
	cout << "Good Evening" << endl;
}

return 0;

}
