#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y, z;
    float mini, maxi;

    cin >> x >> y >> z;
    maxi = max(x, y);
    maxi = max(maxi, z);
    mini = min(x, y);
    mini = min(mini, z);
    if (x > y && x > z)
    {
        maxi = x;
        if (y > z)
        {
            mini = z;
        }
        else
        {
            mini = y;
        }
    }
    else if (x < y && y > z)
    {
        maxi = y;
        if (x > z)
        {
            mini = z;
        }
        else
        {
            mini = x;
        }
    }
    else if (x < y && y < z)
    {
        maxi = z;
        if (x > y)
        {
            mini = y;
        }
        else
        {
            mini = x;
        }
    }

    cout << mini << " " << maxi;
}