#include <iostream>
using namespace std;

int main()
{
    int n, temp_i, count = 0;
    cin >> n;
    char x, temp;
    char array_chars[10000] = {};
    int array_count[10000] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        for (int j = 0; j < n; j++)
        {
            if (x == array_chars[j])
            {
                array_count[j]++;
                break;
            }
            else if (j == (n - 1))
            {
                array_chars[count] = x;
                array_count[count] = 1;
                count++;
            }
        }
    }
    for (int i = 0; i < count; ++i)
    {
        for (int j = i + 1; j < count; ++j)
        {
            if (array_chars[i] > array_chars[j])
            {
                temp = array_chars[i];
                array_chars[i] = array_chars[j];
                array_chars[j] = temp;

                temp_i = array_count[i];
                array_count[i] = array_count[j];
                array_count[j] = temp_i;
            }
        }
    }

    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << array_chars[i] << " " << array_count[i] << endl;
    }
}