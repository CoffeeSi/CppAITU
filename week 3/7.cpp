#include <iostream>
using namespace std;

int thirtyone_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int day, month, year;
    cin >> day >> month >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        thirtyone_months[1] += 1;
        if (day <= thirtyone_months[month - 1])
        {
            cout << "yes";
        }
        else
            cout << "no";
    }
    else
    {
        if (day <= thirtyone_months[month - 1])
        {
            cout << "yes";
        }
        else
            cout << "no";
    }
}
