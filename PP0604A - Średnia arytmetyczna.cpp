#include <iostream>

using namespace std;

int main()
{
	float srednia, najmniejsza, roznica, suma = 0;
	int testy, ile, wynik;
	float liczba[100];
	cin >> testy;

	for (int i = 1; i <= testy; i++)
	{
		najmniejsza = 100;

		cin >> ile;
		for (int j = 0; j < ile; j++)
		{
			cin >> liczba[j];
			suma += liczba[j];
		}
		srednia = suma / ile;
		for (int k = 0; k < ile; k++)
		{
			roznica = srednia - liczba[k];
			if (roznica < 0) roznica *= -1;
			if (roznica < najmniejsza)
			{
				najmniejsza = roznica;
				wynik = liczba[k];
			}
		}
		cout << wynik << endl;
		suma = 0;
	}

	return 0;
}