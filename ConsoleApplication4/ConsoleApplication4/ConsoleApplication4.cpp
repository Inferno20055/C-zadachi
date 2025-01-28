#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Ru");
    // Открываем исходный файл для чтения
    FILE* inputFile = fopen("C:\\Temp\\fails\\file_1.txt", "r");
    // Открываем новый файл для записи
    FILE* outputFile = fopen("C:\\temp\\fails\\twofile_2.txt", "w");

    // проверка на открытие файлов
    if (inputFile == NULL) {
        perror("Ошибка открытия файла file_1.txt");
        return 1;
    }
    if (outputFile == NULL) {
        perror("Ошибка открытия файла twofile_2.txt");
        fclose(inputFile);
        return 1;
    }//задание 1
    //для работы одного лучше за коментить другой
    /*char word[100];
    while (fscanf(inputFile, "%99s", word) == 1) {
       
        
        if (strlen(word) >= 7) {
            // Записываем слово в новый файл
            fprintf(outputFile, "%s ", word);
        }

    } cout << "Слова длиной не менее 7 символов были успешно записаны в новый файл." << endl;*/
    //задание 2
    /*char line[100];
    while (fgets(line, sizeof(line), inputFile) != NULL) {
        //записываем строку в новый фаил.
        fputs(line, outputFile);
     
    }cout << "Строки былы успешно записаны в новый фаил." << endl;*/
    //zadanie 3
    /*char lines[100][250];
    int lineCount = 0;

    while (fgets(lines[lineCount], sizeof(lines[lineCount]), inputFile) && lineCount < 100) {
       
        lines[lineCount][strcspn(lines[lineCount], "\n")] = 0;
        lineCount++;
    }
    for (int i = lineCount - 1; i >= 0; i--)
    {
        fprintf(outputFile, "%s\n", lines[i]);
    }cout << "Строки успешно скопированый в обратном порядке.";*/
    //zadacha 4
    char line[100];
    bool foundLineWithoutSpace = false;

    
    while (fgets(line, sizeof(line), inputFile)) {
        // Проверка, есть ли пробел в строке
        if (strchr(line, ' ') == nullptr) {
            foundLineWithoutSpace = true; 
        }
        fputs(line, outputFile);
    }

    // Если найдена строка без пробела, добавляем строку из черточек
    if (foundLineWithoutSpace) {
        fputs("------------\n", outputFile);
    }
    else {
        // Если строк без пробела не найдено, добавляем строку в конце
        fputs("------------\n", outputFile);
    }
    cout << "Строка из чёрточек успешно доюавлена."<<endl;
    // Закрываем файлы
    fclose(inputFile);
    fclose(outputFile);

   
    
    return 0;
}