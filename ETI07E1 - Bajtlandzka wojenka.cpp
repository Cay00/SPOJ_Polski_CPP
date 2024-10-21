#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int liczby[26];
	int przeciwnik[26];
	int ile = 0;
	int wynik = 0;

	for (int i = 0; i < 26; i++) // wczytywanie liczb
	{
		cin >> liczby[i];
	}

	sort(liczby, liczby + 26); // sortowanie wprowadzonych liczb

	for (int i = 0; i < 26; i++) // przypisywanie przeciwnikowi niewykorzystanych liczb z zakresu 1 - 52
	{
		if (i == 0)
		{
			for (int j = 1; j < liczby[i]; j++)
			{
				przeciwnik[ile] = j;
				ile++;
			}
		}
		else
		{
			int roznica = liczby[i] - liczby[i - 1];
			if (roznica > 1)
			{
				for (int j = liczby[i - 1] + 1; j < liczby[i]; j++)
				{
					przeciwnik[ile] = j;
					ile++;
				}
			}
		}
		
		if (i == 25 && liczby[25] < 52)
		{
			for (int j = liczby[25] + 1; j <= 52; j++)
			{
				przeciwnik[ile] = j;
				ile++;
			}
		}
	}

	for (int i = 26 - 1; i >= 0; i--) // karty przeciwnika
	{
		for (int j = 26 - 1; j >= 0; j--) // karty gracza
		{
			if (przeciwnik[i] < liczby[j])
			{
				liczby[j] = -100;
				przeciwnik[i] = 100;
				wynik++;
			}
		}
	}

	cout << wynik;

	return 0;
}