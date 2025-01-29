#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n][n];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) {
            array[n-j-1][n-i-1] = i*n + j + 1;
        }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            cout << array[i][j] << ' ';
        }
    cout << '\n';
    }
}