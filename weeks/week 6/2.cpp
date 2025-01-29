#include <iostream>
using namespace std;

double power(double a, int n) {
    double result = a;
    for (int i = 1; i < n; i++) {
        result = result * a;
    }
    return result;
}

int main() {
    double a, n;
    cin >> a >> n;
    cout << power(a, n);
}