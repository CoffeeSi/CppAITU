#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double summa = 0;
    cin >> n;
    for (double i = 1; i <= n; i++) {
        summa += + pow(-1,i+1)*(1/(2*i));
    }
    cout << summa;
}