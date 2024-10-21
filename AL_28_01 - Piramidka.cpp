#include <iostream>

using namespace std;

int main()
{
    int dlugosc;
    string napis;

    cin >> dlugosc >> napis;


    for (int i = napis.length() / 2; i >= 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << ".";
        }
        for (int k = i; k < napis.length() - i; k++)
        {
            cout << napis[k];
        }
        for (int j = i; j > 0; j--)
        {
            cout << ".";
        }

        cout << endl;
    }

    return 0;
}