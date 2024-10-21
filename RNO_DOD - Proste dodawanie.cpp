#include <iostream>
using namespace std;

int main() {
	int t, n, liczba, wynik;
	int tt[100]; // max prob
	//	t - liczba prob
	//	n - ilosc liczb

	cin >> t;
	for (int i = 0; i < t; i++) {

		wynik = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> liczba;
			wynik = wynik + liczba;
		}

		tt[i] = wynik;
	}

	for (int k = 0; k < t; k++) {
		cout << tt[k] << "\n";
	}
}