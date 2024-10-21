#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    while (testy--)
    {
        int wynik = 0, n;
        cin >> n;

        int* liczba = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> liczba[i];
        }

        if (n < 3) wynik = 0;
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (((liczba[i] > liczba[i - 1]) && (liczba[i] > liczba[i + 1])) || ((liczba[i] < liczba[i - 1]) && (liczba[i] < liczba[i + 1])))
                    wynik++;
            }
        }
        cout << wynik << endl;
    }

    return 0;
}