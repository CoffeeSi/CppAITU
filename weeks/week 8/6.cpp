#include <iostream>
using namespace std;

void sort(int* array, int n) {
    int array2[n], itter = 0;
    for (int* it = array; it != array + n; it++) {
        if (*it % 2 == 1) {
            array2[itter] = *it;
            itter++;
        }
    }
    for (int* it = array; it != array + n; it++) {
        if (*it % 2 == 0) {
            array2[itter] = *it;
            itter++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << array2[i] << ' ';
    }
}

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    sort(array, n);
}