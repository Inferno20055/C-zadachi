#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
string convertToBase(int number, int base) {
    
    if (number <= 0) {
        return "Число должно быть положительным.";
    }
    if (base < 2 || base > 36) {
        return "Система счисления должна быть от 2 до 36.";
    }

    string result;
    const char* digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
    while (number > 0) {
        int remainder = number % base;  
        result.insert(result.begin(), digits[remainder]); 
        number /= base;  
    }

    return result.empty() ? "0" : result;
}
const int NUM_ROUNDS = 5;


int rollDie() {
    return rand() % 6 + 1;  
}

int rollDice() {
    return rollDie() + rollDie();  
}
void drawRectangle(int height, int width) {
    for (int i = 0; i < height; ++i) { // Проходим по каждой строке
        for (int j = 0; j < width; ++j) { // Проходим по каждой колонке
            cout << "*"; // Выводим символ '*'
        }
        cout << endl; // Переходим на следующую строку
    }
}
int Factorial(int n) {
    if (n == 0)
    {
        return 1;
    }
    return n * Factorial(n - 1);
}
int JustNumber(int n, int h) {
    if (n % h == 0 || n % 1 == n)
    {
        cout << "Число простое." << endl;
        return 0;
    }

    else
    {
        cout << "Число сложное." << endl;

    }
    return n % h == 0 || n % 1 == n;
}
void findMinMax(const int* arr, int size, int& minValue, int& minIndex, int& maxValue, int& maxIndex) {
    if (size <= 0) {
        cout << "Размер массива должен быть больше нуля." << endl;
        return;
    }

    minValue = arr[0];
    minIndex = 0;
    maxValue = arr[0];
    maxIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
}
void reverseArray(int* arr, int size) {
    for (int i = 0; i < size / 2; ++i) {
        swap(arr[i], arr[size - i - 1]); // Меняем местами элементы
    }
}
int main() {
    int number, base;
    setlocale(LC_ALL, "Ru");
    //zadanie 1
    /*cout << "Введите целое положительное число: ";
    cin >> number;

    cout << "Введите систему счисления (от 2 до 36): ";
    cin >> base;

    string converted = convertToBase(number, base);
    cout << "Число " << number << " в системе счисления " << base << " равно " << converted << endl;*/
    //задание 2
    /*srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел

    int humanTotal = 0, computerTotal = 0;
    char firstTurn;

    cout << "Игра 'Кубики' с компьютером!" << std::endl;
    cout << "Хотите начать первым? (y/n): ";
    cin >> firstTurn;

    for (int round = 1; round <= NUM_ROUNDS; ++round) {
        cout << "\nРаунд " << round << std::endl;

        
        if (firstTurn == 'y' || (firstTurn == 'n' && round % 2 != 0)) {
            int humanRoll = rollDice();
            cout << "Вы бросили кубики и получили: " << humanRoll << std::endl;
            humanTotal += humanRoll;
        }
        else { 
            int computerRoll = rollDice();
            cout << "Компьютер бросил кубики и получил: " << computerRoll << std::endl;
            computerTotal += computerRoll;
        }

        
        if (firstTurn == 'n' || (firstTurn == 'y' && round % 2 != 0)) {
            int computerRoll = rollDice();
            cout << "Компьютер бросил кубики и получил: " << computerRoll << std::endl;
            computerTotal += computerRoll;
        }
        else { 
            int humanRoll = rollDice();
            cout << "Вы бросили кубики и получили: " << humanRoll << std::endl;
            humanTotal += humanRoll;
        }
    }

   
    cout << "\nИгра завершена!" << std::endl;
    cout << "Сумма очков человека: " << humanTotal << std::endl;
    cout << "Сумма очков компьютера: " << computerTotal << std::endl;

    
    if (humanTotal > computerTotal) {
        cout << "Вы победили!" << std::endl;
    }
    else if (humanTotal < computerTotal) {
        cout << "Компьютер победил!" << std::endl;
    }
    else {
        cout << "Ничья!" << std::endl;
    }
    */
    //zadanie 3
    /*int N, K;

    cout << "Введите высоту прямоугольника: ";
    cin >> N;
    cout << "Введите ширину прямоугольника: ";
    cin >> K;

    drawRectangle(N, K);*/
    //zadanie 4
    /*int res = Factorial(5);
    cout << "Результат: " << res << endl;*/
    //zadanie 5
    /*int res = JustNumber(2, 2);
    cout << res;*/
    //zadanie 6
   /* const int size = 10;
    int arr[size];

    cout << "Введите " << size << " целых чисел:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int minValue, minIndex, maxValue, maxIndex;
    findMinMax(arr, size, minValue, minIndex, maxValue, maxIndex);

    cout << "Минимум: " << minValue << " (индекс: " << minIndex << ")" << endl;
    cout << "Максимум: " << maxValue << " (индекс: " << maxIndex << ")" << endl;*/
    const int size = 10;
    int arr[size];

    cout << "Введите " << size << " целых чисел:" << endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    reverseArray(arr, size); 

    cout << "Обратный порядок следования элементов: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}