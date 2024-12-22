#include <iostream>
using namespace std;

//zadanie 1
int binarySearchRecursive(const int* arr, int target, int low, int high) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2; 

    if (arr[mid] == target) {
        return mid; 
    }
    else if (arr[mid] < target) {
        return binarySearchRecursive(arr, target, mid + 1, high); 
    }
    else {
        return binarySearchRecursive(arr, target, low, mid - 1); 
    }
}

int binarySearch(const int* arr, int target, int size) {
    return binarySearchRecursive(arr, target, 0, size - 1);
}
//zadanie 2
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout  << endl;
}

/*void shiftRowRight(int* row, int cols, int shifts) {
    if (shifts <= 0) {
        return;
    }

    int temp = row[cols - 1]; 
    for (int i = cols - 1; i > 0; --i) {
        row[i] = row[i - 1];
    }

    row[0] = temp;  
    shiftRowRight(row, cols, shifts - 1);
}

void shiftMatrixRightRecursive(int** matrix, int rows, int cols, int shifts) {
    if (shifts <= 0) {
        return;
    }

    for (int i = 0; i < rows; ++i) {
        shiftRowRight(matrix[i], cols, 1);
    }

    shiftMatrixRightRecursive(matrix, rows, cols, shifts - 1);
}

void shiftMatrixRight(int** matrix, int rows, int cols, int shifts)
{
    if (rows <= 0 || cols <= 0 || shifts <= 0)
    {
        cout << "Некорректные входные данные" << endl;
        return;
    }
    shiftMatrixRightRecursive(matrix, rows, cols, shifts);
}*/
//zadanie 3


/*void shiftRowLeft(int* row, int cols, int shifts) {
    if (shifts <= 0) {
        return;
    }

    int temp = row[0]; 

   
    for (int i = 0; i < cols - 1; ++i) {
        row[i] = row[i + 1];
    }

    row[cols - 1] = temp; 
    shiftRowLeft(row, cols, shifts - 1);
}


void shiftMatrixLeftRecursive(int** matrix, int rows, int cols, int shifts) {
    if (shifts <= 0) {
        return;
    }

    for (int i = 0; i < rows; ++i) {
        shiftRowLeft(matrix[i], cols, 1); 
    }
    shiftMatrixLeftRecursive(matrix, rows, cols, shifts - 1);
}


void shiftMatrixLeft(int** matrix, int rows, int cols, int shifts)
{
    if (rows <= 0 || cols <= 0 || shifts <= 0)
    {
        cout << "Некорректные входные данные" << endl;
        return;
    }
    shiftMatrixLeftRecursive(matrix, rows, cols, shifts);
}*/
//zadanie 4
void shiftColumnDown(int** matrix, int rows, int col, int shifts) {
    if (shifts <= 0) {
        return;
    }

    int temp = matrix[rows - 1][col]; // Сохраняем последний элемент столбца

    // Сдвигаем элементы столбца вниз, начиная с предпоследнего
    for (int i = rows - 1; i > 0; --i) {
        matrix[i][col] = matrix[i - 1][col];
    }

    matrix[0][col] = temp; // Ставим последний элемент в начало
    shiftColumnDown(matrix, rows, col, shifts - 1);
}


// Рекурсивная функция для сдвига двумерного массива вниз
void shiftMatrixDownRecursive(int** matrix, int rows, int cols, int shifts) {
    if (shifts <= 0)
    {
        return;
    }

    for (int j = 0; j < cols; ++j) {
        shiftColumnDown(matrix, rows, j, 1); // Сдвигаем каждый столбец
    }
    shiftMatrixDownRecursive(matrix, rows, cols, shifts - 1);
}

// Функция обертка
void shiftMatrixDown(int** matrix, int rows, int cols, int shifts) {
    if (rows <= 0 || cols <= 0 || shifts <= 0)
    {
        cout << "Некорректные входные данные" << endl;
        return;
    }
    shiftMatrixDownRecursive(matrix, rows, cols, shifts);
}

