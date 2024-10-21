#include <iostream>
#include <string>

using namespace std;

int main() {
    string tekst, wzorzec;
    cin >> tekst >> wzorzec;

    int dl_tekst = tekst.length();
    int dl_wzorzec = wzorzec.length();

    for (int i = 0; i <= dl_tekst - 2 * (dl_wzorzec + 1); i++) {
        bool dopasowanie = true;

        for (int j = 0; j < dl_wzorzec; j++) {
            if (tekst[i + 2 * j] != wzorzec[j]) {
                dopasowanie = false;
                break;
            }
        }

        if (dopasowanie) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << "brak" << endl;
    return 0;
}
