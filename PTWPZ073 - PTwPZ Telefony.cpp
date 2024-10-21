#include <iostream>

using namespace std;

int numery(char litera)
{
	if ((litera == 'A') || (litera == 'B') || (litera == 'C')) return 2;
	if ((litera == 'D') || (litera == 'E') || (litera == 'F')) return 3;
	if ((litera == 'G') || (litera == 'H') || (litera == 'I')) return 4;
	if ((litera == 'J') || (litera == 'K') || (litera == 'L')) return 5;
	if ((litera == 'M') || (litera == 'N') || (litera == 'O')) return 6;
	if ((litera == 'P') || (litera == 'Q') || (litera == 'R') || (litera == 'S')) return 7;
	if ((litera == 'T') || (litera == 'U') || (litera == 'V')) return 8;
	if ((litera == 'W') || (litera == 'X') || (litera == 'Y') || (litera == 'Z')) return 9;
}

int main()
{
	int testy;
	string napis;
	int numer[21];
	cin >> testy;

	for (int i = 0; i < testy; i++)
	{
		cin >> napis;

		for (int j = 0; j < napis.length(); j++)
		{
			numer[j] = numery(napis[j]);
		}

		for (int k = 0; k < napis.length(); k++)
		{
			cout << numer[k];
		}
		cout << endl;
	}

	return 0;
}