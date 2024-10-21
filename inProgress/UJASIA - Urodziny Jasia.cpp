#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    int liczba;
    for (int i = 0; i < testy; i++)
    {
        cin >> liczba;

        int x = liczba;

        if (x % 2 == 0) cout << x / 2 << endl;
        else
        {
            int wynik1 = 2;
            int wykladnik = 0;
            
            do
            {
                wykladnik++;
            } while (pow(wynik1, wykladnik) <= liczba);

            int reszta = liczba - pow(2, wykladnik - 1);
            cout << pow(2, reszta) + 1 << endl; // gdy reszta = 1
        }
    }

    return 0;
}