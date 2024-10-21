#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    while (testy--)
    {
        string napis;
        char najmniejszy = 'Z';
        char najwiekszy = 'A';

        cin >> napis;
        for (int i = 0; i < napis.length(); i++)
        {
            if (napis[i] <= najmniejszy) najmniejszy = napis[i];
            if (napis[i] >= najwiekszy) najwiekszy = napis[i];
        }

        cout << najwiekszy - najmniejszy << endl;
    }

    return 0;
}