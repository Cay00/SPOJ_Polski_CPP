#include <iostream>

using namespace std;

int main()
{
	int szukana, ile, liczba, powtorzenia;

	while (cin >> szukana) {
		cin >> ile;
		powtorzenia = 0;
		for (int i = 0; i < ile; i++) {
			cin >> liczba;
			if (liczba == szukana) {
				powtorzenia += 1;
			}
		}
		cout << powtorzenia << endl;
	}

	return 0;
}