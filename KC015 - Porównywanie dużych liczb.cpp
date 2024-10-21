#include <iostream>
#include <string>

using namespace std;

int main()
{
	string liczba1, liczba2;
	string symbol;

	while (cin >> liczba1 >> symbol >> liczba2)
	{
		int roznice = 0;

		if (symbol == "==")
		{
			if (liczba1.length() == liczba2.length())
			{
				for (int i = 0; i < liczba1.length(); i++)
				{
					if (liczba1[i] != liczba2[i])
					{
						roznice++;
						break;
					}
				}
				if (roznice >= 1) cout << "0" << endl;
				else cout << "1" << endl;
			}
			else cout << "0" << endl;
		}

		else if (symbol == "<=")
		{
			if (liczba1.length() < liczba2.length())
			{
				cout << "1" << endl;
			}
			else if (liczba1.length() == liczba2.length())
			{
				for (int i = 0; i < liczba1.length(); i++)
				{
					if (liczba1[i] > liczba2[i])
					{
						roznice++;
						break;
					}
				}
				if (roznice >= 1) cout << "0" << endl;
				else cout << "1" << endl;
			}
			else cout << "0" << endl;
		}

		else if (symbol == ">=")
		{
			if (liczba1.length() > liczba2.length())
			{
				cout << "1" << endl;
			}
			else if (liczba1.length() == liczba2.length())
			{
				for (int i = 0; i < liczba1.length(); i++)
				{
					if (liczba1[i] < liczba2[i])
					{
						roznice++;
						break;
					}
				}
				if (roznice >= 1) cout << "0" << endl;
				else cout << "1" << endl;
			}
			else cout << "0" << endl;
		}

		if (symbol == "!=")
		{
			if (liczba1.length() == liczba2.length())
			{
				if (liczba1 == liczba2) cout << "0" << endl;
				else cout << "1" << endl;
			}
			else cout << "1" << endl;
		}
	}

	return 0;
}