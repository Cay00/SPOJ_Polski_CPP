#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
	int ile;
	string napis;

	cin >> ile;
	cin >> napis;

	int dlugosc = napis.length();

	if (dlugosc <= ile) cout << napis << endl;
	else
	{
		for (int i = napis.length() - 1; i >= 0; i--) // usuwanie znaków nie będących literami i cyframi
		{
			if (isalpha(napis[i]) || isdigit(napis[i]) || (napis[i] == '$')) {}
			else
			{
				if (dlugosc == ile) break;
				napis[i] = ' ';
				dlugosc--;
			}
		}

		for (int i = napis.length() - 1; i >= 0; i--) // usuwanie cyfr
		{
			if (isdigit(napis[i]))
			{
				if (dlugosc == ile) break;
				napis[i] = ' ';
				dlugosc--;
			}
		}

		int x = -1;
		for (int i = 0; i < napis.length(); i++) // wyznaczanie pierwszej samogłoski
		{
			if ((napis[i] == 'A') || (napis[i] == 'E') || (napis[i] == 'I') || (napis[i] == 'O') || (napis[i] == 'U') || (napis[i] == 'Y') || (napis[i] == 'a') || (napis[i] == 'e') || (napis[i] == 'i') || (napis[i] == 'o') || (napis[i] == 'u') || (napis[i] == 'y'))
			{
				x = i;
				break;
			}
		}
		if ((x >= 0) && (x + 1 < napis.length()))
		{
			for (int i = x + 1; i < napis.length(); i++) // usuwanie samogłosek (z wyjątkiem pierwszej)
			{
				if ((napis[i] == 'A') || (napis[i] == 'E') || (napis[i] == 'I') || (napis[i] == 'O') || (napis[i] == 'U') || (napis[i] == 'Y') || (napis[i] == 'a') || (napis[i] == 'e') || (napis[i] == 'i') || (napis[i] == 'o') || (napis[i] == 'u') || (napis[i] == 'y'))
				{
					if (dlugosc == ile) break;
					napis[i] = ' ';
					dlugosc--;
				}
			}
		}

		for (int i = napis.length() - 2; i >= 0; i--) // usuwanie pozostałych znaków (od przedostatniego)
		{
			if (dlugosc == ile) break;
			if (napis[i] != ' ')
			{
				napis[i] = ' ';
				dlugosc--;
			}
		}
	}

	for (int i = 0; i < napis.length(); i++)
	{
		if (napis[i] != ' ') cout << napis[i];
	}
	cout << endl;

	return 0;
}