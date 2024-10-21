#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b, c;
	double sciany, dach;

	cin >> a >> b >> c;

	sciany = ceil(((2 * a * c) + (2 * b * c)) / 5);
	dach = ceil(a * b / 3);

	cout << sciany + dach << endl;

	return 0;
}