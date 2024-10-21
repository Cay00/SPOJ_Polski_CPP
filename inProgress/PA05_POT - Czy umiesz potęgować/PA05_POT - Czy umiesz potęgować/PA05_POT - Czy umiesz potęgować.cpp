#include <iostream>

using namespace std;

int main()
{
    int d, a, b;
    cin >> d;

    for (int i = 0; i < d; i++)
    {
        cin >> a >> b;
        int wynik = a;

        for (int j = 1; j < b; j++)
        {
            wynik *= a;
            wynik %= 10;
        }
        cout << wynik << endl;
    }

    return 0;
}