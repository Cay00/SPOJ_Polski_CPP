#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string napis; 

    while (getline(cin, napis))
    {
        int slowa = 0;
        int liczby = 0;

        if (isdigit(napis[0])) liczby++; // czy liczba
        else slowa++;

        for (int i = 1; i < napis.length(); i++)
        {
            if (isspace(napis[i])) // wczytywanie pierwszego znaku po spacji
            {
                if (isalpha(napis[i + 1])) slowa++; // czy słowo
                else liczby++;
            }
        }

        cout << liczby << " " << slowa << endl;
    }

    return 0;
}