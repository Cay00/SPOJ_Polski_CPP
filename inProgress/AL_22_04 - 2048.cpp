#include <iostream>

using namespace std;

int main()
{
	int n, w, p, y, x;
	cin >> n;

	int** plansza = new int* [n];
	for (int i = 0; i < n; i++) plansza[i] = new int[n];

	// przypisywanie początkowych wartości 0
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) plansza[i][j] = 0;
	}

	cin >> w;
	for (int i = 0; i < w; i++)
	{
		cin >> p >> y >> x;
		plansza[y][x] = p;
	}

	int r, rp, ry, rx;
	string komenda;
	cin >> r;
	for (int i = 0; i < r; i++)
	{
		cin >> komenda >> rp >> ry >> rx;

		if (komenda == "L")
		{
			// przesuwanie liczb w lewo
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < n; k++)
				{
					// szukanie liczby przesunięć (ile razy '0' występuje do następnej liczby)
					int przesuniecie = 0;
					if (plansza[j][k] == 0)
					{		
						for (int l = 1; l < n - k; l++)
						{
							if (plansza[j][k + l] == 0) przesuniecie++;
						}
					}

					// przesuwanie liczb o 'przesuniecie'

					//for(int i = )
					if (j == 0) cout << j << " " << k << " " << przesuniecie << endl;
				}
			}

			// uzupełnianie pustych miejsc zerami
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < n; k++)
				{
					if (plansza[j][k] < 0 || plansza[i][j] > 1024)
					{
						plansza[j][k] = 0;
					}
				}
			}
		}
	}

	// wypisywanie planszy
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if (plansza[i][j] > 0 && plansza[i][j] < 1024)
				cout << plansza[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}