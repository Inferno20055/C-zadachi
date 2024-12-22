#include <iostream>
using namespace std;
//zadanie 1
void calculateSumAndProduct(int* array, int size, int* sum, int* product) {
    *sum = 0;
    *product = 1;

    for (int i = 0; i < size; i++) {
        *sum += *(array + i);
        *product *= *(array + i);
    }
}
//zadanie 2
void CountElement(int* array, int size, int* negativecount, int* poositivcount, int* zerocount) {
    *zerocount = 0;
    *poositivcount = 0;
    *negativecount = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(array + i) < 0) {
            (*negativecount)++;
        }
        else if (*(array + i) > 0) {
            (*poositivcount)++;
        }
        else
        {
            (*zerocount)++;
        }
    }

}
//задание 3
void collectArrays(int* A, int n, int* B, int m) {
    
    int capacity = n + m;
    int* result = new int[capacity]; 
    int index = 0;

    // Собираем элементы обоих массивов
    for (int i = 0; i < n; i++) {
        result[index++] = A[i];
    }
    for (int j = 0; j < m; j++) {
        result[index++] = B[j];
    }

    // Добавим общие элементы
    cout << "Общие элементы: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                cout << A[i] << " ";
                break; // Если нашли общий элемент, выходим из внутреннего цикла
            }
        }
    }
    cout << endl;

    // Элементы массива A, которые не включены в B
    cout << "Элементы A, не включенные в B: ";
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << A[i] << " ";
            result[index++] = A[i]; // Добавляем в результат
        }
    }
    cout << endl;

    // Элементы массива B, которые не включены в A
    cout << "Элементы B, не включенные в A: ";
    for (int j = 0; j < m; j++) {
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (B[j] == A[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << B[j] << " ";
            result[index++] = B[j]; 
        }
    }
    cout << endl;

    
    cout << "Элементы, не являющиеся общими: ";
    for (int i = 0; i < index; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    
    
}
int main() {
    setlocale(LC_ALL, "Ru");
    /*int size = 5;
    int* myArray = new int[size] {1, 2, 3, 4, 5};

    int sum = 0;
    int product = 1;

    calculateSumAndProduct(myArray, size, &sum, &product);

    cout << "Сумма: " << sum << endl;
    cout << "Произведение: " << product << endl;
    delete[] myArray;*/
    //zadanie 2
    /*const int size = 8;
    int* array = new int[size] {1, 0, 34, -2, 0, 7, 1, 2};
    int negativcount = 0, positivcount = 0, zerocount = 0;
    CountElement(array, size, &negativcount, &positivcount, &zerocount);
    cout << "Количество отрицательных элементов: " << negativcount << endl;
    cout << "Количество положительных элементов: " << positivcount << endl;
    cout << "Количество нулевых элементов: " << zerocount << endl;
    delete[] array;*/
    //zadanie 3
    int A[] = { 1, 2, 3, 4, 5 };
    int B[] = { 4, 5, 6, 7, 8 };
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);

    collectArrays(A, n, B, m);
    return 0;
}
