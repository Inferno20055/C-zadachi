#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include "HeacountWordsStartingWithder.h"
using namespace std;
int main()
{
    setlocale(LC_ALL,"Ru");
    /*const char* filename = "input.txt";
    char startChar;

    cout << "Введите символ: ";
    cin >> startChar;

    int result = countWordsStartingWith(filename, startChar);
    if (result >= 0) {
        cout << "Количество слов, начинающихся с символа '" << startChar << "': " << result << endl;
    }*/
    //задание 2
    /*const char* inputFilename = "input.txt";
    const char* outputFilename = "output.txt"; 

    FILE* inFile = fopen(inputFilename, "r");
    if (inFile == nullptr) {
        cerr << "Ошибка при открытии файла " << inputFilename << endl;
        return 1; 
    }

    FILE* outFile = fopen(outputFilename, "w");
    if (outFile == nullptr) {
        cerr << "Ошибка при создании файла " << outputFilename << endl;
        fclose(inFile); 
        return 1; 
    }

    char line[256];
    while (fgets(line, sizeof(line), inFile) != nullptr) {
        for (int i = 0; line[i] != '\0'; ++i) {
            if (line[i] == '0') {
                line[i] = '1';
            }
            else if (line[i] == '1') {
                line[i] = '0';
            }
        }
        fputs(line, outFile);
    }

    fclose(inFile);
    fclose(outFile);

    cout << "Переписывание завершено. Проверьте файл " << outputFilename << endl;*/
    //задание 3
    /*const char* outputFilename = "output.txt";

   
    const char* strings[] = {
        "Первая строка: да да сказал Петрович",
        "Вторая строка: так точно ответил Иван Петровичу",
        "Третья строка: да да сказали они",
        "Четвертая строка: и поехали они",
        "Пятая строка: продолжение следует.111111111"
    };

    int numStrings = sizeof(strings) / sizeof(strings[0]); 

    FILE* outFile = fopen(outputFilename, "w");
    if (outFile == nullptr) {
        cerr << "Ошибка при создании файла " << outputFilename << endl;
        return 1; 
    }

    for (int i = 0; i < numStrings; ++i) {
        fputs(strings[i], outFile);
        fputs("\n", outFile); 
    }

    fclose(outFile);

    cout << "Запись завершена. Проверьте файл " << outputFilename << endl;*/
    //задание 4
    /*const char* inputFilename = "input.txt";

    
    FILE* inFile = fopen(inputFilename, "r");
    if (inFile == nullptr) {
        cerr << "Ошибка при открытии файла " << inputFilename << endl;
        return 1; 
    }

    
    int charCount = 0;
    int ch;
    while ((ch = fgetc(inFile)) != EOF) {
        charCount++;
    }

    fclose(inFile);

    cout << "Количество символов в файле " << inputFilename << ": " << charCount << endl;*/
    //задание 5
    const char* inputFilename = "input.txt"; 

    FILE* inFile = fopen(inputFilename, "r");
    if (inFile == nullptr) {
        cerr << "Ошибка при открытии файла " << inputFilename << endl;
        return 1; 
    }

    int lineCount = 0;
    char buffer[256]; 

    while (fgets(buffer, sizeof(buffer), inFile) != nullptr) {
        lineCount++;
    }
   
    fclose(inFile);

    cout << "Количество строк в файле " << inputFilename << ": " << lineCount << endl;
    return 0;

   

   

}

