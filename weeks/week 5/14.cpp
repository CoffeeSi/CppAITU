#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[100];
    for (int i = 0; i < n; i++){
        int array[2*i+1];
        array[0] = 1; ar[0] = 1;
        array[i] = 1; ar[i] = 1;
        if (i >= 2) {
            cout << 1 << ' ';
            for (int j = 1; j <= i-1; j++) {
                array[j] = ar[j-1] + ar[j];
                cout << array[j] << ' ';
            }
            for (int k = 0; k <= i; k++) {
                ar[k] = array[k];
            }
            cout << 1 << ' ';
        }
        else {
            for (int j = 0; j <= i; j++) {
                cout << array[j] << ' ';
            }
        }
        cout << '\n';
    }
}