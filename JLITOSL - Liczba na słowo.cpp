#include <iostream>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	string liczba;

	while (testy--)
	{
		cin >> liczba;
		string* wyjscie = new string[liczba.length()];

		// rozbić na trójki (od nowa)

		if (liczba.length() == 1)
		{
			if (liczba == "1") cout << "jeden";
			else if (liczba == "2") cout << "dwa";
			else if (liczba == "3") cout << "trzy";
			else if (liczba == "4") cout << "cztery";
			else if (liczba == "5") cout << "piec";
			else if (liczba == "6") cout << "czesc";
			else if (liczba == "7") cout << "siedem";
			else if (liczba == "8") cout << "osiem";
			else if (liczba == "9") cout << "dziewiec";
		}
		else
		{
			int x = 0;

			for (int i = liczba.length() - 1; i >= 0; i--)
			{
				x++;

				// jednosci
				if ((x == 1 && liczba[i - 1] != '1') && (x % 3 == 1))
				{
					if (liczba[i] == '1') wyjscie[i] = "jeden";
					else if (liczba[i] == '2') wyjscie[i] = "dwa";
					else if (liczba[i] == '3') wyjscie[i] = "trzy";
					else if (liczba[i] == '4') wyjscie[i] = "cztery";
					else if (liczba[i] == '5') wyjscie[i] = "piec";
					else if (liczba[i] == '6') wyjscie[i] = "czesc";
					else if (liczba[i] == '7') wyjscie[i] = "siedem";
					else if (liczba[i] == '8') wyjscie[i] = "osiem";
					else if (liczba[i] == '9') wyjscie[i] = "dziewiec";

				}
				// nastki
				else if (x == 1 && liczba[i - 1] == '1')
				{
					if (liczba[i] == '1') wyjscie[i] = "jedenascie";
					else if (liczba[i] == '2') wyjscie[i] = "dwanascie";
					else if (liczba[i] == '3') wyjscie[i] = "trzynascie";
					else if (liczba[i] == '4') wyjscie[i] = "czternascie";
					else if (liczba[i] == '5') wyjscie[i] = "pietnascie";
					else if (liczba[i] == '6') wyjscie[i] = "czesnascie";
					else if (liczba[i] == '7') wyjscie[i] = "siedemnascie";
					else if (liczba[i] == '8') wyjscie[i] = "osiemnascie";
					else if (liczba[i] == '9') wyjscie[i] = "dziewietnascie";
					x++;
				}
				// dziesiatki
				else if (x % 2 == 0)
				{
					if (liczba[i] == '2') wyjscie[i] = "dwadziescia";
					else if (liczba[i] == '3') wyjscie[i] = "trzydziesci";
					else if (liczba[i] == '4') wyjscie[i] = "czterdziesci";
					else if (liczba[i] == '5') wyjscie[i] = "piecdziesiat";
					else if (liczba[i] == '6') wyjscie[i] = "czescdziesiat";
					else if (liczba[i] == '7') wyjscie[i] = "siedemdziesiat";
					else if (liczba[i] == '8') wyjscie[i] = "osiemdziesciat";
					else if (liczba[i] == '9') wyjscie[i] = "dziewiecdziesiac";
				}
				// setki
				else if (x % 3 == 0)
				{
					if (liczba[i] == '1') wyjscie[i] = "sto";
					else if (liczba[i] == '2') wyjscie[i] = "dwiescie";
					else if (liczba[i] == '3') wyjscie[i] = "trzysta";
					else if (liczba[i] == '4') wyjscie[i] = "czterysta";
					else if (liczba[i] == '5') wyjscie[i] = "piecset";
					else if (liczba[i] == '6') wyjscie[i] = "czescset";
					else if (liczba[i] == '7') wyjscie[i] = "siedemset";
					else if (liczba[i] == '8') wyjscie[i] = "osiemset";
					else if (liczba[i] == '9') wyjscie[i] = "dziewiecset";
				}
			}
		}

		for (int i = 0; i < liczba.length(); i++)
		{
			cout << wyjscie[i] << " ";
		}
	}

	return 0;
}