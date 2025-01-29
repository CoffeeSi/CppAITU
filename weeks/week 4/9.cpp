#include <iostream>
using namespace std;

int main()
{
    int n, temp, temp_;
    cin >> n;
    int array[n][3], array_[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i][0];
        cin >> array[i][1];
        cin >> array[i][2];
        array_[i] = array[i][0] * 3600 + array[i][1] * 60 + array[i][2];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (array_[i] > array_[j])
            {
                temp = array_[i];
                array_[i] = array_[j];
                array_[j] = temp;

                for (int k = 0; k < 3; k++)
                {

                    temp_ = array[i][k];
                    array[i][k] = array[j][k];
                    array[j][k] = temp_;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i][0] << ' ' << array[i][1] << ' ' << array[i][2] << endl;
    }
}