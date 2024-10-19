#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    setlocale(LC_ALL, "Ru");
    //zadanie 1.
    /*int number;

    cout << "Введите число: ";
    cin >> number;

    if (number <= 0) {
        cout << "Число должно быть больше нуля!" << endl;
        return 0; 
    }
    while (number > 0) {
        cout  << number % 10;
        number /= 10;         
    }
    return 0;*/
    //zadanie 2.
    /*int number, dig, sum = 0;
    cout << "Введите число: ";
    cin >> number;
    while (number!=0) {
        dig = number % 10;
        sum += dig;
        number /= 10;
    }
    cout << "Сумма цифр числа: " << sum;
    return 0;*/
    //zadanie 3.
    /*int n, tdistant = 0, distantpday = 15;
    cout << "Введите количество дней: ";
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        tdistant += distantpday;
        distantpday += 2;
    }
    cout << "Общее растояние: " << tdistant << " см";*/
    //zadanie 4.
    /*int orli = 0; // Счетчик выпадений орла
    cout << "Введите результаты подбрасывания монетки (1 - орел, 0 - решка):";
    for (int i = 0; i < 9; ++i) {
        int rezultat;
        cin >> rezultat;

        if (rezultat != 0 && rezultat != 1) {
            cout << "Некорректный ввод. Введите 1 или 0.";
            --i; 
            continue;
        }
        orli += rezultat; 
    }
    if (orli % 2 == 0) {
        cout << "Решение студента Д.: положительное.";
    }
    else {
        cout << "Решение студента Д.: отрицательное.";
    }
    return 0;*/
    int month, year, startDay;
    cout << "Введите номер месяца (1-12): ";
    cin >> month;
    cout << "Введите год: ";
    cin >> year;
    cout << "Введите номер недели для начала месяца (1 - понедельник, 7 - воскресенье): ";
    cin >> startDay;
    if (month < 1 || month > 12 || startDay < 1 || startDay > 7) {
        cout << "Некорректные данные." << endl;
        return 1;
    }
    int daysInMonth;
    switch (month) {
    case 2:
        daysInMonth = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
        break;
    case 4: case 6: case 9: case 11:
        daysInMonth = 30;
        break;
    default:
        daysInMonth = 31;
    }
    cout << "\n Календарь: " << month << " " << year << endl;
    cout << " Пн Вт Ср Чт Пт Сб Вс" << endl;
    for (int i = 1; i < startDay; ++i) {
        cout << "   ";
    }
    int day = 1;
    for (int i = startDay; i <= daysInMonth + startDay - 1; ++i) {
        cout << (day < 10 ? " " : " ") << day;
        if (i % 7 == 0) {
            cout << endl;
        }
        ++day;
    }
    return 0;

}