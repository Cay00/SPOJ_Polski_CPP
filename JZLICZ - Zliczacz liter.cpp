#include <iostream>
#include <string>

using namespace std;

int main()
{
	int linie;
	cin >> linie;

	int** litery = new int* [52]; // zbiór liter alfabetu (duże i małe)

	for (int i = 0; i < 52; i++)
	{
		litery[i] = new int[1];
	}

	for (int i = 0; i < 52; i++)
	{
		litery[i][1] = 0;
	}

	string zdanie;

	for (int i = 0; i <= linie; i++)
	{
		getline(cin, zdanie);
		for (int j = 0; j < zdanie.length(); j++)
		{
			int x = 0;
			if (zdanie[j] >= 'a' && zdanie[j] <= 'z')
			{
				litery[(int)zdanie[j] - 97][1]++;
			}
			else if (zdanie[j] >= 'A' && zdanie[j] <= 'Z')
			{
				litery[(int)zdanie[j] - 65 + 26][1]++;
			}
		}
	}

	for (int j = 0; j < 52; j++)
	{
		if (litery[j][1] > 0)
		{
			char x = 0;

			if (j < 26)
			{
				x += j + 97;
				cout << x << " " << litery[j][1] << endl;
			}
			else
			{
				x += j + 65 - 26;
				cout << x << " " << litery[j][1] << endl;
			}
		}
	}

	return 0;
}