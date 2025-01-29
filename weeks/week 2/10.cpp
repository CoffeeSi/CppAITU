#include <iostream>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;

    float result = ((x - 2 * y) * x) / (-2 * y);
    cout << result << endl;
    return 0;
}