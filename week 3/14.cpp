#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double a = sqrt(2);
    for (int i = 1; i < n; i++)
    {
        a += 2;
        a = sqrt(a);
    }
    cout << a;
}