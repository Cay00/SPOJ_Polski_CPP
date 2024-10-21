#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis;
    char litera;

    while (getline(cin, napis))
    {
        litera = napis[0];
        napis.erase(0, 2);

        string wyjscie = napis;
        for (int i = 0; i < napis.length(); i++)
        {
            wyjscie[i] = ' ';
        }

        for (int i = 0; i < napis.length(); i++)
        {
            if (napis[i] != litera)
            {
                wyjscie[i] = napis[i];
            }
        }
        

        for (int i = 0; i < napis.length(); i++)
        {
            if (wyjscie[i] != ' ') cout << wyjscie[i];
        }
        cout << endl;
    }

    return 0;
}
