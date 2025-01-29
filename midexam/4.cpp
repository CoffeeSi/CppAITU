#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double array[n], temp;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < n-1; i+=2) {
        if (array[i] > array[i+2]) {
            temp = array[i+2];
            array[i+2] = array[i];
            array[i] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << array[i] << ' ';
    }
}