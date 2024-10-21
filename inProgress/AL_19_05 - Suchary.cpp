#include <iostream>
#include <algorithm>

using namespace std;

/* WYSZUKIWANIE BINARNE */
int main()
{
    int n, m;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    
    int* c = new int[n];
    int* d = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int kar = 0, tad = 0;
        cin >> c[i] >> d[i];
    }
    sort(a[0], a[n]);

    int tad = 0, kar = 0;
    for (int i = 0; i < m; i++)
    {
        int l = 0;
        int p = n;
        int sr = (l + p) / 2;

        for (int j = 0; j < n; j++)
        {
            if (c[j] < c[sr])
            {
                do
                {
                    p = sr - 1;
                } while (c[j] != c[sr]);
            }
            else if (c[j] > c[sr])
            {
                do
                {
                    p = sr + 1;
                } while (c[j] != c[sr]);
            }

            if (c[j] < c[sr])
            {
                
            }
            else if (c[j] > c[sr])
            {
                
            }
        }

    /*if (tad > kar) cout << "Tadeusz" << endl;
    else if (tad < kar) cout << "Karol" << endl;
    else cout << "Remis" << endl;*/
    }

    return 0;
}