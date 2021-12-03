/*#include <iostream>
using namespace std;

bool f(int x, int d1, int d2)
{
	bool pomD1 = false;
	bool pomD2 = false;
	x = abs(x);

	while (x > 0)
	{
		if (x % 10 == d1)
			pomD1 = true;
		if (x % 10 == d2)
			pomD2 = true;
		x /= 10;
	}
	return pomD1 && pomD2;
}
int main()
{
	int n, d1, d2, C = 0;
	do
	{
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n<100||n>1000);

	do
	{
		cout << "Unesite d1: " << endl;
		cin >> d1;
	} while (d1<0||d1>9);

	do
	{
		cout << "Unesite d2: " << endl;
		cin >> d2;

	} while (d2 < 0 || d2>9);

	

	for (int i = 0; i <= n; i++)
		C += f(i, d1, d2);

	 cout << "Rezultat: " << "C je jednako: " << C << endl;






	
	return 0;
}*/