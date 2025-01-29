#include <iostream>
using namespace std;

void arrFunc(int* array, int n) {
    for (int* it = array; it != array + n; it++){
        cout << *it << ' ';
    }
}

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    arrFunc(array, n);
}