/*#include<iostream>
#include<cmath>
using namespace std;


bool binaranBroj(int n)
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
	int b1, b2, broj = 0,  brojac = 0;
	do
	{

		do
		{
			cout << "Unesite broj b1 veci od 0: ";
			cin >> b1;
		} while (!binaranBroj);

		do
		{
			cout << "Unesite broj b2 veci od 0: ";
			cin >> b2;
		} while (!binaranBroj);
	} while (int(log10(b1))+1 != int(log10(b2))+1);

	if (binaranBroj(b1) && binaranBroj(b2))
	{
		while (b1 > 0)
		{
			broj = (b1 % 10) * (b2 % 10) * pow(10, brojac) + broj;
			b1 /= 10;
			b2 /= 10;
			brojac++;
		}
		cout << "Rezultat je: " << broj;

	}
	else
		cout << "Brojevi nisu binarni. " << endl;


	return 0;
}*/