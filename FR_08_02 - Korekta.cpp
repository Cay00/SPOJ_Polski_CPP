#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    int w[3], p[3];
    while (testy--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> w[i] >> p[i];
        }

        int wygrane = w[0] + w[1] + w[2];
        int przegrane = p[0] + p[1] + p[2];   

        int rozgrywki = (w[0] + p[0]) * 4; // suma wszystkich gier

        int wynikW = (rozgrywki / 2) - wygrane;
        int wynikP = (rozgrywki / 2) - przegrane;

        cout << wynikW << " " << wynikP << endl;
    }

    return 0;
}