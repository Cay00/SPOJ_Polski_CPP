#include <iostream>
#include <string>

using namespace std;

void konwersja(char litera)
{
	if (litera == 32) cout << "/";
	if (litera == 'A' || litera == 'a') cout << ".-";
	if (litera == 'B' || litera == 'b') cout << "-...";
	if (litera == 'C' || litera == 'c') cout << "-.-.";
	if (litera == 'D' || litera == 'd') cout << "-..";
	if (litera == 'E' || litera == 'e') cout << ".";
	if (litera == 'F' || litera == 'f') cout << ".-..";
	if (litera == 'G' || litera == 'g') cout << "--.";
	if (litera == 'H' || litera == 'h') cout << "....";
	if (litera == 'I' || litera == 'i') cout << "..";
	if (litera == 'J' || litera == 'j') cout << ".---";
	if (litera == 'K' || litera == 'k') cout << "-.-";
	if (litera == 'L' || litera == 'l') cout << "..-.";
	if (litera == 'M' || litera == 'm') cout << "--";
	if (litera == 'N' || litera == 'n') cout << "-.";
	if (litera == 'O' || litera == 'o') cout << "---";
	if (litera == 'P' || litera == 'p') cout << ".--.";
	if (litera == 'Q' || litera == 'q') cout << "--.-";
	if (litera == 'R' || litera == 'r') cout << ".-.";
	if (litera == 'S' || litera == 's') cout << "...";
	if (litera == 'T' || litera == 't') cout << "-";
	if (litera == 'U' || litera == 'u') cout << "..-";
	if (litera == 'V' || litera == 'v') cout << "...-";
	if (litera == 'W' || litera == 'w') cout << ".--";
	if (litera == 'X' || litera == 'x') cout << "-..-";
	if (litera == 'Y' || litera == 'y') cout << "-.--";
	if (litera == 'Z' || litera == 'z') cout << "--..";
}

int main()
{
	string napis;

	while (getline(cin, napis))
	{
		for (int i = 0; i < napis.length(); i++)
		{
			konwersja(napis[i]);

			if (napis[i] != ' ')
			{
				cout << "/";
			}
		}
		cout << endl;
	}

	return 0;
}