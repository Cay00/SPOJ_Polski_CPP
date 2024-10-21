#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string linia;
    string wynik;
    int liczba = 0;

    while (getline(cin, linia))
    {
        cout << linia[0];
        for (int i = 0; i < linia.length(); i++)
        {
            if (isspace(linia[i]))
            {
                cout<< linia[i + 1];
            }
            if (linia[i] == '.')
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}