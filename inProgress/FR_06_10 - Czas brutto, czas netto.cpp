#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string* imie = new string[n];
	string* nazwisko = new string[n];
	string* czas_netto = new string[n];
	string* czas_brutto = new string[n];
	string* wyjscie = new string[n];
	int* czas_out = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> imie[i] >> nazwisko[i] >> czas_netto[i] >> czas_brutto[i];
		//czas_out[i] = "00:00:00";
		wyjscie[i] = "00:00:00";
	}

	for (int i = 0; i < n; i++)
	{
		//for (int j = 4; j >= 0; j--)
		//{
		//	char a = czas_netto[i][j + 3];
		//	char b = czas_brutto[i][j];

		//	if (a != ':')
		//	{
		//		if (a >= b) czas_out[i][j + 3] = a - b + 48;
		//		else
		//		{
		//			czas_out[i][j + 3] = (a + 10) - b + 48;
		//			if (czas_netto[i][6] == '0') 
		//			{
		//				czas_out[i][6] = '*';
		//				/*if (czas_out[i][4] == '0')
		//				{
		//					czas_out[i][4] = '9';
		//					if (czas_out[i][3] == '0')
		//					{
		//						czas_out[i][3] = '5';
		//						if (czas_out[i][1] == '0')
		//						{
		//							czas_out[i][1] = '9';
		//							if (czas_out[i][0] == '0')
		//							{
		//								czas_out[i][1]--;
		//							}
		//						}
		//					}
		//				}*/
		//			}

		//		}

		//	}
		//}

		int sekundy_netto = (czas_netto[i][0] - 48) * 10 * 60 * 60 + (czas_netto[i][1] - 48) * 60 * 60 + (czas_netto[i][3] - 48) * 10 * 60 + (czas_netto[i][4] - 48) * 60 + (czas_netto[i][6] - 48) * 10 + (czas_netto[i][7] - 48);
		int sekundy_brutto = (czas_brutto[i][0] - 48) * 10 * 60 + (czas_brutto[i][1] - 48) * 60 + (czas_brutto[i][3] - 48) * 10 + (czas_brutto[i][4] - 48);
		czas_out[i] = sekundy_netto - sekundy_brutto;

		int godziny = czas_out[i] / 3600;
		int minuty = (czas_out[i] - (godziny * 3600)) / 60;
		int sekundy = czas_out[i] - (godziny * 3600) - (minuty * 60);

		//cout << godziny << " " << minuty << " " << sekundy << endl;

		if (godziny >= 10) wyjscie[i][0] = godziny / 10;
		else if (godziny > 0 && godziny < 10)wyjscie[i][0] = godziny;

		if (minuty >= 10) wyjscie[i][3] = minuty / 10;
		else if (minuty > 0 && minuty < 10) wyjscie[i][4] = minuty;

		if (godziny >= 10) wyjscie[i][0] = godziny / 10;
		else if (godziny > 0 && godziny < 10)wyjscie[i][0] = godziny;

		cout << i + 1 << " " << imie[i] << " " << nazwisko[i] << " " << wyjscie[i] << " " << czas_netto[i] << endl;
	}

	return 0;
}