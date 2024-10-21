#include <iostream>
#include <string>

using namespace std;

bool plec(string TKPK, string pesel)
{
	if (pesel[10 - 1] == '?') // BŁĘDNE DANE
	{
		return true;
	}
	else if ((TKPK[0] == '1') && (pesel[10 - 1] % 2 == 1)) // MĘŻCZYZNA
	{
		return true;
	}
	else if ((TKPK[0] == '2') && (pesel[10 - 1] % 2 == 0)) // KOBIETA
	{
		return true;
	}
	else if (TKPK[0] == '0') // BEZ ZNACZENIA
	{
		return true;
	}
	else return false;
}

bool dzien_tygodnia(string TKPK, string pesel)
{
	for (int i = 0; i <= 5; i++)
	{
		if (pesel[i] == '?') // BŁĘDNE DANE
		{
			return true;
			break;
		}
	}


	/* WYZNACZANIE DATY URODZENIA */

	int dzien = 10 * (pesel[4] - 48) + pesel[5] - 48;
	//cout << "dzien: " << dzien << endl;

	int miesiac;
	if (pesel[0] == '0') // 200X
	{
		miesiac = 10 * (pesel[2] - 48) + pesel[3] - 48 - 20;
	}
	else // 19XX
	{
		miesiac = 10 * (pesel[2] - 48) + pesel[3] - 48;
	}
	//cout << "miesiac: " << miesiac << endl;

	int rok;
	if (pesel[0] == '0') // 200X
	{
		rok = 2000 + 10 * (pesel[0] - 48) + (pesel[1] - 48);
	}
	else // 19XX
	{
		rok = 1900 + 10 * (pesel[0] - 48) + (pesel[1] - 48);
	}
	//cout << "rok: " << rok << endl;


	/* WYZNACZANIE DNIA TYGODNIA  */


	if (miesiac > 2)        // Jeśli miesiąc późniejszy niż luty,
		miesiac -= 2;       // zmniejsz jego numer o 2.
	else					// W przeciwnym przypadku
	{						// (gdy styczeń lub luty)
		miesiac += 10;      // zwiększ numer miesiąca o 10
		rok--;				// i pomniejsz numer roku o 1.
	}
	int w = rok / 100;		// dwie ostatnie cyfry pełnego numeru roku: 
	rok %= 100;				// danego – dla miesięcy od marca do grudnia, poprze­dniego – dla stycznia i lutego;
	int dzien_urodzenia = (dzien + (13 * miesiac - 1) / 5 + rok + rok / 4 + w / 4 + 5 * w) % 7;
	if (dzien_urodzenia == 0) dzien_urodzenia = 7;

	//cout <<"dzien urodzenia: " << dzien_urodzenia << endl;

	if (TKPK[1] == '0') // BEZ ZNACZENIA
	{
		return true;
	}
	else if (TKPK[1] - 48 == dzien_urodzenia)
	{
		return true;
	}
	else return false;
}

bool typ_roku(string TKPK, string pesel)
{
	for (int i = 4; i <= 5; i++)
	{
		if (pesel[i] == '?') // BŁĘDNE DANE
		{
			return true;
			break;
		}
	}

	int rok = 2000 + 10 * (pesel[0] - 48) + (pesel[1] - 48);

	if (TKPK[2] == '1')
	{
		if ((rok % 4 == 0) && ((rok % 100 != 0) || (rok % 400 == 0))) // ROK PRZESTĘPNY
		{
			return true;
		}
		else // ROK ZWYKŁY
		{
			return false;
		}
	}
	else if (TKPK[2] == '2')
	{
		if ((rok % 4 == 0) && ((rok % 100 != 0) || (rok % 400 == 0))) // ROK PRZESTĘPNY
		{
			return false;
		}
		else // ROK ZWYKŁY
		{
			return true;
		}
	}
	else return true; // ROK BEZ ZNACZENIA


}

int main()
{
	int testy, wynik = 0;
	string TKPK, pesel[151];
	cin >> TKPK >> testy;

	// TKPK - XYZ
	// X - płeć (1 - mężczyzna, 2 - kobieta, 0 - pleć jest nieważna)
	// Y - dzień tygodnia urodzenia (1 - poniedziałek, 2 - wtorek, ..., 7 - niedziela, 0 - dzień tygodnia jest nieważny)
	// Z - rok urodzenia (1 - rok przestępny, 2 - rok zwykły, 0 - rok urodzenia nie ma znaczenia)

	for (int i = 0; i < testy; i++)
	{
		cin >> pesel[i];

		if ((plec(TKPK, pesel[i])) && (dzien_tygodnia(TKPK, pesel[i])) && (typ_roku(TKPK, pesel[i])))
		{
			wynik++;
		}

	}
	cout << wynik;

	return 0;
}