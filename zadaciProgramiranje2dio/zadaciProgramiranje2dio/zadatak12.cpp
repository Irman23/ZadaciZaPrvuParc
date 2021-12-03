/*#include<iostream>
using namespace std;

int brojacCifri(int n)
{
	return log10(abs(n)) + 1;
}
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

int logickaImplikacija(int b1, int b2)
{
	int rez = 0;
	int brojC = brojacCifri(b1);
	for (int i = 0; i < brojC; i++)
	{
		rez += (!(b1 % 10) || (b2 % 10)) * pow(10, i);
		b1 /= 10;
		b2 /= 10;
	}
	return rez;
}

int main()
{
	int b1, b2, brojac = 0, rez = 0;
	do
	{
		do
		{
			cout << "Unesite b1: \n";
			cin >> b1;
		} while (!binarni(b1));
		do
		{
			cout << "Unesite b2: \n";
			cin >> b2;

		} while (!binarni(b2));
	} while (brojacCifri(b1) != brojacCifri(b2));
	

	cout << "Rezultat je: " << logickaImplikacija(b1, b2) << endl;

	



	return 0;
}*/