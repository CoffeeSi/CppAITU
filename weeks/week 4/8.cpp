#include <iostream>
using namespace std;

int main()
{
    int n;
    double x, temp;
    cin >> n;
    double array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        array[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << ' ';
    }
}