#include <iostream>

using namespace std;

int main()
{
    int k;
    string instruction;
    cin >> k;

    int wynik = 0;
    int open = 0;
    int max = 0;
    int inside = 0;

    for (int i = 0; i < k; i++)
    {
        cin >> instruction;

        if (instruction == "for")
        {
            wynik++;
            if (wynik > max) max = wynik;
            if (open == 1) inside++;
            open = 1;
        }
        else if (instruction == "end")
        {
            wynik--;
            open = 0;
        }
    }

    if (max == 0) cout << "O(1)" << endl;
    else if (max > 0 && inside == 0) cout << "O(n)" << endl;
    else if (max > 0) cout << "O(n^" << max << ")" << endl;

    return 0;
}