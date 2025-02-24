#pragma once
#include <iostream>
using namespace std;

class Person
{
private:
    static int count; 
    int id;           
    char* lastName;  
    char* firstName; 
    char* middleName; 
    Date birthDate; 

public:
    // Конструктор с параметрами
    Person(int id, const char* lastName, const char* firstName, const char* middleName, const Date& birthDate)
        : id(id), birthDate(birthDate) {
        this->lastName = new char[100];  
        this->firstName = new char[100];
        this->middleName = new char[100];

        for (int i = 0; lastName[i] != '\0'; i++) {
            this->lastName[i] = lastName[i];
        }
        this->lastName[strlen(lastName)] = '\0';

        for (int i = 0; firstName[i] != '\0'; i++) {
            this->firstName[i] = firstName[i];
        }
        this->firstName[strlen(firstName)] = '\0';

        for (int i = 0; middleName[i] != '\0'; i++) {
            this->middleName[i] = middleName[i];
        }
        this->middleName[strlen(middleName)] = '\0';

        count++;
    }

    // Конструктор по умолчанию
    Person() : Person(0, "Неизвестно", "Неизвестно", "Неизвестно", Date()) {}

    // Конструктор копирования
    Person(const Person& other)
        : id(other.id), birthDate(other.birthDate) {
        lastName = new char[100];
        firstName = new char[100];
        middleName = new char[100];

        for (int i = 0; other.lastName[i] != '\0'; i++) {
            lastName[i] = other.lastName[i];
        }
        lastName[strlen(other.lastName)] = '\0';

        for (int i = 0; other.firstName[i] != '\0'; i++) {
            firstName[i] = other.firstName[i];
        }
        firstName[strlen(other.firstName)] = '\0';

        for (int i = 0; other.middleName[i] != '\0'; i++) {
            middleName[i] = other.middleName[i];
        }
        middleName[strlen(other.middleName)] = '\0';

        count++;
    }

    // Деструктор
    ~Person() {
        delete[] lastName;
        delete[] firstName;
        delete[] middleName;
        count--;
    }

    // Функция для подсчета созданных экземпляров
    static int getCount() {
        return count;
    }

    // Сеттеры и геттеры
    void setId(int id) { this->id = id; }
    int getId() const { return id; }

    void setLastName(const char* lastName) {
        delete[] this->lastName;
        this->lastName = new char[100];
        for (int i = 0; lastName[i] != '\0'; i++) {
            this->lastName[i] = lastName[i];
        }
        this->lastName[strlen(lastName)] = '\0';
    }
    const char* getLastName() const { return lastName; }

    void setFirstName(const char* firstName) {
        delete[] this->firstName;
        this->firstName = new char[100];
        for (int i = 0; firstName[i] != '\0'; i++) {
            this->firstName[i] = firstName[i];
        }
        this->firstName[strlen(firstName)] = '\0';
    }
    const char* getFirstName() const { return firstName; }

    void setMiddleName(const char* middleName) {
        delete[] this->middleName;
        this->middleName = new char[100];
        for (int i = 0; middleName[i] != '\0'; i++) {
            this->middleName[i] = middleName[i];
        }
        this->middleName[strlen(middleName)] = '\0';
    }
    const char* getMiddleName() const { return middleName; }

    void display() const {
        cout << "ID: " << id << "\n";
        cout << "Фамилия: " << lastName << "\n";
        cout << "Имя: " << firstName << "\n";
        cout << "Отчество: " << middleName << "\n";
        cout << "Дата рождения: ";
        birthDate.display();
        cout << endl;
    }
};

