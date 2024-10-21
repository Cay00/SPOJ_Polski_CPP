#include <iostream>
#include <string>

using namespace std;

int main()
{
	int testy;
	string wyraz;

	cin >> testy;
	for (int i = 0; i < testy; i++)
	{
		cin >> wyraz;
		for (int i = 0; i < 0.5 * wyraz.length(); i++)
		{
			cout << wyraz[i];
		}
		cout << endl;
	}

	return 0;
}