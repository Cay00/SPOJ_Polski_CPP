#include <iostream>

using namespace std;

int main()
{
    int tests;
    cin >> tests;

    string timeText;

    int a = 0, b = 0, c = 0, d = 0;

    for (int i = 0; i < tests; i++)
    {
        int** time = new int* [6];
        for (int j = 0; j < 6; j++)
        {
            time[j] = new int[1];
        }

        for (int j = 0; j < 6; j++)
        {
            cin >> timeText;
            time[j][1] = (((timeText[0] - 48) * 10 + (timeText[1] - 48)) * 60 + (timeText[3] - 48) * 10 + (timeText[4] - 48)) * 60 + (timeText[6] - 48) * 10 + (timeText[7] - 48);
            //cout << time[j][1] << endl;
        }

        for (int j = 1; j < 4; j++)
        {
            //cout << time[j][1] - time[j - 1][1] << endl;
            if ((time[0][1] >= time[j][1] - time[j - 1][1]) && (time[0][1] > time[3][1] - time[2][1]))
            {
                b++;
                if (time[5][1] >= time[4][1]) a++;
                break;
            }
            else
            {
                d++;
                if (time[5][1] >= time[4][1]) c++;
                break;
            }
        }

    }

    cout << a << "/" << b << " " << c << "/" << d << endl;

    return 0;
}