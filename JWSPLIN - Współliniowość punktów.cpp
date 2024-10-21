#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin >> testy;
    while (testy--)
    {
        float x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        float y = x2 - x1;
        float x = y2 - y1;
        float reszta = (-1) * (x1 * y2) + (x2 * y1);

        //if (reszta > 0) cout << y << "y = " << x << "x + " << reszta;
        //else  cout << y << "y = " << x << "x " << reszta;

        if ((y * y3) == (x * x3 + reszta)) cout << "TAK" << endl;
        else cout << "NIE" << endl;
    }

    return 0;
}