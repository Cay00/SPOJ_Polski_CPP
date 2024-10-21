#include <iostream>

using namespace std;

int main()
{
	char znak;
	int rejestr[10], a, b;

	for (int i = 1; i < 10; i++) {
		rejestr[i] = 0;
	}

	while (cin >> znak >> a >> b)

		switch (znak)
		{
		case 'z': {
			rejestr[a] = b;
			break;
		}
		case '+': {
			cout << rejestr[a] + rejestr[b] << endl;
			break;
		}
		case '-': {
			cout << rejestr[a] - rejestr[b] << endl;
			break;
		}
		case '*': {
			cout << rejestr[a] * rejestr[b] << endl;
			break;
		}
		case '/': {
			cout << rejestr[a] / rejestr[b] << endl;
			break;
		}
		case '%': {
			cout << rejestr[a] % rejestr[b] << endl;
			break;
		}
		}

	return 0;
}