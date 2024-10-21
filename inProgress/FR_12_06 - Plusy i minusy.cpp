#include <iostream>

using namespace std;

int main()
{
    string linia;
    cin >> linia;

    int plusy = 0;
    int minusy = 0;
    int oceny = 0;

    for (int i = 0; i < linia.length(); i++)
    {
        if (linia[i] == '+')
        {
            if (minusy == 0) plusy++;
            else minusy--;
        }
        else if (linia[i] == '-')
        {
            if (plusy == 0) minusy++;
            else plusy--;
        }

        if (minusy == 3 && linia[i+1] != '+')
        {
            cout << "1 ";
            minusy = 0;
            oceny++;
        }
        if (plusy == 3 && linia[i+1] != '-')
        {
            cout << "5 ";
            plusy = 0;
            oceny++;
        }
    }

    if (oceny == 0) cout << "BRAK";

    return 0;
}