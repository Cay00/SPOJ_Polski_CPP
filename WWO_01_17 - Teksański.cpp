#include <iostream>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	while (testy--)
	{
		string wejscie;
		cin >> wejscie;

		int h = (wejscie[0] - 48) * 10 + (wejscie[1] - 48);
		int m = (wejscie[3] - 48) * 10 + (wejscie[4] - 48);
		m++;

		for (;;)
		{
			if (h != 0 && m % h == 0) break;
			else
			{
				m++;
				if (m == 60)
				{
					m = 0;
					h++;
					if (h == 24) h = 0;
				}
			}
		}

		if (h < 10) cout << "0" << h;
		else cout << h;
		cout << ":";
		if (m < 10) cout << "0" << m;
		else cout << m;
		cout << endl;
	}

	return 0;
}