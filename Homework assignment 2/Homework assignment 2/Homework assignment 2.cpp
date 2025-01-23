#include <iostream>
using namespace std;
//задание 1
struct Complex {
    double real = 0; 
    double imag = 0; 

    // Оператор сложения
    Complex operator+(Complex other) { 
        return { real + other.real, imag + other.imag }; 
    }

    // Оператор вычитания
    Complex operator-(Complex other) { 
        return { real - other.real, imag - other.imag }; 
    }

    // Оператор умножения
    Complex operator*(Complex other) { 
        return { real * other.real - imag * other.imag,
                real * other.imag + imag * other.real }; 
    }

    // Оператор деления
    Complex operator/(Complex other) { 
        double denominator = other.real * other.real + other.imag * other.imag;
        if (denominator == 0) throw runtime_error("Деление на ноль");
        return { (real * other.real + imag * other.imag) / denominator,
                (imag * other.real - real * other.imag) / denominator }; 
    }

    // Печать комплексного числа
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.real << (c.imag >= 0 ? "+" : "") << c.imag << "i";
        return os;
    }
};
struct Car
{
    double length;          
    double clearance;       
    double engineVolume;    
    double enginePower;     
    double wheelDiameter;    
    char color[20];         
    char transmissionType[20]; 

    // Функция для задания значений автомобиля
    void setValues(double len, double cle, double vol, double pow, double diam, const char* col, const char* transType) {
        length = len;
        clearance = cle;
        engineVolume = vol;
        enginePower = pow;
        wheelDiameter = diam;
        
        color[sizeof(color) - 1] = '\0'; 
        
        transmissionType[sizeof(transmissionType) - 1] = '\0';
    }

    // Функция для отображения значений автомобиля
    void displayValues() const {
        cout << "Длина: " << length << " м" << endl;
        cout << "Клиренс: " << clearance << " см" << endl;
        cout << "Объем двигателя: " << engineVolume << " л" << endl;
        cout << "Мощность двигателя: " << enginePower << " л.с." << endl;
        cout << "Диаметр колес: " << wheelDiameter << " дюймов" << endl;
        cout << "Цвет: " << color << endl;
        cout << "Тип коробки передач: " << transmissionType << endl;
    }
};

// Функция для поиска автомобилей по цвету
void findCarsByColor(Car cars[], int size, const char* color) {
    cout << "Автомобили цвета \"" << color << "\":" << endl;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (strcmp(cars[i].color, color) == 0) {
            cars[i].displayValues();
            found = true;
            cout << "--------------------------" << endl;
        }
    }
    if (!found) {
        cout << "Автомобили не найдены." << endl;
    }
}

int main() {
    setlocale(LC_ALL,"Ru");
    /*Complex c1;
    c1.real = 1;
    c1.imag = 2; 
    Complex c2; 
    c2.real = 3;
    c2.imag = 4; 

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "Сумма: " << (c1 + c2) << endl;
    cout << "Разность: " << (c1 - c2) << endl;
    cout << "Произведение: " << (c1 * c2) << endl;

    try {
        cout << "Частное: " << (c1 / c2) << endl;
    }
    catch (const runtime_error& e) {
        cout << e.what() << endl; 
    }*/
    //задание 2
    const int Num_Car = 3;
    Car cars[Num_Car];
    cars[0].setValues(4.5, 15, 2.0, 150, 16, "Красный", "Автомат");
    cars[1].setValues(4.2, 12, 1.8, 120, 15, "Синий", "Механика");
    cars[2].setValues(4.8, 18, 2.5, 200, 17, "Красный", "Автомат");

    for (int i = 0; i < Num_Car; i++) {
        cars[i].displayValues();
        cout << "--------------------------" << endl;
    }
    char searchColor[20];
    cout << "Введите цвет для поиска: ";
    cin.getline(searchColor, sizeof(searchColor));
    findCarsByColor(cars, Num_Car, searchColor);





    return 0;
}