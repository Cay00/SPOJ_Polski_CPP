#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        int* eksponaty = new int[n];
        int max = k;
        int wynik = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> eksponaty[j];
        }

        sort(eksponaty, eksponaty + n);

        for (int j = n - 1; j >= 0; j--)
        {
            cout << "max: " << max << endl;
            cout << "eksponaty: " << eksponaty[j] << endl;
            cout << "zostalo miejsca: " << max - eksponaty[j] << endl;
            
            if (max > eksponaty[j])
            {
                max -= eksponaty[j];
            }
            else if (max <= eksponaty[j])
            {
                wynik++;
                max = k;
            }
            cout << "wynik: " << wynik << endl;
            cout << endl;
        }
        cout << wynik << endl;
    }

    return 0;
}