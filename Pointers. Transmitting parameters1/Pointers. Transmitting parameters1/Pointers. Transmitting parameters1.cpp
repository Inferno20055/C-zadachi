#include <iostream>

using namespace std;
//задание 5 
int* appendBlock(int* arr, int& size, const int* block, int blockSize) {
    if (arr == nullptr) {
        cout << "Массив не инициализирован" << endl;
        return nullptr;
    }
    if (block == nullptr) {
        cout << "Блок элементов не инициализирован" << endl;
        return arr;
    }
    if (blockSize <= 0) {
        cout << "Некорректный размер блока" << endl;
        return arr;
    }
    if (size < 0) {
        cout << "Некорректный размер массива" << endl;
        return nullptr;
    }

    int newSize = size + blockSize;
    int* newArr = new int[newSize];


    
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
   
    for (int i = 0; i < blockSize; ++i) {
        newArr[size + i] = block[i];
    }

    delete[] arr;  
    size = newSize; 
    return newArr; 
}

//zadanie 1
void calculateSumAndProduct(const int* arr, int size, int* sum, int* product) {
    if (arr == nullptr) {
        cout << "Массив не инициализирован" << endl;
        *sum = 0;
        *product = 0;
        return;
    }
    if (size <= 0) {
        cout << "Некорректный размер массива" << endl;
        *sum = 0;
        *product = 1;
        return;
    }

    *sum = 0;
    *product = 1;

    for (int i = 0; i < size; ++i) {
        *sum += arr[i];
        *product *= arr[i];
    }
}
//zadanie 2
void countElements(const int* arr, int size, int* negativeCount, int* positiveCount, int* zeroCount) {
    if (arr == nullptr)
    {
        cout << "Массив не инициализирован" << endl;
        *negativeCount = 0;
        *positiveCount = 0;
        *zeroCount = 0;
        return;
    }
    if (size <= 0)
    {
        cout << "Некорректный размер массива" << endl;
        *negativeCount = 0;
        *positiveCount = 0;
        *zeroCount = 0;
        return;
    }

    *negativeCount = 0;
    *positiveCount = 0;
    *zeroCount = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            (*negativeCount)++;
        }
        else if (arr[i] > 0) {
            (*positiveCount)++;
        }
        else {
            (*zeroCount)++;
        }
    }
}
//zadanie 3
int* findSubarray(const int* A, int sizeA, const int* B, int sizeB) {
    if (A == nullptr || B == nullptr) {
        cout << "Один из массивов не инициализирован" << endl;
        return nullptr;
    }
    if (sizeA <= 0 || sizeB <= 0 || sizeB > sizeA) {
        cout << "Некорректные входные данные" << endl;
        return nullptr;
    }

    for (int i = 0; i <= sizeA - sizeB; ++i) {
        bool match = true;
        for (int j = 0; j < sizeB; ++j) {
            if (A[i + j] != B[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return (int*)(A + i); 
        }
    }
    return nullptr; 
}
//zadanie 4
int* removeNegativeNumbers(int* arr, int size, int& newSize) {
    if (arr == nullptr) {
        cout << "Массив не инициализирован" << endl;
        newSize = 0;
        return nullptr;
    }
    if (size <= 0) {
        cout << "Некорректный размер массива" << endl;
        newSize = 0;
        return nullptr;
    }
    int* tempArr = new int[size]; 
    newSize = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            tempArr[newSize] = arr[i];
            newSize++;
        }
    }
    if (newSize == 0) {
        delete[] tempArr;
        return nullptr;
    }
    int* newArr = new int[newSize]; 
    for (int i = 0; i < newSize; i++) {
        newArr[i] = tempArr[i];
    }

    delete[] tempArr;
    return newArr;
}

