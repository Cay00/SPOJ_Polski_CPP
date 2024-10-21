#include <iostream>

using namespace std;

int main() {

    double l1, m1, l2, m2;
    char znak;

    cin >> l1 >> znak >> m1 >> l2 >> znak >> m2;

    int x = m1;

    l1 *= m2;
    m1 *= m2;
    l2 *= x;
    m2 *= x;

    int l = l1 + l2;

    cout << l << "/" << m1 << endl;

    return 0;
}