#include <iostream>
using namespace std;
//указатель
void swapEvenOdd(int* arr, int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + i + 1);
        *(arr + i + 1) = temp;
    }
}
void mergeSortedArrays(int* A, int n, int* B, int m, int* C) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (*(A + i) <= *(B + j)) {
            *(C + k) = *(A + i);
            i++;
        }
        else {
            *(C + k) = *(B + j);
            j++;
        }
        k++;
    }

    while (i < n) {
        *(C + k) = *(A + i);
        i++;
        k++;
    }

    while (j < m) {
        *(C + k) = *(B + j);
        j++;
        k++;
    }
}

int main()
{
    setlocale(LC_ALL, "Ru");
   /* int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    swapEvenOdd(arr, size);

    cout << "Массив после замены: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;*/
    int A[] = { 99,87,1, 3, 5, 7, 9 };
    int n = sizeof(A) / sizeof(A[0]);

    int B[] = { 15,32,43,2, 4, 6, 8, 10, 11, 12 };
    int m = sizeof(B) / sizeof(B[0]);

    int* C = new int[n + m]; 

    mergeSortedArrays(A, n, B, m, C);

    cout << "Объединенный массив C: ";
    for (int i = 0; i < n + m; ++i) {
        cout << *(C + i) << " ";
    }
    cout << endl;

    delete[] C; 

    // Тестовый пример для А пустой
    int A_empty[7] = {};
    int n_empty = sizeof(A_empty) / sizeof(A_empty[0]);

    int B_test[] = { 2, 4, 6 };
    int m_test = sizeof(B_test) / sizeof(B_test[0]);

    int* C_empty = new int[n_empty + m_test];

    mergeSortedArrays(A_empty, n_empty, B_test, m_test, C_empty);
    cout << "Объединенный массив C (A Пустой): ";
    for (int i = 0; i < n_empty + m_test; ++i) {
        cout << *(C_empty + i) << " ";
    }
    cout << endl;
    delete[] C_empty;



    // Тестовый пример для B пустой
    int A_test2[] = { 1, 3, 5 };
    int n_test2 = sizeof(A_test2) / sizeof(A_test2[0]);

    int B_empty[7] = {};
    int m_empty = sizeof(B_empty) / sizeof(B_empty[0]);

    int* C_empty2 = new int[n_test2 + m_empty];

    mergeSortedArrays(A_test2, n_test2, B_empty, m_empty, C_empty2);
    cout << "Объединенный массив C (B Пустой): ";
    for (int i = 0; i < n_test2 + m_empty; ++i) {
        cout << *(C_empty2 + i) << " ";
    }
    cout << endl;
    delete[] C_empty2;


    // Тестовый пример для обоих пустых
    int A_empty2[7] = {};
    int n_empty2 = sizeof(A_empty2) / sizeof(A_empty2[0]);

    int B_empty2[7] = {};
    int m_empty2 = sizeof(B_empty2) / sizeof(B_empty2[0]);

    int* C_empty3 = new int[n_empty2 + m_empty2];

    mergeSortedArrays(A_empty2, n_empty2, B_empty2, m_empty2, C_empty3);
    cout << "Объединенный массив C (A и B Пустые): ";
    for (int i = 0; i < n_empty2 + m_empty2; ++i) {
        cout << *(C_empty3 + i) << " ";
    }
    cout << endl;
    delete[] C_empty3;
    return 0;









































    
}
