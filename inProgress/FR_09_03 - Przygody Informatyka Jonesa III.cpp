#include <iostream>
#include <string>

using namespace std;

void pojedyncza_1(string wyraz, int typ);
void pojedyncza_2(string wyraz, int typ);
void pojedyncza_3(string wyraz, int typ);
void mnoga_1(string wyraz, int typ);
void mnoga_2(string wyraz, int typ);
void mnoga_3(string wyraz, int typ);

int main()
{
	int testy;
	cin >> testy;

	while (testy--)
	{
		string wyraz;
		cin >> wyraz;

		int typ;

		if ((wyraz[wyraz.length() - 3] != 'e') && (wyraz[wyraz.length() - 3] != 'n') && (wyraz[wyraz.length() - 2] == 'n') && (wyraz[wyraz.length() - 1] == 'e'))
		{
			typ = 1;
			wyraz.erase(wyraz.length() - 2);
		}
		else if (((wyraz[wyraz.length() - 3] == 'n') && (wyraz[wyraz.length() - 2] == 'n') && (wyraz[wyraz.length() - 1] == 'e')) || ((wyraz[wyraz.length() - 3] == 'e') && (wyraz[wyraz.length() - 2] == 'n') && (wyraz[wyraz.length() - 1] == 'e')))
		{
			typ = 2;
			if ((wyraz[wyraz.length() - 3] == 'n') && (wyraz[wyraz.length() - 2] == 'n') && (wyraz[wyraz.length() - 1] == 'e'))
			{
				wyraz.erase(wyraz.length() - 2);
			}
			else
			{
				wyraz.erase(wyraz.length() - 3);
			}
		}
		else if (wyraz[wyraz.length() - 1] == 't')
		{
			typ = 3;
			wyraz.erase(wyraz.length() - 1);
		}

		cout << "Liczba pojedyncza:" << endl;
		cout << "1. "; pojedyncza_1(wyraz, typ);
		cout << "2. "; pojedyncza_2(wyraz, typ);
		cout << "3. "; pojedyncza_3(wyraz, typ);
		cout << "Liczba mnoga:" << endl;
		cout << "1. "; mnoga_1(wyraz, typ);
		cout << "2. "; mnoga_2(wyraz, typ);
		cout << "3. "; mnoga_3(wyraz, typ);
	}

	return 0;
}

