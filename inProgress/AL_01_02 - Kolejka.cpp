#include <iostream>
#include <string>

using namespace std;

// PRZEKROCZONO LIMIT CZASU

int main()
{
	string linia;
	int testy;
	cin >> testy;

	cin.get();

	for (int i = 0; i < testy; i++)
	{
		getline(cin, linia);
		int dlugosc = linia.length();

		for (int j = dlugosc; j >= 0; j--)
		{
			if (j > 0)
			{
				while (linia[j] > linia[j - 1])
				{
					
				}
			}
		}
		cout << linia << endl;

		/*int max_wartosc = 0;
		int max_numer = 0;

		for (int j = 0; j < dlugosc; j++)
		{
			if (linia[j] > max_wartosc) max_wartosc = linia[j];

			if (j > 0)
			{
				if (linia[j] > max_wartosc)
				{
					max_wartosc = linia[j];
					dlugosc -= j;
					linia.erase(0, j);
					max_numer = j;
				}
				else
				{
					for (int k = j; k >= max_numer; k--)
					{
						if (linia[j] > linia[k]) linia[k] = ' ';
					}
				}
			}
		}
		for (int j = 0; j < linia.length(); j++)
		{
			if (linia[j] != ' ') cout << linia[j];
		}
		cout << endl;*/
	}

	return 0;
}