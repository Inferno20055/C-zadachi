#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    /*const int a = 12;
    int train[a];
    train[0] = 3;
    train[1] = 1;
    train[2] = 4;
    cout << "start adress " << train << endl;
    cout << "train[0] = "<<train[0]<<endl;
    cout << "train[1] = " << train[1] << endl;
    cout << "train[2] = " << train[2] << endl;
    cout << endl;*/
    /*const int size = 3;
    int ar[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter number\n";
        cin >> ar[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << ar[i]<<"\n";
    }
    return 0;*/
    /*const int size = 5;
    int ar[size] = { 12,-23,45,-124,-24, };
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (ar[i] < 0) {
            sum += ar[i];

        }
        
    }
    cout << "sum = " << sum << "\n";*/
   /* const int size = 5;
    int ar[size] = { 12,-23,45,-124,-24, };
    int sum = 0;
    int max = ar[0];
    int min = ar[0];
    for (int i = 0; i < size; i++)
    {
        if (min>ar[i])
        {
            min = ar[i];
        }
        if (max<ar[i])
        {
            max = ar[i];
        }
    }
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;
    return 0;*/
    /*const int size = 10;
    int ar[size] = { 12,-23,45,-124,-24,12,45,12,78,-1 };
    for (int i = 0; i < size; i++)
    {
        if (ar[0]<0) {
            cout << "Синтаксическая ошибка. ";
            break;
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        if (ar[9] > 0) {
            cout << "Логическая ошибка.";
            break;
        }
    }
    return 0;*/
    /*const int size = 31;
    int ar[size];
    int sredchilso = 0;
    int src = 0;
    int otmetca;
    int res = 0;
    cout << "Введите температуру выбранной отметки: ";
    cin >> otmetca;

    for (int i = 1; i <= size; i++)
    {
        cout << "Введите температуру на " << i<<endl;
        cin >> ar[i];
    }
    for (int i = 1; i < size; i++)
    {
        if (ar[i]<otmetca)
        {
            res += 1;
        }
        sredchilso += ar[i];
        src = sredchilso / size;
    }
    cout << "Среднее температура: " << src << endl;
    cout << "Температура воздуха опускалась ниже: "<<otmetca <<" c " << res<<" раз." << endl;
    return 0;*/
    const int size = 10;
    int ar[size] = {1,23,1,234,5,2,7,8,1,2};
    int poisc, res = 0;
    cout << "Введите число для поиска: ";
    cin >> poisc;
    for (int i = 0; i <= size; i++)
    {
        if (ar[i]==poisc)
        {
            res += 1;
        }
    }
    cout << "Количество повторений: " << res << endl;
    return 0;
}
