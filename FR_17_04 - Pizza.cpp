#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int Nm, Sm, Ng, Sg, M, G;
        cin >> Nm >> Sm >> Ng >> Sg;

        M = Nm * pow(Sm, 2);
        G = Ng * pow(Sg, 2);

        if (M > G) cout << "Maciek" << endl;
        else if (G > M) cout << "Grzesiek" << endl;
        else cout << "porcje sa takie same" << endl;
    }

    return 0;
}