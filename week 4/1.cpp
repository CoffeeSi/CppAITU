#include <iostream>
using namespace std;

int main()
{
    int x, count = 0;
    int array[100];
    for (int i = 0; i <= 100; i++)
    {
        cin >> x;
        if (x == -1)
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
        cout << array[i] << " ";
    }
}