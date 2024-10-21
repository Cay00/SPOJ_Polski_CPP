#include <iostream>

using namespace std;

int zapis(char litera)
{
    if (litera == 'a') return 1;
    if (litera == 'b') return 2;
    if (litera == 'c') return 3;
    if (litera == 'd') return 4;
    if (litera == 'e') return 5;
    if (litera == 'f') return 6;
    if (litera == 'g') return 7;
    if (litera == 'h') return 8;
    if (litera == 'i') return 9;
    if (litera == 'k') return 10;
    if (litera == 'l') return 20;
    if (litera == 'm') return 30;
    if (litera == 'n') return 40;
    if (litera == 'o') return 50;
    if (litera == 'p') return 60;
    if (litera == 'q') return 70;
    if (litera == 'r') return 80;
    if (litera == 's') return 90;
    if (litera == 't') return 100;
    if (litera == 'v') return 200;
    if (litera == 'x') return 300;
    if (litera == 'y') return 400;
    if (litera == 'z') return 500;
}

int main()
{
    int suma = 0;
    string napis;

    cin >> napis;
    for (int i = 0; i < napis.length(); i++)
    {
        suma += zapis(napis[i]);
    }

    cout << suma;

    return 0;
}