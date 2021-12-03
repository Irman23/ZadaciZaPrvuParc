/*#include <iostream>
using namespace std;

int max(int x, int y)
{
	return (x >= y) ? x : y;
}

int min(int x, int y)
{
	return(x <= y) ? x : y;
}


void main()
{
	int n, P = 0;
	do
	{
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n<1);

	for (int i = -5; i <= 5; i++)
		for (int j = 1; j <= n; j++)
			P += min(5, max(0, i * j));
	cout << "Rezultat: " << P << endl;




	
}*/