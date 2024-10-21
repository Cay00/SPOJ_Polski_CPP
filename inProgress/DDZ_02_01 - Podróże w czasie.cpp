#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int p;
	cin >> p;

	int* x_budynku = new int[p];
	int* y_budynku = new int[p];
	int* numer_budynku = new int[p];
	int* mieszkancy_budynku = new int[p];

	for (int i = 0; i < p; i++)
	{
		cin >> x_budynku[i] >> y_budynku[i] >> numer_budynku[i] >> mieszkancy_budynku[i];
	}

	int n;
	cin >> n;

	int* x_zrzutu = new int[n];
	int* y_zrzutu = new int[n];
	int* promien_bomby = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> x_zrzutu[i] >> y_zrzutu[i] >> promien_bomby[i];
	}

	int* numery = new int[p]; // numery budynków, które powinny zostać ewakuowane podczas danego nalotu
	int* wynik = new int[n]; // łączna ilość ewakuowanych podczas danego nalotu
	int* kontrolna = new int[n]; // kontrolna ilość budynków do ewakuowania podczas danego nalotu

	for (int i = 0; i < n; i++)
	{
		wynik[i] = 0;
		kontrolna[i] = 0;

		for (int j = 0; j < p; j++)
		{
			if (n > 1)
			{

			}

			if (pow(x_budynku[j] - x_zrzutu[i], 2) + pow(y_budynku[j] - y_zrzutu[i], 2) <= pow(promien_bomby[i], 2))
			{
				kontrolna[i]++;
				wynik[i] += mieszkancy_budynku[j];
				numery[j] = numer_budynku[j];
			}
		}
	}


	for (int i = 0; i < n; i++)
	{
		if (kontrolna[i] == 0)
		{
			cout << "NULL";
		}
		else
		{
			for (int j = 0; j < p; j++)
			{
				cout << numery[j] << " ";
			}
			cout << endl;

			cout << wynik[i];
		}
		cout << endl;
	}

	return 0;
}