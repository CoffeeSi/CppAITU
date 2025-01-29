#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 0, sum;
    cin >> n;
    sum = floor(n/100) * floor(n%100/10) *floor(n%100%10);
    cout << sum;
}