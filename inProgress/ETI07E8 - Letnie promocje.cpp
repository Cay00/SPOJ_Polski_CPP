#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	string* wyraz = new string[n]; // wyrazy
	string* liczba = new string[k]; // liczby

	string* deszyf = new string[n]; // liczba przekształcona z wyrazu

	for (int i = 0; i < n; i++)
	{
		cin >> wyraz[i];

		string* wyjscie = new string[wyraz[i].length()];
		string x = wyraz[i];

		for (int j = 0; j < wyraz[i].length(); j++)
		{
			if (wyraz[i][j] == 'a' || wyraz[i][j] == 'b' || wyraz[i][j] == 'c') x[j] = '2';
			else if (wyraz[i][j] == 'd' || wyraz[i][j] == 'e' || wyraz[i][j] == 'f') x[j] = '3';
			else if (wyraz[i][j] == 'g' || wyraz[i][j] == 'h' || wyraz[i][j] == 'i') x[j] = '4';
			else if (wyraz[i][j] == 'j' || wyraz[i][j] == 'k' || wyraz[i][j] == 'l') x[j] = '5';
			else if (wyraz[i][j] == 'm' || wyraz[i][j] == 'n' || wyraz[i][j] == 'o') x[j] = '6';
			else if (wyraz[i][j] == 'p' || wyraz[i][j] == 'q' || wyraz[i][j] == 'r' || wyraz[i][j] == 's') x[j] = '7';
			else if (wyraz[i][j] == 't' || wyraz[i][j] == 'u' || wyraz[i][j] == 'v') x[j] = '8';
			else if (wyraz[i][j] == 'w' || wyraz[i][j] == 'x' || wyraz[i][j] == 'y' || wyraz[i][j] == 'z') x[j] = '9';
		}

		deszyf[i] = x;
	}

	//sort(wyraz, wyraz + n);

	for (int i = 0; i < k; i++) // wczytywanie liczb
	{
	    cin >> liczba[i];

		int wynik = 0;

		string* wyjscie = new string[n];
		for (int j = 0; j < n; j++) wyjscie[j] = " ";

		for (int j = 0; j < n; j++)
		{
			if (deszyf[j] == liczba[i])
			{
				wynik++;
				//cout << wyraz[j] << " ";	
				wyjscie[j] = wyraz[j];
			}
			if (j == n - 1 && wynik == 0)
			{
				cout << "BRAK";
				break;
			}
		}

		sort(wyjscie, wyjscie + wynik);

		for (int j = 0; j < n; j++)
		{
			if (wyjscie[j] != " ")
			{
				cout << wyjscie[j] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}