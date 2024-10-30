#include <iostream>
#include<string>
using namespace std;
void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false; 
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true; 
            }
        }
        if (!swapped) { 
            break;
            
        }
    }
}
int main()
{
    setlocale(LC_ALL, "RU");
    //zadanie 1.
    /*const int size = 100; 
    string mobileNumbers[size];
    string homeNumbers[size];
    int numContacts = 0;
        cout << "\nМеню:\n";
        cout << "1. Отсортировать по номерам мобильных\n";
        cout << "2. Отсортировать по домашним номерам телефонов\n";
        cout << "3. Вывести пользовательские данные\n";
        cout << "4. Выход\n";
        cout << "Введите номер пункта меню: ";
        int choice;
        cin >> choice;
        switch (choice) {
        case 1: {
            for (int i = 0; i < numContacts - 1; i++) {
                for (int j = i + 1; j < numContacts; j++) {
                    if (mobileNumbers[i] > mobileNumbers[j]) {
                        string temp = mobileNumbers[i];
                        mobileNumbers[i] = mobileNumbers[j];
                        mobileNumbers[j] = temp;
                        temp = homeNumbers[i];
                        homeNumbers[i] = homeNumbers[j];
                        homeNumbers[j] = temp;
                    }
                }
            }
            cout << "Мобильные номера отсортированы!\n";
            break;
        }
        case 2: {
            for (int i = 0; i < numContacts - 1; i++) {
                for (int j = i + 1; j < numContacts; j++) {
                    if (homeNumbers[i] > homeNumbers[j]) { 
                        string temp = homeNumbers[i];
                        homeNumbers[i] = homeNumbers[j];
                        homeNumbers[j] = temp;
                        temp = mobileNumbers[i];
                        mobileNumbers[i] = mobileNumbers[j];
                        mobileNumbers[j] = temp;
                    }
                }
            }
            cout << "Домашние номера отсортированы!\n";
            break;
        }
        case 3: {
            if (numContacts == 0) {
                cout << "Список контактов пуст.\n";
            }
            else {
                cout << "\nСписок контактов:\n";
                for (int i = 0; i < numContacts; i++) {
                    cout << "Контакт " << i + 1 << ":\n";
                    cout << "Мобильный: " << mobileNumbers[i] << endl;
                    cout << "Домашний: " << homeNumbers[i] << endl;
                }
            }
            break;
        }
        case 4:
            cout << "Выход из программы.\n";
            return 0;
        default:
            cout << "Неверный выбор. Пожалуйста, введите число от 1 до 4.\n";
        }
   

    return 0;*/
    //zadanie 2
    /*const int n=10;
    

    int arr[n];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;*/
    //zadanie 3.
    int n;
    cout << "Введите количество оладий: ";
    cin >> n; 
    cout << "Введите размер оладий\n";
    int* pancakes = new int[n]; 
    for (int i = 0; i < n; ++i) {
        cin >> pancakes[i]; 
    }
    int count = 0; 
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (pancakes[j] < pancakes[j + 1]) {
                
                for (int k = 0; k <= (j + 1) / 2; ++k) {
                    int temp = pancakes[j + 1 - k];
                    pancakes[j + 1 - k] = pancakes[k];
                    pancakes[k] = temp;
                }
                count++;
            }
        }
    }
    cout << "Количество операций: " << count << endl;
    for (int i = 0; i < n; ++i) {
        cout << pancakes[i] << " ";
    }
    cout << endl;
    return 0;





}
