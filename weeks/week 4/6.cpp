#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    char x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 'A')
        {
            count++;
        }
    }
    cout << count;
}