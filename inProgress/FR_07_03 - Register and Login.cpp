#include <iostream>
#include <string>

using namespace std;

void regist(int testy)
{
	string login, haslo;
	string* nazwauzytk = new string[testy];

	for (int i = 0; i < testy; i++)
	{
		cin >> login >> haslo;
		nazwauzytk[i] = login;

		int niepoprawnosc = 0;
		if (i > 0)
		{
			for (int j = 0; j < i; j++)
			{
				if (login == nazwauzytk[j])
				{
					cout << "Login zajety" << endl;
					niepoprawnosc++;
					break;
				}
			}
		}

		if (niepoprawnosc == 0)
		{
			int bledy = 0;
			if (login.length() >= 3 && login.length() <= 12)
			{
				for (int i = 0; i < login.length(); i++)
				{
					if ((login[i] >= '0' && login[i] <= '9') || (login[i] >= 'a' && login[i] <= 'z') || (login[i] >= 'A' && login[i] <= 'Z')) bledy += 0;
					else bledy++;
				}
			}

			if (bledy == 0) cout << "Zarejestrowano" << endl;
			else cout << "Blad" << endl;
		}
	}
}

void log(int testy)
{
	
}

int main()
{
	string wejscie;
	while (cin >> wejscie)
	{
		int testy;
		cin >> testy;

		if (wejscie == "register") regist(testy);
		else if (wejscie == "login") log(testy);
	}

	return 0;
}