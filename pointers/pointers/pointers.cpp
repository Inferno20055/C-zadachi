#include <iostream>

using namespace std;
//задание 1
// Функция для копирования массива
void copyArray(int* source, int* dest, int size) {
    // Указатели на начало исходного и целевого массивов
    int* sourcePtr = source;
    int* destPtr = dest;

    for (int i = 0; i < size; ++i) {
        *destPtr = *sourcePtr; 
        sourcePtr++; 
        destPtr++;
    }
}
//zadanie 2
void reverseArray(int* arr, int size) {
    int* startPtr = arr;           // Указатель на начало массива
    int* endPtr = arr + size - 1; // Указатель на конец массива

    while (startPtr < endPtr) {
        // Меняем местами элементы, на которые указывают указатели
        int temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;

        // Двигаем указатели навстречу друг другу
        startPtr++;
        endPtr--;
    }
}
//zadanie 3
void copyArrayReverse(int* source, int* dest, int size) {
    int* sourcePtr = source + size - 1; // Указатель на конец исходного массива
    int* destPtr = dest;           // Указатель на начало целевого массива

    for (int i = 0; i < size; ++i) {
        *destPtr = *sourcePtr;      // Копирование значения из исходного массива
        destPtr++;                  // Переход к следующему элементу в целевом массиве
        sourcePtr--;               // Переход к предыдущему элементу в исходном массиве
    }
}
void printArray(int* arr, int size, const string& message) {
    cout << message;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    setlocale(LC_ALL,"RU");
    //zadanie 1
    int const size = 10;
    /*int sourceArray[] = {10, 20, 30, 40, 50,60,70,80,90,100};
    
    int destArray[size];

    copyArray(sourceArray, destArray, size);

    printArray(sourceArray, size, "Исходный массив: ");
    printArray(destArray, size, "Скопированный массив: ");*/
    //zadanie 
    /*int myArray[] = {1, 2, 3, 4, 5};
   

    printArray(myArray, size, "Исходный массив: ");

    reverseArray(myArray, size);

    printArray(myArray, size, "Массив после изменения порядка: ");*/
    
    int sourceArray[] = { 10, 20, 30, 40, 50,89,12,34,12,45 };
    
    int destArray[size];

    copyArrayReverse(sourceArray, destArray, size);

    printArray(sourceArray, size, "Исходный массив: ");
    printArray(destArray, size, "Скопированный массив в обратном порядке: ");



    return 0;
}