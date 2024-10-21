#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x_srodka, y_srodka, r_k; // współrzędne środka okręgu, promień
    int testy;

    cin >> x_srodka >> y_srodka >> r_k >> testy;

    for (int i = 0; i < testy; i++)
    {
        int x_punktu, y_punktu; // współrzędne punktu
        cin >> x_punktu >> y_punktu;

        if (pow(x_punktu - x_srodka, 2) + pow(y_punktu - y_srodka, 2) == pow(r_k, 2))
        {
            cout << "E" << endl;
        }
        else if (pow(x_punktu - x_srodka, 2) + pow(y_punktu - y_srodka, 2) < pow(r_k, 2))
        {
            cout << "I" << endl;
        }
        if (pow(x_punktu - x_srodka, 2) + pow(y_punktu - y_srodka, 2) > pow(r_k, 2))
        {
            cout << "O" << endl;
        }

    }

    return 0;
}