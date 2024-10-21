#include <iostream>
#include <string>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	cin.get();

	for (int i = 0; i < testy; i++)
	{
		string haslo;
		getline(cin, haslo);

		int poprawne = 0;
		int duze = 0, male = 0, cyfry = 0, symbole = 0;

		for (int j = 0; j < haslo.length(); j++)
		{
			if (haslo[j] >= 'A' && haslo[j] <= 'Z') duze++;
			if (haslo[j] >= 'a' && haslo[j] <= 'z') male++;
			if (haslo[j] >= '0' && haslo[j] <= '9') cyfry++;
			if ((haslo[j] >= 0 && haslo[j] <= 47) || (haslo[j] >= 58 && haslo[j] <= 64) || (haslo[j] >= 91 && haslo[j] <= 96) || (haslo[j] >= 123 && haslo[j] <= 255)) symbole++;
		}

		if (haslo.length() >= 8)
		{
			if(duze > 0 && male > 0 && cyfry > 0 && symbole > 0)
			cout << haslo << endl;
		}
	}
	return 0;
}