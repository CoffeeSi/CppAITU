#include <iostream>
using namespace std;

char getSign(int a, int b) {
    if (a > b)
        return '>';
    else if (a < b)
        return '<';
    else
        return '=';
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << getSign(a,b);
}