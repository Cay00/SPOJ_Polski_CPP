#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	//srednia wieku
	float a1, b1, c1, d1;

	//liczba uczestnikow
	float a2, b2, c2, d2;

	// a, c -- mezczyzni
	// b, d -- kobiety
	cin >> a1 >> b1 >> c1 >> d1;
	cin >> a2 >> b2 >> c2 >> d2;

	float sredniaM = (a1 * a2 + c1 * c2) / (a2 + c2);
	float sredniaK = (b1 * b2 + d1 * d2) / (b2 + d2);
	float sredniaMK = (a1 * a2 + c1 * c2 + b1 * b2 + d1 * d2) / (a2 + c2 + b2 + d2);

	cout << "K16K36: " << fixed << setprecision(2) << sredniaK << endl;
	cout << "M16M36: " << fixed << setprecision(2) << sredniaM << endl;
	cout << "M16K16M36K36: " << fixed << setprecision(2) << sredniaMK << endl;

	return 0;
}