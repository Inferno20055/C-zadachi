#pragma once
#ifdef INTEGER
void FillArrayInt(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = (i + 1) * 2; // Заполняем массив четными числами для примера
    }
}

void ShowArrayInt(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int FindMinInt(const int* arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int FindMaxInt(const int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void SortArrayInt(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Меняем элементы местами
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void EditValueInt(int* arr, int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}
#endif

// Функции для работы с массивом действительных чисел
#ifdef DOUBLE
void FillArrayDouble(double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = static_cast<double>(i + 1) * 1.5; // Пример значений
    }
}

void ShowArrayDouble(const double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

double FindMinDouble(const double* arr, int size) {
    double min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double FindMaxDouble(const double* arr, int size) {
    double max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void SortArrayDouble(double* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Меняем элементы местами
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void EditValueDouble(double* arr, int size, int index, double newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}
#endif

// Функции для работы с массивом символов
#ifdef CHAR
void FillArrayChar(char* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = 'A' + (i % 26); // Заполнение буквами
    }
}

void ShowArrayChar(const char* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

char FindMinChar(const char* arr, int size) {
    char min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

char FindMaxChar(const char* arr, int size) {
    char max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void SortArrayChar(char* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Меняем элементы местами
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void EditValueChar(char* arr, int size, int index, char newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}
#endif