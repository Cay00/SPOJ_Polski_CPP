#include <iostream>
#include <string>

using namespace std;

int main()
{
	string napis;

	while (getline(cin, napis))
	{
		int x = 0;

		for (int i = 0; i < napis.length(); i++)
		{
			if (napis[i] == '<')  x = 1;
			if (napis[i] == '>') x = 0;

			if (x == 1)
			{
				if (napis[i] >= 'a' && napis[i] <= 'z') napis[i] -= 32;
			}

		}
		cout << napis << endl;
	}

	return 0;
}