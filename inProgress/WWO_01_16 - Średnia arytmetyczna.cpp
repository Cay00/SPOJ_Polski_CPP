#include <iostream>

using namespace std;

int main()
{
    int ile;
    int liczba, suma = 0;
    int najwieksza = 0;

    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        cin >> liczba;
        suma += liczba;
    }
    for (int k = 0; k < ile; k++)
    {
        if (najwieksza < k)
        {
            najwieksza = k;
        }
    }
    cout << najwieksza;

    return 0;
}