#include <iostream>

using namespace std;

int main()
{
	int proby, c, k, w;
	//	c - liczba kotow
	//	k - udwig Harrego
	//	w - waga paczka
	cin >> proby;

	for (int i = 1; i <= proby; i++) {
		cin >> c >> k >> w;
		if (c * w <= k) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	return 0;
}