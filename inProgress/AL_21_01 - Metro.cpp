#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int testy;
    int r, c, w, h;

    cin >> testy;

    for (int i = 0; i < testy; i++)
    {
        cin >> r >> c >> w >> h;

        float hc = sqrt(pow(r, 2) - pow(c, 2));

        if (w >= c) cout << "NIE" << endl;
        else if ((h + w) <= (2 * r - hc)) cout << "NIE" << endl;
        else cout << "TAK" << endl;
    }

    return 0;
}