int main() {
    setlocale(LC_ALL,"Ru");
    //zadanie 1
    /*int sortedArray[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);

    //поиск
    int target1 = 23;
    int target2 = 91;
    int target3 = 5;

    int index1 = binarySearch(sortedArray, target1, size);
    int index2 = binarySearch(sortedArray, target2, size);
    int index3 = binarySearch(sortedArray, target3, size);

    if (index1 != -1) {
        cout << "Искомое значение " << target1 << " найдено по индексу: " << index1 << endl;
    }
    else {
        cout << "Искомое значение " << target1 << " не найдено в массиве." << endl;
    }
    if (index2 != -1) {
        cout << "Искомое значение " << target2 << " найдено по индексу: " << index2 << endl;
    }
    else {
        cout << "Искомое значение " << target2 << " не найдено в массиве." << endl;
    }
    if (index3 != -1) {
        cout << "Искомое значение " << target3 << " найдено по индексу: " << index3 << endl;
    }
    else {
        cout << "Искомое значение " << target3 << " не найдено в массиве." << endl;
    }*/
    //zadanie 2
    /*int rows = 3;
    int cols = 4;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i * cols + j + 1;
        }
    }

    cout << "Исходный массив:" << endl;
    printMatrix(matrix, rows, cols);

    int shifts = 2;
    shiftMatrixRight(matrix, rows, cols, shifts);

    cout << "Массив после сдвига на " << shifts << " вправо:" << endl;
    printMatrix(matrix, rows, cols);

    // Освобождаем память
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    //Другой пример
    int rows2 = 2;
    int cols2 = 3;
    int** matrix2 = new int* [rows2];
    for (int i = 0; i < rows2; ++i) {
        matrix2[i] = new int[cols2];
        for (int j = 0; j < cols2; ++j) {
            matrix2[i][j] = i * cols2 + j + 1;
        }
    }
    cout << "Исходный массив 2:" << endl;
    printMatrix(matrix2, rows2, cols2);
    int shifts2 = 4;
    shiftMatrixRight(matrix2, rows2, cols2, shifts2);
    cout << "Массив 2 после сдвига на " << shifts2 << " вправо:" << endl;
    printMatrix(matrix2, rows2, cols2);

    // Освобождаем память
    for (int i = 0; i < rows2; ++i) {
        delete[] matrix2[i];
    }
    delete[] matrix2;
    //Пример некорректных входных данных
    int rows3 = -2;
    int cols3 = 3;
    int** matrix3 = nullptr;
    int shifts3 = 2;
    shiftMatrixRight(matrix3, rows3, cols3, shifts3);*/
    //zadanie 3
    /*int rows = 3;
    int cols = 4;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i * cols + j + 1;
        }
    }

    cout << "Исходный массив:" << endl;
    printMatrix(matrix, rows, cols);

    int shifts = 2;
    shiftMatrixLeft(matrix, rows, cols, shifts);

    cout << "Массив после сдвига на " << shifts << " влево:" << endl;
    printMatrix(matrix, rows, cols);

    // Освобождаем память
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;


   
    int rows2 = 2;
    int cols2 = 3;
    int** matrix2 = new int* [rows2];
    for (int i = 0; i < rows2; ++i) {
        matrix2[i] = new int[cols2];
        for (int j = 0; j < cols2; ++j) {
            matrix2[i][j] = i * cols2 + j + 1;
        }
    }

    cout << "Исходный массив 2:" << endl;
    printMatrix(matrix2, rows2, cols2);

    int shifts2 = 4;
    shiftMatrixLeft(matrix2, rows2, cols2, shifts2);
    cout << "Массив 2 после сдвига на " << shifts2 << " влево:" << endl;
    printMatrix(matrix2, rows2, cols2);

    for (int i = 0; i < rows2; ++i) {
        delete[] matrix2[i];
    }
    delete[] matrix2;

    
    int rows3 = -2;
    int cols3 = 3;
    int** matrix3 = nullptr;
    int shifts3 = 2;
    shiftMatrixLeft(matrix3, rows3, cols3, shifts3);*/
    //zadanie 4
    cout << endl;
    int rows = 3;
    int cols = 4;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i * cols + j + 1;
        }
    }

    cout << "Исходный массив:" << endl;
    printMatrix(matrix, rows, cols);

    int shifts = 2;
    shiftMatrixDown(matrix, rows, cols, shifts);

    cout << "Массив после сдвига на " << shifts << " вниз:" << endl;
    printMatrix(matrix, rows, cols);

    // Освобождаем память
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    //Другой пример
    int rows2 = 2;
    int cols2 = 3;
    int** matrix2 = new int* [rows2];
    for (int i = 0; i < rows2; ++i) {
        matrix2[i] = new int[cols2];
        for (int j = 0; j < cols2; ++j) {
            matrix2[i][j] = i * cols2 + j + 1;
        }
    }

    cout << "Исходный массив 2:" << endl;
    printMatrix(matrix2, rows2, cols2);

    int shifts2 = 4;
    shiftMatrixDown(matrix2, rows2, cols2, shifts2);

    cout << "Массив 2 после сдвига на " << shifts2 << " вниз:" << endl;
    printMatrix(matrix2, rows2, cols2);

    
    for (int i = 0; i < rows2; ++i) {
        delete[] matrix2[i];
    }
    delete[] matrix2;
    
    int rows3 = -2;
    int cols3 = 3;
    int** matrix3 = nullptr;
    int shifts3 = 2;
    shiftMatrixDown(matrix3, rows3, cols3, shifts3);
    return 0;
}