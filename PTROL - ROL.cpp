#include <iostream>

using namespace std;

int main()
{
	int testy, cyfry, liczba[101];
	cin >> testy;

	for (int i = 0; i < testy; i++)
	{
		cin >> cyfry;
		for (int i = 0; i < cyfry; i++)
		{
			cin >> liczba[i];
		}
		for (int i = 0; i < cyfry; i++)
		{
			cout << liczba[i] << " ";
		}
		cout << liczba[0] << " " << endl;
	}

	return 0;
}