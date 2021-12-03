/*#include <iostream>
using namespace std;

int reverse(int x)
{
	int okrenutiBroj = 0;
	x = abs(x);
	while (x > 0)
	{
		okrenutiBroj *= 10;
		okrenutiBroj += x % 10;
		x /= 10;
	}
	return okrenutiBroj;
}

bool s(int x, int y)
{
	if (x < 0 || y < 0)
		return false;
	int sumaDecimala = 0;
	while (x > 0)
	{
		sumaDecimala += (x % 10);
		x /= 10;
	}
	return sumaDecimala == y;
}

void main()
{
	int n, b;
	do
	{
		cout << "Unesite n:";
		cin >> n;
	} while (n<0||n>1000);

	do
	{
		cout << "Unesite b:";
		cin >> b;

	} while (b<0);

	cout << "Ispis brojeva\n";
	for (int i = 0; i <= n; i++)
		if (i== reverse(i) && s(i, b))//???
			cout << i << " ";

}*/