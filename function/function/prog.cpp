#include "function.h"
#include "function.cpp"
#define INTEGER
using namespace std;

int main() {
    const int SIZE = 5;

#ifdef INTEGER
    int arr[SIZE];
    FillArrayInt(arr, SIZE);
    ShowArrayInt(arr, SIZE);
    cout << "Min: " << FindMinInt(arr, SIZE) << endl;
    cout << "Max: " << FindMaxInt(arr, SIZE) << endl;
    SortArrayInt(arr, SIZE);
    ShowArrayInt(arr, SIZE);
    EditValueInt(arr, SIZE, 0, 99);
    ShowArrayInt(arr, SIZE);
#endif

#ifdef DOUBLE
    double arr[SIZE];
    FillArrayDouble(arr, SIZE);
    ShowArrayDouble(arr, SIZE);
    cout << "Min: " << FindMinDouble(arr, SIZE) << endl;
    cout << "Max: " << FindMaxDouble(arr, SIZE) << endl;
    SortArrayDouble(arr, SIZE);
    ShowArrayDouble(arr, SIZE);
    EditValueDouble(arr, SIZE, 0, 99.99);
    ShowArrayDouble(arr, SIZE);
#endif

#ifdef CHAR
    char arr[SIZE];
    FillArrayChar(arr, SIZE);
    ShowArrayChar(arr, SIZE);
    cout << "Min: " << FindMinChar(arr, SIZE) << endl;
    cout << "Max: " << FindMaxChar(arr, SIZE) << endl;
    SortArrayChar(arr, SIZE);
    ShowArrayChar(arr, SIZE);
    EditValueChar(arr, SIZE, 0, 'Z');
    ShowArrayChar(arr, SIZE);
#endif

    return 0;
}