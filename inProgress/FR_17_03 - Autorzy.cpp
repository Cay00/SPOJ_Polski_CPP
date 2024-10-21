#include <iostream>

using namespace std;

int main()
{
    int g, m;
    cin >> g >> m;

    if (g > m)
    {
        cout << "1";
        for (int i = 0; i < g; i++)
        {
            if (g - i - 1 == m) cout << "1";
            else cout << "0";
        }
    }
    else if (m > g)
    {
        cout << "1";
        for (int i = 0; i < m; i++)
        {
            if (m - i - 1 == g) cout << "1";
            else cout << "0";
        }
    }
    else 
    {
        cout << "2";
        for (int i = 0; i < m; i++) cout << "0";
    }

    return 0;
}