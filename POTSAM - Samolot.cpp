#include <iostream>

using namespace std;

int main()
{
	int n1, n2, k1, k2;
	// n1 - rzedy w biznesowej
	// n1 - rzedy w ekonomicznej
	// k1 - miejsca siedzace w biznesowej
	// k1 - miejsca siedzace w ekonomicznej
	cin >> n1 >> k1 >> n2 >> k2;

	int eko, biz;

	eko = n1 * k1;
	biz = n2 * k2;

	int suma = eko + biz;

	cout << suma;

	return 0;
}