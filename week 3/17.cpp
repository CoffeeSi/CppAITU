#include <iostream>
using namespace std;

float fact(float a, int b)
{
    float res = 1;
    for (int i = 1; i <= b; i++)
    {
        res *= (a + i);
    }

    return res;
}

int main()
{
    float a;
    int n;
    cin >> a >> n;
    float res = 1 / a;
    for (int i = 1; i <= n; i++)
    {
        res += 1 / (a * fact(a, i));
    }
    cout << res;
}