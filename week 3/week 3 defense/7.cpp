#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, res = 1, fact = 1;
    cin >> x;
    for (int i = 1; i <= 7; i++)
    {
        res = pow(-1, i + 2) * (pow(sqrt(x - 1), 2) / fact);
        fact *= i;
    }
    cout << res;
}