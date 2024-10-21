#include <iostream>

using namespace std;

int main()
{
	int ile;
	char litera[27];
	string slowo;

	cin >> ile;

	for (int i = 0; i < ile; i++)
	{
		cin >> litera[i];
	}

	cin >> slowo;

	for (int j = 0; j < slowo.length(); j++)
	{
		cout << slowo[j];

		for (int k = 0; k < ile; k++)
		{
			if (slowo[j] == litera[k])
			{
				cout << slowo[j];
				break;
			}
		}

	}

	return 0;
}