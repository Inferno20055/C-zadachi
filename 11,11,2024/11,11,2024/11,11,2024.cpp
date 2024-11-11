#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    //тип данных имя переменной [число строк][число столбцов];
    /*const int row = 3;
    const int col = 3;
    int array[row][col]; 
    int max_element=0;
    int max_element2 = 0;
    int max_element3 = 0;*/

  /*  int array2[2][2] = {(1,2),(7,8)};
    int array3[2][2] = { 7,8,12,16 };
    int array4[2][3] = { (1,2),(7,8,8) };*/
    //цикл заполения массива
   /* for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            array[i][j] = rand() % 100;
            cout << array[i][j] << " ";
            if (max_element<array[0][j])
            {
                max_element = array[0][j];
            }
            if (max_element2<array[1][j])
            {
                max_element2 = array[1][j];
            }
            if (max_element3 < array[2][j])
            {
                max_element3 = array[2][j];
            }
        }
        cout << "\n\n";
        cout << "\n";
        
    }
    cout << "максимальный элемент в каждой строчке\n" << max_element << "\n";
    cout << max_element2<<"\n";
    cout << max_element3<<"\n";
    return 0;*/
    //задание 1
    /*const int row = 3;
    const int col = 4;
    int array[row][col]; 
    int c=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            array[i][j] = rand() % 100;
            cout << array[i][j] << " ";
            if (array[i][j]==0)
            {
                c +=1;
            }
        }
        cout << "\n\n";
    }
    cout << " ";
    cout << "Количество ячеек равняющихся (0): " << c;*/
    //задание 2
    const int row = 4;
    const int col = 4;
    int array[row][col];
    int max_element = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            array[i][j] = rand() % 100;
            cout << array[i][j] << " ";
            if (max_element<array[i][j]&&j>=i)
            {
                max_element = array[i][j];
            }
        }
        cout << "\n\n";
        
    }
    cout << max_element;
}