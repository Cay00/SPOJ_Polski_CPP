#include <iostream>
#include <string>

using namespace std;

void nazwa(string liczba)
{
	if (liczba == "1") cout << "jeden";
	if (liczba == "2") cout << "dwa";
	if (liczba == "3") cout << "trzy";
	if (liczba == "4") cout << "cztery";
	if (liczba == "5") cout << "piec";
	if (liczba == "6") cout << "szesc";
	if (liczba == "7") cout << "siedem";
	if (liczba == "8") cout << "osiem";
	if (liczba == "9") cout << "dziewiec";
	if (liczba == "10") cout << "dziesiec";
	if (liczba == "11") cout << "jedenascie";
	if (liczba == "12") cout << "dwanascie";
	if (liczba == "13") cout << "trzynascie";
	if (liczba == "14") cout << "czternascie";
	if (liczba == "15") cout << "pietnascie";
	if (liczba == "16") cout << "szesnascie";
	if (liczba == "17") cout << "siedemnascie";
	if (liczba == "18") cout << "osiemnascie";
	if (liczba == "19") cout << "dziewietnascie";
	if (liczba == "20") cout << "dwadziescia";
	if (liczba == "30") cout << "trzydziesci";
	if (liczba == "40") cout << "czterdziesci";
	if (liczba == "50") cout << "piecdziesiat";
	if (liczba == "60") cout << "szczescdziesiat";
	if (liczba == "70") cout << "siedemdziesiat";
	if (liczba == "80") cout << "osiemdziesiat";
	if (liczba == "90") cout << "dziewiecdziesiat";
	if (liczba == "100") cout << "sto";
	if (liczba == "200") cout << "dwiescie";
	if (liczba == "300") cout << "trzysta";
	if (liczba == "400") cout << "czterysta";
	if (liczba == "500") cout << "piecset";
	if (liczba == "600") cout << "szescset";
	if (liczba == "700") cout << "siedemset";
	if (liczba == "800") cout << "osiemset";
	if (liczba == "900") cout << "dziewiecset";
	if (liczba == "1000") cout << "tys.";
	if (liczba == "1000000") cout << "mil.";
	if (liczba == "1000000000") cout << "mld.";
	if (liczba == "1000000000000") cout << "bln.";
}

int main()
{
	int testy;
	cin >> testy;
	string liczba;

	while (testy--)
	{
		cin >> liczba;
		if (liczba.length() > 3)
		{
			for (int i = 1; i <= liczba.length(); i+=0)
			{
				string x = liczba;
				for (int j = i; j < liczba.length(); j++)
				{
					x[j] = '0';
				}

				nazwa(x);
				cout << " ";
				liczba.erase(0, i);
			}	
		}
		else
		{
			nazwa(liczba);
		}
		cout << endl;
	}

	return 0;
}