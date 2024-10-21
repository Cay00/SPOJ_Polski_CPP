#include <iostream>

using namespace std;

int main()
{
	int wagi, testy;
	cin >> wagi >> testy;

	int* wagiM = new int[wagi];
	int* wagiN = new int[wagi];
	int x;

	for (int i = 0; i < wagi; i++)
	{
		cin >> wagiM[i];
	}
	for (int i = 0; i < wagi; i++)
	{
		cin >> wagiN[i];
	}


	for (int i = 0; i < testy; i++)
	{
		int wynik = 0;
		cin >> x;
		for (int j = 0; j < wagi; j++)
		{
			for (int k = 0; k < wagi; k++)
			{
				if (wagiM[j] + wagiN[k] == x)
				{
					wynik++;
					break;
				}
			}
		}
		if (wynik > 0) cout << "TAK" << endl;
		else cout << "NIE" << endl;
	}

	return 0;
}