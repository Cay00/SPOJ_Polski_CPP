#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testy;
    string napis;

    cin >> testy;   

    while (testy--)
    {
        int wynik;
        cin >> napis;

        if (napis[0] == 'p') wynik = 4;
        else if (napis[0] == 'n') wynik = 5;

        for (int i = 1; i < napis.length(); i++)
        {   
            if (wynik - 7 >= 250000000)
            {
                wynik -= 1000000007;
            }
            else  wynik *= 5;
            //if (wynik >= 1000000007) wynik %= 1000000007;
        }

        cout << wynik << endl;
    }

    return 0;
}