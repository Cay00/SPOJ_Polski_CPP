#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	while (testy--)
	{
		int x, y, a, b;
		cin >> x >> y >> a >> b;

		double p = x * y; // obszar pola
		double m = p;

		m *= (100 - a) * 0.01;
		//cout << wynik << endl;

		m /= (100 - b) * 0.01;
		//cout << wynik << endl;

		double delta = pow(x + y, 2) - 4 * (x * y - m);

		double pierw = sqrt(delta); // pierwiastek delty


		double wynik = ((-1 * (x + y)) + pierw) / 2;
		cout << fixed << setprecision(4) << wynik << endl;

	}

	return 0;
}