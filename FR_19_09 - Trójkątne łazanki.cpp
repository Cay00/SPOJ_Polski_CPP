#include <iostream>
#include <algorithm>
#include <set>
#include <tuple>


using namespace std;

int main() {

	int test;
	cin >> test;

	set<tuple<int, int, int>> trojkaty;

	for (int i = 0; i < test; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		int boki[3] = { a, b, c };
		sort(boki, boki + 3);

		// Inicjalizujemy trójkę boków
		tuple<int, int, int> trojka = make_tuple(boki[0], boki[1], boki[2]);

		// Sprawdzamy, czy taka trójka już istnieje w zbiorze
		if (trojkaty.find(trojka) != trojkaty.end()) {
			cout << "Tak" << endl;
			return 0;
		}

		// Dodajemy nową unikalną trójkę do zbioru
		trojkaty.insert(trojka);
	}

	cout << "Nie" << endl;

	return 0;
}
