#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int a, b;
	scanf_s("%lld %lld", &a, &b);

	long long int c, d;
	while (scanf_s("%lld %lld", &c, &d))
	{
		int wynik = 0;

		/*for (int i = c; i <= d; i++)
		{
			if (i % 3 == 0 || i % 5 == 0) wynik++;
		}*/

		// PRZEKROCZONO LIMIT CZASU

		wynik += (d + a) / a - (c + a - 1) / a;
		wynik += (d + b) / b - (c + b - 1) / b;
		for (int i = c; i <= d; i++) if (i % a == 0 && i % b == 0) wynik--;

		printf("%d \n", wynik);
	}

	return 0;
}