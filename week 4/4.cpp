#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double array[n], array_[n], x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        array[i] = x;
        array_[i] = x;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - 1); j++)
        {
            if (array[j - 1] > array[j])
            {
                double k = array[j - 1];
                array[j - 1] = array[j];
                array[j] = k;
            }
        }
    }

    int min;
    for (int i = 0; i < n; i++)
    {
        if (array[0] == array_[i])
        {
            min = i;
        }
    }
    cout << min;
}