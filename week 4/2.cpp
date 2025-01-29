#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    int count = 0;
    double array[100];
    for (int i = 0; i <= 100; i++)
    {
        cin >> x;
        if (x == 0)
        {
            break;
        }
        else
        {
            count++;
            array[i] = x;
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << sqrt(array[count - i - 1]) << endl;
    }
}