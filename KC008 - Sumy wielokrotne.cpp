#include <iostream>

using namespace std;

int main()
{
	long long liczba, suma = 0, wynik = 0;
	while (cin >> liczba)
	{
		if (liczba != 0)
		{
			suma += liczba;

		}
		else
		{
			cout << suma << endl;
			wynik += suma;
			suma = 0;
		}
	}
	cout << wynik << endl;

	return 0;
}
