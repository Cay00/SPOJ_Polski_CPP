#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis;

    while (getline(cin, napis))
    {
        for (int i = 0; i < napis.length(); i++)
        {
            if (napis[i] == '?')
            {
                if (napis[i + 1] == '?')
                {
                    if (napis[i + 2] == '=')
                    {
                        napis[i] = '#';
                        napis.erase(i + 1, 2);
                    }
                    else if (napis[i + 2] == '/')
                    {
                        napis[i] = 92; // '\'
                        napis.erase(i + 1, 2);
                    }
                    else if (napis[i + 2] == 39)
                    {
                        napis[i] = '^';
                        napis.erase(i + 1, 2);
                    }         
                    else if (napis[i + 2] == '(')
                    {
                        napis[i] = '[';
                        napis.erase(i + 1, 2);
                    }
                    else if (napis[i + 2] == ')')
                    {
                        napis[i] = ']';
                        napis.erase(i + 1, 2);
                    }
                    else if (napis[i + 2] == '!')
                    {
                        napis[i] = '|';
                        napis.erase(i + 1, 2);
                    }
                    else if (napis[i + 2] == '<')
                    {
                        napis[i] = '{';
                        napis.erase(i + 1, 2);
                    }
                    else if (napis[i + 2] == '>')
                    {
                        napis[i] = '}';
                        napis.erase(i + 1, 2);
                    }
                    else if (napis[i + 2] == '-')
                    {
                        napis[i] = '~';
                        napis.erase(i + 1, 2);
                    }
                }
            }
        }
        cout << napis;
    }

    return 0;
}