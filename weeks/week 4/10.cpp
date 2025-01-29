#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool check = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "NO";
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << "YES";
    }
}