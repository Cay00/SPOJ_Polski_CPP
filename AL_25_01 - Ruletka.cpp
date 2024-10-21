#include <iostream>

using namespace std;

int main()
{
	int n, p, k;
	cin >> n >> p >> k;

	int* pola = new int[n];
	int* powtorzenia = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> pola[i];
	}
	for (int i = 0; i < n; i++)
	{
		powtorzenia[i] = 0;
	}

	int wynik = 1;
	int fault = 0;

	int x = p;
	
	for (;;)
	{
		if (x != k)
		{
			if (powtorzenia[x - 1] > 0) fault++;

			powtorzenia[x - 1]++;
			wynik++;
			x += pola[x-1];
			if (x > n) x -= n;
		}

		if (x == k) break;

		if (fault > 0) break;
	}

	if (fault == 0) cout << wynik << endl;
	else cout << "NIGDY" << endl;


	return 0;
}