#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    int a, b, c, d;

    for (int i = 0; i < testy; i++)
    {
        cin >> a >> b >> c >> d;

        if ((c < a && c < b) || (d < a && d < b)) cout << "TAK" << endl;
        else
        {
            int d1 = sqrt(pow(c, 2) + pow(d, 2));
            if (d1<a &&d1<b)
            {
                cout << "TAK" << endl;
            }
            else cout << "NIE" << endl;
        }
    }

    return 0;
}