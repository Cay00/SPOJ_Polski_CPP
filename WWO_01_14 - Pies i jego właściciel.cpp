#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n, v1, v2;
    cin >> n >> v1 >> v2;

    v1 /= 3.6;
    v2 /= 3.6;
    
    float t1 = n / v1;

    float t2 = n / v2;

    if (v1 >= v2)
    {
        cout << fixed << setprecision(2) << n << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << t1 / t2 * n << endl;
    }

    return 0;
}