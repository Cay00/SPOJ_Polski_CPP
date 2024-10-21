#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    string wyraz;

    while (testy--)
    {
        cin >> wyraz;

        int poprawny = 1;

        // 1.
        for (int i = 0; i < wyraz.length(); i++)
        {
            if (wyraz[i] == 'e') wyraz[i] = 'i';
            if (wyraz[i] == 'a') wyraz[i] = 'e';
        }

        // 2.
        int licznikA = 0;
        int licznikE = 0;
        int licznikO = 0;
        int licznikU = 0;

        for (int i = 0; i < wyraz.length(); i++)
        {
            if (wyraz[i] == 'a')licznikA++;
            if (wyraz[i] == 'e')licznikE++;
            if (wyraz[i] == 'o')licznikO++;
            if (wyraz[i] == 'u')licznikU++;
        }

        if (licznikA == 0 && licznikE == 0 && licznikO > 0)
        {
            for (int i = 0; i < wyraz.length(); i++)
            {
                if (wyraz[i] == 'o') wyraz[i] = 'e';
            }
        }
        else if (licznikA == 0 && licznikE == 0 && licznikO == 0 && licznikU > 0)
        {
            for (int i = 0; i < wyraz.length(); i++)
            {
                if (wyraz[i] == 'u') wyraz[i] = 'e';
            }
        }
        else if (licznikA == 0 && licznikE == 0 && licznikO == 0 && licznikU == 0)
        {
            for (int i = 0; i < wyraz.length(); i++)
            {
                if (wyraz[i] == 'y') wyraz[i] = 'e';
            }
        }

        // 4.
        int samogloski = 0;
        for (int i = 0; i < wyraz.length(); i++)
        {
            if (i < wyraz.length() - 1 && wyraz[i] == wyraz[i + 1]) poprawny = 0;
            if (wyraz[i] == 'a' || wyraz[i] == 'e' || wyraz[i] == 'i' || wyraz[i] == 'o' || wyraz[i] == 'u' || wyraz[i] == 'y')
            {
                samogloski++;
            }
        }

        if (samogloski == 0) poprawny = 0;

        if (poprawny == 1) cout << wyraz << endl;
        else cout << "wyraz niezgodny z zasadami mowy" << endl;
    }

    return 0;
}