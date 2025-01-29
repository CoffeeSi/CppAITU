#include <iostream>
using namespace std;

int main()
{
    int n;
    bool prime = true;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
            }
        }
        if (prime)
            cout << i << ' ';
        prime = true;
    }
}