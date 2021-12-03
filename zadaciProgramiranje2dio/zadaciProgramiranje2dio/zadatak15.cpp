/*#include<iostream>
using namespace std;

bool isSorted(int n)
{
	while (n > 9)
	{
		if ((n % 10) < ((n / 10) % 10))
			return false;
		n /= 10;
	}
	return true;
}
int main()
{
	int n;
	cout << "Unesite n: \n";
	cin >> n;
	if (isSorted(n))
		cout << "cifre unesenog broja su sortirane " << endl;
	else
		cout << "cifre unesenog broja nisu sortirane " << endl;

	return 0;
}*/