#include <iostream>
using namespace std;

double power(double a, int n) {
    double result = a;
    if (n == 0)
        return 1;
    for (int i = 1; i < n; i++) {
        result = result * a;
    }
    return result;
}

int toDecimal(int n, bool array[]) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += array[i]*power(2,i);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    bool array[n];
    for (int i = 0; i < n; i++){
        char a;
        cin >> a;
        if (a == 48)
            array[n-i-1] = 0;
        else if (a == 49)
            array[n-i-1] = 1;
    }
    cout << toDecimal(n, array);
}