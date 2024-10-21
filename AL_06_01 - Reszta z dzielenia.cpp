#include <iostream>

using namespace std;

int main()
{
	int proby, a, b;
	cin >> proby;

	for (int i = 0; i < proby; i++) {

		cin >> a >> b;
		int wynik = a % b;

		if (wynik < 0 && b>0) {
			wynik += b;
		}
		else if (wynik < 0 && b < 0) {
			wynik += -b;
		}
		cout << wynik << endl;
	}

	return 0;
}