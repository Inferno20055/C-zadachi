#include <iostream>
using namespace std;
//журналисту нужно написать о 7 чудес
int main()
{
    setlocale(LC_ALL, "Ru");
    /*int couter = 0;
    while (couter<7){
        couter++;
        cout << "You senn "<<couter<<" miracle of world.\n";
        
    }
    cout << "now, you can start your world.\n";
    return 0;*/
   
    
    /*int l;
    char s;
    int d;
    cout << "Введите символ: ";
    cin >> s;
    cout << "Введите длину: ";
    cin >> l;
    cout << "Введите направление (горизонтальная/вертикальная)";
    cin >> d;
    if (d==1)
    {
        int i = 0;
        while (i < l) {
            cout << s;
            i++;
        }
    }
    else if (d == 2)
    {
        int i = 0;
        while (i < l) {
            cout << s;
            i++;
        }
    } 
    else
    {
        cout << "Вы ввели неправильное направление";
    }
    return 0;*/
    
    /*int start, end, sum = 0;
    cout << "Введите начальное число: ";
    cin >> start;
    cout << "Введите конечное число: ";
    cin >> end;
    int i = start;
    while (i <= end) {
        if (i % 2 != 0) { 
            sum += i; 
        }
        i++; 
    }
    cout << "Сумма всех нечетных чисел в диапазоне от " << start << " до " << end << " равна: " << sum << endl;
    return 0;*/
 
   /*int n;
    int f = 1;
    int i = 1;
    cout << "Введите натуральное число n:";
    cin >> n;
    if (n<0)
    {
        cout << "Факториал не определён для отрецательных чисел.";
    }
    while (i<=n) {
        f *= i;
        i++;
    }
    cout << "факториал числа " << n << " равен " << f<<"\n";
    return 0;*/
   /* int i = 1;
    int sum = 0;
    while (i<5) {
        sum += i;
        i++;
    }
    cout <<"Сумма от 1 до 5 " << sum;*/
    /*int l=5;
    char d='*';
    int i = 0;
    while (i<l) {
        cout << d;
        i++;
    }*/
    /*int l, p, count = 0;
    cout << "Введите длину ткани: ";
    cin >> l;
    cout << "Введите ширину ткани: ";
    cin >> p;
    if (l>=p)
    {
        while (l>=p) {
            l -= p;
            count++;
           
        }
        cout << "Швея может пошить " << count << " подушек.";
    }
    else
    {
        cout << "Ткани недостаточно даже для одной подушки";
    }
    return 0;*/
    //int L, P, count = 0;

    //cout << "Введите длину ткани (L): ";
    //cin >> L;

    //cout << "Введите длину подушки (P): ";
    //cin >> P;

    //// Проверка на то, что длина ткани больше или равна длине подушки
    //if (L >= P) {
    //    // Цикл для подсчета количества подушек
    //    while (L >= P) {
    //        L -= P; // Отнимаем длину подушки от длины ткани
    //        count++; // Увеличиваем счетчик подушек
    //    }

    //    cout << "Швея сможет пошить " << count << " подушек." << endl;
    //}
    //else {
    //    cout << "Ткани недостаточно для пошива даже одной подушки." << endl;
    //}

    //return 0;
    /*int l;
    char d = '*';
    int i = 0;
    cout << "";
    cin >> l;
    while (i < l) {
        cout << d;
        i++;
        
    }
    return 0;*/
   /* int l;
    char z;
    int i = 0;
    cout << "Введите длину линии: ";
    cin >> l;
    cout << "Введите символ: ";
    cin >> z;
    while (i < l) {
        cout << z;
        i++;
    }*/
    int s, e, sum = 0,res=0;
    cout << "Введите начальное число: ";
    cin >> s;
    cout << "Введите конечное число: ";
    cin >> e;
    int i = s;
    while (i<=e) {
        sum += i;
        res = (sum / e);
        i++;
        
    }
    cout << "Сума чисел в диапозоне: " << sum << "\n";
    cout << "Среднеарефмитическое чисел: " << res << "\n";
    return 0;
    

    







}



