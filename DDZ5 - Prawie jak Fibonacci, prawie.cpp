#include <iostream>

using namespace std;

int main()
{
	int ile, wynik = 0;
	cin >> ile;

	int* liczba = new int[ile];

	for (int i = 0; i < ile; i++)
	{
		cin >> liczba[i];

	}

	for (int j = 2; j <= ile; j++)
	{
		if (liczba[j - 1] + liczba[j - 2] == liczba[j])
		{
			wynik++;
		}
	}

	cout << wynik << endl;
	//delete[] liczba;

	return 0;
}