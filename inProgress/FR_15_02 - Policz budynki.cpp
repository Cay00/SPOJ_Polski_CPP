#include <iostream>

using namespace std;

int main()
{
    int testy, numer;
    string nazwisko;

    int* budynki = new int[1001];
    for (int i = 0; i < 1001; i++) budynki[i] = 0;

    cin >> testy;

    while (testy--)
    {
        cin >> numer >> nazwisko;
        if (budynki[numer] == 0) budynki[numer]++;
    }

    int wynik = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (budynki[i] > 0)wynik++;
    }

    cout << wynik;

    return 0;
}