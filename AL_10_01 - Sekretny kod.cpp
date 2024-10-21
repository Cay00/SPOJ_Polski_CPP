#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    for (int i = 0; i < testy; i++)
    {
        int n;
        cin >> n;
        string linia;
        cin >> linia;

        int wynik = 0;
        int x = 0;

        for (int j = 0; j < linia.length(); j++)
        {
            if (n == 1 && linia[j] == '?') wynik += 10;
            else if (n > 1 && j == 0 && linia[j] == '?') wynik += 9;
            else if (linia[j] == '?') x += 1;
        }

        if (x == 0 && wynik == 0) cout << "1" << endl;
        else if (x == 0 && wynik != 0) cout << wynik << endl;
        else if (wynik == 0 && x != 0)
        {
            cout << "1";
            for (int j = 0; j < x; j++) cout << "0";
            cout << endl;
        }
        else
        {
            cout << wynik;
            for (int j = 0; j < x; j++) cout << "0";
            cout << endl;
        }
    }

    return 0;
}