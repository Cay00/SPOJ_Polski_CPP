#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c;

	while (cin >> a >> b >> c)
	{
		int najdluzszy = 0;
		int bok_1 = 0;
		int bok_2 = 0;

		if (a >= najdluzszy)
		{
			najdluzszy = a;
			bok_1 = b;
			bok_2 = c;
		}
		if (b >= najdluzszy)
		{
			najdluzszy = b;
			bok_1 = a;
			bok_2 = c;
		}
		if (c >= najdluzszy)
		{
			najdluzszy = c;
			bok_1 = a;
			bok_2 = b;
		}

		double cos = (pow(bok_1, 2) + pow(bok_2, 2) - pow(najdluzszy, 2)) / (2 * bok_1 * bok_2);

		if (bok_1 + bok_2 <= najdluzszy)
		{
			cout << "brak" << endl;
		}
		else if ((cos < -1) || (cos > 1))
		{
			cout << "brak" << endl;
		}
		else if (cos == 0)
		{
			cout << "prostokatny" << endl;
		}
		else if (cos > 0)
		{
			cout << "ostrokatny" << endl;
		}
		else if (cos < 0)
		{
			cout << "rozwartokatny" << endl;
		}
	}

	return 0;
}