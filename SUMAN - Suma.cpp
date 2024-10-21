#include <iostream>

using namespace std;

int main()
{
	int liczba;

	for (int i = 1; i <= 10; i++) {
		int suma = 0;

		cin >> liczba;

		for (int i = 1; i <= liczba; i++) {
			suma += i;
		}

		cout << suma << endl;
	}

	return 0;
}