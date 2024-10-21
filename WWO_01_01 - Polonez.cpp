#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int uczniowie, dziewczyny = 0;
    string imie;   

    cin >> a >> b >> c;
    uczniowie = a + b + c;

    for (int i = 0; i < uczniowie; i++)
    {
        cin >> imie;
        if (imie[imie.length() - 1] == 'a')
        {
            dziewczyny++;
        }
    }

    int chlopcy = uczniowie - dziewczyny;

    if (chlopcy <= dziewczyny) cout << chlopcy << endl;
    else if (chlopcy > dziewczyny) cout << dziewczyny << endl;

    return 0;
}
