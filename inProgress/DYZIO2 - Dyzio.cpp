#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	while (testy--)
	{
		int min, max, wynik = 0;
		cin >> min >> max;

		int n = max;
		bool* liczby = new bool[n + 1];

		for (int i = 0; i <= max; i++)
		{
			liczby[i] = true;
		}

		liczby[1] = false;

		for (int i = 2; i <= sqrt(max); i++)
		{
			if (liczby[i] == true)
			{
				for (int j = i + i; j <= max; j += i)
				{
					liczby[j] = false;
				}
			}
		}

		for (int i = min; i <= max; i++)
		{
			if (liczby[i] == true) wynik++;
		}
		cout <<wynik << endl;
	}

	return 0;
}