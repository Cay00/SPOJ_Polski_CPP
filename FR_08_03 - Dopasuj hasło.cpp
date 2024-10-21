#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    while (testy--)
    {
        string haslo1, haslo2;
        cin >> haslo1 >> haslo2;

        int bledy = 0;
        if (haslo1.length() == haslo2.length())
        {
            for (int i = 0; i < haslo2.length(); i++)
            {
                if (haslo2[i] != '*')
                {
                    if (haslo2[i] == haslo1[i]) bledy += 0;
                    else bledy += 1;
                }
                if (bledy > 0) break;
            }
            if (bledy > 0) cout << "error" << endl;
            else cout << "ok" << endl;
        }
        else cout << "error" << endl;
        
    }

    return 0;
}