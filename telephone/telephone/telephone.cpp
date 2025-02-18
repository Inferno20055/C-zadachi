#include <iostream>
#include<string>
#include "Phone_book.h"
#include"Abonent.h"
#include <stdio.h>
const int MAX_ABONENTS = 100;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    Phone_Book phoneBook;
    int choice;

    while (true) {
        cout << "1. Добавить абонента\n";
        cout << "2. Удалить абонента\n";
        cout << "3. Искать абонента\n";
        cout << "4. Показать всех абонентов\n";
        cout << "5. Сохранить в файл\n";
        cout << "6. Загрузить из файла\n";
        cout << "0. Выход\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1:
            phoneBook.addAbonent();
            break;
        case 2: {
            char name[100];
            cout << "Введите ФИО абонента для удаления: ";
            cin.ignore();
            cin.getline(name, sizeof(name));
            phoneBook.removeAbonent(name);
            break;
        }
        case 3: {
            char name[100];
            cout << "Введите ФИО для поиска: ";
            cin.ignore();
            cin.getline(name, sizeof(name));
            phoneBook.searchAbonent(name);
            break;
        }
        case 4:
            phoneBook.displayAll();
            break;
        case 5: {
            char filename[100];
            cout << "Введите имя файла для сохранения: ";
            cin >> filename;
            phoneBook.saveToFile(filename);
            break;
        }
        case 6: {
            char filename[100];
            cout << "Введите имя файла для загрузки: ";
            cin >> filename;
            phoneBook.loadFromFile(filename);
            break;
        }
        case 0:
            return 0;
        default:
            cout << "Некорректный выбор. Попробуйте снова.\n";
        }
    }

    return 0;
}
