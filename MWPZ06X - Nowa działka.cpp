#include <iostream>

using namespace std;

int main()
{
	int d, x;

	cin >> d;

	for (int i = 1; i <= d; i++) {
		cin >> x;
		int pole = x * x;
		cout << pole << endl;
	}

	return 0;
}