#include <iostream>

using namespace std;

int main()
{
	int liczba = 0, n = 0, licznik = 0;

	while (cin >> liczba)
	{
		if (liczba == 42 && n == 1)
		{
			licznik++;
		}
		if (liczba != 42)
		{
			n = 1;
			cout << liczba << endl;
		}
		else {
			n = 0;
			cout << liczba << endl;
		}
		if (licznik == 3) {
			break;
		}
	}

	return 0;
}