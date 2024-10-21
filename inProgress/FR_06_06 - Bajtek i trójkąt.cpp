#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int testy;
	cin >> testy;
	while (testy--)
	{
		double a, b, c, d;
		scanf("%lf, %lf, %lf, %lf,", a, b, c, d);
		double m = c + d;


		double x = a * a * c;
		double y = b * b * d;
		double z = m * d * c;

		double wynik = sqrt((x + y - z) / m);
		//Twierdzenie Stewarta
		//double x = sqrt(((a * a * c) + (b * b * d) - (m * (d * c))) / (m));
		printf("%.2lf", d);
	}

	return 0;
}