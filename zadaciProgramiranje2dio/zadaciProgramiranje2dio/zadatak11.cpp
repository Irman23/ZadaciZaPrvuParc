/*#include <iostream>
using namespace std;

bool binarni(int n)
{
	while (n > 0)
	{
		if (n % 10 > 1)
			return false;
		n /= 10;
	}
	return true;
}
int main()
{
	int b1, b2, broj = 0, brojac = 0;
	do
	{
		do
		{
			cout << "Unesite 'b1': " << endl;
			cin >> b1;
		} while (b1<0);

		do
		{
			cout << "Unesite 'b2': " << endl;
			cin >> b2;
		} while (b2 < 0);
	} while (int(log10(b1))+1 != int(log10(b2))+1||!binarni(b1)||!binarni(b2));

	if (binarni(b1) || binarni(b2)) {

		while (b1 > 0)
		{
			broj += ((b1 % 10) || (b2 % 10)) * pow(10, brojac);
			b1 /= 10;
			b2 /= 10;
			brojac++;
		}
		cout << "Rezultat je: " << broj;
	}
	else
	{
		cout << "Broj nije binaran." << endl;
	}


	return 0;
}*/