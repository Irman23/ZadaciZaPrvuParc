/*#include<iostream>
using namespace std;

bool isPrime(int x) 
{
	x = abs(x);
	if (x == 1)
		return false;
	for (int i = 2; i < x; i++)
		if (x % i == 0)
			return false;
	return true;
}

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
void main()
{
	int n;
	do
	{
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n<10||n>1000);
	cout << "Ispis brojeva: \n";
	for (int i = 2; i <= n; i++)
		if (isPrime(i) && reverse(i))
			cout << i << " ";





}*/