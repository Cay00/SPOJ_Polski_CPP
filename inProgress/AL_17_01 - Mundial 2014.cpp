#include <iostream>

using namespace std;

int main()
{
    string napis =  "Mundial ";
    char a = 'R' - ' ';
    char b = 'P' - ' ';
    char c = 'Q' - ' ';
    char d = 'T' - ' ';

    napis+= a;  
    napis+= b;  
    napis+= c;
    napis+= d;

    cout << napis << endl;

    return 0;
}