/*#include<iostream>
using namespace std;

void f(int x, int y)
{
	int brojA = 0;
	int brojB = 0;
	while (x > 0)
	{
		if (x % 2 == 0)
		{
			brojA *= 10;
			brojA += (x % 10);
		}
		else
		{
			brojB *= 10;
			brojB += (x % 10);

		}
		x /= 10;
	}
	while (y > 0)
	{
		if (y % 2 == 0)
		{
			brojA *= 10;
			brojA += (x % 10);
		}
		else
		{
			brojB *= 10;
			brojB += (y % 10);
		}
		y /= 10;
	}
	cout << "Broj sa parnim ciframa: " << brojA << endl;
	cout << "Broj sa neparnim ciframa: " << brojB << endl;

}

void main()
{
	int a, b;
	do
	{
		cout << "Unesite 'a': " << endl;
		cin >> a;
	} while (a<0||a>10000);
	do
	{
		cout << "Unesite 'b': " << endl;
		cin >> b;

	} while (b<0||b>10000);

	f(a, b);





}*/