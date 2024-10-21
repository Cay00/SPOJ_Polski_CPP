#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    while (testy--)
    {
        double a, b;
        cin >> a >> b;
        double x;
        if (a > b) x = (a - b) / 2;
        else x = (b - a) / 2;

        double bok = (a + b) / 2;
        double wysokosc = sqrt((pow(bok, 2)) - (pow(x, 2)));
        double wynik = ((a + b) / 2) * wysokosc;
        cout << fixed << setprecision(2) << wynik << endl;
    }

    return 0;
}