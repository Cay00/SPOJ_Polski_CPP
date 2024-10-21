#include <iostream>

using namespace std;

int main()
{
	int proby, osoby, cukierki, x, y;
	//	x - na ucznia
	//	y - reszta
	cin >> proby;

	for (int i = 1; i <= proby; i++) {
		cin >> osoby >> cukierki;
		if (osoby == 1) {
			cout << "TAK" << endl;
		}
		else {
			x = cukierki / (osoby - 1);
			y = cukierki - x * (osoby - 1);

			if (y == 0) {
				cout << "NIE" << endl;
			}
			else {
				cout << "TAK" << endl;
			}
		}
	}

	return 0;
}