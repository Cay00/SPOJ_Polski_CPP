#include <iostream>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    if (a[0] == b[0]) cout << "TAK";
    else if (a[1] == b[1]) cout << "TAK";
    else cout << "NIE";

    return 0;
}