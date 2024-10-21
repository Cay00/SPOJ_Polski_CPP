#include <iostream>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	string a, b;

	while (testy--)
	{
		cin >> a >> b;
		int kontrolna = 0;

		for (int i = 0; i < a.length(); i++)
		{
			if (b[kontrolna] == a[i])
			{
				kontrolna++;
			}
		}

		if (kontrolna == b.length()) cout << "Tak" << endl;
		else cout << "Nie" << endl;
	}

	return 0;
}