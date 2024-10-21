#include <iostream>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	string* imie = new string[testy];
	string* nazwisko = new string[testy];
	string* czas_text = new string[testy];
	int* czas = new int[testy];
	//bool* final = new bool[testy]; // czy wygrał 

	//for (int i = 0; i < testy; i++)
	//{
	//	final[i] = false;
	//}

	for (int i = 0; i < testy; i++)
	{
		cin >> imie[i] >> nazwisko[i] >> czas_text[i];

		czas[i] = 0;
		for (int j = 0; j < czas_text[i].length(); j++)
		{
			switch (j)
			{
			case 0:
				czas[i] += ((int)czas_text[i][j] - 48) * 10 * 3600;
				break;
			case 1:
				czas[i] += ((int)czas_text[i][j] - 48) * 3600;
				break;
			case 3:
				czas[i] += ((int)czas_text[i][j] - 48) * 10;
				break;
			case 4:
				czas[i] += ((int)czas_text[i][j] - 48);
				break;
			}
		}
	}

	int max = 90000;
	for (int i = 0; i < testy; i++)
	{
		if (czas[i] <= max)
		{
			max = czas[i];
		}
	}

	for (int i = 0; i < testy; i++)
	{
		if (czas[i] == max)
		{
			cout << imie[i] << " " << nazwisko[i] << endl;
		}
	}

	/*for (int i = 0; i < testy; i++)
	{
		if (czas[i] <= max)
		{
			max = czas[i];

			if (czas[i] < max)
			{
				for (int j = 0; j < i; j++)
				{
					final[j] = false;
				}
			}
			else if (czas[i] == max)
			{
				final[i] = true;
			}
		}
	}

	for (int i = 0; i < testy; i++)
	{
		if (final[i] == true)
		{
			cout << imie[i] << " " << nazwisko[i] << " " << czas[i] << endl;
		}
	}*/

	return 0;
}