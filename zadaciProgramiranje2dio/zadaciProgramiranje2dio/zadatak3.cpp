/*#include<iostream>
using namespace std;

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
int main()
{
	int n, b;
	do
	{
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n<0||n>1000);

	do
	{
		cout << "Unesite b: " << endl;
		cin >> b;
	} while (b<0||b>30);

	int C = 0;
	for (int i = 0; i <= n; i++)
		C += s(i, b);

	cout << "Rezultat: " << C << endl;





	return 0;
}*/