#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    float res;
    float a = 1;
    float b = 1;
    cin >> x;
    for (int i = 1; i <= 6; i++)
    {
        a *= (x - pow(2, i));
        b *= (x - pow(2, i) - 1);
    }

    cout << a / b;

    return 0;
}