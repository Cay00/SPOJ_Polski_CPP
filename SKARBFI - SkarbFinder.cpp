#include <iostream>

using namespace std;

int main()
{
	int testy, wskazowki; // testy - zestawy danych     // wskazowki - zestawy wskazówek
	cin >> testy;

	for (int i = 0; i < testy; i++)
	{
		cin >> wskazowki;

		int pion = 0, poziom = 0; // ile ruchow w danej osi

		int kierunek, kroki;
		for (int j = 0; j < wskazowki; j++)
		{
			cin >> kierunek >> kroki;

			switch (kierunek)
			{
			case 0:
				pion += kroki;
				break;
			case 1:
				pion -= kroki;
				break;
			case 2:
				poziom -= kroki;
				break;
			case 3:
				poziom += kroki;
				break;
			}
		}

		if (pion > 0)
		{
			cout << "0 " << pion << endl;
			if (poziom > 0)
			{
				cout << "3 " << poziom << endl;
			}
			else if (poziom < 0)
			{
				cout << "2 " << poziom << endl;
			}
		}
		else if (pion < 0)
		{
			cout << "1 " << pion * (-1) << endl;
			if (poziom > 0)
			{
				cout << "3 " << poziom << endl;
			}
			else if (poziom < 0)
			{
				cout << "2 " << poziom * (-1) << endl;
			}
		}
		else
		{
			if (poziom > 0)
			{
				cout << "3 " << poziom << endl;
			}
			else if (poziom < 0)
			{
				cout << "2 " << poziom * (-1) << endl;
			}
			else
			{
				cout << "studnia" << endl;
			}
		}
	}

	return 0;
}