void pojedyncza_1(string wyraz, int typ)
{
	if (typ == 1) cout << wyraz << "i" << endl;
	if (typ == 2) cout << wyraz << "i" << endl;
	if (typ == 3) cout << wyraz << "j" << endl;
}
void pojedyncza_2(string wyraz, int typ)
{
	if (typ == 1) cout << wyraz << "oe" << endl;
	if (typ == 2) cout << wyraz << "oe" << endl;
	if (typ == 3)
	{
		if (wyraz[wyraz.length() - 2] == 'o')
		{
			wyraz.erase(wyraz.length() - 2);
		}
		else if ((wyraz[wyraz.length() - 1] == 'i') && (wyraz[wyraz.length() - 2] != 'n'))
		{
			cout << wyraz << "oe" << endl;
		}
		else
		{
			wyraz.erase(wyraz.length() - 1);
			cout << wyraz << "oe" << endl;
		}
	}
}
void pojedyncza_3(string wyraz, int typ)
{
	if (typ == 1) cout << wyraz << "n" << endl;
	if (typ == 2)
	{
		if (wyraz[wyraz.length() - 1] == wyraz[wyraz.length() - 2]) cout << wyraz << "en" << endl;
		else
		{
			if (wyraz[wyraz.length() - 1] == 't') cout << wyraz << "ten" << endl;
			else if (wyraz[wyraz.length() - 1] == 's') cout << wyraz << "sen" << endl;
			else if (wyraz[wyraz.length() - 1] == 'r')
			{
				wyraz.erase(wyraz.length() - 1);
				cout << wyraz << "llen" << endl;
			}
			else if (wyraz[wyraz.length() - 1] == 'k')
			{
				wyraz.erase(wyraz.length() - 1);
				cout << wyraz << "men" << endl;
			}
			else if (wyraz[wyraz.length() - 1] == 'p')
			{
				wyraz.erase(wyraz.length() - 1);
				cout << wyraz << "men" << endl;
			}
			else if (wyraz[wyraz.length() - 1] == 'h')
			{
				wyraz.erase(wyraz.length() - 1);
				cout << wyraz << "nnen" << endl;
			}
			else if (wyraz[wyraz.length() - 1] == 'g')
			{
				wyraz.erase(wyraz.length() - 1);
				cout << wyraz << "wen" << endl;
			}
			else if (wyraz[wyraz.length() - 1] == 'd')
			{
				wyraz.erase(wyraz.length() - 1);
				cout << wyraz << "wen" << endl;
			}
		}
	}
	if (typ == 3) cout << wyraz << "n" << endl;
}
void mnoga_1(string wyraz, int typ)
{
	if (typ == 1)
	{
		if (wyraz[wyraz.length() - 2] == 'e')
		{
			cout << wyraz << "ei" << endl;
		}
		else
		{
			wyraz.erase(wyraz.length() - 1);
			cout << wyraz << "ei" << endl;
		}
	}
	if (typ == 2) cout << wyraz << "ei" << endl;
	if (typ == 3) cout << wyraz << "i" << endl;
}
void mnoga_2(string wyraz, int typ)
{
	if (typ == 1) cout << wyraz << "oi" << endl;
	if (typ == 2) cout << wyraz << "oi" << endl;
	if (typ == 3)
	{
		if (wyraz[wyraz.length() - 2] == 'o')
		{
			wyraz.erase(wyraz.length() - 2);
		}
		else if ((wyraz[wyraz.length() - 1] == 'i') && (wyraz[wyraz.length() - 2] != 'n'))
		{
			cout << wyraz << "oi" << endl;
		}
		else
		{
			wyraz.erase(wyraz.length() - 1);
			cout << wyraz << "oi" << endl;
		}
	}
}
void mnoga_3(string wyraz, int typ)
{
	if (typ == 1)
	{
		if (wyraz[wyraz.length() - 2] == 'e') cout << wyraz << "n";
		else
		{
			wyraz[wyraz.length() - 1] = 'e';
			cout << wyraz << "n";
		}
	}
	if (typ == 2)
	{
		if (wyraz[wyraz.length() - 1] == 't') cout << wyraz << "tin";
		else if (wyraz[wyraz.length() - 1] == 's') cout << wyraz << "sin";
		else if (wyraz[wyraz.length() - 1] == 'r')
		{
			wyraz.erase(wyraz.length() - 1);
			cout << wyraz << "llin";
		}
		else if (wyraz[wyraz.length() - 1] == 'k')
		{
			wyraz.erase(wyraz.length() - 1);
			cout << wyraz << "min";
		}
		else if (wyraz[wyraz.length() - 1] == 'p')
		{
			wyraz.erase(wyraz.length() - 1);
			cout << wyraz << "min";
		}
		else if (wyraz[wyraz.length() - 1] == 'h')
		{
			wyraz.erase(wyraz.length() - 1);
			cout << wyraz << "nnin";
		}
		else if (wyraz[wyraz.length() - 1] == 'g')
		{
			wyraz.erase(wyraz.length() - 1);
			cout << wyraz << "win";
		}
		else if (wyraz[wyraz.length() - 1] == 'd')
		{
			wyraz.erase(wyraz.length() - 1);
			cout << wyraz << "win";
		}
	}
	if (typ == 3)
	{
		if (wyraz[wyraz.length() - 2] == 'i') cout << wyraz << "n";
		else
		{
			wyraz[wyraz.length() - 1] = 'i';
			cout << wyraz << "n";
		}
	}
}