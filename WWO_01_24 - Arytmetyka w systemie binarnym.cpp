#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int k_dlugosc, n_dlugosc, dlugosc;
	cin >> k_dlugosc >> n_dlugosc;

	if (k_dlugosc > n_dlugosc) dlugosc = k_dlugosc + 1;
	else dlugosc = n_dlugosc + 1;

	int k_suma = 0, n_suma = 0;
	int potega = k_dlugosc - 1;
	int liczba;
	for (int i = 0; i < k_dlugosc; i++)
	{
		cin >> liczba;
		if (liczba == 1) k_suma += pow(2, potega);
		potega--;
	}

	potega = n_dlugosc - 1;
	for (int i = 0; i < n_dlugosc; i++)
	{
		cin >> liczba;
		if (liczba == 1) n_suma += pow(2, potega);
		potega--;
	}

	int suma = k_suma + n_suma;
	
	int bity;
	for (int i = 0; i < dlugosc + 1; i++)
	{
		if (pow(2, i) > suma) bity = i - 1;
		if (pow(2, i) == suma) bity = i;
	}

	int pot = bity;
	char* wyjscie = new char[bity];
	for (int i = 0; i < bity + 1; i++)
	{
		if (pow(2, pot) <= suma)
		{
			wyjscie[i] = '1';
			suma -= pow(2, pot);
		}
		else wyjscie[i] = '0';
		pot--;
	}

	int x;
	for (int i = 0; i < bity + 1; i++)
	{
		if (wyjscie[i] == '1')
		{
			x = i;
			break;
		}
	}
	for (int i = x; i < bity + 1; i++)
	{
		cout << wyjscie[i];
	}

	return 0;
}