#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	int najwieksza;
	int powtorzenia;

	for (int i = 0; i < testy; i++)
	{
		powtorzenia = 0;
		najwieksza = 0;

		int ile, liczba[201];
		cin >> ile;

		for (int j = 0; j < ile; j++)
		{
			cin >> liczba[j];

			if (liczba[j] > najwieksza)
			{
				najwieksza = liczba[j];
				powtorzenia = 0;
			}
			if (liczba[j] == najwieksza)
			{
				powtorzenia++;
			}
		}

		sort(liczba, liczba + ile);

		for (int l = 0; l < powtorzenia; l++)
		{
			cout << najwieksza << " ";
		}

		for (int m = 0; m < ile; m++)
		{
			if (liczba[m] == najwieksza)
			{
				m++;
			}
			else
			{
				cout << liczba[m] << " ";
			}
		}

		cout << endl;
	}

	return 0;
}