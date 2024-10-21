#include <iostream>

using namespace std;

int main()
{
	int tests, ile, liczba[101];
	cin >> tests;

	for (int i = 1; i <= tests; i++) {
		cin >> ile;
		for (int i = 1; i <= ile; i++) {
			cin >> liczba[i];
		}
		for (int k = 2; k <= ile; k += 2) {
			cout << liczba[k] << " ";
		}
		for (int k = 1; k <= ile; k += 2) {
			cout << liczba[k] << " ";
		}
		cout << endl;

	}

	return 0;
}