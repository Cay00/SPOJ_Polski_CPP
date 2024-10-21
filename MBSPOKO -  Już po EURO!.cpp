#include <iostream>

using namespace std;

int main()
{
	int x;
	for (int i = 1; i <= 100; i++) {
		cin >> x;

		if ((x % 3 == 0) && (x % 5 != 0)) {
			cout << "KOKO" << endl;
		}
		else if ((x % 5 == 0) && (x % 3 != 0)) {
			cout << "SPOKO" << endl;
		}
		else if ((x % 5 == 0) && (x % 3 == 0)) {
			cout << "SPOKOKOKO" << endl;
		}
		else {
			cout << x << endl;
		}
	}
	return 0;
}