#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    int a,n,c;
    float b;
    cout << "Введите стоймость (рублей):";
    cin >> a;
    cout << "Введите стоймость (копейки):";
    cin >> b;
    cout << "Введите количество пирожков:\n";
    cin >> n;
    b = a + b;
    c = b * n;
    cout << "Стоймость всех пирожков:" << c;
    /*
    cout << "задание 2.\n";
    int n;
    cout << "Введите количество секунд:";
    cin >> n;
    int h, m, s;
    h = n / 3600;
    m = (n % 3600) / 60;
    s = n / 60;
    cout << h << ":" << (m < 10 ? "0" : "") << m << ":" << (s < 10 ? "0" : "") << s;
    */
    /*
    cout << "задание 3.\n";
    int v, t, m, c;
    m = 109;
    cout << "Введите скорость (км/ч):";
    cin >> v;
    cout << "Введите время в (ч):";
    cin >> t;
    v = t * v;
    c = m - v;
    cout << "Остоновка байкера проеденных км за определённые часы:" << c;
   */
    /*
    cout << "задание 4.\n";
    int n, m, k, f;
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
    
    return 0;*/
    /*cout << "задание 1.\n";
    int h1, m1, s1;
    int h2, m2, s2;
    cout << "Введите моменты времени(часы,минуты,секунды):"<<endl;
    cin >> h1 >> m1 >> s1;
    cout << "Введите моменты времени(часы,минуты,секунды):"<<endl;
    cin >> h2 >> m2 >> s2;
    if (h2<h1||(h2==h1&&m2<m1)||(h2==h1&&m2==m1&&s2<s1))
    {
        cout << "Второй момент времени наступил раньше первого!" << endl;
        return 1;
    }
    int totalsecond1 = h1 * 3600 + m1 * 60 + s1;
    int totalsecond2 = h2 * 3600 + m2 * 60 + s2;
    int totaldef = totalsecond2 - totalsecond1;
    cout << "прошло:" << totaldef << "секунд" << endl;*/
    cout << "задание 2.\n";
    int n, k;
    cout << "Введите количество белок:";
    cin >> n;
    cout << "Введите количество орешок:";
    cin >> k;
    int nk = k / n;
    int ostavhi = k % n;
    cout << "Каждая белка получит:" << nk << " орешков" <<"," << "орешков останется" << ostavhi ;
    return 0;
    
}
