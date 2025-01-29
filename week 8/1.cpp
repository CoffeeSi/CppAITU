#include <iostream>
using namespace std;

void swap2(long long* a, long long* b) {
    long long temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    long long a, b;
    cin >> a >> b;

    swap2(&a, &b);
    cout << a << ' ' << b;
}