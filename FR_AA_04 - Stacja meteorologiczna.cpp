#include <iostream>

using namespace std;

int main()
{
    int testy;
    int temperatura, wynik = 0;
    int ile = 0;

    cin >> testy;

    int tablica[101]; // 101 elementów tablicy na 101 możliwości

    for (int z = 0; z < 101; z++)
    {
        tablica[z] = 0; // przydzielanie każdej pozycji tablicy wartości 0
    }

    for (int i = 0; i < testy; i++)
    {
        cin >> temperatura;
        tablica[temperatura + 50]++;
        ile++;
    }

    for (int j = 0; j < 101; j++)
    {
        if (tablica[j] >= 1)
        {
            wynik++;
        }
    }

    cout << wynik << endl;

    return 0;
}