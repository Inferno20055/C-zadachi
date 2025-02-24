
#include <iostream>
#include"String.h"
#include "Date.h"
#include"Person.h"
using namespace std;
int Person::count = 0;
int main()
{
    setlocale(LC_ALL, "Ru");
   /* String str1("Hello, world!"); 
    str1.display(); 

    String str2(10); 
    str2.setString("Short"); 
    str2.display(); 

    String str3 = str1; 
    str3.display(); 

    str1.setString("Dynamic memory handling!"); 
    str1.display(); */
    Person p1(1, "Иванов", "Иван", "Иванович", Date(15, 5, 1990));
    Person p2(2, "Петров", "Петр", "Петрович", Date(20, 6, 1985));

    p1.display();
    p2.display();

    cout << "Количество созданных экземпляров: " << Person::getCount() << endl;

    return 0;
    
}

