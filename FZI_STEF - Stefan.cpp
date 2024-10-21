#include <iostream>

using namespace std;

int main()
{
    int testy, zysk;
    long long suma = 0;
    long long maks = 0;

    cin >> testy;

    for (int i = 0; i < testy; i++)
    {
        cin >> zysk;

        suma += zysk; // sumowanie kolejnych liczb

        if (suma > maks)
        {
            maks = suma;
        }
        else if (suma < 0)
        {
            suma = 0;
        }
    }

    cout << maks;

    return 0;
}