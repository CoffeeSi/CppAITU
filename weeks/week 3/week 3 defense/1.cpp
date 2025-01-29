#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x;
    cin >> x;
    float res = (x + 9);
    for (int i = 7; i >= 1; i -= 2)
    {
        res = x + (i / res);
    }
    cout << res;
}