/*#include<iostream>
using namespace std;

bool cifre(int n)
{
	int cifra = (n % 10);
	n /= 10;
	while (n > 0)
	{
		if (n % 10 != cifra)
			return false;
		n /= 10;
	}
	return true;
}
int main()
{
	int n;
	do
	{
		cout << "Unesite n: \n";
		cin >> n;

	} while (n<=0);
	cout << "Ispis svih brojeva ...\n";
	for (int i = 1; i <= n; i++)
		if (cifre(i))
			cout << i << " ";




	return 0;
}*/