#include <iostream>
#include <string>

using namespace std;

int main()
{
	string linia;
	string testy;

	getline(cin, testy);

	while (getline(cin, linia))
	{
		int wynik = 0;

		for (int i = 1; i < linia.length(); i++)
		{
			if (linia[i] == '*')
			{
				if (i > 3)
				{
					wynik += (int)linia[0] - 48;
					wynik += ((linia[i - 2] - 48) * (linia[i + 2] - 48));
				}
				else
				{
					wynik += ((linia[i - 2] - 48) * (linia[i + 2] - 48));
				}
			}
		}

		for (int i = 0; i < linia.length(); i++)
		{
			if (linia[i] == '+' || linia[i] == '-')
			{
				if (linia[i + 4] == '*')
				{
					i += 6;
				}
				else
				{
					if (linia[i] == '+') wynik += (int)linia[i + 2] - 48;
					else if (linia[i] == '-') wynik -= (int)linia[i + 2] - 48;
				}
			}
		}

		if (wynik % 2 == 0) cout << "TAK" << endl;
		else cout << "NIE" << endl;
	}

	return 0;
}