#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int czas[3];
    int numer, najszybszy = 301;

    for (int i = 0; i < 3; i++)
    {
        cin >> czas[i];
    }

    for (int j = 0; j < 3; j++)
    {
        if (czas[j] < najszybszy)
        {
            najszybszy = czas[j];
            numer = j + 1;
        }
    }

    sort(czas, czas + 3);

    if (czas[0] == czas[1])
    {
        cout << "NIE";
    }
    else
    {
        cout << "TAK " << numer;
    }

    return 0;
}