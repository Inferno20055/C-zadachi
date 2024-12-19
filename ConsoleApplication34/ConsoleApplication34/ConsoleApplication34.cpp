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
void CountElement(int* array, int size,int* negativecount,int* poositivcount,int* zerocount) {
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
    const int size = 8;
    int* array = new int[size] {1, 0, 34, -2, 0, 7, 1, 2};
    int negativcount = 0, positivcount = 0, zerocount = 0;
    CountElement(array, size, &negativcount, &positivcount, &zerocount);
    cout << "Количество отрицательных элементов: " << negativcount<<endl;
    cout << "Количество положительных элементов: " << positivcount << endl;
    cout << "Количество нулевых элементов: " << zerocount << endl;
    delete[] array;

    

    return 0;
}