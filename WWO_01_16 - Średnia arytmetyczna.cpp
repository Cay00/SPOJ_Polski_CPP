#include <iostream>

using namespace std;

int main()
{
	int ile;
	cin >> ile;

	double srednia = 0;
	double roznica = 100;

	int a = 0, b = 0;

	int* liczba = new int[ile];

	for (int i = 0; i < ile; i++)
	{
		cin >> liczba[i];
		srednia += liczba[i];
	}

	srednia /= ile;

	for (int i = 0; i < ile; i++)
	{
		if (liczba[i] < srednia)
		{
			if (srednia - liczba[i] < roznica)
			{
				roznica = srednia - liczba[i];
			}
		}
		else
		{
			if (liczba[i] - srednia < roznica)
			{
				roznica = liczba[i] - srednia;
			}
		}
	}

	for (int i = 0; i < ile; i++)
	{
		if (liczba[i] < srednia)
		{		
			if (srednia - liczba[i] == roznica)
			{
				if (a != 0) b = liczba[i];
				else a = liczba[i];
			}
		}
		else
		{
			if(liczba[i] - srednia == roznica)
			{
				if (a != 0) b = liczba[i];
				else a = liczba[i];
			}
		}	
	}

	if (b == 0) cout << a << endl;
	else
	{
		if (a > b) cout << a << endl;
		else cout << b << endl;
	}

	return 0;
}