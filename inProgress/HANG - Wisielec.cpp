#include <iostream>
#include <string>

using namespace std;

void szubienica(int mistakes);

int main()
{
	int testy;
	cin >> testy;
	while (testy--)
	{
		string secret_word; // sekretne słowo
		int k; // liczba zgłoszonych odpowiedzi
		int mistakes = 7; // pozostałe błędy
		string linia;
		char litera; // zgłoszona odpowiedź
		cin >> secret_word >> k;
		char* strzelone = new char[k]; // zbiór oddanych poprawnych odpowiedzi
		int strzelone_litery = 0; // liczba oddanych poprawnych odpowiedzi

		string word = secret_word;
		for (int i = 0; i < secret_word.length(); i++) // zakrywanie sekretnego słowa
		{
			word[i] = '_';
		}

		cout << "Welcome to the Hangman Game!" << endl; // Menu początkowe
		szubienica(mistakes = 7);
		cout << "Secret word:" << endl;
		for (int j = 0; j < secret_word.length(); j++) // wypisywanie sekretnego słowa
		{
			cout << word[j] << " ";
		}
		cout << endl << endl;

		for (int i = 0; i < k; i++)
		{
			/* MENU TURY ROZGRYWKI */
			cout << "Number of mistakes left: " << mistakes << endl;
			cout << "Guesses: ";
			if (strzelone_litery == 0) cout << "-"; // wypisywanie poprawnych dotychczas zgłoszonych liter
			else
			{
				for (int j = 0; j < strzelone_litery; j++)
				{
					cout << strzelone[j];
				}
			}
			cout << endl;

			cout << "Please guess a letter!" << endl;
			cin >> linia;
			litera = linia[0];
			cout << "Your choice: " << litera << endl;
			/* END OF: MENU TURY ROZGRYWKI */

			/* SPRAWDZANIE POPRAWNOŚCI WPROWADZONEJ LITERY */
			if (((litera >= 'a') && (litera <= 'z')) || ((litera >= 'A') && (litera <= 'Z'))) // czy poprawny znak z alfabetu łacińskiego
			{
				if ((litera >= 'a') && (litera <= 'z')) litera -= 32; // zmiana liter na duże

				int powtorzenia = 0;
				for (int j = 0; j < i; j++) // czy wybrana litera nie była już proponowana
				{
					if (litera == strzelone[j])
					{
						powtorzenia++;
						break;
					}
				}
				if (powtorzenia > 0)
				{
					cout << "You've already guessed that letter!" << endl;
					mistakes--;
					szubienica(mistakes);
					cout << endl;
				}
				else
				{
					strzelone[strzelone_litery] = litera;
					strzelone_litery++;

					int trafione = 0;
					for (int j = 0; j < secret_word.length(); j++) // czy podana litera występuje w sekretnym słowie
					{
						if (litera == secret_word[j])
						{
							trafione++;
							word[j] = litera;
						}
					}
					if (trafione > 0)
					{
						int roznica = 0;
						for (int j = 0; j < secret_word.length(); j++) // czy wygrana
						{
							if (secret_word[j] != word[j]) roznica++;
						}
						if (roznica == 0)
						{
							cout << endl << "You won!" << endl;
							cout << "Secret: " << secret_word << endl << endl;
							break;
						}
						else
						{
							cout << "Nice!" << endl;
							cout << "Secret word:" << endl;
							for (int j = 0; j < secret_word.length(); j++) // wypisywanie sekretnego słowa
							{
								cout << word[j] << " ";
							}
							cout << endl << endl;
						}
					}
					else
					{
						cout << "Nope!" << endl;
						mistakes--;
						szubienica(mistakes);
						cout << endl;
					}
				}

				if (mistakes == 0)
				{
					cout << "Game Over!" << endl;
					cout << "Secret: " << secret_word << endl;
					break;
				}

			}
			else
			{
				cout << "Only Latin alphabet letters!" << endl;
				mistakes--;
				szubienica(mistakes);
				cout << endl;

				if (mistakes == 0)
				{
					cout << "Game Over!" << endl;
					cout << "Secret: " << secret_word << endl;
					break;
				}
			}
			/* END OF: SPRAWDZANIE POPRAWNOŚCI WPROWADZONEJ LITERY */
		}
	}

	return 0;
}


void szubienica(int mistakes)
{
	if (mistakes == 7)
	{
		cout << "+---------------------+" << endl;
		cout << "|    ____________     |" << endl;
		cout << "|    |/               |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|  __|__              |" << endl;
		cout << "+---------------------+" << endl;
	}
	else if (mistakes == 6)
	{
		cout << "+---------------------+" << endl;
		cout << "|    ____________     |" << endl;
		cout << "|    |/         |     |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |          &     |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|  __|__              |" << endl;
		cout << "+---------------------+" << endl;
	}
	else if (mistakes == 5)
	{
		cout << "+---------------------+" << endl;
		cout << "|    ____________     |" << endl;
		cout << "|    |/         |     |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |         (_)    |" << endl;
		cout << "|    |          &     |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|  __|__              |" << endl;
		cout << "+---------------------+" << endl;
	}
	else if (mistakes == 4)
	{
		cout << "+---------------------+" << endl;
		cout << "|    ____________     |" << endl;
		cout << "|    |/         |     |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |         (_)    |" << endl;
		cout << "|    |          &     |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|  __|__              |" << endl;
		cout << "+---------------------+" << endl;
	}
	else if (mistakes == 3)
	{
		cout << "+---------------------+" << endl;
		cout << "|    ____________     |" << endl;
		cout << "|    |/         |     |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |         (_)    |" << endl;
		cout << "|    |          &     |" << endl;
		cout << "|    |         /|     |" << endl;
		cout << "|    |        / |     |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|  __|__              |" << endl;
		cout << "+---------------------+" << endl;
	}
	else if (mistakes == 2)
	{
		char x = 92;
		cout << "+---------------------+" << endl;
		cout << "|    ____________     |" << endl;
		cout << "|    |/         |     |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |         (_)    |" << endl;
		cout << "|    |          &     |" << endl;
		cout << "|    |         /|" << x << "    |" << endl;
		cout << "|    |        / | " << x << "   |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|    |                |" << endl;
		cout << "|  __|__              |" << endl;
		cout << "+---------------------+" << endl;
	}
	else if (mistakes == 1)
	{
		char x = 92;
		cout << "+---------------------+" << endl;
		cout << "|    ____________     |" << endl;
		cout << "|    |/         |     |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |         (_)    |" << endl;
		cout << "|    |          &     |" << endl;
		cout << "|    |         /|" << x << "    | " << endl;
		cout << "|    |        / | " << x << "   |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |         /      |" << endl;
		cout << "|    |        /       |" << endl;
		cout << "|    |                |" << endl;
		cout << "|  __|__              |" << endl;
		cout << "+---------------------+" << endl;
	}
	else if (mistakes == 0)
	{
		char x = 92;
		cout << "+---------------------+" << endl;
		cout << "|    ____________     |" << endl;
		cout << "|    |/         |     |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |         (_)    |" << endl;
		cout << "|    |          &     |" << endl;
		cout << "|    |         /|" << x << "    |" << endl;
		cout << "|    |        / | " << x << "   |" << endl;
		cout << "|    |          |     |" << endl;
		cout << "|    |         / " << x << "    |" << endl;
		cout << "|    |        /   " << x << "   |" << endl;
		cout << "|    |                |" << endl;
		cout << "|  __|__              |" << endl;
		cout << "+---------------------+" << endl;
	}
}