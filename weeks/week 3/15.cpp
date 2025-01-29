#include <iostream>
using namespace std;

int main()
{
    float a, res;
    int n;
    cin >> a >> n;
    for (int i = 1; i <= n; i++)
    {
        res += a;
    }
    cout << res;
}