#include <iostream>

using namespace std;

int main()
{
	int proby;
	cin >> proby;

	for (int i = 1; i <= proby; i++) {
		int n, x, y;
		cin >> n >> x >> y;
		for (int a = 1; a < n; a++) {
			if ((a % x == 0) && (a % y != 0)) {
				cout << a << " ";
			}
		}
		cout << endl;
	}

	return 0;
}