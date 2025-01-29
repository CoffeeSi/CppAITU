#include <iostream>
#include <cmath>
using namespace std;

// double func(double x, double a, int n)
// {
//     if (n > 0)
//     {
//         x = pow((x + a), 2);
//         return func(x, a, n - 1);
//     }
//     return x;
// }

int main()
{
    float x, a;
    int n;
    cin >> x >> a >> n;
    float res = (x + a);
    for (n; n > 0; n--)
    {
        res = (pow(res, 2) + a);
    }
    cout << round(1000 * res) / 1000;
}