#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int wymiarY;
    int promien;
    int ile;
    int x, y;

    cin >> wymiarY >> promien;
    cin >> ile;

    int wynik = 0;

    for (int i = 0; i < ile; i++)
    {
        cin >> x >> y;

        if (pow(x - wymiarY, 2) + pow(y - 0, 2) > pow(promien, 2))
        {
            wynik++;
        }
    }
    cout << wynik << endl;

    return 0;
}