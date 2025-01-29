#include <iostream>
using namespace std;

int main()
{
    int n;
    int res = 1;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    cout << res;
    return 0;
}