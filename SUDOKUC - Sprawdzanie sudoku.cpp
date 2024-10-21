#include <iostream>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	int tab[9][9];

	while (testy--)
	{
		int suma = 45;
		int liczby[9];
		for (int i = 0; i < 9; i++) liczby[i] = 0;

		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cin >> tab[i][j];
			}
		}

		bool poprawnosc = true;

		// sprawdzanie poziomo
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (tab[i][j] > 9)
				{
					poprawnosc = false;
					break;
				}

				liczby[tab[i][j] - 1] = 1;

				suma -= tab[i][j];
				if (suma < 0 || suma > 45)
				{
					poprawnosc = false;
					break;
				}
			}
			for (int i = 0; i < 9; i++)
			{
				if (liczby[i] != 1) poprawnosc = false;
			}
			for (int i = 0; i < 9; i++) liczby[i] = 0;
			suma = 45;
		}

		// sprawdzanie pionowo
		for (int j = 0; j < 9; j++)
		{
			for (int i = 0; i < 9; i++)
			{
				if (tab[i][j] > 9)
				{
					poprawnosc = false;
					break;
				}

				suma -= tab[i][j];
				if (suma < 0 || suma > 45)
				{
					poprawnosc = false;
					break;
				}
			}
			suma = 45;
		}

		// sprawdzanie blokami
		int suma_blok = 0;
		for (int i = 0; i < 9; i += 3)
		{
			for (int j = 0; j < 9; j += 3)
			{
				for (int m = 0; m < 3; m++)
				{
					for (int n = 0; n < 3; n++)
					{
						suma_blok += tab[i + m][j + n];
					}
				}
				if (suma_blok != 45) poprawnosc = false;
				suma_blok = 0;
			}
		}

		if (poprawnosc == false) cout << "NIE" << endl;
		else cout << "TAK" << endl;
	}

	return 0;
}