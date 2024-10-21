#include <iostream>
#include <string>

using namespace std;

bool imie_test(string imie)
{
	int niepoprawne = 0;

	if ((imie[0] >= 'A') && (imie[0] <= 'Z'))
	{
		if (imie.length() > 1)
		{
			for (int i = 1; i < imie.length() - 1; i++)
			{
				if ((imie[i] >= 'a') && (imie[i] <= 'z')) {}
				else niepoprawne++;
			}
		}
	}
	else niepoprawne++;

	if (niepoprawne > 0) return 0;
	else return 1;
}

bool nazwisko_test(string nazwisko)
{
	int niepoprawne = 0;

	if ((nazwisko[0] >= 'A') && (nazwisko[0] <= 'Z'))
	{
		if (nazwisko.length() > 1)
		{
			for (int i = 1; i < nazwisko.length() - 1; i++)
			{
				if ((nazwisko[i] >= 'a') && (nazwisko[i] <= 'z')) {}
				else niepoprawne++;
			}
		}	
	}
	else niepoprawne++;

	if (niepoprawne > 0) return 0;
	else return 1;
}

bool data_test(string data)
{
	int niepoprawne = 0;

	//DZIEN
	for (int i = 8; i <= 9; i++)
	{
		if ((data[i] >= '0') && (data[i] <= '9'))
		{
			if (data[8] <= '3')
			{
				if (data[8] == '0')
				{
					if (data[9] == '0') niepoprawne++;
				}
				else if (data[8] == '3')
				{
					if ((data[9] >= '0') && (data[9] <= '1')) {}
					else niepoprawne++;
				}
				else
				{
					if ((data[9] >= '0') && (data[9] <= '9')) {}
					else niepoprawne++;
				}
			}
			else niepoprawne++;
		}
		else niepoprawne++;
	}

	//MIESIAC
	for (int i = 5; i <= 5; i++)
	{
		if ((data[i] >= '0') && (data[i] <= '9'))
		{
			if (data[5] == '0')
			{
				if (data[6] > '0') {}
				else niepoprawne++;
			}
			if (data[5] == '1')
			{
				if (data[6] <= '2') {}
				else niepoprawne++;
			}
		}
		else niepoprawne++;
	}

	// ROK
	for (int i = 0; i < 4; i++)
	{
		if ((data[i] >= '0') && (data[i] <= '9'))
		{
			if ((data[0] >= '1')&& (data[0] <= '2'))
			{
				if (data[0] == '1')
				{
					if (data[1] < '9') niepoprawne++;
				}
				else if (data[0] == '2')
				{
					if ((data[1] == '0') && (data[2] == '0') && (data[3] == '0')) {}
					else niepoprawne++;
				}
				else niepoprawne++;
			}
			else niepoprawne++;
		}
		else niepoprawne++;
	}
	
	if (niepoprawne > 0) return 0;
	else return 1;
}


int main()
{
	int wynik = 3;

	string formularz;
	string imie, nazwisko, data;

	

	while (cin >> formularz >> imie >> formularz >> nazwisko >> formularz >> formularz >> data)
	{
		//Imie: II; Nazwisko: NN; Data ur.: RRRR-MM-DD

		imie_test(imie);
		nazwisko_test(nazwisko);
		data_test(data);

		if (imie_test(imie) == 0)
		{
			cout << "0" << endl;
		}
		else if ((imie_test(imie) == 1) && (nazwisko_test(nazwisko) == 0))
		{
			cout << "1" << endl;
		}
		else if ((imie_test(imie) == 1) && (nazwisko_test(nazwisko) == 1) && (data_test(data) == 0))
		{
			cout << "2" << endl;
		}
		else
		{
			cout << "3" << endl;
		}
	}

	return 0;
}