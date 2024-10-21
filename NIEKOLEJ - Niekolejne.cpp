#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cin >> liczba;

    if (liczba == 0) cout << "0";
    else if (liczba > 0 && liczba < 3) cout << "NIE";
    else
    {
        for (int i = 1; i <= liczba; i += 2)
        {
            cout << i << " ";
        }
        for (int i = 0; i <= liczba; i+=2)
        {
            cout << i << " ";
        }     
    }

    return 0;
}