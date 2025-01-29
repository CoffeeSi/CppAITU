#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int day = 3;
    int year = 2010;
    if (x > year)
    {
        for (year; year < x; year++)
        {
            if (((year - 1) % 4) == 0)
            {
                day -= 2;
            }
            else
                day--;
        }
        if (day == 0)
            day = 7;
        if (day == -1)
            day = 6;
    }
    if (x < year)
    {
        for (year; x < year; year--)
        {
            if (((year + 1) % 4) == 0)
                day = day + 2;
            else
                day++;
        }
        if (day == 8)
            day = 1;
        if (day == 9)
            day = 2;
    }
    cout << day;
    return 0;
}
