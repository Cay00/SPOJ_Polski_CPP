#include <iostream>
#include <string>

using namespace std;

int main()
{
    string linia;
    while (getline(cin, linia))
    {
        for (int i = 0; i < linia.length(); i++)
        {
            if (linia[i] != ' ')
            {
                if (linia[i] == 'Q') linia[i] = 'A';
                else if (linia[i] == 'W') linia[i] = 'B';
                else if (linia[i] == 'E') linia[i] = 'C';
                else if (linia[i] == 'R') linia[i] = 'D';
                else if (linia[i] == 'T') linia[i] = 'E';
                else if (linia[i] == 'Y') linia[i] = 'F';
                else if (linia[i] == 'U') linia[i] = 'G';
                else if (linia[i] == 'I') linia[i] = 'H';
                else if (linia[i] == 'O') linia[i] = 'I';
                else if (linia[i] == 'P') linia[i] = 'J';
                else if (linia[i] == 'A') linia[i] = 'K';
                else if (linia[i] == 'S') linia[i] = 'L';
                else if (linia[i] == 'D') linia[i] = 'M';
                else if (linia[i] == 'F') linia[i] = 'N';
                else if (linia[i] == 'G') linia[i] = 'O';
                else if (linia[i] == 'H') linia[i] = 'P';
                else if (linia[i] == 'J') linia[i] = 'Q';
                else if (linia[i] == 'K') linia[i] = 'R';
                else if (linia[i] == 'L') linia[i] = 'S';
                else if (linia[i] == 'Z') linia[i] = 'T';
                else if (linia[i] == 'X') linia[i] = 'U';
                else if (linia[i] == 'C') linia[i] = 'V';
                else if (linia[i] == 'V') linia[i] = 'W';
                else if (linia[i] == 'B') linia[i] = 'X';
                else if (linia[i] == 'N') linia[i] = 'Y';
                else if (linia[i] == 'M') linia[i] = 'Z';
            }
        }
        cout << linia << endl;
    }

    return 0;
}