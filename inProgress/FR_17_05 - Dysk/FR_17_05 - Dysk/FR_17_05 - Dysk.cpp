#include <iostream>
#include <string>

using namespace std;

int main()
{
	string wejscie, wyjscie[1010];
	cin >> wejscie;

	if (wejscie[0] == '1' || wejscie[0] == '0')
	{
		if (wejscie[0] == '1') wyjscie[0] = 'G';
		if (wejscie[0] == '0') wyjscie[0] = 'D';

		for (int i = 1; i < wejscie.length(); i++)
		{
			if (wyjscie[i - 1] == "D")
			{
				if (wejscie[i - 1] == '1' && wejscie[i] == '1') wyjscie[i] = "G";	// 11 DG
				if (wejscie[i - 1] == '1' && wejscie[i] == '0') wyjscie[i] = "D";	// 10 DD
				if (wejscie[i - 1] == '0' && wejscie[i] == '0') wyjscie[i] = "D";	// 00 DD
				if (wejscie[i - 1] == '0' && wejscie[i] == '1') wyjscie[i] = "G";	// 01 DG
			}

			if (wyjscie[i - 1] == "G")
			{
				if (wejscie[i - 1] == '1' && wejscie[i] == '1') wyjscie[i] = "D";	// 11 GD
				if (wejscie[i - 1] == '1' && wejscie[i] == '0') wyjscie[i] = "G";	// 10 GG
				if (wejscie[i - 1] == '0' && wejscie[i] == '0') wyjscie[i] = "G";	// 00 GG
				if (wejscie[i - 1] == '0' && wejscie[i] == '1') wyjscie[i] = "D";	// 01 GD

			}
		}

		cout << "DDDD";
		for (int i = 0; i < wejscie.length(); i++) cout << wyjscie[i];
	}

	if (wejscie[0] == 'G' || wejscie[0] == 'D')
	{
		if (wejscie[4] == 'G') wyjscie[4] = '1';
		if (wejscie[4] == 'D') wyjscie[4] = '0';

		for (int i = 4; i < wejscie.length(); i++)
		{
			if (wyjscie[i - 1] == "1")
			{
				if (wejscie[i - 1] == 'G' && wejscie[i] == 'G') wyjscie[i] = "0";	// GG 10
				if (wejscie[i - 1] == 'G' && wejscie[i] == 'D') wyjscie[i] = "1";	// GD 11
				if (wejscie[i - 1] == 'D' && wejscie[i] == 'D') wyjscie[i] = "0";	// DD 10
				if (wejscie[i - 1] == 'D' && wejscie[i] == 'G') wyjscie[i] = "1";	// DG 11
			}

			if (wyjscie[i - 1] == "0")
			{
				if (wejscie[i - 1] == 'G' && wejscie[i] == 'G') wyjscie[i] = "1";	// GG 01
				if (wejscie[i - 1] == 'G' && wejscie[i] == 'D') wyjscie[i] = "1";	// GD 01
				if (wejscie[i - 1] == 'D' && wejscie[i] == 'D') wyjscie[i] = "0";	// DD 00
				if (wejscie[i - 1] == 'D' && wejscie[i] == 'G') wyjscie[i] = "1";	// DG 01

			}
		}

		for (int i = 4; i < wejscie.length(); i++) cout << wyjscie[i];
	}

	return 0;
}