#include <iostream>

using namespace std;

int main()
{
	int testy;
	cin >> testy;
	int liczba;

	for (int i = 0; i < testy; i++)
	{
		int kroki = 0;

		cin >> liczba;

		for (;;)
		{
			if (liczba == 1)
			{
				cout << kroki << endl;
				break;
			}
			else if (liczba % 2 == 0)
			{
				liczba = liczba / 2;
				kroki++;
			}
			else
			{
				liczba = 3 * liczba + 1;
				kroki++;
			}
		}
	}

	return 0;
}