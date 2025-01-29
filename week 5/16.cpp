#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int array[n][m];
    for (int i = 0; i < n; i++) {
        int x = pow(-1, i);
        if (x == 1) {
            for (int j = 0; j < m; j++){
                array[i][j] = i*m + j;
            }
        }
        else if (x == -1) {
            for (int j = 0; j < m; j++){
                array[i][j] = i*m + (m-j-1);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << ' ';
        }
        cout << '\n';
    }
}