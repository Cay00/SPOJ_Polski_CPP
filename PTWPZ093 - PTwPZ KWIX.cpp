#include <iostream>
#include <string>

using namespace std;

int main()
{
	string linia;

	int x = 0;

	while (cin >> linia)
	{	
		if (linia[0] == '<')
		{
			for (int i = 0; i < x; i++)
			{
				cout << "    ";
			}
			x++;
		}
		if (linia[linia.length() - 2] == '/')
		{
			x--;
		}
		cout << linia << endl;
	}
}