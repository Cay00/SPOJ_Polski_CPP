#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int testy, ludzie, ciastka_pudelko, czas[10001];
	cin >> testy;

	for (int i = 0; i < testy; i++) {
		cin >> ludzie >> ciastka_pudelko;
		int doba = 86400, ciastka_max;
		float ciastka_suma = 0, do_kupna;

		for (int i = 0; i < ludzie; i++) {
			cin >> czas[i];

			ciastka_max = doba / czas[i];
			ciastka_suma += ciastka_max;
		}
		do_kupna = ciastka_suma / ciastka_pudelko;
		cout << ceil(do_kupna) << endl;

	}

	return 0;
}