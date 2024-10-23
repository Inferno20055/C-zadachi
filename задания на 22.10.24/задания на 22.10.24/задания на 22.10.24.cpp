#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
	//задача 2
	/*const int size = 40;
	int ar[size];
	int inhabitant, home_number = 1;
	for (int i{ 0 }; i < size; i++)
	{
		inhabitant = rand() % 11;
		ar[i] = inhabitant;
	}
	for (int i{ 0 }; i < size; i++)
	{
		cout << "жильцов в квартире " << home_number << ": " << ar[i] << endl;
		home_number += 1;
	}
	int number;
	cout << "введите номер квартиры: ";
	cin >> number;
	if (number < 0 && number > size)
	{
		cout << "введите корректный номер квартиры!";
	}
	else
	{
		cout << "в квартире " << ar[number - 1] << " жильцов\n\n";
	}
	int one_entrance = 0, two_entrance = 0, three_entrance = 0, four_entrance = 0;

	for (int i{ 0 }; i < 10; i++)
	{
		one_entrance += ar[i];
	}
	for (int i{ 10 }; i < 20; i++)
	{
		two_entrance += ar[i];
	}
	for (int i{ 20 }; i < 30; i++)
	{
		three_entrance += ar[i];
	}
	for (int i{ 30 }; i < 40; i++)
	{
		four_entrance += ar[i];
	}
	cout << "кол-во жителей в (1) подъезде: " << one_entrance << endl;
	cout << "кол-во жителей в (2) подъезде: " << two_entrance << endl;
	cout << "кол-во жителей в (3) подъезде: " << three_entrance << endl;
	cout << "кол-во жителей в (4) подъезде: " << four_entrance << endl << "\n";
	int kvartira = 1;
	for (int i = 0; i < size; i++)
	{

		if (ar[i] > 5) {
			cout << "в квартире номер (" << kvartira << ") живет многодетная семья" << endl;
		}
		kvartira += 1;
	}

	
	return 0;*/
    //Задание 3.
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
    //Задание 4.
    /*string size[10];
    int prices[10];
    int max_price = 0, first_max_index = -1, last_max_index = -1;
    cout << "введите марки и цены 10 автомобилей:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "марка автомобиля " << i + 1 << ": ";
        getline(cin, size[i]); 
        cout << "цена автомобиля " << i + 1 << ": ";
        cin >> prices[i];
        cin.ignore(); 

        if (prices[i] > max_price) {
            max_price = prices[i];
            first_max_index = i;
            last_max_index = i;
        }
        else if (prices[i] == max_price) {
            last_max_index = i;
        }
    }
    cout << "\nсумма наиболее дорогого автомобиля: " << max_price << endl;
    cout << "номер первого такого автомобиля: " << first_max_index + 1 << endl;
    cout << "номер последнего такого автомобиля: " << last_max_index + 1 << endl;

    return 0;*/
    //Задание 5.
    /*const int size = 10;
    int ar[size] = { 1,23,1,234,5,2,7,8,1,2 };
    int poisc, res = 0;
    cout << "Введите число для поиска: ";
    cin >> poisc;
    for (int i = 0; i <= size; i++)
    {
        if (ar[i] == poisc)
        {
            res += 1;
        }
    }
    cout << "Количество повторений: " << res << endl;
    return 0;*/
    //Задание 6
    /*int A[10], B[10], X[20];


    cout << "Введите элементы массива A:\n";
    for (int i = 0; i < 10; i++) 
    {
        cin >> A[i];
    }

    cout << "Введите элементы массива B:\n";
    for (int i = 0; i < 10; i++) {
        cin >> B[i];
    }

   
    int j = 0; 
    for (int i = 0; i < 10; i++) {
        X[j++] = A[i];
        X[j++] = B[i];
    }

    cout << "Массив X (чередование):\n";
    for (int i = 0; i < 20; i++) {
        cout << X[i] << " ";
    }
    cout << endl;

    
    j = 0; 
    for (int i = 0; i < 10; i++) {
        X[j++] = A[i];
    }
    for (int i = 0; i < 10; i++) {
        X[j++] = B[i];
    }

    cout << "Массив X (следование):\n";
    for (int i = 0; i < 20; i++) {
        cout << X[i] << " ";
    }
    cout << endl;

    return 0;*/
}

