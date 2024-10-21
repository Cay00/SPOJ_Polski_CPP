#include <iostream>
#include <string>

using namespace std;

int main()
{
    int wynik = 0;
    int oceny = 0;
    string linia; 

    getline(cin, linia);

    for (int i = 0; i < linia.size(); i++)
    {
        if (wynik == 3) 
        { 
            if (oceny > 0) cout << " ";
            cout << "5"; 
            oceny++;
            wynik = 0;
        }
        else if (wynik == -3) 
        {
            if (oceny > 0) cout << " ";
            cout << "1";
            oceny++;
            wynik = 0;
        }

        if (linia[i] == '+')
        {
            wynik++;
        }
        else wynik--;
    }
    if (wynik > -3 && wynik < 3 && oceny == 0) cout << "BRAK";

    return 0;
}