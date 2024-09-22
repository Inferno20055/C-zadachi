#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    int a1, b1, a2, b2, z,z1;
    cout << "Введите значение а1,b1,a2,b2:";
    cin >> a1>>b1>>a2>>b2;
    cout << "z1=" << a1 << "+" << b1<<"i\n";
    cout << "z2=" << a2 << "+" << b2 << "i\n";
    cout <<"Формула сложения:"<< "z1" << "+" << "z2\n";
    z = (a1 + a2);
    z1 = (b1 + b2);
    cout <<"Ответ сложения комплексных чисел:" << z << "+" << z1<<"i";

}