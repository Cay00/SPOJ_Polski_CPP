#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    for (int i = 0; i < testy; i++)
    {
        int n, k;
        cin >> n >> k;

        int wynik = 0, x = k;
        int* ciuchy = new int[n];

        for (int j = 0; j < n; j++)
        {
            cin >> ciuchy[j];
        }
        sort(ciuchy, ciuchy + n);

        for (int l = n - 1; l >= 0; l--)
        {
            x--;
            if (x == 0)
            {
                wynik += ciuchy[l];
                x = k;
            }
        }
        cout << wynik << endl;
    }

    return 0;
}