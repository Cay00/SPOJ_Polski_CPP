#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    double pi = M_PI;
    double R1, R2;

    for (int i = 0; i < testy; i++)
    {
        cin >> R1 >> R2;

        double RX = 0.5 * sqrt((pow(2 * R1, 2)) + (pow(2 * R2, 2))); // promień dużego koła

        double P1 = 0.5 * pi * pow(R1, 2); // pola połówek kół "księżyców"
        double P2 = 0.5 * pi * pow(R2, 2); // pola połówek kół "księżyców"
        double PO = 0.5 * pi * pow(RX, 2); // pole połowy dużego koła

        double PT = 0.5 * 2 * R1 * 2 * R2; // pole trójkąta

        double wynik = P1 + P2 + PT - PO;
        cout << fixed << setprecision(2) << wynik << endl;
    }

    return 0;
}