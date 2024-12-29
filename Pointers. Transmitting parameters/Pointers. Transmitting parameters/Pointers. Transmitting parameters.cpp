#include <iostream>
#include <cmath>
using namespace std;
/*bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
int* removePrimes(int* arr, int size, int& newSize) {
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
        if (!isPrime(arr[i]))
        {
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
int* allocateArray(int size) {
    if (size <= 0) {
        cout << "Некорректный размер массива" << endl;
        return nullptr;
    }
    return new int[size];
}*/

/*// Функция для инициализации динамического массива
void initArray(int* arr, int size, int initialValue) {
    if (arr == nullptr) {
        cout << "Массив не инициализирован" << endl;
        return;
    }
    for (int i = 0; i < size; ++i) {
        arr[i] = initialValue;
    }
}*/

/*void printArray(int* arr, int size, const string& message) {
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


void deleteArray(int* arr) {
    if (arr != nullptr) {
        delete[] arr;
    }
}

int* appendElement(int* arr, int& size, int newElement) {
    if (arr == nullptr) {
        cout << "Массив не инициализирован" << endl;
        return nullptr;
    }
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    newArr[size] = newElement;
    deleteArray(arr);
    size++; 
    return newArr;
}

int* insertElement(int* arr, int& size, int index, int newElement) {
    if (arr == nullptr) {
        cout << "Массив не инициализирован" << endl;
        return nullptr;
    }
    if (index < 0 || index > size) {
        cout << "Некорректный индекс" << endl;
        return arr;
    }
    int* newArr = new int[size + 1];
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    newArr[index] = newElement;
    for (int i = index; i < size; ++i) {
        newArr[i + 1] = arr[i];
    }
    deleteArray(arr);
    size++;
    return newArr;
}

int* deleteElement(int* arr, int& size, int index) {
    if (arr == nullptr) {
        cout << "Массив не инициализирован" << endl;
        return nullptr;
    }
    if (index < 0 || index >= size) {
        cout << "Некорректный индекс" << endl;
        return arr;
    }
    int* newArr = new int[size - 1];
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    for (int i = index + 1; i < size; ++i) {
        newArr[i - 1] = arr[i];
    }
    deleteArray(arr);
    size--;
    return newArr;
}*/
//чтобы код не сломался /**/
struct Arrays {
    int* positive;
    int positiveSize;
    int* negative;
    int negativeSize;
    int* zero;
    int zeroSize;
};

Arrays separateElements(const int* arr, int size) {
    if (arr == nullptr)
    {
        cout << "Массив не инициализирован" << endl;
        return { nullptr, 0, nullptr, 0, nullptr, 0 };
    }
    if (size <= 0)
    {
        cout << "Некорректный размер массива" << endl;
        return { nullptr, 0, nullptr, 0, nullptr, 0 };
    }
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positiveCount++;
        }
        else if (arr[i] < 0) {
            negativeCount++;
        }
        else {
            zeroCount++;
        }
    }

    int* positiveArr = new int[positiveCount];
    int* negativeArr = new int[negativeCount];
    int* zeroArr = new int[zeroCount];

    int positiveIndex = 0;
    int negativeIndex = 0;
    int zeroIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positiveArr[positiveIndex++] = arr[i];
        }
        else if (arr[i] < 0) {
            negativeArr[negativeIndex++] = arr[i];
        }
        else {
            zeroArr[zeroIndex++] = arr[i];
        }
    }

    return { positiveArr, positiveCount, negativeArr, negativeCount, zeroArr, zeroCount };
}

void printArray(int* arr, int size, const string& message) {
    if (arr == nullptr)
    {
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

void freeArrays(Arrays arrays)
{
    if (arrays.positive != nullptr) {
        delete[] arrays.positive;
    }
    if (arrays.negative != nullptr) {
        delete[] arrays.negative;
    }
    if (arrays.zero != nullptr) {
        delete[] arrays.zero;
    }
}
int main() {
    setlocale(LC_ALL,"Ru");
    /*int size = 5;
    // 1. Функция распределения динамической памяти
    int* myArray = allocateArray(size);

    // 2. Функция инициализации динамического массива
    initArray(myArray, size, 0);

    // 3. Функция печати динамического массива
    printArray(myArray, size, "Массив после инициализации: ");

    // 4. Функция добавления элемента в конец массива
    myArray = appendElement(myArray, size, 10);
    if (myArray)
        printArray(myArray, size, "Массив после добавления элемента: ");

    // 5. Функция вставки элемента по указанному индексу
    myArray = insertElement(myArray, size, 2, 20);
    if (myArray)
        printArray(myArray, size, "Массив после вставки элемента: ");

    // 6. Функция удаления элемента по указанному индексу
    myArray = deleteElement(myArray, size, 3);
    if (myArray)
        printArray(myArray, size, "Массив после удаления элемента: ");

   
    deleteArray(myArray);
    myArray = nullptr;*/
    //zadanie 2
    /*int const initialSize = 10;
    int* myArray = allocateArray(initialSize);
    initArray(myArray, initialSize, 0);
    myArray[0] = 2;
    myArray[1] = 3;
    myArray[2] = 4;
    myArray[3] = 5;
    myArray[4] = 6;
    myArray[5] = 7;
    myArray[6] = 8;
    myArray[7] = 9;
    myArray[8] = 10;
    myArray[9] = 11;

    printArray(myArray, initialSize, "Исходный массив: ");

    int newSize;
    int* newArray = removePrimes(myArray, initialSize, newSize);


    printArray(newArray, newSize, "Массив без простых чисел: ");
    deleteArray(myArray);
    deleteArray(newArray);*/
    int staticArray[] = { 1, -2, 0, 5, -8, 0, 3, -1, 7, 0 };
    int size = sizeof(staticArray) / sizeof(staticArray[0]);

    Arrays separatedArrays = separateElements(staticArray, size);

    printArray(separatedArrays.positive, separatedArrays.positiveSize, "Положительные числа: ");
    printArray(separatedArrays.negative, separatedArrays.negativeSize, "Отрицательные числа: ");
    printArray(separatedArrays.zero, separatedArrays.zeroSize, "Нулевые числа: ");

    freeArrays(separatedArrays);
    
  


    return 0;
}