#include <iostream>
#include <string>

using namespace std;

int main()
{
	int* tab = new int[26];
	for (int i = 0; i < 26; i++)
	{
		tab[i] = 0;
	}

	string linia;
	cin >> linia;

	for (int i = 0; i < linia.length(); i++)
	{
		tab[linia[i] - 97]++;
	}

	int niezgodny = 0;
	int suma = 0;

	for (int i = 0; i < 26; i++)
	{
		suma += tab[i];
		if (tab[i] < 1) niezgodny++;
	}
	
	if (suma % 26 == 0) cout << "PANGRAM PERFEKCYJNY" << endl;
	else if (niezgodny >= 1) cout << "NIE" << endl;
	else cout << "PANGRAM" << endl;

	return 0;
}