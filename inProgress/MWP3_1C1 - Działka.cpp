#include <iostream>

using namespace std;

int NWD(int a, int b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a;
}

int main()
{
	int proby, a, b;

	cin >> proby;

	for (int i = 1; i <= proby; i++) {
		cin >> a >> b;
		if (a == b)
		{
			a /= 2;
			b /= 2;
			cout << NWD(a, b) << endl;
		}
		else
		{
			cout << NWD(a, b) << endl;
		}
	}

	return 0;
}