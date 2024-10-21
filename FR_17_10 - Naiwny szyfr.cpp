#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	cin >> word;

	for (int i = word.length() - 1; i >= 0; i -= 2)
	{
		cout << word[i];
	}

	if (word.length() % 2 == 1)
	{
		for (int i = 1; i < word.length(); i += 2)
		{
			cout << word[i];
		}
	}
	else
	{
		for (int i = 0; i < word.length(); i += 2)
		{
			cout << word[i];
		}
	}

	return 0;
}
