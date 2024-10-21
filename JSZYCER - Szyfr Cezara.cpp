#include <iostream>
#include <string>

using namespace std;

int main()
{
	string napis;

	while (getline(cin, napis))
	{
		for (int i = 0; i < napis.length(); i++)
		{
			if (napis[i] >= 65 && napis[i] <= 90)
			{
				napis[i] = napis[i] + 3;

				if (napis[i] > 90)
				{
					napis[i] = (napis[i] - 26);
				}
			}
		}
		cout << napis << endl;
	}

	return 0;
}