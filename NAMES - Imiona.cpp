#include <iostream>

using namespace std;

int main()
{
    char znak;
    int numery = 1;
    string* imie = new string[numery];
    
    int imiona = 1;
    string* imieOut = new string[imiona];
    int* imieOutNumber = new int[imiona];
    imieOutNumber[0] = 0;

    for (;;)
    {
        int numer = 0;
        
        // wczytywanie imion, zmiana wielkosci liter
        cin >> znak >> znak >> imie[numer] >> imie[numer];
        for (int i = 0; i < imie[numer].length(); i++)
        {
            if (imie[numer][i] > 'Z') imie[numer][i] -= 32;
        }


        // szuaknie imienia w tablicy
        bool jest = false;
        for (int i = 0; i < imiona; i++)
        {
            if (imieOut[i] == imie[numer])
            {
                if (imieOutNumber[imiona] >= 0) imieOutNumber[imiona]++;
                jest = true;
            }
        }

        // wpisywanie nowego imienia do tablicy
        if (jest == false)
        {
            imiona++;
            //imieOutNumber[imiona] = 0;
            numery++;
            imieOut[imiona - 2] = imie[numer];
        }


        numer++;

        // wypisywanie tablicy
        for (int i = 0; i < numery; i++)
        {
            cout << imieOut[i] << " " <<  endl;
        }
    }

    return 0;
}