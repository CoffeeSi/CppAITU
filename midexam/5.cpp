#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (j == (n-i-1)) {
                cout << 'x' << ' ';
            }
            else {
                cout << i*n + j+1 << ' ';
            }
        }
        cout << '\n';
    }
}