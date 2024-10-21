#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	string a, b;
	int testy;
	cin >> testy;


	while (testy--)
	{
		cin >> a >> b;
		if (a.length() == b.length())
		{
			int* wyjscie = new int[a.length() + 1];

			for (int i = a.length() - 1; i >= 0; i--)
			{
				wyjscie[i] = a[i] - 48 + b[i] - 48;
			}
			for (int i = 0; i < a.length(); i++)
			{
				for (int j = 1; j < a.length(); j++)
				{
					do
					{
						wyjscie[j - 1] = wyjscie[j - 1] + ceil(wyjscie[j] / 10);
						wyjscie[j] = wyjscie[j] % 10;
					} while (wyjscie[j] > 9);
				}
				cout << wyjscie[i];
			}
			cout << endl;
		}

		else if (a.length() < b.length())
		{
			int roznica = b.length() - a.length();

			int* wyjscie = new int[a.length() + 1];

			for (int i = b.length() - 1; i >= 0; i--)
			{
				if (i - roznica >= 0)
				{
					wyjscie[i] = a[i - roznica] - 48 + b[i] - 48;
				}
			}
			for (int i = 0; i < b.length(); i++)
			{
				for (int j = 1; j < b.length(); j++)
				{
					do
					{
						wyjscie[j - 1] = wyjscie[j - 1] + ceil(wyjscie[j] / 10);
						wyjscie[j] = wyjscie[j] % 10;
					} while (wyjscie[j] > 9);
				}
				
				for (int j = 0; j < roznica; j++)
				{
					wyjscie[j] = b[j] - 48;
				}

				cout << wyjscie[i];
			}
			cout << endl;
		}

		else if (a.length() > b.length())
		{
			int roznica = a.length() - b.length();

			int* wyjscie = new int[b.length() + 1];

			for (int i = a.length() - 1; i >= 0; i--)
			{
				if (i - roznica >= 0)
				{
					wyjscie[i] = b[i - roznica] - 48 + a[i] - 48;
				}
			}
			for (int i = 0; i < a.length(); i++)
			{
				for (int j = 1; j < a.length(); j++)
				{
					do
					{
						wyjscie[j - 1] = wyjscie[j - 1] + ceil(wyjscie[j] / 10);
						wyjscie[j] = wyjscie[j] % 10;
					} while (wyjscie[j] > 9);
				}

				for (int j = 0; j < roznica; j++)
				{
					wyjscie[j] = a[j] - 48;
				}

				cout << wyjscie[i];
			}
			cout << endl;
		}

	}
}