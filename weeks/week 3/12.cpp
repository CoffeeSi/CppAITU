#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double res = 1.0;
    for (int i = 1; i <= n; i++)
    {
        res *= 1.0 + (1.0 / (i * i));
    }
    cout << res;
}