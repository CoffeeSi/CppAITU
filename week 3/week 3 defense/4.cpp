#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, res = 1;
    cin >> a;
    for (int n = 1; n < 5; n++)
    {
        res += pow(sqrt(n * n + 1) - n, a);
    }
    cout << res;
}