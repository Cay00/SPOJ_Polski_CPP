#include <iostream>
#include <string>

using namespace std;

int main()
{
	string linia;

	int* znaki = new int[256]; // zbiór znaków

	for (int i = 0; i < 256; i++)
	{
		znaki[i] = 0;
	}

	// NIE PRZEKSZTAŁCA POLSKICH ZNAKÓW NA KODY ASCII

	while (getline(cin, linia))
	{
		for (int i = 0; i < linia.length(); i++)
		{
			znaki[(int)linia[i]]++;
		}
		znaki[10]++;
	}

	for (int i = 0; i < 256; i++)
	{
		if (znaki[i] != 0)
		{
			cout << i << " " << znaki[i] << endl;
		}
	}

	return 0;
}