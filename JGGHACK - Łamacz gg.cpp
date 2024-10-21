#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis;

    while (getline(cin, napis))
    {

        for (int i = 0; i < napis.length(); i += 2)
        {
            int x, y;

            x = napis[i] - 65;
            y = (napis[i + 1] - 65) * 16;
            cout << (char)(x + y);
        }
        cout << endl;
    }

    return 0;
}