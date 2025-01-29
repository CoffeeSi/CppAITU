#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float maxi = max(a, b);
    maxi = max(maxi, c);
    float mini = min(a, b);
    mini = min(mini, c);
    if (a == maxi)
    {
        if (maxi < b + c)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
    if (b == maxi)
    {
        if (maxi < a + c)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
    if (c == maxi)
    {
        if (maxi < a + b)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
}