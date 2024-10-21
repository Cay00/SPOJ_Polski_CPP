#include <iostream>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	int n, m;
	string lancuch;

	while (testy--)
	{
		int dlugosc = 0;
		char* wyjscie = new char[dlugosc];

		cin >> n;
		while (n--)
		{
			cin >> m;
			cin >> lancuch;

			dlugosc += lancuch.length();

			if (m == 0) // BŁĄD GDZIEŚ PRZY m = 0
			{
				int x = 0;
				for (int i = dlugosc - 1; i >= 0; i--)
				{
					wyjscie[i] = wyjscie[x];
					x++;
				}
				for (int i = m; i < m + lancuch.length(); i++)
				{
					wyjscie[i] = lancuch[i - m];
				}
			}
			else
			{
				if (dlugosc - lancuch.length() == 0)
				{
					for (int i = 0; i < lancuch.length(); i++)
					{
						wyjscie[dlugosc - lancuch.length() + i] = lancuch[i];
					}
				}
				else
				{
					for (int i = dlugosc - 1; i >= m; i--)
					{
						wyjscie[i] = wyjscie[i - lancuch.length()];
					}

					for (int i = m; i < m + lancuch.length(); i++)
					{
						wyjscie[i] = lancuch[i - m];
					}
				}
			}
		}

		for (int i = 0; i < dlugosc; i++)
		{
			cout << wyjscie[i];
		}
		cout << endl;

	}

	return 0;
}