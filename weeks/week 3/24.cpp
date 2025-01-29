#include <iostream>
using namespace std;

int main()
{
    int _;
    cin >> _;
    double res;
    for (double i = 1; i <= 50; i++)
    {
        res += (1.0 / (i * i * i));
    }
    cout << res;
}