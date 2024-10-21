#include <iostream>

using namespace std;

int main()
{
    string linia;
    cin >> linia;

    int numer = 0;
    int wynik = 0;

    for (int i = 0; i < linia.length(); i++)
    {
        if (numer == 0 && linia[i] == 'k') numer++;
        else if (numer == 1 && linia[i] == 'o') numer++;
        else if (numer == 2 && linia[i] == 't') numer++;

        if(numer == 3) 
        {
            wynik++;
            numer = 0;
        }
    }

    if (wynik == 0) cout << "NIE" << endl;
    else cout << wynik << endl;

    return 0;
}