void printArray(int* arr, int size, const string& message) {
    if (arr == nullptr) {
        cout << "Массив не инициализирован" << endl;
        return;
    }
    cout << message;
    if (size == 0) {
        cout << " (пустой массив)" << endl;
        return;
    }
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* allocateArray(int size) {
    if (size <= 0) {
        cout << "Некорректный размер массива" << endl;
        return nullptr;
    }
    return new int[size];
}

void initArray(int* arr, int size, int initialValue) {
    if (arr == nullptr) {
        cout << "Массив не инициализирован" << endl;
        return;
    }
    for (int i = 0; i < size; ++i) {
        arr[i] = initialValue;
    }
}

void deleteArray(int* arr) {
    if (arr != nullptr) {
        delete[] arr;
    }
}
//zadanie 6
void insertBlock(int* arr, int& size, int* block, int blockSize, int index) {
    if (index < 0 || index > size) {
        cout << "Ошибка: индекс вне допустимого диапазона." << std::endl;
        return;
    }

    size += blockSize;

    for (int i = size - 1; i >= index + blockSize; --i) {
        arr[i] = arr[i - blockSize];
    }

    for (int i = 0; i < blockSize; ++i) {
        arr[index + i] = block[i];
    }
}
//zadanie 7
void removeBlock(int* arr, int& size, int index, int blockSize) {
    if (index < 0 || index >= size || blockSize < 0 || index + blockSize > size) {
        std::cout << "Ошибка: индекс или размер блока вне допустимого диапазона." << std::endl;
        return;
    }

    for (int i = index; i < size - blockSize; ++i) {
        arr[i] = arr[i + blockSize];
    }

    size -= blockSize;
}
int main() {
    setlocale(LC_ALL,"Ru");
    //zadanie 1
    /*int myArray[] = {1, 2, 3, 4, 5};
    int size = 5;

    int sum;
    int product;

    calculateSumAndProduct(myArray, size, &sum, &product);

    cout << "Сумма элементов массива: " << sum << endl;
    cout << "Произведение элементов массива: " << product << endl;*/
    //zadanie 2
    /*int myArray[] = {1, -2, 0, 5, -8, 0, 3, -1, 7, 0};
    int size = 10;

    int negativeCount, positiveCount, zeroCount;

    countElements(myArray, size, &negativeCount, &positiveCount, &zeroCount);

    cout << "Количество отрицательных элементов: " << negativeCount << endl;
    cout << "Количество положительных элементов: " << positiveCount << endl;
    cout << "Количество нулевых элементов: " << zeroCount << endl;*/
    //zadanie 3
    /*int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    int sizeA = 10;

    int B[] = { 3, 4, 5 };
    int sizeB = 3;
    int* result = findSubarray(A, sizeA, B, sizeB);

    if (result != nullptr) {
        cout << "Массив B является подмножеством массива A, начинается с элемента: " << *result << endl;
    }
    else {
        cout << "Массив B не является подмножеством массива A" << endl;
    }*/
    //zadanie 4
    /*int initialSize = 10;
    int* myArray = allocateArray(initialSize);
    initArray(myArray, initialSize, 0);
    myArray[0] = 1;
    myArray[1] = -2;
    myArray[2] = 3;
    myArray[3] = -4;
    myArray[4] = 5;
    myArray[5] = -6;
    myArray[6] = 7;
    myArray[7] = -8;
    myArray[8] = 9;
    myArray[9] = -10;

    printArray(myArray, initialSize, "Исходный массив: ");

    int newSize;
    int* newArray = removeNegativeNumbers(myArray, initialSize, newSize);

    printArray(newArray, newSize, "Массив без отрицательных чисел: ");
    deleteArray(myArray);
    deleteArray(newArray);*/
    //zadanie 5
    /*int initialSize = 5;
    int* myArray = allocateArray(initialSize);
    initArray(myArray, initialSize, 1);
    printArray(myArray, initialSize, "Исходный массив: ");

    int block[] = { 10, 20, 30 };
    int blockSize = sizeof(block) / sizeof(block[0]);

    myArray = appendBlock(myArray, initialSize, block, blockSize);
    if (myArray) {
        printArray(myArray, initialSize, "Массив после добавления блока: ");
    }*/
    //задание 6
    /*int size = 5;
    int arr[10] = { 1, 2, 3, 4, 5 }; 
    int blockSize = 3;  
    int block[] = { 6, 7, 8 };  

    int index;  
    cout << "Введите индекс для вставки блока элементов: ";
    cin >> index;

    insertBlock(arr, size, block, blockSize, index);

    cout << "Массив после вставки блока: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;*/
    //zadanie 7
    int size = 8;  
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 }; 
    int index;  
    int blockSize;  

    cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Введите индекс для начала удаления блока элементов: ";
    cin >> index;

    cout << "Введите размер удаляемого блока: ";
    cin >> blockSize;

    removeBlock(arr, size, index, blockSize); 

    cout << "Массив после удаления блока: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    

    return 0;
}