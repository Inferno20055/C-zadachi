#include <iostream>
#include "pointer.h"
#include "car.h"
#include <conio.h>
using namespace std;

void Car::Input() {
    cout << "Введите информацию об автомобиле" << endl;

    cin.ignore(); 
    cout << "Введите марку автомобиля: ";
    cin.getline(stamp, 40); 

    cout << "Введите год выпуска: ";
    cin.getline(year, 40); 

}

void Car::Print_1() {
    cout << "Информация об автомобиле" << endl;
    cout << "Марка автомобиля: " << stamp << endl;
    cout << "Год выпуска: " << year << endl;
    cout << "Лошадиные силы: " << horsepower << endl;
}

void pointer::Print() {
    cout << "Координаты точки: " << x << ", " << y << ", " << z << endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    int horsepower = 118; 
    Car myCar(&horsepower); 
    myCar.Input();
    myCar.Print_1(); 

    int a = 10, b = 14, c = 9;
    pointer point(&a, &b, &c);
    point.Print(); 

    _getch();
    return 0;
}