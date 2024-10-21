#include <iostream>

using namespace std;

int main()
{
    int n, q, kwota;
    cin >> n;

    int *nominal = new int[n];
    for (int i = 0; i < n; i++) // wczytywanie nominałów
    {
        cin >> nominal[i];
    }

    cin >> q;

    for (int i = 0; i < q; i++) // wczytywanie kwot
    {   
        cin >> kwota;

        int reszta = kwota;
        int x = n;
        int mozliwosci = 0;

        while (reszta > 0)
        {
            if (reszta >= nominal[x])
            {
                reszta -= nominal[x];
                cout << reszta << " ";
            }
            x--;
        }
    }

    return 0;
}