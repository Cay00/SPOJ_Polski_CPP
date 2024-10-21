#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	string numer;
	int wyjscie[4];

	for (int i = 0; i < 4; i++)
	{
		int suma = 0;
		int x = 0;
		cin >> numer;
		for (int j = numer.length() - 1; j >= 0; j--)
		{
			if (numer[j] == '1')
			{
				suma += pow(2, x);
			}
			x++;
		}
		wyjscie[i] = suma;
	}

	for (int i = 0; i < 4; i++)
	{
		if (i == 2)cout << ":";
		cout << wyjscie[i];
	}
	cout << endl;

	return 0;
}