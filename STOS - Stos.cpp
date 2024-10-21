#include <iostream>

using namespace std;

void dodaj(int);
void usun();

int rozmiar = 0;
int tab[10];

int main()
{
    char znak;
    int liczba;

    while (cin >> znak)
    {
        if (znak == '+')
        {
            cin >> liczba;
            dodaj(liczba);
        }
        else if (znak == '-')
        {
            usun();
        }
        else
        {
            cout << ":(" << endl;
        }
    }

    return 0;
}

void dodaj(int liczba)
{
    if (rozmiar >= 10)
    {
        cout << ":(" << endl;
    }
    else
    {
        rozmiar++;
        tab[rozmiar - 1] = liczba;
        cout << ":)" << endl;
    }
}
void usun()
{
    if (rozmiar > 0)
    {
        cout << tab[rozmiar - 1] << endl;
        rozmiar--;
    }
    else
    {
        cout << ":(" << endl;
    }

}
