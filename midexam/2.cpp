#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double circle, square, r1, r2;
    cin >> circle >> square;
    r1 = sqrt(circle/(2*M_PI));
    r2 = sqrt(square);
    if (r1 >= r2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}