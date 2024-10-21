#include <iostream>

using namespace std;

int a, b;
char znak;

int main()
{
	while (cin >> znak >> a >> b)

		switch (znak)
		{
		case '+':cout << a + b << endl; break;
		case '-':cout << a - b << endl; break;
		case '*':cout << a * b << endl; break;
		case '/':cout << a / b << endl; break;
		case '%':cout << a % b << endl; break;
		}

	return 0;
}
