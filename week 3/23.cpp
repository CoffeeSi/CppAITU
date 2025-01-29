#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x;
    cin >> x;
    float res = (x * x) + (256 / (x * x));
    for (float i = 128; i > 1; i /= 2)
    {
        res = (x * x) + (i / res);
    }
    cout << x / res;
    // (x * x) + (256 / (x * x))
}