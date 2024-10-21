#include <iostream>

using namespace std;

int main()
{
	int ile_liczb, od_ktorej;
	int cyfra[10001];

	cin >> ile_liczb >> od_ktorej;

	for (int i = 0; i < ile_liczb; i++)
	{
		cin >> cyfra[i];
	}

	for (int i = od_ktorej; i < ile_liczb; i++)
	{
		cout << cyfra[i] << " ";
	}
	for (int i = 0; i < od_ktorej; i++)
	{
		cout << cyfra[i] << " ";
	}

	return 0;
}