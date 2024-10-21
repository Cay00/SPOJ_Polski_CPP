#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testy;
    cin >> testy;
    string napis;
    
    while (getline(cin, napis))
    {
        int malpy = 0;

        int bledy = 0;
        for (int i = 0; i < napis.length(); i++)
        {
            if (((napis[i] >= 'a') && (napis[i] <= 'z')) || ((napis[i] >= 'A') && (napis[i] <= 'Z')) || ((napis[i] >= '0') && (napis[i] <= '9')) || (napis[i] == '.') || (napis[i] == '_') || (napis[i] == '@'))
            {
                if (napis[i] == '@')
                {
                    malpy++;
                    if (malpy > 1)
                    {
                        cout << "Nie" << endl;
                        bledy++;
                        break;
                    }
                }
                if (napis[i] == '.' && i > 0)
                {
                    if (napis[i - 1] == '.')
                    {
                        cout << "Nie" << endl;
                        bledy++;
                        break;
                    }
                }
            }
            else
            {
                cout << "Nie" << endl;
                bledy++;
                break;
            }
        }
        if (bledy < 1) cout << "Tak" << endl;
    }

    return 0;
}