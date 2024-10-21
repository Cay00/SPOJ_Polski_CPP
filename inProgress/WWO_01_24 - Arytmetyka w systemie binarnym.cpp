#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int dluzsza;
	if (a < b) dluzsza = b;
	else dluzsza = a;

	int* tabA = new int[a];
	int* tabB = new int[b];
	int* tabOut = new int[dluzsza + 1];

	for (int i = 0; i < a; i++)cin >> tabA[i];
	for (int i = 0; i < b; i++)cin >> tabB[i];

	for (int i = dluzsza; i >= 0; i--)
	{

	}

	/*int* tabA = new int[a];
	int* tabB = new int[b];
	int* tabOut = new int[dluzsza + 1];

	for (int i = 0; i < a; i++)cin >> tabA[i];
	for (int i = 0; i < b; i++)cin >> tabB[i];

	int x = 0;
	for (int i = dluzsza; i >= 0; i--)
	{
		if (tabA[i] == 1 && tabB[i] == 1)
		{
			if (x == 0)
			{
				tabOut[i] = 0;
				x += 1;
			}
			else
			{
				tabOut[i] = 1;
				x -= 1;
			}
		}
		else if ((tabA[i] == 1 && tabB[i] == 0) || (tabA[i] == 0 && tabB[i] == 1))
		{
			if (x == 0) tabOut[i] = 0;
			else
			{
				tabOut[i] = 1;
				x -= 1;
			}
		}
		else if (tabA[i] == 0 && tabB[i] == 0)
		{
			if (x == 0) tabOut[i] = 0;
			else
			{
				tabOut[i] = 1;
				x -= 1;
			}
		}
	}
	for (int i = 0; i < dluzsza + 1; i++)
	{
		cout << tabOut[i];
	}*/

	return 0;
}