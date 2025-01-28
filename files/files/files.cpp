#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

// Функция для сравнения двух строк
bool stringsEqual(const char* str1, const char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return false;
        }
        str1++;
        str2++;
    }
    return *str1 == *str2; 
}

// Функция для удаления символа новой строки из конца строки
void removeNewline(char* str) {
    while (*str != '\0') {
        if (*str == '\n') {
            *str = '\0'; 
            break;
        }
        str++;
    }
}

void compareFiles(const char* file1, const char* file2) {
    FILE* fp1 = fopen(file1, "r");
    FILE* fp2 = fopen(file2, "r");

    // Проверка на успешное открытие файлов
    if (fp1 == nullptr || fp2 == nullptr) {
        cerr << "Ошибка при открытии одного из файлов." << endl;
        return;
    }

    char line1[256], line2[256];
    int lineNumber = 0;
    bool mismatchFound = false;

    // Сравнение строк из обоих файлов
    while (fgets(line1, sizeof(line1), fp1) != nullptr &&
        fgets(line2, sizeof(line2), fp2) != nullptr) {
        lineNumber++;

        removeNewline(line1);
        removeNewline(line2);

        if (!stringsEqual(line1, line2)) {
            mismatchFound = true;
            cout << "Несовпадающие строки на линии " << lineNumber << ":" << endl;
            cout << "Файл 1: " << line1 << endl;
            cout << "Файл 2: " << line2 << endl;
        }
    }

    // Проверка, если один файл длиннее другого
    while (fgets(line1, sizeof(line1), fp1) != nullptr) {
        lineNumber++;
        mismatchFound = true;
        removeNewline(line1); 
        cout << "Несовпадающая строка в файле 1 на линии " << lineNumber << ": " << line1 << endl;
    }

    while (fgets(line2, sizeof(line2), fp2) != nullptr) {
        lineNumber++;
        mismatchFound = true;
        removeNewline(line2); 
        cout << "Несовпадающая строка в файле 2 на линии " << lineNumber << ": " << line2 << endl;
    }

    if (!mismatchFound) {
        cout << "Все строки совпадают." << endl;
    }

    // Закрытие файлов
    fclose(fp1);
    fclose(fp2);
}
void generateStatistics(const char* sourceFile, const char* destinationFile) {
    FILE* inputFile = fopen(sourceFile, "r");
    FILE* outputFile = fopen(destinationFile, "w");

    // Проверка на успешное открытие файлов
    if (inputFile == nullptr || outputFile == nullptr) {
        cerr << "Ошибка при открытии файла." << endl;
        return;
    }

    char ch;
    int charCount = 0, lineCount = 0, vowelCount = 0, consonantCount = 0, digitCount = 0;

    while ((ch = fgetc(inputFile)) != EOF) {
        charCount++;

        // Подсчет строк
        if (ch == '\n') {
            lineCount++;
        }

        // Подсчет гласных, согласных и цифр
        if (isalpha(ch)) {
            ch = tolower(ch); 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelCount++;
            }
            else {
                consonantCount++;
            }
        }
        else if (isdigit(ch)) {
            digitCount++;
        }
    }

    // Увеличиваем счетчик строк на 1, если файл не пустой
    if (charCount > 0) {
        lineCount++;
    }

    // Записываем статистику в выходной файл
    fprintf(outputFile, "Количество символов: %d\n", charCount);
    fprintf(outputFile, "Количество строк: %d\n", lineCount);
    fprintf(outputFile, "Количество гласных букв: %d\n", vowelCount);
    fprintf(outputFile, "Количество согласных букв: %d\n", consonantCount);
    fprintf(outputFile, "Количество цифр: %d\n", digitCount);

    // Закрытие файлов
    fclose(inputFile);
    fclose(outputFile);

    cout << "Статистика успешно записана в файл." << endl;
}

int main() {
    setlocale(LC_ALL,"Ru");
    //zadanie 1
    /*const char* file1 = "file1.txt"; 
    const char* file2 = "file2.txt"; 

    compareFiles(file1, file2);*/
    //zadanie 2
    /*const char* sourceFile = "input.txt";
    const char* destinationFile = "output.txt"; 
    generateStatistics(sourceFile, destinationFile);*/
    //zadamie 3

    return 0;
}