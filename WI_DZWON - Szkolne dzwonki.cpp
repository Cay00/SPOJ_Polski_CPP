#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int godziny, minuty;
    char znak;
    int przerwa;

    cin >> godziny >> znak >> minuty;

    if (godziny < 10) cout << "0" << godziny << ":";
    else if (godziny >= 10)  cout << godziny << ":";
    if (minuty < 10) cout << "0" << minuty;
    else if (minuty >= 10) cout << minuty;

    minuty += 45;
    if (minuty >= 60)
    {
        godziny += floor(minuty / 60);
        minuty = minuty % 60;
        if (godziny >= 24) godziny = godziny % 24;
    }

    cout << ",";
    if (godziny < 10) cout << "0" << godziny << ":";
    else if (godziny >= 10)  cout << godziny << ":";
    if (minuty < 10) cout << "0" << minuty;
    else if (minuty >= 10) cout << minuty;

    while (cin >> przerwa)
    {
        /* MATMA */
        minuty += przerwa;
        if (minuty >= 60)
        {
            godziny += floor(minuty / 60);
            minuty = minuty % 60;       
            if (godziny >= 24) godziny = godziny % 24;
        }
        /* END OF: MATMA */

        cout << ",";
        if (godziny < 10) cout << "0" << godziny << ":";
        else if (godziny >= 10)  cout << godziny << ":";
        if (minuty < 10) cout << "0" << minuty;
        else if (minuty >= 10) cout << minuty;

        minuty += 45;
        if (minuty >= 60)
        {
            godziny += floor(minuty / 60);
            minuty = minuty % 60;
            if (godziny >= 24) godziny = godziny % 24;
        }
        cout << ",";
        if (godziny < 10) cout << "0" << godziny << ":";
        else if (godziny >= 10)  cout << godziny << ":";
        if (minuty < 10) cout << "0" << minuty;
        else if (minuty >= 10) cout << minuty;
    }

    return 0;
}