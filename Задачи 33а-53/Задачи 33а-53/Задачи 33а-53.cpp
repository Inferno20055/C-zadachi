﻿#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    /*cout << "Задание 33а\n";
    double x, y;//инициализация переменных
    cout << "Введите два действительных числа:";//сообщение для пользователя
    cin >> x >> y;//ввод переменных
    double max = (x > y) ? x : y;//формула для вычисления мах
    cout << "Максимум из "<<x<<" и "<<y<<" равен: " << max;//ответ пользователю
    return 0;*/
    /*cout << "Задание 45.\n";
    double a, b, c, d;//инициализирования переменных
    cout << "Введите действительные числа(a,b,c,d)";//сообщение для пользователя
    cin >> a >> b >> c >> d;//введение переменных
    if (a<=b&&b<=c&&c<=d)//первое условие
    {
        cout << "Измененные числа: " << d << " " << d << " " << d << " " << d;
    }
    else if (a>b&&b>c&&c>d)//второе условие
    {
        cout << "Измененные числа: " << a <<"" << b <<"" <<"" << c<<"" << d;
    }
    else//третье условие
    {
        cout << "Измененные числа: " << a * a << "" << b * b << "" << c * c << "" << d * d;
    }
    return 0;*/
    /*cout << "задача 53.\n";
    double a, b, c, d, e, f, g, h;//инициализирование переменных
    cout << "Введите действительные числа(a,b,c,d,e,f,g,h):";//подсказка для пользователя
    cin >> a >> b >> c >> d >> e >> f >> g >> h;//ввод переменных

    double det1 = (g - e) * (d - f) - (h - f) * (c - e);//первая формула
    double det2 = (g - e) * (b - f) - (h - f) * (a - e);//вторая формула

    if ((det1 > 0 && det2 > 0) || (det1 < 0 && det2 < 0)) {
        cout << "Точки (a, b) и (c, d) принадлежат одной полуплоскости относительно прямой L" << endl;
    }
    else {
        cout << "Точки (a, b) и (c, d) принадлежат разным полуплоскостям относительно прямой L" << endl;
    }

    return 0;*/
    cout << "Задание 59ж.\n";
    double x, y;//инициализация переменных
    double a, b, c;
    cout << "Введите размер треугольника(a,b):";//подсказка для пользователя 
    cin >> a >> b;//ввод переменных
    cout << "Введите кординаты точки(х,у):";
    cin >> x >> y;
    c = 0.5 * a * b;//формула для площади треугольника
    if (c<=x&&c<=y)//условия для вычисления
    {
        cout << "точка принадлижит в закрашенной области";
    }
    else
    {
        cout << "Точка непринадлижит закрашенной области";
    }
    return 0;
}
