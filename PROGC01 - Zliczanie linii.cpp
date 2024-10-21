#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char znak;
    int wynik = 0;
    while ((znak = cin.get()) != EOF)
    {
        if (znak == '\n')
        {
            wynik++;
        }
    }
    cout << wynik + 1;
    return 0;
}