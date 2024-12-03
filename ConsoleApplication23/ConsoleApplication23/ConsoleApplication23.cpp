#include <iostream>
#include <cmath>

using namespace std;

int discriminant(int a, int b, int c) {
    int res = 0;
    res= (b * b) - (4 * (a * c));
    return res;
}
double ShadowLenght(double x1, double x2) {
    if (x1>x2)
    {
        double temp = x1; 
        x1 = x2;
        x2 = temp;
    }
    return abs(x2 - x1);
}
int Treugolnik(int a,int b,int c) {
    if (a==b&&b==c)
    {
        cout << "Треугольник равностороний."<<endl;
    }
    else if (a==b||b==c||a==c)
    {
        cout << "Треугольник равнонобедренный." << endl;
    }
    else if (pow(a, 2) + pow(b, 2) == pow(c, 2) ||
        pow(a, 2) + pow(c, 2) == pow(b, 2) ||
        pow(b, 2) + pow(c, 2) == pow(a, 2))
    {
        cout << "Треугольник прямоугольный." << endl;
    }
    else
    {
        cout << "Треугольник равностороний."<<endl;
    }
    return 0;
}
int main() {
    //zadanie 1
    setlocale(LC_ALL, "Ru");
 /*
    int a, b, c;
    cout << "Введите числа(a,b,c):"<<endl;
    cin >> a >> b >> c;
    int x1 = (-b + sqrt(discriminant(a, b, c)) / (2 * a));
    int x2= (-b - sqrt(discriminant(a, b, c)) / (2 * a));
    cout << "Дискриминант: " << sqrt(discriminant(a, b, c)) << " , " << "Х1= " << x1 << " , "<< "Х2= " << x2;
    *///zadanie 2
    /*int n;
    cout << "Введите количество отрезков: ";
    cin >> n;
    double** segments = new double* [n];
    for (int i = 0; i < n; i++)
    {
        segments[i] = new double[2];
        for (int j = 0; j < 2; j++)
        {
            cin >> segments[i][j];
        }
    }
    double totalshadowlength = 0;
    for (int i = 0; i < n; i++)
    {
        totalshadowlength += ShadowLenght(segments[i][0], segments[i][1]);
    }
    cout << "Длина тени между отрезками: "<<totalshadowlength << endl;
    return 0;*/
    //задание 4
    /*int a, b, c;
    cout << "Введите сторону треугольника a: ";
    cin >> a;
    cout << "Введите сторону треугольника b: ";
    cin >> b;
    cout << "Введите сторону треугольника c: ";
    cin >> c;
    int res = Treugolnik(a, b, c);
    cout << "Ответ: " << res;*/
    //zadanie 5









}