#include <iostream>
#include <string>

using namespace std;

int main()
{
	string napis;

	while (getline(cin, napis))
	{

		for (int i = 0; i < napis.length(); i++)
		{
			if (napis[i] == ' ')
			{
				if (napis[i + 1] >= 'A' && napis[i + 1] <= 'Z') {}
				else
				{

					if (napis[i + 1] != ' ') napis[i + 1] -= 32;
				}
			}
		}

		for (int i = 0; i < napis.length(); i++)
		{
			if (napis[i] != ' ')
			{
				cout << napis[i];
			}
		}

		cout << endl;
	}

	return 0;
}
