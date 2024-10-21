#include <iostream>

using namespace std;

int main()
{
    int testy;

    cin >> testy;
    while (testy--)
    {
        int N = 1;
        int* mieszkaniec = new int[N];
        int* wzrost = new int[N];
        int* wiek = new int[N];
        int* przyrost = new int[N];

        double g = 10, v;

        cin >> v >> N;

        // wczytywanie danych mieszkańców
        for (int i = 0; i < N; i++)
        {
            // wzrost >> wiek >> przyrost
            cin >> wzrost[i] >> wiek[i] >> przyrost[i];
        }


        // kolejne lata
        for (int i = 0; i < 21; i++)
        {
            int min = 350; // najniższy mieszkaniec
            for (int j = 0; j < N; j++)
            {
                if (wzrost[j] < min) min = wzrost[j];
            }

            double S = (v * v) / (2 * g);
            double wyjscie = (S * 100) + min;

            // przyrost roczny (wzrost, wiek)
            for (int j = 0; j < N; j++)
            {
                if (wiek[j] < 20) wzrost[j] += przyrost[j];
                wiek[j]++;
            }
            cout << i << ": " << wyjscie << endl;
        }
    }

    return 0;
}