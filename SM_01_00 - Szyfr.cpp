#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    while (testy--)
    {
        string linia;
        cin >> linia;

        int litery = linia.length() / 5;
        char* slowo = new char[litery];

        for (int i = 0; i < litery; i++)
        {
            slowo[i] = 'A';
        }

        for (int i = 0; i < litery; i++)
        {
            int liczba = 0;
            //if ((i != litery - 1) && (i % 5 == 0)) litery--;
            for (int j = 4; j >= 0; j--)
            {
                if (linia[j + (i * 5)] == '1')
                {
                    slowo[i] += pow(2, liczba);
                }
                liczba++;
            }
        }

        for (int i = 0; i < litery; i++)
        {
            cout << slowo[i];
        }
        cout << endl;
    }

    return 0;
}