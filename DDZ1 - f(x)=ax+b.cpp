#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a == 0)  cout << "f(x)=" << b << endl;

	else if ((a != 0) && (a != 1) && (a != -1) && (b == 0)) cout << "f(x)=" << a << "x";
	else if ((a != 0) && (a != 1) && (a != -1) && (b > 0)) cout << "f(x)=" << a << "x+" << b;
	else if ((a != 0) && (a != 1) && (a != -1) && (b < 0)) cout << "f(x)=" << a << "x" << b;

	else if (a == 1 && b == 0) cout << "f(x)=x";
	else if (a == 1 && b > 0) cout << "f(x)=x+" << b;
	else if (a == 1 && b < 0) cout << "f(x)=x" << b;

	else if (a == -1 && b == 0) cout << "f(x)=-x";
	else if (a == -1 && b > 0) cout << "f(x)=-x+" << b;
	else if (a == -1 && b < 0) cout << "f(x)=-x" << b;

	return 0;
}