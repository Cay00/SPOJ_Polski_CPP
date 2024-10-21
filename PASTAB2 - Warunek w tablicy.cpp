#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin >> testy;
    int* tab = new int[testy];
    char rownanie;
    int znak, x;


    for (int i = 0; i < testy; i++)
    {
        cin >> znak;
        tab[i] = znak;
    }
    cin >> rownanie >> x;

    if (rownanie == '<')
    {
        for (int i = 0; i < testy; i++)
        {
            if (tab[i] < x) cout << tab[i] << endl;
        }
    }
    else
    {
        for (int i = 0; i < testy; i++)
        {
            if (tab[i] > x) cout << tab[i] << endl;
        }
    }

    return 0;
}
