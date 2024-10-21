#include <iostream>

using namespace std;

int main()
{
    string wschod, zachod, godzina;
    cin >> wschod >> zachod >> godzina;

    int wschodLiczba = ((wschod[0] - 48) * 10 + wschod[1] - 48) * 60 + (wschod[3] - 48) * 10 + wschod[4] - 48;
    int zachodLiczba = ((zachod[0] - 48) * 10 + zachod[1] - 48) * 60 + (zachod[3] - 48) * 10 + zachod[4] - 48;
    int godzinaLiczba = ((godzina[0] - 48) * 10 + godzina[1] - 48) * 60 + (godzina[3] - 48) * 10 + godzina[4] - 48;
    
    if (godzinaLiczba >= wschodLiczba && godzinaLiczba < zachodLiczba) cout << "dzien" << endl;
    else cout << "noc" << endl;

    return 0;
}