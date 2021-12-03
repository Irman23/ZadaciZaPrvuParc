/*#include<iostream>
using namespace std;

bool f(int x)
{
	for (int i = 2; i < x; i++)
		if (x % i == 0)
			return false;
		
	return true;


}

bool g(int x, int d)
{
	while (x > 0) {

		if (x % 10 == d)
			return true;
		x /= 10;

	}
	return false;
}




int main()
{
	int n, d, c = 0;
	do
	{
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n<100||n>1000);

	do
	{
		cout << "Unesite d: " << endl;
		cin >> d;
	} while (d<0||d>9);

	for (int i = 2; i <= n; i++)
	{
		c += f(i) * g(i, d);
	}

	cout << "Rezultat je: " << "C je jednako " << c << endl;






	return 0;
}*/