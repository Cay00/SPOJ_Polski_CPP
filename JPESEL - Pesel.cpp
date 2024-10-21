#include <iostream>
#include <string>

using namespace std;

int main()
{
	int testy, suma;
	string pesel;
	int cyfra[11];

	cin >> testy;
	for (int i = 0; i < testy; i++)
	{
		cin >> pesel;
		for (int i = 0; i <= 10; i++)
		{
			cyfra[i] = pesel[i];
		}
		suma = cyfra[0] * 1 + cyfra[1] * 3 + cyfra[2] * 7 +
			cyfra[3] * 9 + cyfra[4] * 1 + cyfra[5] * 3 +
			cyfra[6] * 7 + cyfra[7] * 9 + cyfra[8] * 1 +
			cyfra[9] * 3 + cyfra[10] * 1;

		if (suma > 0)
		{
			if (suma % 10 == 0)
			{
				cout << "D" << endl;
			}
			else
			{
				cout << "N" << endl;
			}
		}
		else
		{
			cout << "N" << endl;
		}
	}

	return 0;
}