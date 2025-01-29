#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, res, fact = 1;
    cin >> x;
    for (int i = 1; i <= 5; i++)
    {
        res += pow(x - i, 2) / fact;
        fact *= i;
    }
    cout << res;
}