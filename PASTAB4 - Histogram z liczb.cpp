#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int liczba, max = 0;
	float szerokosc = 30;

	float liczba_tab[21];
	for (int i = 0; i < 21; i++)
	{
		liczba_tab[i] = 0;
	}

	while (cin >> liczba)
	{
		liczba_tab[liczba + 10]++;
		if (liczba_tab[liczba + 10] > max) max = liczba_tab[liczba + 10];
	}

	for (int i = 0; i < 21; i++)
	{
		float ile = round((szerokosc * liczba_tab[i]) / max);

		if (i == 0)
		{
			cout << i - 10 << ":|";
			for (int j = 0; j < ile; j++) cout << "*";
			for (int j = 0; j < szerokosc - ile; j++) cout << " ";
			cout << "|" << endl;
		}
		else if ((i > 0 && i < 10) || (i == 20))
		{
			cout << " " << i - 10 << ":|";
			for (int j = 0; j < ile; j++) cout << "*";
			for (int j = 0; j < szerokosc - ile; j++) cout << " ";
			cout << "|" << endl;
		}

		else if (i >= 10 && i < 20)
		{
			cout << "  " << i - 10 << ":|";
			for (int j = 0; j < ile; j++) cout << "*";
			for (int j = 0; j < szerokosc - ile; j++) cout << " ";
			cout << "|" << endl;
		}
	}

	return 0;
}