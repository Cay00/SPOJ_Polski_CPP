#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double promien, odleglosc;
	double pi = M_PI;
	double wynik;

	cin >> promien >> odleglosc;

	float promien2 = sqrt(pow(promien, 2) - pow(0.5 * odleglosc, 2));

	wynik = pi * (pow(promien, 2) - pow(0.5 * odleglosc, 2));

	cout << fixed << setprecision(2) << wynik << endl;

	return 0;
}