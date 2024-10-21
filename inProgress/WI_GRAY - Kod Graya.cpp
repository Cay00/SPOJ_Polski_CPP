#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	unsigned long long int bity, liczba;
	cin >> bity >> liczba;
	char* dwojkowy = new char[bity];

	// zmiana na binarny
	int suma = 0;
	for (int i = 0; i < bity; i++)
	{
		if (suma + pow(2, bity - i - 1) <= liczba)
		{
			dwojkowy[i] = '1';
			suma += pow(2, bity - i - 1);
		}
		else dwojkowy[i] = '0';
	}

	for (int i = bity - 1; i >= 1; i--)
	{
		if ((int)dwojkowy[i] - 48 + (int)dwojkowy[i - 1] - 48 == 1) dwojkowy[i] = '1';
		else dwojkowy[i] = '0';
	}

	for (int i = 0; i < bity; i++)
	{
		cout << dwojkowy[i];
	}


	return 0;
}