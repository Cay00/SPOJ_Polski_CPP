#include <iostream>

using namespace std;

int main()
{
	int testy, ile_liczb;
	int liczba[101];

	cin >> testy;

	for (int i = 1; i <= testy; i++)
	{
		cin >> ile_liczb;

		for (int i = 1; i <= ile_liczb; i++) {
			cin >> liczba[i];
		}
		for (int j = ile_liczb; j >= 1; j--) {
			cout << liczba[j] << " ";
		}
		cout << endl;
	}

	return 0;
}