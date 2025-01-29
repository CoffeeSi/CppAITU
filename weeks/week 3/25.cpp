#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double res = 0;
    double a;
    for (int i = 1; i <= 10; i++)
    {
        cin >> a;
        res += pow(a, i);
    }
    cout << res;
}