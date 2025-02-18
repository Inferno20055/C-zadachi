#pragma once
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
#include<string>
const int MAX_ABONENTS = 100;
class Phone_book

{
private:
    Abonent* abonents[MAX_ABONENTS];
    int count;

public:
    // Конструктор
    Phone_book() : count(0) {}

    // Деструктор
    ~Phone_book() {
        for (int i = 0; i < count; ++i) {
            delete abonents[i];
        }
    }

    // Функция для добавления абонента
    void addAbonent() {
        if (count >= MAX_ABONENTS) {
            cout << "Телефонная книга полна!\n";
            return;
        }

        char name[100], home[15], work[15], mobile[15], info[100];
        cout << "Введите ФИО: ";
        cin.ignore();
        cin.getline(name, sizeof(name));
        cout << "Введите домашний телефон: ";
        cin.getline(home, sizeof(home));
        cout << "Введите рабочий телефон: ";
        cin.getline(work, sizeof(work));
        cout << "Введите мобильный телефон: ";
        cin.getline(mobile, sizeof(mobile));
        cout << "Введите дополнительную информацию: ";
        cin.getline(info, sizeof(info));

        abonents[count++] = new Abonent(name, home, work, mobile, info);
    }

    // Функция для удаления абонента по ФИО
    void removeAbonent(const char* name) {
        for (int i = 0; i < count; ++i) {
            if (strcmp(abonents[i]->getFullName(), name) == 0) {
                delete abonents[i];
                for (int j = i; j < count - 1; ++j) {
                    abonents[j] = abonents[j + 1];
                }
                --count;
                cout << "Абонент удален.\n";
                return;
            }
        }
        cout << "Абонент не найден.\n";
    }

    // Функция для поиска абонента по ФИО
    void searchAbonent(const char* name) const {
        for (int i = 0; i < count; ++i) {
            if (strcmp(abonents[i]->getFullName(), name) == 0) {
                abonents[i]->display();
                return;
            }
        }
        cout << "Абонент не найден.\n";
    }

    // Функция для отображения всех абонентов
    void displayAll() const {
        if (count == 0) {
            cout << "Телефонная книга пуста.\n";
            return;
        }
        for (int i = 0; i < count; ++i) {
            abonents[i]->display();
            cout << "----------------------\n";
        }
    }

    // Функция для сохранения всех абонентов в файл
    void saveToFile(const char* filename) const {
        FILE* outFile = fopen(filename, "w");
        if (!outFile) {
            cout << "Не удалось открыть файл для записи.\n";
            return;
        }
        for (int i = 0; i < count; ++i) {
            abonents[i]->saveToFile(outFile);
        }
        fclose(outFile);
        cout << "Данные сохранены в файл.\n";
    }

    // Функция для загрузки абонентов из файла
    void loadFromFile(const char* filename) {
        FILE* inFile = fopen(filename, "r");
        if (!inFile) {
            cout << "Не удалось открыть файл для чтения.\n";
            return;
        }
        while (!feof(inFile)) {
            abonents[count++] = new Abonent("", "", "", "", "");
            abonents[count - 1]->loadFromFile(inFile);
        }
        fclose(inFile);
        --count;
        cout << "Данные загружены из файла.\n";
    }
};

