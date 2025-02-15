#include <iostream>
using namespace std;
class Fraction {
private:
    int numerator;   
    int denominator; 

public:
    // �����������
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}

   

    // ������� ��� ������ �����
    void displayFraction() const {
        cout << numerator << "/" << denominator << endl;
    }

    // ������� ��� �������� ������
    Fraction add(const Fraction& other) const {
        return Fraction(numerator * other.denominator + other.numerator * denominator,
            denominator * other.denominator);
    }

    // ������� ��� ��������� ������
    Fraction subtract(const Fraction& other) const {
        return Fraction(numerator * other.denominator - other.numerator * denominator,
            denominator * other.denominator);
    }

    // ������� ��� ��������� ������
    Fraction multiply(const Fraction& other) const {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    // ������� ��� ������� ������
    Fraction divide(const Fraction& other) const {
        return Fraction(numerator * other.denominator, denominator * other.numerator);
    }
};