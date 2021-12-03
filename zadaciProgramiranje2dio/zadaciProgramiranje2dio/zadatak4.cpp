/*#include<iostream>
using namespace std;

int f1(int x, int d)
{
	x = abs(x);
	int brojac = 0;
	while (x > 0)
	{
		if(x % 10 == d)
			brojac++; //brojac??
		x /= 10;
	}
	return brojac;

}

bool f2(int x, int y)
{
	return x == y;
}


int main()
{
	int n, c1, c2, C = 0;
	do
	{
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n<0||n>10000);

	do
	{
		cout << "Unesite c1: " << endl;
		cin >> c1;
	} while (c1 < 0 || c1>9);

	do
	{
		cout << "Unesite c2: " << endl;
		cin >> c2;
	} while (c2 < 0 || c2>4);

	for (int i = 0; i <= n; i++)
		C += f2(c2, f1(i, c1));

	cout << "Rezultat: " << C << endl;


	return 0;
}*/