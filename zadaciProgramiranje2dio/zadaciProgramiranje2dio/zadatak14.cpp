/*#include<iostream>
using namespace std;

bool isteCifre(int n)
{
	int cifra = (n % 10);
	n /= 10;
	while (n>0)
	{
		if (n % 10 != cifra)
			return false;
		n /= 10;
	}
	return true;
}


int sumaCifara(int n)
{
	int sumaD = 0;
	while (n > 0)
	{
		sumaD += (n % 10);
		n /= 10;
		
	}
	return sumaD;
}
int main()
{
	int n, x;
	do
	{
		cout << "Unesite n: \n";
		cin >> n;
	} while (n<=0);

	do
	{
		cout << "Unesite x: \n";
		cin >> x;
	} while (x<=0);

	for (int i = 1; i <= n; i++)
	{
		if (isteCifre(i) && (i % 2 == 0) && (sumaCifara(i) >= x))
			cout << i << " ";

	}

	return 0;
}*/