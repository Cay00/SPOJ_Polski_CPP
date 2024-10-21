#include <iostream>

using namespace std;

int main()
{
	string a;
	int x = 0, y = 0;

	for (int j = 0; j < 2; j++)
	{
		cin >> a;
		for (int i = 0; i < a.length(); i++)
		{
			/*if (a[i] == 'M')
			{
				if ((i > 0) && (a[i - 1] == 'D')) x += 500;
				else x += 1000;
			}
			else if (a[i] == 'D')
			{
				if ((i < a.length() - 1) && (a[i + 1] == 'M')) x += 0;
				else if ((a[i - 1] == 'C') && (i > 0)) x += 400;
				else x += 500;
			}
			else if (a[i] == 'C')
			{
				if ((i < a.length() - 1) && (a[i + 1] == 'D')) x += 0;
				else if ((a[i - 1] == 'L') && (i > 0)) x += 50;
				else x += 100;
			}
			else if (a[i] == 'L')
			{
				if ((i < a.length() - 1) && (a[i + 1] == 'C')) x += 0;
				else if ((a[i - 1] == 'X') && (i > 0)) x += 40;
				else x += 50;
			}
			else if (a[i] == 'X')
			{
				if ((i < a.length() - 1) && (a[i + 1] == 'L')) x += 0;
				else if ((a[i - 1] == 'V') && (i > 0)) x += 5;
				else x += 10;
			}
			else if (a[i] == 'V')
			{	
				if ((i < a.length() - 1) && (a[i + 1] == 'X')) x += 0;
				else if ((i > 0) && (a[i - 1] == 'I')) x += 4;
				else x += 5;
			}
			else if (a[i] == 'I')
			{
				if ((i < a.length() - 1) && (a[i + 1] == 'V')) x += 0;
				else x += 1;
			}*/
		}
	}

	cout << x << endl;

	return 0;
}