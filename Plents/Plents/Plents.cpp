#include <iostream>
#include"Plenty.h"
using namespace std;
int main()
{
    setlocale(LC_ALL,"RU");
    Plenty A;
    A += 3;
    A += 8;
    A += 46;
    A += 5;
    A += 11;

    Plenty B;
    B += 18;
    B += 8;
    B += 90;
    B += 11;
    B += 2;

    cout << "Множество A: " << A << endl;
    cout << "Множество B: " << B << endl;

    Plenty C = A + B;
    cout << "Объединение A и B: " << C << endl;

    Plenty D = A * B;
    cout << "Пересечение A и B: " << D << endl;

    Plenty E = A - B;
    cout << "Разность A \\ B: " << E << endl;
    return 0;
}


