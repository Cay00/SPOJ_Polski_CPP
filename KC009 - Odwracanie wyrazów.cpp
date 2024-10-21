#include <iostream>
#include <string>

using namespace std;

int main()
{
	string wyraz;

	while (cin >> wyraz) {

		int dlugosc = wyraz.length();

		for (int i = dlugosc - 1; i >= 0; i--) {
			cout << wyraz[i];
		}
		cout << endl;
	}

	return 0;
}