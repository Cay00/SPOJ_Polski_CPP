#include <iostream>
#include <string>

using namespace std;

string dzienTygodnia(long long n)
{
	if (n == 0) return "Pn";
	if (n == 1) return "Wt";
	if (n == 2) return "Sr";
	if (n == 3) return "Cz";
	if (n == 4) return "Pt";
	if (n == 5) return "So";
	if (n == 6) return "Nd";
}

int numerTygodnia(string dzien)
{
	if (dzien == "Pn") return 0;
	if (dzien == "Wt") return 1;
	if (dzien == "Sr") return 2;
	if (dzien == "Cz") return 3;
	if (dzien == "Pt") return 4;
	if (dzien == "So") return 5;
	if (dzien == "Nd") return 6;
}

int main()
{
	int testy;
	cin >> testy;
	for (int i = 0; i < testy; i++)
	{
		long long przesuniecie;
		string dzien;

		cin >> dzien >> przesuniecie;

		cout << dzienTygodnia((numerTygodnia(dzien) + przesuniecie) % 7) << endl;
	}

	return 0;
}