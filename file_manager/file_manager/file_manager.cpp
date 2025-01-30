#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>


using namespace std;

bool deleteFile(const char* filename) {
    if (remove(filename) == 0) {
        return true;  
    }
    else {
        return false; 
    }
}

// Функция для создания и записи в файл
bool createFile(const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == nullptr) {
        return false; 
    }

    fprintf(file, "Каталог пустой пожалуста добавте файлы.");
    fclose(file); 
    return true;  
}

// Функция для чтения и отображения содержимого файла
void readFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == nullptr) {
        cerr << "Не удалось открыть файл для чтения." << endl;
        return;
    }

    char buffer[256]; 
    cout << "Содержимое файла '" << filename << "':" << endl;
    cout << "--------------------------------" << endl;
    while (fgets(buffer, sizeof(buffer), file) != nullptr) {
        cout << buffer; 
    }
    cout << endl;
    fclose(file); 
}

int main() {
    setlocale(LC_ALL, "Ru");

    const char* filename = "D.txt";

    cout << "Имя файла: '" << filename << "'" << endl;
    cout << "Путь к файлу: " << "Текущий рабочий каталог" << endl; 

    int choice;
    do {
        cout << "--------------------------------" << endl;
        cout << "Выберите действие:\n";
        cout << "1. Удалить файл\n";
        cout << "2. Создать файл\n";
        cout << "3. Показать содержимое файла\n";
        cout << "4. Выход\n"; 
        cout << "Введите ваш выбор (1, 2, 3 или 4): "<<endl;
        cout << "--------------------------------" << endl;
        cin >> choice;

        switch (choice) {
        case 1: // Удалить файл
            if (deleteFile(filename)) {
                cout << "Файл '" << filename << "' успешно удалён." << endl;
            }
            else {
                cout << "Файл '" << filename << "' не найден или не удалось удалить." << endl;
            }
            break;

        case 2: // Создать файл
            if (createFile(filename)) {
                cout << "Файл '" << filename << "' успешно создан." << endl;
            }
            else {
                cerr << "Не удалось создать файл '" << filename << "'." << endl;
            }
            break;

        case 3: // Показать содержимое файла
            readFile(filename);
            break;

        case 4: // Выход
            cout << "Выход из программы." << endl;
            break;

        default: // Некорректный ввод
            cerr << "Некорректный выбор. Пожалуйста, попробуйте снова." << endl;
            break;
        }
    } while (choice != 4); 

    return 0; 
}