#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	while (N--)
	{
		int n, m, ks; // komnaty, przejścia, liczba księżniczek
		int *p = new int[m];
		int *k = new int[m];
		cin >> n >> m;

		for (int i = 0; i < m; i++)
		{
			cin >> p[i] >> k[i];
		}

		cin >> ks;
		int* kk = new int[ks]; // pokoje z księżniczkami
		for (int i = 0; i < ks; i++)
		{
			cin >> kk[i];
		}

		int odwiedzone = 0;
		for (int i = 0; i < n; i++)
		{
			// GRAF
		}
	}

	
	return 0;
}