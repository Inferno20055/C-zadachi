#include <iostream>
#include<cmath>
using namespace std;
//zadanie 1
void Pramug(int N, int K) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
//zadanie 2
int Factorial(int n) {
	if (n==0)
	{
		return 1;
	}
	return n * Factorial(n-1);
}
//zadanie 3
int JustNumber(int n,int h) {
	if (n%h==0 ||n%1==n)
	{
		cout <<"Число простое."<<endl;
		return 0;
	}
	
	else
	{
		cout << "Число сложное."<<endl;
		
	}
	return n % h == 0 || n % 1 == n;
}
//zadanie 4
int Cub(int num) {
	return pow(num, 3);
}
//zadanie 5
int Max(int a,int b) {
	if (a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
//zadanie 6
int Positiv(int a) {
	if (a >= 0)
	{
		cout << "истина";
	}
	else {
		cout << "ложь";
	}
	return a;
}
int main()
{
    setlocale(LC_ALL, "Ru");
	Pramug(10, 10);
	cout << endl;
	int res = Factorial(5);
	cout << "Результат: " << res<<endl;
	JustNumber(5,2);
	int res3 = Cub(2);
	cout << "Результат: " << res3<<endl;
	int n = Max(4, 10);
	cout << "Максимум из чисел: " << n<<endl;
	int Pos = Positiv(-1);


}
