#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    if (x <= y && y <= z)
    {
        cout << x * 2 << endl;
        cout << y * 2 << endl;
        cout << z * 2;
    }
    else
    {
        cout << abs(x) << " " << abs(y) << " " << abs(z);
    }
    return 0;
}