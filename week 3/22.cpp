#include <iostream>
#include <cmath>
using namespace std;

// double func(double x, int n)
// {
//     if (n >= 0)
//     {
//         return func((n + (1 / (x))), n - 2);
//     }
//     return (x);
// }

// int main()
// {
//     int n;
//     float b = 101 + (1 / 101);
//     cin >> n;
//     cout << 1 / func(99, b);
// }
int main()
{
    double ans = 1 / 103;
    for (int i = 101; i >= 1; i -= 2)
    {
        ans += i;
        ans = 1 / ans;
    }
    cout << ans;
}