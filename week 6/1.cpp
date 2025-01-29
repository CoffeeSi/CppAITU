#include <iostream>
using namespace std;

int minimum(int a, int b, int c, int d) {
    int ans = a;
    if (ans > b)
        ans = b;
    if (ans > c)
        ans = c;
    if (ans > d)
        ans = d;
    return ans;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << minimum(a, b, c, d);
}