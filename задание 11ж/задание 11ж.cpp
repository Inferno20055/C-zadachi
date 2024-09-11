#include <iostream>
#include <math.h>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    float x, y, z;
    float a, b;
    const float e = 2.71;
    cout << "Введите переменную х:";
    cin >> x;
    cout << "Введите переменную y:";
    cin >> y;
    cout << "Введите переменную z:";
    cin >> z;
    a =  log(abs((y-sqrt(abs(x)))*x-(y/z+(x*x/4))));
    b = (x - (x * x) / (1 * 2 * 3)) + ((x * x * x * x * x) / (1 * 2 * 3 * 4 * 5));
    cout << "Ответ части а:"<< a<<"\n";
    cout << "Ответ части b:" << b;
}

