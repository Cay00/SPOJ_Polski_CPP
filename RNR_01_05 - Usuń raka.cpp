#include <iostream>
#include <string>

using namespace std;

int main()
{
    string linia;

    int testy = 0, a = 0;
    cin >> testy;
    while (cin >> linia)
    { 
        int x = 0, m = 0;
        for (int i = 0; i < linia.length(); i++)
        {
            if (linia[i] == 'r' && linia[i + 1] == 'a' && linia[i + 2] == 'k')
            {
                if (x == 0) m = i;
                x++;    
            }
        }
        if (x > 1) cout << "NIE" << endl;
        else
        {
            if (x == 0) cout << "TAK 1 2" << endl;
            else cout << "TAK " << m + 1 << " " << m + 3 << endl;
        }

        a++;
        if (a == testy) return 0;
    }

    return 0;
}