#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
   /* int a,n,c;
    //float b;
    //cout << "Введите стоймость (рублей):";
    //cin >> a;
    //cout << "Введите стоймость (копейки):";
    //cin >> b;
    //cout << "Введите количество пирожков:\n";
    //cin >> n;
    //b = a + b;
    //c = b * n;
    cout << "Стоймость всех пирожков:" << c;*/
    /*int n;
    cout << "Введите количество секунд:";
    cin >> n;
    int h, m, s;
    h = n / 3600;
    m = (n % 3600) / 60;
    s = n / 60;
    cout << h << ":" << (m < 10 ? "0" : "") << m << ":" << (s < 10 ? "0" : "") << s;
    */
    /*int v, t, m, c;
    m = 109;
    cout << "Введите скорость (км/ч):";
    cin >> v;
    cout << "Введите время в (ч):";
    cin >> t;
    v = t * v;
    c = m - v;
    cout << "Остоновка байкера проеденных км за определённые часы:" << c;
   */
    /*int n, m, k, f;
    cout << "Введите  размер шоколадки (вертикаль):";
    cin >> n;
    cout << "Введите размер шоколадки(горизонталь):";
    cin >> m;
    f = n * m;
    if (f%2==0)
    {
        cout << "да";
    }
    else
    {
        cout << "нет";
    }*/
    int x, y, n, m, c;
    cout << "Введите длину басейна:";
    cin >> n;
    cout << "Введите ширину басейна";
    cin >> m;
    cout << "Введите растояние до бортика n:";
    cin >> x;
    cout << "Введите растояние до бортика m:";
    cin >> y;
    int distant = n-x;
    int shir = m - y;
    if (distant<shir)
    {
        cout << distant<<"метров";
    }
    else
    {
        cout << shir<<"метров";

    }
    
    return 0;
    
}
