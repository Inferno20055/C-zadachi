#pragma once
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
#include<string>
const int MAX_ABONENTS = 100;
class Abonent
{
private:
    char* fullName;
    char homePhone[15];
    char workPhone[15];
    char mobilePhone[15];
    char additionalInfo[100];

public:
    // Конструктор
    Abonent(const char* name, const char* home, const char* work, const char* mobile, const char* info) {
        fullName = new char[strlen(name) + 1];
        strcpy(fullName, name);
        strcpy(homePhone, home);
        strcpy(workPhone, work);
        strcpy(mobilePhone, mobile);
        strcpy(additionalInfo, info);
    }

    // Деструктор
    ~Abonent() {
        delete[] fullName;
    }

    // Функция для получения ФИО
    inline const char* getFullName() const {
        return fullName;
    }

    // Функция для отображения информации об абоненте
    void display() const {
        cout << "ФИО: " << fullName << "\n";
        cout << "Домашний телефон: " << homePhone << "\n";
        cout << "Рабочий телефон: " << workPhone << "\n";
        cout << "Мобильный телефон: " << mobilePhone << "\n";
        cout << "Дополнительная информация: " << additionalInfo << "\n";
    }

    // Функция для сохранения информации в файл
    void saveToFile(FILE* outFile) const {
        fprintf(outFile, "%s\n%s\n%s\n%s\n%s\n", fullName, homePhone, workPhone, mobilePhone, additionalInfo);
    }

    // Функция для загрузки информации из файла
    void loadFromFile(FILE* inFile) {
        char name[100];
        fgets(name, sizeof(name), inFile);
        name[strcspn(name, "\n")] = 0;

        delete[] fullName;
        fullName = new char[strlen(name) + 1];
        strcpy(fullName, name);

        fgets(homePhone, sizeof(homePhone), inFile);
        homePhone[strcspn(homePhone, "\n")] = 0;
        fgets(workPhone, sizeof(workPhone), inFile);
        workPhone[strcspn(workPhone, "\n")] = 0;
        fgets(mobilePhone, sizeof(mobilePhone), inFile);
        mobilePhone[strcspn(mobilePhone, "\n")] = 0;
        fgets(additionalInfo, sizeof(additionalInfo), inFile);
        additionalInfo[strcspn(additionalInfo, "\n")] = 0;
    }
};

