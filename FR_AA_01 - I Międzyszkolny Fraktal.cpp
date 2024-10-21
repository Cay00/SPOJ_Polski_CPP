#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int suma = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> a >> b;
        suma += (a - b);
    }
    cout << suma;

    return 0;
}