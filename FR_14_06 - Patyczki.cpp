#include <iostream>

using namespace std;

int main()
{
    int n;
    int patyczki[257];
    for (int i = 0; i <= 256; i++) patyczki[i] = 0;
    cin >> n;

    int liczba;
    for (int i = 0; i < n; i++)
    {
        cin >> liczba;
        patyczki[liczba]++;   
    }

    int wynik = 0;

    for (int i = 0; i <= 256; i++) wynik += patyczki[i] / 3;

    cout << wynik << endl;

    return 0;
}