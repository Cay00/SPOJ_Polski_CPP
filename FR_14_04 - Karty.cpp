#include <iostream>
#include <string>

using namespace std;

int main()
{
    string linia;

    int wynik[2];

    for (int i = 0; i < 2; i++)
    {
        wynik[i] = 0;
        char znak;
        getline(cin, linia);
        for (int j = 0; j < linia.length(); j++)
        {
            if (linia[j] == 'T')  wynik[i] += 10;
            else if (linia[j] == 'J')  wynik[i] += 11;
            else if (linia[j] == 'Q')  wynik[i] += 12;
            else if (linia[j] == 'K')  wynik[i] += 13;
            else if (linia[j] == 'A')  wynik[i] += 14;
            else wynik[i] += linia[j] - 48;
        }
    }

    if (wynik[0] > wynik[1]) cout << "JASIO" << endl;
    else if (wynik[0] < wynik[1]) cout << "STASIO" << endl;
    else cout << "REMIS" << endl;


    return 0;
}