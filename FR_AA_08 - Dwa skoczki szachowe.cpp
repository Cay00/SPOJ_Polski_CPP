#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    if (b[0] == a[0] - 2)
    {
        if ((b[1] == a[1] + 1) || (b[1] == a[1] - 1)) cout << "TAK" << endl;
        else cout << "NIE" << endl;
    }
    else if (b[0] == a[0] - 1)
    {
        if ((b[1] == a[1] + 2) || (b[1] == a[1] - 2)) cout << "TAK" << endl;
        else cout << "NIE" << endl;
    }
    else if (b[0] == a[0] + 1)
    {
        if ((b[1] == a[1] + 2) || (b[1] == a[1] - 2)) cout << "TAK" << endl;
        else cout << "NIE" << endl;
    }
    else if (b[0] == a[0] + 2)
    {
        if ((b[1] == a[1] + 1) || (b[1] == a[1] - 1)) cout << "TAK" << endl;
        else cout << "NIE" << endl;
    }
    else cout << "NIE" << endl;

    return 0;
}