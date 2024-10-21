#include <iostream>

using namespace std;

int main()
{
    int liczba[3];
    float suma = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> liczba[i];
        suma += liczba[i];
    }
    cout << suma / 3;

    return 0;
}