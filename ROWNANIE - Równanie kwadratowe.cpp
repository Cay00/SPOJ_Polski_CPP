#include <iostream>

using namespace std;

float delta(float a, float b, float c) {

	float delta = (b * b) - (4 * a * c);

	return delta;
}

int main()
{
	float a, b, c;

	while (cin >> a >> b >> c) {
		if (delta(a, b, c) > 0) {
			cout << "2" << endl;
		}
		else if (delta(a, b, c) == 0) {
			cout << "1" << endl;
		}
		else if (delta(a, b, c) < 0) {
			cout << "0" << endl;
		}
	}

	return 0;
}