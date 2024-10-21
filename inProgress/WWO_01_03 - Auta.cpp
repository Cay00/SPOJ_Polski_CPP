#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin >> testy;

    float* trasa = new float[testy];
    float* predkosc = new float[testy];
    float* czas = new float[testy];
    int pojazd;

    int wyprzedzone = 0, wyprzedzajace = 0;

    for (int i = 0; i < testy; i++)
    {
        cin >> trasa[i] >> predkosc[i];
        czas[i] = trasa[i] / predkosc[i];
    }
    cin >> pojazd;

    for (int i = 0; i < testy; i++)
    {
        if (i == pojazd - 1) {}

        if (czas[pojazd - 1] < czas[i]) wyprzedzone++;
        else if (czas[pojazd - 1] > czas[i]) wyprzedzajace++;
    }

    cout << wyprzedzone << " " << wyprzedzajace << endl;

    return 0;
}