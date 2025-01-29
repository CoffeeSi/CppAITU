#include <iostream>
using namespace std;

int main()
{
    float a, res, n;
    res = 1;
    cin >> a >> n;

    for (int i = 1; i <= n; i++)
    {

        res *= (a + i - 1);
    }
    cout << res;
}