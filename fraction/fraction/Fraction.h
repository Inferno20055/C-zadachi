#include <iostream>
using namespace std;
class Fraction {
private:
    int numerator;   
    int denominator; 

public:
    // Конструктор
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}

   

    // Функция для вывода дроби
    void displayFraction() const {
        cout << numerator << "/" << denominator << endl;
    }

    // Функция для сложения дробей
    Fraction add(const Fraction& other) const {
        return Fraction(numerator * other.denominator + other.numerator * denominator,
            denominator * other.denominator);
    }

    // Функция для вычитания дробей
    Fraction subtract(const Fraction& other) const {
        return Fraction(numerator * other.denominator - other.numerator * denominator,
            denominator * other.denominator);
    }

    // Функция для умножения дробей
    Fraction multiply(const Fraction& other) const {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    // Функция для деления дробей
    Fraction divide(const Fraction& other) const {
        return Fraction(numerator * other.denominator, denominator * other.numerator);
    }
};