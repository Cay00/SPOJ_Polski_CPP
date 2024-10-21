#include <iostream>

using namespace std;

int main()
{
    int liczba;
    int rok;

    cin >> liczba >> rok;

    int wyjscie = (((liczba % 10) * 2) + 5) * 50 + 1771 - rok;
    cout << wyjscie % 100;

    return 0;
}