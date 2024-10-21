#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string linia;

	while (getline(cin, linia))
	{
		for (int i = 0; i < linia.length(); i++)
		{
			if (isupper(linia[i])) 
			{
				if (linia[i] < 78)
					linia[i] = linia[i] + 13;
				else
					linia[i] = linia[i] - 13;
			}
			else if (islower(linia[i])) 
			{
				if (linia[i] < 110)
					linia[i] = linia[i] + 13;
				else
					linia[i] = linia[i] - 13;
			}
			else if (isdigit(linia[i])) 
			{
				if (linia[i] < 53)
					linia[i] = linia[i] + 5;
				else
					linia[i] = linia[i] - 5;
			}
		}
		cout << linia << endl;
	}

	return 0;
}