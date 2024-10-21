#include <iostream>
#include <string>

using namespace std;

int main()
{
	string napis;

	while (getline(cin, napis))
	{
		int slowa = 1;

		int* spacje = new int[slowa + 2];
		for (int i = 0; i < napis.length(); i++)
		{
			if (napis[i] == ' ')
			{
				spacje[slowa] = i;
				slowa++;
			}
		}
		spacje[0] = -1;
		spacje[slowa] = napis.length();

		cout << napis[spacje[slowa - 1] + 1];
		for (int i = 0; i < slowa; i++)
		{
			if (i < slowa - 1)
			{
				for (int j = spacje[i + 1] - 1; j >= spacje[i] + 1; j--)
				{
					if (j == spacje[i] + 1) cout << ' ';
					cout << napis[j];
				}		
			}
			else
			{
				for (int j = spacje[i + 1] - 1; j >= spacje[i] + 2; j--)
				{
					cout << napis[j];
				}
			}
		}
		cout << endl;
	}

	return 0;
}