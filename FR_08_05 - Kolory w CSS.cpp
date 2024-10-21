#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	for (int a = 0; a < testy; a++)
	{
		string hexadecimal = "000000";
		string color = "#000000";

		for (int h = 0; h < 3; h++)
		{
			int liczba;
			int bity = 0;
			cin >> liczba;

			// ilość bitów w szesnastkowym
			if (liczba == 0) bity = 1;
			else
			{
				for (int i = 0; i < liczba; i++)
				{
					if (liczba == 0) bity = 1;
					else if (pow(2, i) > liczba)
					{
						bity = i;
						break;
					}
					else if (pow(2, i) == liczba)
					{
						bity = i + 1;
						break;
					}
				}
			}

			char* dwojkowy = new char[bity];

			// zmiana na binarny
			int suma = 0;
			for (int i = 0; i < bity; i++)
			{
				if (suma + pow(2, bity - i - 1) <= liczba)
				{
					dwojkowy[i] = '1';
					suma += pow(2, bity - i - 1);
				}
				else dwojkowy[i] = '0';
			}

			//// wypisywanie binarnego
			//for (int i = 0; i < bity; i++)
			//{
			//	cout << dwojkowy[i];
			//}
			//cout << " ";

			// zmiana na szesnastkowy
			float bity_float = bity;
			int czworki = ceil(bity_float / 4); // rozbicie na czwórki
			int* szesn_liczba = new int[czworki];
			for (int i = 0; i < czworki; i++)
			{
				szesn_liczba[i] = 0;
			}
			int zera = 0; // dopisanie '0' z przodu (do pełnych czwórek)
			if (czworki * 4 > bity)
			{
				zera = czworki * 4 - bity;
			}

			// zmiana binarnego na szesnastkowy (bez liter)
			int bit = 3;
			for (int i = 0; i < czworki; i++)
			{
				for (int j = i * 4; j < (i + 1) * 4; j++)
				{
					if (dwojkowy[j - zera] == '1') szesn_liczba[i] += pow(2, bit);
					bit--;
					if (bit < 0) bit = 3;
				}
			}

			// wypisywanie szesnastkowego
			/*for (int i = 0; i < czworki; i++)
			{
				cout << szesn_liczba[i];
			}
			cout << " ";*/

			// zmiana (int)szesn na string
			char* szesn = new char[czworki];
			for (int i = 0; i < czworki; i++)
			{
				if (szesn_liczba[i] == 0) szesn[i] = '0';
				if (szesn_liczba[i] == 1) szesn[i] = '1';
				if (szesn_liczba[i] == 2) szesn[i] = '2';
				if (szesn_liczba[i] == 3) szesn[i] = '3';
				if (szesn_liczba[i] == 4) szesn[i] = '4';
				if (szesn_liczba[i] == 5) szesn[i] = '5';
				if (szesn_liczba[i] == 6) szesn[i] = '6';
				if (szesn_liczba[i] == 7) szesn[i] = '7';
				if (szesn_liczba[i] == 8) szesn[i] = '8';
				if (szesn_liczba[i] == 9) szesn[i] = '9';
				if (szesn_liczba[i] == 10) szesn[i] = 'A';
				if (szesn_liczba[i] == 11) szesn[i] = 'B';
				if (szesn_liczba[i] == 12) szesn[i] = 'C';
				if (szesn_liczba[i] == 13) szesn[i] = 'D';
				if (szesn_liczba[i] == 14) szesn[i] = 'E';
				if (szesn_liczba[i] == 15) szesn[i] = 'F';
			}

			// kolor w systemie szesnastkowym (same liczby)
			for (int i = 0; i < czworki; i++)
			{
				if (czworki <= 1)
				{
					hexadecimal[h * 2 + 1] = szesn[0];
					hexadecimal[h * 2] = '0';

				}
				else
				{
					hexadecimal[h * 2 + i] = szesn[i];
				}
			}
		}

		// wyjściowa forma koloru 
		for (int i = 0; i < 6; i++)
		{
			color[i + 1] = hexadecimal[i];
		}

		// wypisywanie koloru
		if (color == "#000000") cout << "black" << endl;
		else if (color == "#C0C0C0") cout << "silver" << endl;
		else if (color == "#808080") cout << "gray" << endl;
		else if (color == "#FFFFFF") cout << "white" << endl;
		else if (color == "#800000") cout << "maroon" << endl;
		else if (color == "#FF0000") cout << "red" << endl;
		else if (color == "#800080") cout << "purple" << endl;
		else if (color == "#FF00FF") cout << " fuchsia" << endl;
		else if (color == "#008000") cout << "green" << endl;
		else if (color == "#00FF00") cout << "lime" << endl;
		else if (color == "#808000") cout << "olive" << endl;
		else if (color == "#FFFF00") cout << "yellow" << endl;
		else if (color == "#000080") cout << "navy" << endl;
		else if (color == "#0000FF") cout << "blue" << endl;
		else if (color == "#008080") cout << "teal" << endl;
		else if (color == "#00FFFF") cout << "aqua" << endl;
		else cout << color << endl;

	}

	return 0;
}