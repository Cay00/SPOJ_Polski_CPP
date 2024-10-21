#include <iostream>

using namespace std;

bool czy_pierwsza(int liczba)
{
    if (liczba < 2)
        return false;

    for (int i = 2; i * i <= liczba; i++)
        if (liczba % i == 0)
            return false;
    return true;
}

int main()
{
    int t, a, b;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        for (int i = a; i <= b; i = i+1)
        {
            if (czy_pierwsza(i))
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}