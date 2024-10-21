#include <iostream>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	string instrukcja;
	char znak; int liczba;
	int ile = 0;

	char* napis = new char[ile];

	for (int i = 0; i < testy; i++)
	{
		cin >> instrukcja;

		if (instrukcja == "DODAJ")
		{
			cin >> znak;
			napis[i] = znak;
			ile++;
		}
		else if (instrukcja == "USUN")
		{
			cin >> liczba;
			if (i > liczba)
			{
				i = i - liczba - 1;
				testy = testy - liczba - 1;
				ile -= liczba;
			}
			else
			{
				testy -= i + 1;
				i = -1;
				ile = 0;
			}
		}
		else if (instrukcja == "ZAMIEN")
		{
			cin >> znak;
			if (i > 0)
			{
				napis[i - 1] = znak;
				i--;
				testy--;
			}
		}


	}
	for (int i = 0; i < ile; i++)
	{
		if (napis[i] >= 'A' && napis[i] <= 'Z')
		{
			cout << napis[i];
		}
	}

	cout << endl;

	return 0;
}