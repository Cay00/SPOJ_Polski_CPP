#include <iostream>

using namespace std;

int main()
{
	int testy;
	int a, b, wynik;
	cin >> testy;

	for (int i = 0; i < testy; i++)
	{
		cin >> a >> b;

		if (a == b)
		{
			wynik = a + b;
			cout << wynik << endl;
		}
		else
		{
			while (a != b)
			{
				while (a < b)
				{
					b = b - a;
				}
				while (a > b)
				{
					a = a - b;
				}
			}
			wynik = a + b;
			cout << wynik << endl;
		}
	}

	return 0;
}