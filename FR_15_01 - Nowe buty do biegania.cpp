#include <iostream>

using namespace std;

int main()
{
    float k, x = 1.609344;
    cin >> k;

    if (k / x < 300) cout << "NIE" << endl;
    else if (k / x > 500) cout << "TAK" << endl;
    else cout << "SPRAWDZIMY TWOJE OBECNE BUTY" << endl;

    return 0;
}