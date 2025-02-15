
#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    setlocale(LC_ALL,"RU");
    Fraction frac1(1, 2); // Пример дроби 1/2
    Fraction frac2(3, 4); // Пример дроби 3/4
    
    cout << "Первая дробь: ";
    frac1.displayFraction();

    cout << "Вторая дробь: ";
    frac2.displayFraction();

    // Сложение
    Fraction result = frac1.add(frac2);
    cout << "Сумма: ";
    result.displayFraction();

    // Вычитание
    result = frac1.subtract(frac2);
    cout << "Разность: ";
    result.displayFraction();

    // Умножение
    result = frac1.multiply(frac2);
    cout << "Произведение: ";
    result.displayFraction();

    // Деление
    result = frac1.divide(frac2);
    cout << "Частное: ";
    result.displayFraction();

    return 0;
}

