#include <iostream>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	char x = getchar();

	for (int i = 0; i < testy; i++)
	{
		int wynik = getchar() - 48;
		int znak;

		while (znak = getchar())
		{
			if (znak == '+')
			{
				int liczba = getchar() - 48;
				wynik += liczba;
			}
			else if (znak == '-')
			{
				int liczba = getchar() - 48;
				wynik -= liczba;
			}
			else if (znak == '\n')
			{
				break;
			}
		}
		cout << wynik << endl;
	}

	return 0;
}