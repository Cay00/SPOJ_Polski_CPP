#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
	float a, b, c;

	while (cin >> a >> b >> c)
	{

		if ((a == 0) && ((c - b) != 0)) {
			cout << "BR";
		}
		else if ((a == 0) && ((c - b) == 0)) {
			cout << "NWR";
		}
		else {
			float wynik = (c - b) / a;
			cout << fixed << setprecision(2) << wynik;
		}
		cout << endl;

	}
	return 0;
}