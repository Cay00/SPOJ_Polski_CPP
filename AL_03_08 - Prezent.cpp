#include <iostream>

using namespace std;

int main()
{
    long long int prezent = 0;
    long long int max = 0;

    long long int wartosc = -1;
    while (wartosc != 0)
    {
        cin >> wartosc;
        if (wartosc > max)
        {
            prezent = max;
            max = wartosc;
        }
        else if (wartosc > prezent && wartosc < max)
        {
            prezent = wartosc;
        }
    }

    if (prezent == 0) cout << max << endl;
    else cout << prezent << endl;

    return 0;
}