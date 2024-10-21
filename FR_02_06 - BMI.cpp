#include <iostream>
#include <string>

using namespace std;

int main()
{
	int testy;
	float masa[101], wzrost[101], wynik[101];
	string imie[101];
	cin >> testy;

	for (int i = 1; i <= testy; i++)
	{
		cin >> imie[i] >> masa[i] >> wzrost[i];
		wynik[i] = masa[i] / ((wzrost[i] / 100) * (wzrost[i] / 100));
	}
	/*for (int i = 1; i <= testy; i++)
	{
		cout << imie[i] << " " << wynik[i] << endl;
	}*/

	// wypisywanie danych do konsoli
	cout << endl;
	cout << "niedowaga" << endl;
	for (int i = 1; i <= testy; i++)
	{
		if (wynik[i] < 18.5)
		{
			cout << imie[i] << endl;
		}
	}
	cout << endl;
	cout << "wartosc prawidlowa" << endl;
	for (int i = 1; i <= testy; i++)
	{
		if ((wynik[i] >= 18.5) && (wynik[i] < 25))
		{
			cout << imie[i] << endl;
		}
	}
	cout << endl;
	cout << "nadwaga" << endl;
	for (int i = 1; i <= testy; i++)
	{
		if (wynik[i] >= 25)
		{
			cout << imie[i] << endl;
		}
	}

	return 0;
}