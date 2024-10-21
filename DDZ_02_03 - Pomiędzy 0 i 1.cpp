#include <iostream>
#include <string>

using namespace std;

int main()
{
    string linia;
    int min, max;

    getline(cin, linia);
    if (linia.length() <= 3)
    {
        cout << "PUSTY";
    }
    else
    {
        for (int i = 0; i < linia.length(); i++)
        {
            if (linia[i] == '0')
            {
                min = i;
                break;
            }
        }

        for (int j = linia.length() - 1; j >= 0; j--)
        {
            if (linia[j] == '1')
            {
                max = j;
                break;
            }
        }

        for (int k = min + 1; k < max; k++)
        {
            cout << linia[k];
        }
    }
    

    return 0;
}