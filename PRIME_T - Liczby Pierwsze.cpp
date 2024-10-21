#include <iostream>

using namespace std;

int main()
{
	int testy, liczba;
	cin >> testy;

	for (int i = 0; i < testy; i++)
	{
		cin >> liczba;
		int dzielnik = 2;

		if (liczba < 2)
		{
			cout << "NIE" << endl;
		}
		else {
			while (dzielnik <= liczba)
			{
				if (liczba % dzielnik == 0)
				{
					if (liczba == dzielnik)
					{
						cout << "TAK" << endl;
					}
					else
					{
						cout << "NIE" << endl;
						break;
					}
				}
				dzielnik++;
			}
		}
	}

	return 0;
}