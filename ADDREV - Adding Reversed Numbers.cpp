#include <iostream>

using namespace std;

int reverse(int number)
{
	int reversed = 0;
	int remainder = number;

	while (number != 0)
	{
		reversed *= 10;
		remainder = number % 10;
		reversed += remainder;
		number /= 10;
	}
	return reversed;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int sum = 0;
		int number;

		for (int i = 0; i < 2; i++)
		{
			cin >> number;
			sum += reverse(number);
		}
		cout << reverse(sum) << endl;
	}

	return 0;
}