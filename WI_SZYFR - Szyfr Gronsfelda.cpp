#include <iostream>
#include <string>

using namespace std;

int main()
{
    string polecenie;
    string klucz;
    string linia;

    cin >> polecenie >> klucz >> linia;

    if (polecenie == "SZYFRUJ")
    {
        for (int i = 0; i < linia.length(); i++)
        {
            linia[i] += (int)klucz[i % klucz.length()] - 48;
            if (linia[i] > 'Z') linia[i] -= 26;
        }
        cout << linia << endl;
    }

    else if (polecenie == "DESZYFRUJ")
    {
        for (int i = 0; i < linia.length(); i++)
        {
            linia[i] -= (int)klucz[i % klucz.length()] - 48;
            if (linia[i] < 'A') linia[i] += 26;
        }
        cout << linia << endl;
    }

    return 0;
}