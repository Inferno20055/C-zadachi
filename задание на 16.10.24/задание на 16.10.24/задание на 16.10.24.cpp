#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    /*int choice, number, digitCount = 0, sum = 0, zeroCount = 0;
    double average;
    cout << "Задание 1.";
    cout << "МЕНЮ:\n";
    cout << "1. Ввести число\n";
    cout << "2. Выйти\n";
    cout << "Введите ваш выбор: ";
    cin >> choice;

    while (choice != 2) {
        if (choice == 1) {
            cout << "Введите число: ";
            cin >> number;
            int temp = number;
            while (temp != 0) {
                digitCount++;
                sum += temp % 10;
                if (temp % 10 == 0) {
                    zeroCount++;
                }
                temp /= 10;
            }            
            average = static_cast<double>(sum) / digitCount;
            cout << "Количество цифр: " << digitCount << endl;
            cout << "Сумма цифр: " << sum << endl;
            cout << "Среднее арифметическое: " << average << endl;
            cout << "Количество нулей: " << zeroCount << endl;
        }
        else {
            cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";
        }
    }

    cout << "До свидания!\n";
    return 0;*/
    //zadanie 2
    /*int cellSize=1;
    cout << "Шахматная доска: ";
    cout << endl;
    for (int row = 0; row < 8; ++row) {
        
        for (int col = 0; col < 8; ++col) {
            
            if ((row + col) % 2 == 0) {
                
                for (int i = 0; i < cellSize; ++i) {
                    for (int j = 0; j < cellSize; ++j) {
                        cout << "***";
                    }
                }
            }
            else {
                
                for (int i = 0; i < cellSize; ++i) {
                    for (int j = 0; j < cellSize; ++j) {
                        cout << "---";
                    }
                }
            }
        }
        cout << endl; 
    }
    return 0;*/
    //zadanie 3
    /*int numPeople;
    double totalPrice = 0;

    cout << "Введите количество людей в заказе: ";
    cin >> numPeople;

    for (int i = 1; i <= numPeople; i++) {
        cout << "\nМеню для человека " << i << ":" << endl;
        cout << "1. Кофе - 1.50 $" << endl;
        cout << "2. Чай - 2.00 $" << endl;
        cout << "3. Торт - 3.00 $" << endl;
        cout << "4. Пирожное - 2.40 $" << endl;

        double personTotal = 0;
        string choice;

        while (true) {
            cout << "Введите номер блюда (или 'q' для выхода): ";
            cin >> choice;

            if (choice == "q") {
                break;
            }

            int item = stoi(choice);

            switch (item) {
            case 1:
                personTotal += 1.50;
                cout << "Кофе добавлен к заказу." << endl;
                break;
            case 2:
                personTotal += 2.00;
                cout << "Чай добавлен к заказу." << endl;
                break;
            case 3:
                personTotal += 3.00;
                cout << "Торт добавлен к заказу." << endl;
                break;
            case 4:
                personTotal += 2.40;
                cout << "Пирожное добавлено к заказу." << endl;
                break;
            default:
                cout << "Неверный номер блюда." << endl;
                break;
            }
        }

        totalPrice += personTotal;
        cout << "Итоговая сумма для человека " << i << ": " << personTotal << endl;
    }

    cout << "\nИтоговая сумма заказа: " << totalPrice <<" $" << endl;

    return 0;*/
//zadanie 4
    /*char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

  
  for (int row = 0; row < 10; row++) {
   
    for (int col = 0; col < 10; col++) {
      
      cout << letters[col] << row << " ";
    }
    
    cout << endl;
  }

  return 0;*/

}
