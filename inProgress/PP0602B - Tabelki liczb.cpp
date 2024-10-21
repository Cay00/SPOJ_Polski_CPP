#include <iostream>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	for (int i = 0; i < testy; i++)
	{
		int x, y;
		cin >> x >> y;

		int* tab = new int[x * y];

		for (int j = 0; j < x * y; j++)
		{
			cin >> tab[j];
		}

		int start = 0, koniec = 0;

		for (int j = 0; j < x; j++)
		{
			if (j == 0)
			{
				for (int k = 1; k < y; k++) cout << tab[k] << " ";
				cout << tab[2 * y - 1] << endl;
			}
			else if (j == x - 1)
			{
				cout << tab[(x - 1) * y - y] << " ";
				for (int k = (x - 1) * y; k < x * y - 2; k++) cout << tab[k] << " ";
				cout << tab[x * y - 1];
			}
			else
			{
				cout << tab[(j - 1) * x] << " ";
				for (int k = j + y; k < 2 * y - 1; k++) cout << tab[k] << " ";
				cout << tab[(j + 2) * y - 1] << endl;
			}
		}
	}

	return 0;
}