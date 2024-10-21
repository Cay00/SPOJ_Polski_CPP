#include <iostream>

using namespace std;

int main()
{
	int testy;
	string liczba;

	while (cin >> liczba)
	{
		if (liczba == "0")
		{
			break;
		}
		else
		{
			int suma_cyfr = 0;
			int dlugosc = liczba.length();

			for (int i = 0; i < dlugosc; i++)
			{
				if (liczba[i] != '0')
				{
					suma_cyfr += liczba[i] - 48;
				}
			}

			if ((liczba[dlugosc - 1] == '0' || liczba[dlugosc - 1] == '5') && (suma_cyfr % 3 == 0))
			{
				cout << "TAK" << endl;
			}
			else
			{
				cout << "NIE" << endl;
			}
		}

	}

	return 0;
}