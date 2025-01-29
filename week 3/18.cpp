#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    int n;
    cin >> a >> n;
    float res = (1 / a);
    for (int i = 1; i <= n; i++)
    {
        res += (1 / pow(a, i * 2));
    }
    cout << res;
}