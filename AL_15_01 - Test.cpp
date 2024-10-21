#include <iostream>
#include <string>

using namespace std;

int main()
{
    string darek, jarek, marek;
    int wynik = 0;

    getline(cin, darek);
    getline(cin, jarek);
    getline(cin, marek);

    for (int i = 0; i < darek.length(); i++)
    {
        if (darek[i] != jarek[i]) wynik++;
        if (darek[i] != marek[i] && marek[i] == jarek[i]) wynik++;
        if (darek[i] == jarek[i] && marek[i] != jarek[i]) wynik++;
    }

    cout << wynik;

    return 0;
}