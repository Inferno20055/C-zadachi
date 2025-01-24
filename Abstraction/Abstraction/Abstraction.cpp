#include <iostream>

using namespace std;
//zadanie 1
struct WashingMachine {
    char brand[50];         
    char color[20];         
    float width;            
    float depth;            
    float height;           
    int power;              
    int spinSpeed;          
    int heatingTemperature;  

    // Метод для вывода информации о стиральной машинке
    void displayInfo() {
        cout << "Стиральная машинка:" << endl;
        cout << "Фирма: " << brand << endl;
        cout << "Цвет: " << color << endl;
        cout << "Ширина: " << width << " см" << endl;
        cout << "Длина: " << depth << " см" << endl;
        cout << "Высота: " << height << " см" << endl;
        cout << "Мощность: " << power << " Вт" << endl;
        cout << "Скорость отжима: " << spinSpeed << " об/мин" << endl;
        cout << "Температура нагрева: " << heatingTemperature << " °C" << endl;
    }
};
//zadanie 2
struct Iron {
    char brand[50];        
    char model[50];       
    char color[20];       
    float minTemperature;  
    float maxTemperature;  
    bool steamSupply;      
    int power;             

    // Метод для вывода информации об утюг
    void Infoytug() {
        cout << "Утюг:" << endl;
        cout << "Фирма: " << brand << endl;
        cout << "Модель: " << model << endl;
        cout << "Цвет: " << color << endl;
        cout << "Минимальная температура: " << minTemperature << " °C" << endl;
        cout << "Максимальная температура: " << maxTemperature << " °C" << endl;
        cout << "Подача пара: " << (steamSupply ? "Да" : "Нет") << endl;
        cout << "Мощность: " << power << " Вт" << endl;
    }
};
//zadanie 3
struct Boiler {
    char brand[50];        
    char color[20];        
    int power;             
    float volume;          
    float temperature;      

    // Метод для вывода информации о бойлере
    void displayBoiler() {
        cout << "Бойлер:" << endl;
        cout << "Фирма: " << brand << endl;
        cout << "Цвет: " << color << endl;
        cout << "Мощность: " << power << " Вт" << endl;
        cout << "Объем: " << volume << " л" << endl;
        cout << "Температура нагрева: " << temperature << " °C" << endl;
    }
};
//zadanie 4
struct Animal {
    char name[50];     
    char animalClass[50]; 
    char nickname[50]; 
    char golos[50];
    //примечяние название,класс,кличку и звук писать на английском! 
    // Функция для заполнения данных о животном
    void fillData() {
        cout << "Введите название животного: ";
        cin >> name;
        cout << "Введите класс животного: ";
        cin >> animalClass;
        cout << "Введите кличку животного: ";
        cin >> nickname;
        cout << "Введите звук издоваемый животным: ";
        cin >> golos;
    }
    
    // Функция для вывода данных о животном
    void displayAnimal() {
        cout << "Название животного: " << name << endl;
        cout << "Класс животного: " << animalClass << endl;
        cout << "Кличка животного: " << nickname << endl;
    }

    // Функция "Подать голос"
    void makeSound() {
        cout << nickname << " говорит: "<<golos << endl;
    }
};
int main() {
    setlocale(LC_ALL,"rU");
    //zadanie 1
    /*WashingMachine wm = {"Whirlpool","Белый",60,60, 85,2000,1200,90};

    wm.displayInfo();*/
    //zadanie 2
    /*Iron w = {"Philips","GC4545","Синий",120,230,true,2400};
    
    w.Infoytug();*/
    //zadanie 3
    /*Boiler b = {"Bosch","Белый",3000,150,75};
    b.displayBoiler();*/
    //zadanie 4
    Animal An;
    An.fillData();
    An.displayAnimal();
    An.makeSound();

    return 0;
}